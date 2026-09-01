#!/usr/bin/env -S uv run --script

# /// script
# dependencies = ["pyyaml", "inflection"]
# ///
# pyright: basic

from collections import defaultdict
from dataclasses import dataclass
from pathlib import Path
from textwrap import dedent

import inflection
import yaml

type Macro = list[str]
type Deductions = defaultdict[str, list[list[str]]]
type Suspects = dict[str, list[str]]


@dataclass
class Evidence:
    id: str
    icon: str
    name: str
    recipes: list[list[str]]
    description: str
    details: str
    score: int
    suspects: list[str]
    question: list[str]


def find_project_root(start: Path) -> Path:
    path = next(
        (p for p in [start, *start.parents] if (p / "Makefile").is_file()),
        None,
    )
    if path is None:
        raise FileNotFoundError("Could not find project root (Makefile)")
    return path


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

# Source - https://stackoverflow.com/a/952952
# Posted by Alex Martelli, modified by community. See post 'Timeline' for change history
# Retrieved 2026-08-20, License - CC BY-SA 4.0
def flatten(xss):
    return [x for xs in xss for x in xs]

def build_evidence_list(data) -> list[Evidence]:
    res: list[Evidence] = [
        Evidence(
            id=item["id"],
            icon=item["icon"],
            name=item["name"],
            description=item["description"],
            details=item["details"],
            recipes=item.get("recipes") or [],
            score=item.get("score") or 0,
            suspects=item.get("suspects") or ["Count"],
            question=item.get("question") or ["None"],
        )
        for item in data["evidence"]
    ]
    return res


def get_icon_list(evd: list[Evidence]):
    icons: list[str] = [e.icon for e in evd]
    icons = list(dict.fromkeys(icons))
    return icons

def emit_icon_includes(icons: list[str]):
    for icon in icons:
        filename = inflection.underscore(icon)
        incgfx = f'const u32 gItemIcon_{icon}[] = INCGFX_U32("graphics/evidence/icons/{filename}.png", ".4bpp.smol");'
        incpal = f'const u16 gItemIconPalette_{icon}[] = INCGFX_U16("graphics/evidence/icons/{filename}.png", ".gbapal");'
        print(incgfx)
        print(incpal)
        print()

def emit_icon_externs(icons: list[str]):
    for icon in icons:
        incgfx = f'extern const u32 gItemIcon_{icon}[];'
        incpal = f'extern const u16 gItemIconPalette_{icon}[];'
        print(incgfx)
        print(incpal)
        print()

def main() -> None:

    script_dir = Path(__file__).resolve().parent
    root = find_project_root(script_dir)
    source = root / "src" / "data" / "evidence.yaml"
    rel = source.relative_to(root)

    with source.open() as f:
        data = yaml.safe_load(f)

    evidence = build_evidence_list(data)

    icons = get_icon_list(evidence)

    emit_generated_warning(rel)

    print("#ifndef _EVD_GFX_HEADER", end="\n\n")
    emit_icon_includes(icons)
    print("#else", end="\n\n")
    emit_icon_externs(icons);
    print("#endif")

if __name__ == "__main__":
    main()
