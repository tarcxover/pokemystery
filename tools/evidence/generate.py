#!/usr/bin/env -S uv run --script

# /// script
# dependencies = ["pyyaml"]
# ///
# pyright: basic

from dataclasses import dataclass
from pathlib import Path
from textwrap import dedent

import yaml

type Macro = list[str]


@dataclass(frozen=True)
class Evidence:
    id: str
    icon: str
    name: str
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


def close_header_guard() -> None:
    print(dedent("\n#endif // CONSTANTS_EVIDENCE_MACROS_H"))


def emit_evidence(out: Macro, evd: Evidence) -> None:
    out.append(f"F({evd.id},")
    emit_compound_string(out, evd.name, suffix=",")
    emit_compound_string(out, evd.description, suffix=",")
    emit_compound_string(out, evd.details, suffix=",")
    out.append(f"{evd.icon})")


def main() -> None:
    script_dir = Path(__file__).resolve().parent
    root = find_project_root(script_dir)
    source = root / "src" / "data" / "evidence.yaml"
    rel = source.relative_to(root)

    with source.open() as f:
        data = yaml.safe_load(f)

    evidence = [Evidence(**item) for item in data["evidence"]]

    open_header_guard()
    emit_generated_warning(rel)

    lines = ["#define FOREACH_EVIDENCE(F)"]
    for e in evidence:
        emit_evidence(lines, e)
    emit_macro(lines)

    close_header_guard()


if __name__ == "__main__":
    main()
