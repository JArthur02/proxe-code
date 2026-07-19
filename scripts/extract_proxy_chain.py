#!/usr/bin/env python3
"""Extract proxy-chain-related functions from decompiled Proxifier.c with semantic annotations."""

from __future__ import annotations

import re
from dataclasses import dataclass
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

GROUPS: dict[str, list[str]] = {
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
        "FUN_14008bac0",
        "FUN_14008bbf0",
        "FUN_14008bc40",
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


@dataclass(frozen=True)
class FnAnnotation:
    name: str
    summary: str
    uproxe: str = ""
    notes: str = ""


# Ghidra FUN_* → inferred C++ symbol + uproxe mapping.
ANNOTATIONS: dict[str, FnAnnotation] = {
    # --- config / validation ---
    "FUN_14006e2c0": FnAnnotation(
        "CProfile::LoadProxyAndChainLists",
        "Parse Profile.ppx XML: ProxyList entries, then ChainList/Chain nodes.",
        "ChainProfileStore.Load / profile import",
        "Reads Chain/Name, Type, proxy id refs, RedundancyTimeout, RedundancyTryDirect, "
        "RedundancyRecheck, RedundancyRecheckTime, LoadBalancingSameProxyForPid.",
    ),
    "FUN_140071370": FnAnnotation(
        "CProfile::SaveProxyAndChainLists",
        "Serialize ProxyList + ChainList back to XML.",
        "ChainProfileStore.Save",
        "Mirror of load path; emits same chain attributes.",
    ),
    "FUN_140068a50": FnAnnotation(
        "CProfile::ValidateHttpProxyLastInChain",
        "Reject chains where an HTTP proxy is not the final hop.",
        "ChainDialer.ValidateHopOrder",
        'Error: `"<name>": HTTP proxy server must be the last one in the chain.`',
    ),
    "FUN_14009dde0": FnAnnotation(
        "CRuleAction::ParseType",
        "Map rule action string → enum: Block=0, Direct=1, Proxy=2, Chain=3.",
        "N/A (uproxe has no WFP rule engine)",
    ),
    "FUN_14009df00": FnAnnotation(
        "CRuleAction::FormatType",
        "Format rule action enum back to display/XML string.",
        "N/A",
    ),
    # --- runtime ---
    "FUN_1400b36c0": FnAnnotation(
        "CConnection::RouteViaProxyOrChain",
        "Main connect dispatcher: single proxy, simple chain, redundancy, or load-balance.",
        "ChainManager.ConnectAsync + ChainDialer.ConnectAsync",
        "param_1[1]+0xbc action: 2=proxy id, 3=chain id. Chain type at +0x30: "
        "0=simple, 1=redundancy, 2=load_balancing.",
    ),
    "FUN_1400276f0": FnAnnotation(
        "CProxyConnection::EstablishSocket",
        "Low-level TCP connect + handshake bootstrap for a proxy connection context.",
        "ChainDialer.ConnectTcpAsync + per-hop HandshakeAsync",
    ),
    "FUN_14002cd70": FnAnnotation(
        "CProxyConnection::FormatEndpointLabel",
        "Build human-readable proxy endpoint string for logs/errors.",
        "ChainDialer.FormatEndpoint / ChainDialException message",
    ),
    "FUN_140095d90": FnAnnotation(
        "CProfileEditor::OnRemoveProxyFromChain",
        "UI handler: remove proxy from chain list, renumber rule references.",
        "ChainControlForm (partial)",
    ),
    "FUN_1400b7140": FnAnnotation(
        "CChain::SpawnRedundancyRecheckWorker",
        "std::thread worker: re-probe a failed redundancy-chain proxy in background.",
        "ChainManager.TryHalfOpenProbesAsync / RunVerificationAsync",
        "Launches tuple<CChain,int,vector<CProxy>> async recheck when RedundancyRecheck enabled.",
    ),
    # --- proxy objects ---
    "FUN_14001bc10": FnAnnotation(
        "CProxy::CProxy(copy)",
        "Copy-construct CProxy from another instance.",
        "ProxyHop record copy",
    ),
    "FUN_14008b310": FnAnnotation(
        "CProxy::LoadFromXmlNode",
        "Populate CProxy from XML (host, port, type, auth, options).",
        "ChainProfileStore hop DTO → ProxyHop.FromParsed",
    ),
    "FUN_14008b4f0": FnAnnotation(
        "CProxy::Release",
        "Destructor / cleanup for CProxy strings and sub-objects.",
        "N/A",
    ),
    "FUN_14008bac0": FnAnnotation(
        "CChain::ParseTypeString",
        'Parse chain Type attribute: "simple"=0, "redundancy"=1, "load_balancing"=2.',
        "ChainMode enum (FastFailover≈1, StrictMultiHop≈0; load_balancing missing)",
    ),
    "FUN_14008bbf0": FnAnnotation(
        "CChainList::FindById",
        "Linear search chain vector by numeric id.",
        "Profile lookup by chain id — uproxe uses Guid/name instead",
    ),
    "FUN_14008bc40": FnAnnotation(
        "CChain::CloneProxyVector",
        "Deep-copy vector<CProxy> for a chain instance.",
        "profile.Hops.ToList()",
    ),
    # --- UI dialogs (Proxifier MFC; uproxe WinForms) ---
    "FUN_140020560": FnAnnotation("CChainRedundancyDlg::GetRuntimeClass", "MFC RTTI.", "N/A"),
    "FUN_1400205c0": FnAnnotation(
        "CChainRedundancyDlg::CChainRedundancyDlg",
        "Redundancy options dialog ctor.",
        "ChainControlForm redundancy settings",
    ),
    "FUN_1400209a0": FnAnnotation("CChainTypeDlg::GetRuntimeClass", "MFC RTTI.", "N/A"),
    "FUN_1400209b0": FnAnnotation(
        "CChainTypeDlg::CChainTypeDlg",
        "Chain type picker: simple / redundancy / load balancing.",
        "ChainControlForm mode selector",
    ),
    "FUN_140020b70": FnAnnotation(
        "CChainTypeDlg::OnInitDialog",
        "Initialize chain type dialog controls.",
        "ChainControlForm",
    ),
    "FUN_140020be0": FnAnnotation(
        "CChainTypeDlg::OnOK",
        "Persist selected chain type from dialog.",
        "ChainControlForm",
    ),
    "FUN_140098270": FnAnnotation(
        "CChainEditorDlg::ValidateBeforeSave",
        "UI validation including HTTP-last-in-chain message.",
        "Client-side validation before Save",
    ),
    "FUN_14009a040": FnAnnotation(
        "CChainEditorDlg::OnAddProxy",
        "Add proxy reference to chain in editor UI.",
        "ChainControlForm hop list",
    ),
    "FUN_14009b800": FnAnnotation(
        "CChainEditorDlg::OnRemoveChain",
        "Remove chain from profile + fix rule references.",
        "ChainProfileStore.Delete",
    ),
    "FUN_14008bf30": FnAnnotation("CProxyEditorDlg::GetRuntimeClass", "MFC RTTI.", "N/A"),
    "FUN_14008bf40": FnAnnotation(
        "CProxyEditorDlg::CProxyEditorDlg",
        "Proxy editor dialog ctor.",
        "Settings / proxy edit UI",
    ),
    "FUN_14008c010": FnAnnotation(
        "CProxyEditorDlg::OnInitDialog",
        "Initialize proxy editor fields.",
        "N/A",
    ),
    "FUN_14008c0a0": FnAnnotation(
        "CProxyEditorDlg::OnDestroy",
        "Cleanup proxy editor dialog.",
        "N/A",
    ),
    "FUN_1400909e0": FnAnnotation("CProxyCheckerDlg::GetRuntimeClass", "MFC RTTI.", "N/A"),
    "FUN_1400909f0": FnAnnotation(
        "CProxyCheckerDlg::CProxyCheckerDlg",
        "Proxy checker dialog ctor.",
        "Checker integration in uproxe",
    ),
    "FUN_140090f00": FnAnnotation(
        "CProxyCheckerDlg::OnTest",
        "Run proxy test from UI.",
        "ValidateChainAsync / ValidateEdgeAsync",
    ),
    "FUN_140091580": FnAnnotation(
        "CProxyCheckerDlg::OnTestAll",
        "Batch proxy test.",
        "Pool health probes",
    ),
    "FUN_140094970": FnAnnotation("CChainListCtrl::GetRuntimeClass", "MFC RTTI.", "N/A"),
    "FUN_140094980": FnAnnotation(
        "CChainListCtrl::CChainListCtrl",
        "Chain list view ctor.",
        "ChainControlForm list",
    ),
    "FUN_140094c80": FnAnnotation(
        "CChainListCtrl::Refresh",
        "Repaint chain list from profile.",
        "ChainControlForm refresh",
    ),
    "FUN_14009ab60": FnAnnotation("CProxyListCtrl::GetRuntimeClass", "MFC RTTI.", "N/A"),
    "FUN_14009ab70": FnAnnotation(
        "CProxyListCtrl::CProxyListCtrl",
        "Proxy list view ctor.",
        "MainForm proxy list",
    ),
    "FUN_14009ae00": FnAnnotation(
        "CProxyListCtrl::Refresh",
        "Repaint proxy list from profile.",
        "MainForm refresh",
    ),
    "FUN_14009aff0": FnAnnotation("CChainProxiesCtrl::GetRuntimeClass", "MFC RTTI.", "N/A"),
    "FUN_14009b000": FnAnnotation(
        "CChainProxiesCtrl::CChainProxiesCtrl",
        "Ordered proxy list inside chain editor.",
        "ChainControlForm hop ordering",
    ),
    "FUN_14009b310": FnAnnotation(
        "CChainProxiesCtrl::OnDeleteProxy",
        "Remove hop from chain in editor.",
        "ChainControlForm remove hop",
    ),
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


def annotate_header(fn_id: str, addr: str) -> list[str]:
    ann = ANNOTATIONS.get(fn_id)
    if ann is None:
        return [f"// ----- {fn_id} @ {addr} -----\n"]
    lines = [
        f"// ===== {ann.name} =====",
        f"// Ghidra: {fn_id} @ 0x{addr}",
        f"// {ann.summary}",
    ]
    if ann.uproxe:
        lines.append(f"// uproxe: {ann.uproxe}")
    if ann.notes:
        lines.append(f"// note: {ann.notes}")
    lines.append("// " + "-" * 60)
    lines.append("")
    return [ln + "\n" for ln in lines]


def replace_function_header(lines: list[str], fn_id: str) -> list[str]:
    if not lines:
        return lines
    m = re.match(r"^// ----- (FUN_[0-9a-f]+) @ ([0-9a-f]+) -----", lines[0])
    if not m or m.group(1) != fn_id:
        return lines
    return annotate_header(fn_id, m.group(2)) + lines[1:]


def write_index(funcs: dict[str, tuple[int, list[str]]], assigned: dict[str, str]) -> None:
    index_lines = [
        "# Proxy chain function index",
        "",
        "Annotated names are inferred from strings, vtables, and control flow.",
        "See [MAPPING.md](./MAPPING.md) for uproxe implementation cross-reference.",
        "",
    ]
    for fn_id in sorted(assigned, key=lambda f: funcs[f][0]):
        filename = assigned[fn_id]
        start = funcs[fn_id][0]
        ann = ANNOTATIONS.get(fn_id)
        label = ann.name if ann else fn_id
        index_lines.append(f"- `{fn_id}` → **{label}** (line {start}, `{filename}`)")
    (OUT_DIR / "INDEX.md").write_text("\n".join(index_lines) + "\n", encoding="utf-8")


def main() -> None:
    text = SRC.read_text(encoding="utf-8", errors="replace")
    funcs = parse_functions(text)
    OUT_DIR.mkdir(parents=True, exist_ok=True)

    assigned: dict[str, str] = {}

    for filename, names in GROUPS.items():
        chunks = [
            "/* Proxifier v4.14 proxy-chain logic — Ghidra 11.3.1 decompile, annotated subset. */\n",
            "/* See 00_OVERVIEW.md and MAPPING.md in this directory. */\n\n",
        ]
        for name in names:
            if name not in funcs:
                continue
            start, lines = funcs[name]
            assigned[name] = filename
            chunks.extend(replace_function_header(lines, name))
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
            "/* Proxifier v4.14 — additional chain/proxy keyword hits. */\n\n",
        ]
        for name, _start, lines in misc:
            assigned[name] = "05_misc_chain_hits.c"
            chunks.extend(replace_function_header(lines, name))
            chunks.append("\n")
        (OUT_DIR / "05_misc_chain_hits.c").write_text("".join(chunks), encoding="utf-8")

    write_index(funcs, assigned)
    print(f"Wrote {len(list(OUT_DIR.glob('*.c')))} files to {OUT_DIR}")


if __name__ == "__main__":
    main()
