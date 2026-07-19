# Proxifier proxy-chain overview (v4.14)

Readable reference for the Ghidra pseudo-C in this directory. Names are **inferred** from
strings, RTTI (`CChainRedundancyDlg::vftable`), and control flow — not from symbols.

## Data model

### `CProxy` (~0x98 bytes each)

Single proxy endpoint referenced by id from chains and rules.

| Field (inferred) | XML / source | uproxe equivalent |
|------------------|--------------|-------------------|
| id | `<Proxy id="N">` | `ProxyHop.Id` (Guid) |
| host, port | `<Address>`, `<Port>` | `ParsedProxy.Host/Port` |
| type | SOCKS4/5, HTTPS, HTTP | `ProxyKind` |
| auth | `<Authentication>` | DPAPI cred store per hop |
| options | Remote DNS, etc. | `RemoteDns`, `Capabilities` |

### `CChain` (~0x38 bytes header + `vector<CProxy>`)

Ordered proxy list with a **type** and redundancy/load-balance options.

| Chain `Type` (XML string) | Enum | Behavior |
|---------------------------|------|----------|
| `simple` | 0 | Connect hop₀ → hop₁ → … → destination (strict multi-hop) |
| `redundancy` | 1 | Try proxies in order until one connects; optional direct fallback |
| `load_balancing` | 2 | Pick one proxy per connection (hash by PID or thread) |

| XML attribute | Purpose |
|---------------|---------|
| `Name` | Display / validation messages |
| `RedundancyTimeout` | Per-attempt receive timeout (ms, max ~9999) |
| `RedundancyTryDirect` | After all proxies fail, connect directly |
| `RedundancyRecheck` | Background re-probe of failed proxies |
| `RedundancyRecheckTime` | Interval for recheck worker |
| `LoadBalancingSameProxyForPid` | Sticky proxy per process id |

### Rule action (separate from chain logic)

`FUN_14009dde0` maps rule action strings:

| String | Value | Meaning |
|--------|-------|---------|
| Block | 0 | Drop connection |
| Direct | 1 | No proxy |
| Proxy | 2 | Single proxy by id |
| Chain | 3 | Chain by id |

uproxe does not implement WFP rule routing; apps opt in via local gateway (:8877/:8878).

## Runtime flow

```
Profile.ppx load
  CProfile::LoadProxyAndChainLists (FUN_14006e2c0)
    → parse ProxyList
    → parse ChainList/Chain
    → CChain::ParseTypeString (FUN_14008bac0)
    → validate names, timeouts, proxy refs
  CProfile::ValidateHttpProxyLastInChain (FUN_140068a50)
    → HTTP/HTTPS proxy must be last hop in every chain

Per-connection (WFP redirect → user-mode)
  CConnection::RouteViaProxyOrChain (FUN_1400b36c0)
    if action == proxy: resolve CProxy by id
    if action == chain:
      type 0 (simple):   vector<CProxy> all hops → sequential dial
      type 1 (redundancy): try each CProxy until FUN_1400b5260 succeeds
      type 2 (load_balance): hash → pick one CProxy
    on redundancy failure + RedundancyRecheck:
      CChain::SpawnRedundancyRecheckWorker (FUN_1400b7140)
```

### Redundancy dial loop (simplified)

Pseudocode distilled from `FUN_1400b36c0`:

```c
// chain_type at CChain+0x30 (puVar26[0xc])
for (proxy in chain.proxies) {
    if (TryConnectSingleProxy(proxy, dest))  // FUN_1400b5260
        return success;
    log("(Redundancy Chain) - Trying next proxy.");
    if (RedundancyRecheck && proxy failed transiently)
        SpawnRedundancyRecheckWorker(chain, proxy);  // FUN_1400b7140
}
if (RedundancyTryDirect)
    return ConnectDirect(dest);
throw "All proxy servers in redundancy chain <name> failed.";
```

### Simple (multi-hop) dial

```c
for (i = 0; i < proxies.size() - 1; i++)
    ConnectHopToHop(proxies[i], proxies[i+1]);  // FUN_1400b5950
ConnectHopToHop(proxies.back(), destination);
```

Log strings: `"Could not connect through proxy X to the next proxy in the chain Y"`.

## Validation rules (from error strings)

1. **HTTP last** — `"HTTP proxy server must be the last one in the chain."`
2. **Chain name** — `"Chain name missing."`
3. **Chain type** — `"Incorrect proxy chain type."` / `"Unknown chain type"`
4. **Redundancy timeout** — `"Incorrect Redundancy Timeout number."` (must be ≤ 9999)
5. **Rule reference** — `"Rule \"%s\" refers to nonexistent proxy chain (id = %d)"`
6. **Proxy reference** — `"Proxy with ID %d not found."`

## File guide

| File | Focus |
|------|-------|
| `01_chain_config_and_validation.c` | XML load/save, HTTP-last validation |
| `02_chain_runtime_and_redundancy.c` | Connect dispatcher, redundancy, recheck thread |
| `03_chain_ui_dialogs.c` | Chain type / redundancy / editor dialogs |
| `04_proxy_objects_and_dialogs.c` | CProxy, CChain helpers, list controls |
| `05_misc_chain_hits.c` | Other functions matching chain keywords |
| `MAPPING.md` | Proxifier ↔ uproxe implementation map + gaps |
| `INDEX.md` | Function index with inferred names |

## Regenerate

```bash
python3 scripts/extract_proxy_chain.py
```

Requires `decompiled/Proxifier.c` on branch `cursor/decompiled-proxifier-58cf`.
