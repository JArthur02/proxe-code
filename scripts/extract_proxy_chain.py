#!/usr/bin/env python3
"""Extract proxy-chain-related functions from decompiled Proxifier.c."""

import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SRC = ROOT / "decompiled" / "Proxifier.c"
OUT_DIR = ROOT / "extracted" / "proxy-chain"

KEYWORDS = [
    "CChain",
    "CProxy",
    "proxy chain",
    "ChainList",
    "Chain name",
    "redundancy chain",
    "ChainType",
    "Chain Removal",
    "CProxyConnection",
    "next proxy in the chain",
    "HTTP proxy server must be the last",
    "PTR_u_Chain",
    "Incorrect proxy chain",
]

GROUPS = {
    "01_chain_config_and_validation.c": [
        "FUN_14006e2c0",
        "FUN_140071370",
        "FUN_140068a50",
        "FUN_14009dde0",
        "FUN_14009df00",
    ],
    "02_chain_runtime_and_redundancy.c": [
        "FUN_1400b36c0",
        "FUN_1400276f0",
        "FUN_14002cd70",
        "FUN_140095d90",
        "FUN_1400b7140",
    ],
    "03_chain_ui_dialogs.c": [
        "FUN_140020560",
        "FUN_1400205c0",
        "FUN_1400209a0",
        "FUN_1400209b0",
        "FUN_140020b70",
        "FUN_140020be0",
        "FUN_140098270",
        "FUN_14009a040",
        "FUN_14009b800",
    ],
    "04_proxy_objects_and_dialogs.c": [
        "FUN_14001bc10",
        "FUN_14008b310",
        "FUN_14008b4f0",
        "FUN_14008bf30",
        "FUN_14008bf40",
        "FUN_14008c010",
        "FUN_14008c0a0",
        "FUN_1400909e0",
        "FUN_1400909f0",
        "FUN_140090f00",
        "FUN_140091580",
        "FUN_140094970",
        "FUN_140094980",
        "FUN_140094c80",
        "FUN_14009ab60",
        "FUN_14009ab70",
        "FUN_14009ae00",
        "FUN_14009aff0",
        "FUN_14009b000",
        "FUN_14009b310",
    ],
}


def parse_functions(text: str) -> dict[str, tuple[int, list[str]]]:
    funcs: dict[str, tuple[int, list[str]]] = {}
    current = None
    buf: list[str] = []
    start = 0
    for i, line in enumerate(text.splitlines(keepends=True), 1):
        m = re.match(r"^// ----- (FUN_[0-9a-f]+) @ ([0-9a-f]+) -----", line)
        if m:
            if current:
                funcs[current] = (start, buf)
            current = m.group(1)
            buf = [line]
            start = i
        elif current:
            buf.append(line)
    if current:
        funcs[current] = (start, buf)
    return funcs


def main() -> None:
    text = SRC.read_text(encoding="utf-8", errors="replace")
    funcs = parse_functions(text)
    OUT_DIR.mkdir(parents=True, exist_ok=True)

    assigned = set()
    index_lines = ["# Proxy chain function index\n"]

    for filename, names in GROUPS.items():
        chunks = [
            "/* Extracted from Proxifier.exe (Ghidra). Proxy chain logic subset. */\n\n"
        ]
        for name in names:
            if name not in funcs:
                continue
            start, lines = funcs[name]
            assigned.add(name)
            index_lines.append(f"- `{name}` @ line {start} → `{filename}`")
            chunks.extend(lines)
            chunks.append("\n")
        (OUT_DIR / filename).write_text("".join(chunks), encoding="utf-8")

    misc = []
    for name, (start, lines) in sorted(funcs.items(), key=lambda x: x[1][0]):
        body = "".join(lines)
        if name in assigned:
            continue
        if any(k in body for k in KEYWORDS):
            misc.append((name, start, lines))

    if misc:
        chunks = [
            "/* Extracted from Proxifier.exe (Ghidra). Additional chain/proxy hits. */\n\n"
        ]
        for name, start, lines in misc:
            index_lines.append(f"- `{name}` @ line {start} → `05_misc_chain_hits.c`")
            chunks.extend(lines)
            chunks.append("\n")
        (OUT_DIR / "05_misc_chain_hits.c").write_text("".join(chunks), encoding="utf-8")

    (OUT_DIR / "INDEX.md").write_text("\n".join(index_lines) + "\n", encoding="utf-8")
    print(f"Wrote {len(list(OUT_DIR.glob('*.c')))} files to {OUT_DIR}")


if __name__ == "__main__":
    main()
