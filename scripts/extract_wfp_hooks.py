#!/usr/bin/env python3
"""Extract WFP driver hook functions from decompiled ProxifierDrv.c."""

import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SRC = ROOT / "decompiled" / "ProxifierDrv.c"
OUT_DIR = ROOT / "extracted" / "wfp-driver"

# RetDec function names mapped to roles (from static analysis).
GROUPS = {
    "01_driver_init_and_teardown.c": [
        "function_140018000",  # FwpmEngineOpen, callout/filter registration
        "function_140003c64",  # WFP provider/sublayer/callout setup
        "function_14000427c",  # Unregister / cleanup
        "function_14000137c",
        "function_140002678",
    ],
    "02_classify_and_flow_handlers.c": [
        "function_140001000",  # Main classify entry
        "function_1400013fc",  # Flow / connection context build
        "function_140001140",  # NfeCalloutFlowDelete
        "function_140001250",
        "function_14000129c",
        "function_140002a74",  # FwpsAcquireClassifyHandle / FwpsPendClassify
        "function_140002fe8",  # FwpsCompleteClassify
        "function_140002de0",  # Redirect / complete path
    ],
    "03_packet_inject_redirect.c": [
        "function_140002280",  # FwpsInjectTransport Send/Receive
        "function_140001ed8",
        "function_140002460",
        "function_1400024c8",
        "function_140002530",
        "function_140003210",
        "function_140003454",
        "function_1400037b0",
        "function_140003810",
        "function_140003850",
    ],
    "04_helper_and_wfp_stubs.c": [
        "function_140001804",
        "function_140001988",
        "function_14000199c",
        "function_140001a64",
        "function_140001b5c",
        "function_140001c80",
        "function_140005937",
        "function_14000593d",
        "function_140005943",
    ],
}


def split_functions(text: str) -> dict[str, str]:
    parts = re.split(
        r"\n(?=(?:int64_t|int32_t|void) function_\w+\()", text
    )
    header = parts[0]
    funcs: dict[str, str] = {}
    for part in parts[1:]:
        m = re.match(r"((?:int64_t|int32_t|void) (function_\w+))", part)
        if not m:
            continue
        funcs[m.group(2)] = part
    funcs["__header__"] = header
    return funcs


def main() -> None:
    text = SRC.read_text(encoding="utf-8", errors="replace")
    funcs = split_functions(text)
    OUT_DIR.mkdir(parents=True, exist_ok=True)

    # Full driver reference copy
    (OUT_DIR / "ProxifierDrv.full.c").write_text(text, encoding="utf-8")

    index_lines = ["# WFP driver hook index\n", "", "## Grouped extracts\n"]
    assigned = set()

    for filename, names in GROUPS.items():
        chunks = [
            funcs.get("__header__", ""),
            "\n/* Extracted from ProxifierDrv.sys (RetDec). WFP hooks subset. */\n\n",
        ]
        for name in names:
            if name not in funcs:
                index_lines.append(f"- `{name}` — **missing in decompile**")
                continue
            assigned.add(name)
            index_lines.append(f"- `{name}` → `{filename}`")
            chunks.append(funcs[name])
            chunks.append("\n")
        (OUT_DIR / filename).write_text("".join(chunks), encoding="utf-8")

    wfp_keywords = [
        "Fwps", "Fwpm", "classify", "Callout", "Inject", "redirect", "Flow",
    ]
    misc = []
    for name, body in funcs.items():
        if name == "__header__" or name in assigned:
            continue
        if any(k in body for k in wfp_keywords):
            misc.append((name, body))

    if misc:
        chunks = [
            funcs.get("__header__", ""),
            "\n/* Additional WFP-related functions. */\n\n",
        ]
        for name, body in misc:
            index_lines.append(f"- `{name}` → `05_misc_wfp.c`")
            chunks.append(body)
            chunks.append("\n")
        (OUT_DIR / "05_misc_wfp.c").write_text("".join(chunks), encoding="utf-8")

    (OUT_DIR / "INDEX.md").write_text("\n".join(index_lines) + "\n", encoding="utf-8")
    print(f"Wrote extracts to {OUT_DIR}")


if __name__ == "__main__":
    main()
