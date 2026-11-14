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
  Native worker implements borderless fullscreen; hidden native layout checks
  now cover the monitor-sized parent and aspect-preserving presentation child.
- [#29](https://github.com/GTTeancum/XML1-recomp/issues/29): PS2 buttons, HD
  textures, custom resolutions. Texture replacement already exists and its
  native pixel test passes, but PS2 pack identifiers are not directly compatible.
  Maintainer offered Xbox-specific template support, not authoring a whole pack.
  Resolution validation previously allowed only five exact sizes. Prompt code
  supplies keyboard text and otherwise retains native controller prompts.
  Remaining: implement/validate PlayStation prompts, audit
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

The renderer now fits the game's picture into the requested buffer, clears
black margins each frame, and maps partial clears and viewports consistently.
Retail 720x480 storage represents a 4:3 picture, not square pixels. A disabled
child window presents inside the normal window or fullscreen parent; its
placement fits the picture without applying a second set of margins when
render-buffer and monitor aspects differ. All input stays on the parent and
maps into the same picture bounds. Margin clicks cannot select menu items;
releases outside the picture still terminate an active drag.

Native submission tests verify margin pixels, partial clears, 480p picture
geometry and pointer events for 4:3/fullscreen and ultrawide layouts. All 20
native readback scenarios also present to a child window, including requested
FSAA off/2x/4x/8x. The final 3440x1440 game capture was inspected: menu, logo,
background and prompts remain centered inside a 2560x1440 picture with side
margins. The hidden fullscreen layout on the 1920x1080 monitor reports the
expected child bounds (-330,0)-(2250,1080), cropping only excess black canvas.
Evidence: `XBOXgame/logs/display-aspect/`, `aspect-submission.log`,
`aspect-readback.log`. This validates native buffer output and window geometry;
no desktop capture/input or physical fullscreen interaction was performed.
Audio and full gameplay at every custom aspect are unverified.

Texture-pack audit (#29, requested explicitly by the user): confirmed and fixed
two renderer defects. Same-size PNGs were decoded but never uploaded because
the upload loop only visited added upscale levels; the original pixels were
then copied instead. A 1x edit now supplies every mip from the edited image.
The native pixel test failed before the fix and passes afterward, including
sampling the smallest mip. Separately, the GPU replacement cache used only
the base-image key, allowing different authored mip chains to share the wrong
allocation. Its identity now includes the full wire chain and packed layout;
PNG filenames continue using the documented base-image key. Tests cover
different level counts, different mip bytes, and identical-chain reuse.

Exported 3,631 unique textures from 4,104 IGB files using the documented reader
revision. All PNGs passed decode/dimension checks. Twelve zero-byte IGBs were
previously silently skipped; the exporter now logs them and records omissions
in pack.json. sources.json retains all resource-to-texture associations, even
when several IGBs share a PNG. Setup instructions now include the missing
external reader and use the single XBOXgame testing tree. Python checks pass
(six tests, one optional ONNX test skipped because its runtime is absent).

A bounded native menu run loaded 16 replacements without replacement failures.
Its capture was inspected: logo, Cerebro background, menu text and A prompt are
visible and coherent. Temporary configuration/intro changes were restored.
The capture predates the cache-identity fix, which has native test coverage;
the final staged executable includes both fixes and passes embedded integrity.
Evidence: XBOXgame/logs/issue29-game/, issue29-prefixed-test.log (reproduced
failure), issue29-fixed-test.log and issue29-export.log. These results do not
establish gameplay texture correctness, upscale quality, or shimmer behavior.
The broader texture audit and PlayStation prompts remain in progress. Existing
PS2 font artwork is present in the Xbox assets, but its metrics differ from
the active Xbox HD font and it has not been enabled.

Gameplay follow-up: bounded 90-second Conversion Sequencer runs used the same
executable with the original-size export and then a private 4x Lanczos pack
covering the 88 observed asset textures. Native wire dumps matched between
runs (89 keys, including one generated 1x1 image). All 88 exported asset PNGs
decode pixel-identically to the corresponding wire images. Both runs loaded
88 replacements with zero replacement failures and ended at the deliberate
watchdog; temporary mission, intro and build.ini changes were restored.
Both captures were inspected: characters, HUD, water, railings and machinery
are present with coherent artwork. They are not synchronized frames and do
not establish absence of motion shimmer. The 4x run retained about 74.7 MiB
of replacements, took 2.03 seconds total to load them (112.9 ms maximum per
texture), and applied the mip-filter safeguard on 323,649 draw-stage updates.

The user recalls flickering as the reported texture-pack symptom. A native
regression now alternates replaced and unmatched materials over 16 consecutive
presentations, checking the actual pixels and sampler state every iteration.
It passes: replacement pixels stay consistent and forced mip filtering does
not leak into the unmatched material. This rules out that bounded failure
case, not flickering across arbitrary gameplay. The historical problem pack
has not been identified; the tested 4x pack is deterministic resampling, not
a validation of any neural upscale or distributed pack. Evidence is under
XBOXgame/logs/texture-gameplay/ and texture-gameplay-4x/.

## Gameplay and presentation: #30

[#30](https://github.com/GTTeancum/XML1-recomp/issues/30) includes invisible
enemies, enemies outside map boundaries, looping Settings animations,
brightness, gamma and custom shaders. Track all six separately; do not infer
one root cause or claim gameplay fixes from rendering smoke tests.
The Options animation symptom is reproduced and locally fixed. Captures show
the title's rotating light and the unselected Accept decoration flashing;
the main panel itself stays stationary. The authored Options definition kept
`animate="true"` on title_light, accept_light and accept_focus. The guest parser
at 00172F61 sets item flag 0x02 at offset 0x3A for that attribute; the update
branch at 001730D9 uses it to advance the model continuously. It is separate
from the menu's opening/closing animation. The Advanced Options authoring
recipe already removes these same attributes.

The normal Options seed now removes them too. For an existing authored menu,
run from the repository root:

```powershell
.venv/Scripts/python.exe scripts/fix-options-idle-animation.py --menu XBOXgame/ui/menus/options.eng --driver XBOXgame/build/Release/xmlb-driver.exe
```

The helper validates the expected layout/items, preserves other content and
compiles options.engb before publishing. This compiled copy matters: the game
loads binary menus, so changing only options.eng does not update runtime UI.
The decoded before/after binary trees differ only in the three animation
attributes. Source transformation is idempotent. No resource names, IGBs,
package declarations, focus bindings, sliders or transition definitions change.

All three before/after native captures were inspected in sequence. In the
post-fix title and Accept regions, both later captures match the first exactly;
those regions changed in the original run. A further process-local navigation
run opened Options from the main menu over the live Cerebro background and
returned with Back. Both outputs were inspected. Direct-opening isolation
runs intentionally lack the main-menu background and are not background
validation. Evidence: XBOXgame/logs/issue30-options/,
issue30-options-compiled/ and issue30-options-navigation/. Temporary launch
fixtures were restored; the corrected Options text and compiled data remain
in the single staged build. Audio was muted, and intermediate transition
frames and acceptance of every setting were not revalidated.

Remaining: investigate invisible enemies and out-of-map enemies, and implement
or establish concrete blockers for brightness, gamma and custom shaders in DX8.

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
