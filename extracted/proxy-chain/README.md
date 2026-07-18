# Proxy chain logic (Proxifier.exe)

Extracted from **Proxifier v4.14** `Proxifier.exe` (Ghidra 11.3.1).  
Focus: `CChain`, `CProxy`, chain config XML, redundancy failover, UI dialogs.

## Concepts

| Symbol | Role |
|--------|------|
| `CProxy` | Single proxy endpoint (host, port, type, auth) |
| `CChain` | Ordered list of `CProxy` — simple, failover, or load-balance |
| `ChainList` / `Chain` | XML config nodes (`Profile.ppx`) |
| `CChainTypeDlg` | UI: simple vs redundancy chain type |
| `CChainRedundancyDlg` | UI: failover / try-next settings |

## Runtime flow (simplified)

```
Profile load (XML)
    → validate chain IDs, proxy refs, HTTP-last-in-chain rule
    → build CChain + vector<CProxy>
Rule match → select chain ID
    → connect through proxy[0], on failure try proxy[1]… (redundancy)
    → async worker (CChain + vector<CProxy> lambda at FUN_1400b7140)
```

## Notable rules (from strings)

- *"HTTP proxy server must be the last one in the chain"*
- *"Rule refers to nonexistent proxy chain (id = %d)"*
- *"All proxy servers in redundancy chain …"*
- *" to the next proxy in the chain "*

## Files in this branch

| File | Contents |
|------|----------|
| `01_chain_config_and_validation.c` | XML `Chain`/`ChainList` parse + validation (~FUN_14006e2c0) |
| `02_chain_runtime_and_redundancy.c` | Connect / failover / redundancy runtime |
| `03_chain_ui_dialogs.c` | `CChainTypeDlg`, `CChainRedundancyDlg`, chain removal UI |
| `04_proxy_objects_and_dialogs.c` | `CProxy` object + proxy editor dialogs |
| `INDEX.md` | Function → file map |

## Regenerate

```bash
python3 scripts/extract_proxy_chain.py
```

Requires full `decompiled/Proxifier.c` on branch `cursor/decompiled-proxifier-58cf`.
