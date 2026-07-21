#!/usr/bin/env -S uv run --script

# /// script
# dependencies = ["pyyaml"]
# ///
# pyright: basic

from collections import defaultdict
from dataclasses import dataclass
from pathlib import Path
from textwrap import dedent

import yaml

type Macro = list[str]
type Deductions = defaultdict[str, list[list[str]]]


@dataclass(frozen=True)
class Evidence:
    id: str
    icon: str
    name: str
    recipes: list[list[str]]
    description: str
    details: str


def find_project_root(start: Path) -> Path:
    path = next(
        (p for p in [start, *start.parents] if (p / "Makefile").is_file()),
        None,
    )
    if path is None:
        raise FileNotFoundError("Could not find project root (Makefile)")
    return path


def emit_macro(lines: list[str]) -> None:
    print(" \\\n".join(lines))


def emit_macro_line(line: str = "", suffix: str = "") -> None:
    print(f"{line}{suffix}\\")


def emit_compound_string(
    out: Macro,
    text: str,
    indent: str = "",
    suffix: str = "",
) -> None:
    lines = text.rstrip("\n").splitlines()

    if len(lines) == 1:
        out.append(f'{indent}COMPOUND_STRING("{lines[0]}"){suffix}')
        return

    out.append(f"{indent}COMPOUND_STRING(")

    for i, line in enumerate(lines):
        newline = r"\n" if i != len(lines) - 1 else ""
        out.append(f'{indent}    "{line}{newline}"')

    out.append(f"{indent}){suffix}")


def emit_generated_warning(source: Path) -> None:
    print(
        dedent(f"""\
        /////////////////////////////////////////////////////////////////////////////////////////
        // DO NOT MODIFY THIS FILE! It is auto-generated from {source}
        /////////////////////////////////////////////////////////////////////////////////////////
        """)
    )


def open_header_guard() -> None:
    print(
        dedent("""\
            #ifndef CONSTANTS_EVIDENCE_MACROS_H
            #define CONSTANTS_EVIDENCE_MACROS_H
        """)
    )


def emit_deduction_table(evidence: list[Evidence]) -> None:

    def collect_deductions(evidence: list[Evidence]) -> Deductions:
        order = {e.id: i for i, e in enumerate(evidence)}
        deductions: Deductions = defaultdict(list)
        for e in evidence:
            for r in e.recipes:
                res = sorted(r, key=order.__getitem__)
                if res not in deductions[e.id]:
                    deductions[e.id].append(res)
        return deductions

    def build_dedction_lnes(out: list[str], deductions: Deductions) -> None:
        for c, pp in deductions.items():
            for p in pp:
                line = ", ".join([c, *p])
                out.append(f"F({line})")

    deductions = collect_deductions(evidence)

    lines = ["#define FOREACH_DEDUCTION(F)"]
    build_dedction_lnes(lines, deductions)
    emit_macro(lines)


def close_header_guard() -> None:
    print(dedent("\n#endif // CONSTANTS_EVIDENCE_MACROS_H"))


def emit_evidence(out: Macro, evd: Evidence) -> None:
    out.append(f"F({evd.id},")
    emit_compound_string(out, evd.name, suffix=",")
    emit_compound_string(out, evd.description, suffix=",")
    emit_compound_string(out, evd.details, suffix=",")
    out.append(f"{evd.icon})")


def build_evidence_list(data) -> list[Evidence]:
    res: list[Evidence] = [
        Evidence(
            id=item["id"],
            icon=item["icon"],
            name=item["name"],
            description=item["description"],
            details=item["details"],
            recipes=item.get("recipes", []),
        )
        for item in data["evidence"]
    ]
    return res


def main() -> None:
    script_dir = Path(__file__).resolve().parent
    root = find_project_root(script_dir)
    source = root / "src" / "data" / "evidence.yaml"
    rel = source.relative_to(root)

    with source.open() as f:
        data = yaml.safe_load(f)

    evidence = build_evidence_list(data)

    open_header_guard()
    emit_generated_warning(rel)

    lines = ["#define FOREACH_EVIDENCE(F)"]
    for e in evidence:
        emit_evidence(lines, e)
    emit_macro(lines)

    print()
    emit_deduction_table(evidence)

    close_header_guard()


if __name__ == "__main__":
    main()
