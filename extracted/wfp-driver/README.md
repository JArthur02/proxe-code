# WFP driver hooks (ProxifierDrv.sys)

Extracted from **Proxifier v4.14** `ProxifierDrv.sys` (RetDec 5.0).  
Original binary: `ProxifierDrv.sys`, install metadata: `ProxifierDrv.inf`.

## Architecture

Proxifier uses a **Windows Filtering Platform (WFP) callout driver** (`WFPCALLOUTS` class) to intercept and redirect traffic at kernel level.

```
User-mode Proxifier.exe
        │ IOCTL / shared state
        ▼
ProxifierDrv.sys (kernel)
        ├── FwpmEngineOpen0 / provider + sublayer registration
        ├── FwpsCalloutRegister1 (classify callouts)
        ├── FwpmFilterAdd0 (bind filters to layers)
        └── Classify path:
              FwpsAcquireClassifyHandle0 → FwpsPendClassify0
              → redirect / inject → FwpsCompleteClassify0
```

## Key API surface (from decompile)

| API | Role in driver |
|-----|----------------|
| `FwpmEngineOpen0` | Open WFP engine session |
| `FwpmProviderAdd0` / `FwpmSubLayerAdd0` | Register provider + sublayer |
| `FwpmCalloutAdd0` / `FwpsCalloutRegister1` | Register callouts |
| `FwpmFilterAdd0` | Attach filters to ALE/connect layers |
| `FwpsAcquireClassifyHandle0` | Enter classify path |
| `FwpsPendClassify0` | Pend connection for user-mode decision |
| `FwpsInjectTransportSendAsync0` / `ReceiveAsync0` | Reinject modified packets |
| `FwpsQueryConnectionRedirectState0` | Connection redirect state |
| `FwpsFlowAssociateContext0` / `FwpsFlowRemoveContext0` | Per-flow context |

## Files in this branch

| File | Contents |
|------|----------|
| `01_driver_init_and_teardown.c` | Engine open, callout/filter registration, cleanup |
| `02_classify_and_flow_handlers.c` | Classify entry, flow delete, pend/complete |
| `03_packet_inject_redirect.c` | Transport inject + redirect helpers |
| `04_helper_and_wfp_stubs.c` | Logging, pool alloc, misc helpers |
| `05_misc_wfp.c` | Additional WFP-tagged functions |
| `ProxifierDrv.full.c` | Complete RetDec output (reference) |
| `INDEX.md` | Function → file map |

## Regenerate

```bash
python3 scripts/extract_wfp_hooks.py
```

Parent decompile branch: `cursor/decompiled-proxifier-58cf`.
