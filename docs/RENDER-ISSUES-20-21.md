# Rendering fixes for issues 20 and 21

Validated locally on 2026-10-28. These are shared runtime corrections; no map,
character, texture, animation, or package overrides are required by the fixes.

## Issue 20: HAARP terrain displaying the UI atlas

Reproduced the reported culvert in `haarp/ext/haarp_ext01`, with Angel,
Nightcrawler, Cyclops and Iceman. Turning the camera toward the opposite bank
exposed the glyph atlas on snow and rocks in both 0.9.2 and the pre-fix build.
Replaying the captured frame with native texture/state caches disabled retained
the corruption, ruling out those caches as the cause of this reproduction.

Alchemy's material toggle at `001C19A0` tail-jumps to `0035C060` (SetTexture).
Those direct tail calls bypass the ABI-call observer. The game's XDK binding
table was correct, while our renderer's call-only shadow retained the previous
frame's UI texture. On two affected terrain draws the shadow was `00FA6010`
(font atlas), while the device held `00FAC0A0` (terrain). These are diagnostic
addresses from one run, not runtime conditions.

The renderer now snapshots all four bindings from the device's table at draw
time (`device + F88`, written by `0035C0A3`). V9 also explicitly represents
an unbound primary texture with zero width/height/format and no texture payload.
The native worker binds NULL instead of relying on an unrelated old texture.
The original terrain and native NULL bindings now render correctly.

Verification: inspected the same culvert, camera angle, Angel, nearby combat,
bank, rocks, trees and HUD after the fix. A hidden native DX8 regression checks
blue textured draw -> unbound diffuse-white draw -> restored blue texture, using
actual pixels and native binding state. Existing ordered submission, partial
clear, texture recycling and pinned-resource checks also pass.

## Issue 21: Research Facility destruction producing giant polygons

Reproduced by smashing walls beside the blue machine in `arena/arena_haarp1`.
The vertices were sane; animation matrices had enormous scales. Disabling
native geometry/state caching did not repair the captured frame.

Six translated CRT 64-bit divide/remainder helpers omitted rotate-through-carry
instructions in their normalization loops. For the observed animation operands,
`11412013007 / 6666666507`, the unsigned divide returned 2 instead of 1.
The resulting remainder was -1921320007 instead of 4745346500. Negative animation
key indices then interpreted unrelated heap values as rotations.

Restored the twelve missing RCR instructions in helpers at `00342E20`, `00343460`,
`003436B0`, `00343B30`, `00343BF0`, and `00349070`. The generation pipeline applies
the same address-based repair, with strict instruction-count checks.

Verification: inspected the wall-smashing sequence and subsequent attacks beside
the blue machine after the fix; normal fragments and room geometry remain.
`python scripts/test-crt-division.py` compiles the actual canonical translated
bodies and passes 120,600 signed/unsigned quotient/remainder cases plus six
regressions using the observed operands. The generation guard repairs all twelve
omissions and is idempotent.

## Scope and artifacts

Gameplay runs used private copied mission/script fixtures and process-local
input, hidden at 1920x1080. Player assets were not changed. Runs were muted;
audio and a complete campaign playthrough were not verified by this work.
Both reports reproduced on the development AMD system; validation on the
reporter's NVIDIA system remains external confirmation, not a prerequisite
claimed to have been performed here.

Private evidence lives under `work/render-issues/`: `arena-before`, `arena-fixed`,
`arena-final`, `haarp-release`, `haarp-candidate`, and `haarp-bindings-fixed`.
The self-contained executable is staged as `XBOXgame/X-Men Legends.exe`.
