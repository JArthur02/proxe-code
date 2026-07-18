# Decompiled Proxifier binaries

Reverse-engineered pseudo-C from the binaries on the `fyer-clone` branch.

| File | Original binary | Tool | Notes |
|------|-----------------|------|-------|
| `Proxifier.c` | `Proxifier.exe` (x64, MFC) | Ghidra 11.3.1 | ~16k functions; main UI / proxy engine |
| `ProxyChecker.c` | `ProxyChecker.exe` (x86) | RetDec 5.0 | Standalone proxy checker utility |
| `ServiceManager.c` | `ServiceManager.exe` (x86) | RetDec 5.0 | Service install / driver management |
| `ProxifierDrv.c` | `ProxifierDrv.sys` (x64 WFP driver) | RetDec 5.0 | Kernel callout driver |

`ProxifierDrv.inf` and `ProxifierDrv.cat` are already plain text in the repo root.

## Caveats

- Output is **decompiler pseudo-C**, not original source. Names, types, and control flow are approximations.
- MFC / ATL / Concurrency runtime types appear as mangled symbols in `Proxifier.c`.
- Do not treat this as buildable or redistributable Proxifier source; it is for analysis only.

## Regenerate

```bash
# ProxyChecker / ServiceManager / ProxifierDrv.sys (RetDec)
retdec-decompiler ProxyChecker.exe -o decompiled/ProxyChecker.c
retdec-decompiler ServiceManager.exe -o decompiled/ServiceManager.c
retdec-decompiler ProxifierDrv.sys -o decompiled/ProxifierDrv.c

# Proxifier.exe (Ghidra headless + ghidra_scripts/DecompileAllToC.java)
analyzeHeadless /tmp/ghidra_proj Proxifier \
  -import Proxifier.exe \
  -scriptPath ghidra_scripts \
  -postScript DecompileAllToC.java decompiled/Proxifier.c \
  -deleteProject
```
