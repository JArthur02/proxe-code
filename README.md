# proxe-code

Proxifier v4.14 reference binaries and decompiled pseudo-C for reverse-engineering / uProxe development.

## Binaries

| File | Description |
|------|-------------|
| `Proxifier.exe` | Main application (x64, MFC) |
| `ProxyChecker.exe` | Standalone proxy checker (x86) |
| `ServiceManager.exe` | Service / driver installer (x86) |
| `ProxifierDrv.sys` | WFP callout kernel driver |
| `ProxifierDrv.inf` / `.cat` | Driver installation package |

## Decompiled source

See [`decompiled/README.md`](decompiled/README.md) for tool versions and regeneration steps.

| Output | Tool |
|--------|------|
| `decompiled/Proxifier.c` | Ghidra 11.3.1 |
| `decompiled/ProxyChecker.c` | RetDec 5.0 |
| `decompiled/ServiceManager.c` | RetDec 5.0 |
| `decompiled/ProxifierDrv.c` | RetDec 5.0 |

Output is decompiler pseudo-C for analysis only — not original or buildable source.
