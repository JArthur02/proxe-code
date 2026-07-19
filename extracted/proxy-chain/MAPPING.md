# Proxifier → uproxe proxy-chain mapping

Cross-reference between **Proxifier v4.14** decompiled logic (`proxe-code` branch
`proxy-chain-logic`) and **μProxy v3** (`uproxe` branch `cursor/v3-proxychains`).

Use this when porting behavior or closing feature gaps.

## Architecture difference

| Layer | Proxifier | uproxe v3 |
|-------|-----------|-----------|
| Interception | WFP driver + system rules | Local HTTP :8877 / SOCKS :8878 gateway |
| Config | `Profile.ppx` XML | `chains/{name}.json` + DPAPI credentials |
| Rule → chain | Rule action `Chain` + chain id | App must point at gateway; no per-app rules |
| Connect path | Kernel redirect → `CConnection` | `ChainGatewayHost` → `ChainManager` |

## Chain mode mapping

| Proxifier `Type` | Enum | uproxe `ChainMode` | Notes |
|------------------|------|--------------------|-------|
| `simple` | 0 | `StrictMultiHop` | All hops dialed in order |
| `redundancy` | 1 | `FastFailover` | One hop selected; pool ranking + health |
| `load_balancing` | 2 | **missing** | Hash-based single-proxy pick per connection |

## Function → class mapping

### Config & validation

| Proxifier (inferred) | Ghidra | uproxe |
|----------------------|--------|--------|
| `CProfile::LoadProxyAndChainLists` | `FUN_14006e2c0` | `ChainProfileStore.Load` |
| `CProfile::SaveProxyAndChainLists` | `FUN_140071370` | `ChainProfileStore.Save` |
| `CProfile::ValidateHttpProxyLastInChain` | `FUN_140068a50` | `ChainDialer.ValidateHopOrder` *(added)* |
| `CChain::ParseTypeString` | `FUN_14008bac0` | `ChainMode` enum parse on load |
| `CChainList::FindById` | `FUN_14008bbf0` | Profile lookup by `Guid` / file name |
| `CProxy::LoadFromXmlNode` | `FUN_14008b310` | `HopDto` → `ProxyHop.FromParsed` |
| `CRuleAction::ParseType` | `FUN_14009dde0` | N/A |

### Runtime connect

| Proxifier (inferred) | Ghidra | uproxe |
|----------------------|--------|--------|
| `CConnection::RouteViaProxyOrChain` | `FUN_1400b36c0` | `ChainManager.ConnectAsync` |
| Sequential hop dial | loop in `FUN_1400b36c0` + `FUN_1400b5950` | `ChainDialer.ConnectAsync` |
| `TryConnectSingleProxy` | `FUN_1400b5260` | First-hop TCP + handshake in dialer |
| Redundancy try-next | `FUN_1400b36c0` redundancy branch | `ChainSelectionPolicy.SelectFastFailover` + retry on next connect |
| Load-balance pick | `FUN_1400b36c0` + `FUN_140288278` | **Not implemented** |
| Try direct fallback | `RedundancyTryDirect` in `FUN_1400b36c0` | **Not implemented** (gateway has no “direct” path) |
| `CChain::SpawnRedundancyRecheckWorker` | `FUN_1400b7140` | `ChainManager.TryHalfOpenProbesAsync` |
| Background verify | recheck worker | `ChainManager.RunVerificationAsync` |
| `CProxyConnection::EstablishSocket` | `FUN_1400276f0` | `ChainDialer.ConnectTcpAsync` |
| Endpoint label formatting | `FUN_14002cd70` | `ChainDialer.FormatEndpoint` |

### Health / cooldown

| Proxifier concept | uproxe |
|-------------------|--------|
| Mark proxy failed on connect error | `ChainHealthTracker.RecordProxyFailure` |
| Skip cooling-down proxies | `ChainHealthTracker.IsHealthy` / `IsInCooldown` |
| Re-probe after failures | `NeedsVerification` + `AllowProbe` half-open |
| Escalating backoff | `CooldownSchedule` (30s → 2m → 10m → 30m) |
| RedundancyRecheckTime | No per-profile interval; probes on `ConnectAsync` kick |

### UI (reference only)

| Proxifier dialog | Ghidra cluster | uproxe |
|------------------|----------------|--------|
| `CChainTypeDlg` | `03_chain_ui_dialogs.c` | `ChainControlForm` mode combo |
| `CChainRedundancyDlg` | `03_chain_ui_dialogs.c` | Not exposed (uses fixed health policy) |
| `CChainEditorDlg` | `03_chain_ui_dialogs.c` | `ChainControlForm` hop list |
| `CProxyEditorDlg` | `04_proxy_objects_and_dialogs.c` | MainForm / settings |
| `CProxyCheckerDlg` | `04_proxy_objects_and_dialogs.c` | Checker + `ValidateChainAsync` |

## Gap analysis (uproxe improvements)

Priority-ordered gaps identified from decompile:

### P0 — correctness (addressed in uproxe PR)

| Gap | Proxifier behavior | uproxe before | Action |
|-----|-------------------|---------------|--------|
| HTTP proxy not last | Validated at profile load **and** editor save | No runtime check | Add `ChainDialer.ValidateHopOrder` called from `ConnectAsync` |

### P1 — parity with redundancy semantics

| Gap | Proxifier | uproxe today | Suggested change |
|-----|-----------|--------------|------------------|
| Ordered failover list | Try proxy[0], then [1], … on same connection class | Pool ranking picks “best”; profile hop order not strictly walked | Add `FastFailoverOrdered` mode: walk `profile.Hops` in order before pool |
| `RedundancyTimeout` | Per-chain ms timeout on socket (`setsockopt SO_RCVTIMEO`) | Fixed 30s `ChainDialer` default | `ProxyChainProfile.FailoverTimeoutMs` plumbed to dialer |
| `RedundancyTryDirect` | Fall back to direct TCP | N/A for gateway | Skip (document as intentional) |
| `RedundancyRecheck` flag | Optional background worker | Always-on half-open probes | Add profile flag to disable background probes |

### P2 — missing chain type

| Gap | Proxifier | Suggested uproxe |
|-----|-----------|------------------|
| `load_balancing` | `GetTickCount()+GetCurrentThreadId()` or PID hash mod N | New `ChainMode.LoadBalancing` + `ChainSelectionPolicy.SelectLoadBalanced(hops, stickyKey)` |
| `LoadBalancingSameProxyForPid` | Sticky per PID | Pass `Environment.ProcessId` or client pid if available |

### P3 — rule integration (out of scope for gateway-only uproxe)

| Proxifier | uproxe |
|-----------|--------|
| Rule action `Chain` + chain id | Would need WFP layer (`ProxifierDrv` extracts on `wfp-driver-hooks` branch) |
| `Block` / `Direct` actions | Not applicable |

## Test mapping

| Proxifier scenario | uproxe test to extend |
|--------------------|----------------------|
| Simple 2-hop SOCKS→HTTP | `ChainDialerTests` multi-hop cases |
| HTTP not last rejected | New `ChainDialerTests.ConnectAsync_RejectsHttpNotLast` |
| Redundancy try-next | `ChainManager` + `ChainHealthTrackerTests` |
| Load balancing | New tests when mode added |

## Code anchors

### Proxifier redundancy loop

See annotated `02_chain_runtime_and_redundancy.c` → `CConnection::RouteViaProxyOrChain`
(`FUN_1400b36c0`), search for `Trying next proxy` and `All proxy servers failed`.

### uproxe connect entry

```
ChainGatewayHost → IChainConnector → ChainManager.ConnectAsync
  → ChainDialer.ConnectAsync (sequential hops)
  → ChainHealthTracker on success/failure
```

Key files:

- `src/UProxy.Core/Chaining/ChainManager.cs`
- `src/UProxy.Core/Chaining/ChainDialer.cs`
- `src/UProxy.Core/Chaining/ChainHealthTracker.cs`
- `src/UProxy.Core/Chaining/ChainSelectionPolicy.cs`
- `src/UProxy.Core/Models/ProxyChainModels.cs`
- `src/UProxy.Core/Persistence/ChainProfileStore.cs`

## Related branches

| Repo | Branch | Content |
|------|--------|---------|
| `proxe-code` | `proxy-chain-logic` | This directory |
| `proxe-code` | `wfp-driver-hooks` | Kernel redirect (rule → connection) |
| `proxe-code` | `cursor/decompiled-proxifier-58cf` | Full `Proxifier.c` |
| `uproxe` | `cursor/v3-proxychains` | Working chain gateway |
