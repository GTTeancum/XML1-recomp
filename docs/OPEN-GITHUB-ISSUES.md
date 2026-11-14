# Open GitHub issue work

Scope: open issues in GTTeancum/XML1-recomp, excluding #33 at the user's
direction. Issue bodies and all comments were read on 2026-11-13. Local fixes
are not published resolutions; do not close issues from tests alone.

## Conversion Sequencer: #27, #28, #31, #32

- [#27](https://github.com/GTTeancum/XML1-recomp/issues/27): walking into the
  Conversion Sequencer after raising coolant closes the game.
- [#28](https://github.com/GTTeancum/XML1-recomp/issues/28): kernel log reaches
  `nuke_plant/nuke/nuke2_2`. It lacks the renderer's rejected-draw details.
- [#31](https://github.com/GTTeancum/XML1-recomp/issues/31): same area, persistent
  crash; resolution changes and inventory changes did not help.
- [#32](https://github.com/GTTeancum/XML1-recomp/issues/32): reports the exact
  `unimplemented draw path` fatal error, also with HD textures disabled.

The fatal originates in `src/graphics/dx8/guest_graphics_live.c`. One guard
covers primitive topology/count, FVF/stride, pixel shaders, stream binding and
third-stage activity. The reported message alone cannot distinguish these.
These issues are grouped by location/symptom, not assumed proven duplicates.
Reproduced locally by loading `nuke_plant/nuke/nuke2_2` through the existing
mission script and walking forward using the process-local diagnostic pad.
The old build exits at frame 1831, draw 24, with primitive 6, 931 vertices,
FVF `0x500452`, stride 68 and no pixel shader. The stride decoder only accepted
zero or one 2D coordinate set and returned zero for this valid layout.

Fixed the shared guest/renderer decoder to account for each coordinate set's
dimension. This layout is XYZ (12), normal (12), diffuse (4), and four coordinate
sets with 2/2/3/3 floats (40), totaling 68 bytes. No geometry is discarded and
no failure is suppressed. The exact layout passes native indexed/nonindexed
triangle-strip pixel tests that select the fourth coordinate set and distinguish
it from the first. Existing ordered-submission and texture reuse tests pass.

The updated single build passes the same forward movement and continues past
frame 2500. Native captures were inspected before movement and after the fix:
room geometry, characters, railings, machinery and the water below the walkway
are visible beyond the former crash point. The fixed run was deliberately
stopped after capture, and both temporary mission/intro scripts were restored.
This proves the reproduced failure is fixed; it does not establish every
reporter's save-state transition or the whole mission. Audio was muted.

Private evidence: `XBOXgame/logs/sequencer/`, including `pre-fix-crash.log`,
native pixel-test output and captures. Candidate executable SHA256:
`5326041998c744f28d2f4d75130bde029f9cbb6805dea364d161dc787c59fdf1`.
Embedded-renderer integrity/system-import checks passed. Group remains locally
fixed with reporter-specific transition coverage unverified; nothing posted.

## Display, prompts and textures: #24, #29

- [#24](https://github.com/GTTeancum/XML1-recomp/issues/24): fullscreen and higher
  FPS. Maintainer explicitly accepted fullscreen and rejected unlocking 60 FPS.
  Native worker already implements borderless fullscreen; verify behavior.
- [#29](https://github.com/GTTeancum/XML1-recomp/issues/29): PS2 buttons, HD
  textures, custom resolutions. Texture replacement already exists and its
  native pixel test passes, but PS2 pack identifiers are not directly compatible.
  Maintainer offered Xbox-specific template support, not authoring a whole pack.
  Resolution validation previously allowed only five exact sizes. Prompt code
  supplies keyboard text and otherwise retains native controller prompts.
  Remaining: finish arbitrary-aspect presentation validation and PlayStation prompts, audit
  the existing pack/template workflow against the request.

Custom output dimensions now load from `[PC]` Width/Height in `pc-settings.ini`.
Bounds are width 640..8192, height 480..8192, and at most 16,777,216 pixels;
the actual GPU must also support creating the requested target. The menu's
existing resolution presets remain available. Changing another setting keeps
the custom size; choosing the Resolution control switches to a preset.
The guest's 4:3 video flags now apply to every exact 4:3 size, not just 640x480.

Settings round-trip/Options-apply tests cover 1600x1200, 1920x1200, 3440x1440,
5120x1440, 1080x1920 and 1366x768, including invalid dimensions and allocation
bounds. Window fitting tests cover those sizes. A native 1600x1200 capture
shows the main menu, background, logo and selection prompt without clipping.
The run used the single updated executable, ended deliberately after capture,
and restored its temporary INI/intro. Evidence: `XBOXgame/logs/display/` and
`display-controls-test.log`. Embedded-renderer integrity checks pass.

Remaining display gap: renderer viewport and presentation currently scale to
the complete output/client area. Non-4:3/non-16:9 outputs and a fullscreen
monitor with a different aspect need an explicit aspect-preserving policy and
matching pointer-coordinate validation. Do not call arbitrary-aspect visuals
complete from the settings tests or the 4:3 capture.

## Gameplay and presentation: #30

[#30](https://github.com/GTTeancum/XML1-recomp/issues/30) includes invisible
enemies, enemies outside map boundaries, looping Settings animations,
brightness, gamma and custom shaders. Track all six separately; do not infer
one root cause or claim gameplay fixes from rendering smoke tests.
Remaining: reproduce/trace the three bugs and assess/implement the requested
display controls within the mandatory DX8 backend.

## Platform: #26

[#26](https://github.com/GTTeancum/XML1-recomp/issues/26) requests Linux support.
Current game, renderer and input code use Windows APIs, and the repository
requires genuine DX8 rather than a substitute renderer/wrapper. Remaining:
assess the build/runtime dependencies and identify the Linux path and any
constraint requiring an explicit user decision. Do not label Wine execution
a native Linux port.

## Working constraints

One test build, updated in place in ignored `XBOXgame/`. Private assets and
temporary mission fixtures remain there and are restored after bounded runs.
No desktop input or capture, no push and no GitHub comments. #33's Intel
verification is outside this goal.
