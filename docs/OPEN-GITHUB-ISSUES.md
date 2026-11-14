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

PlayStation prompt follow-up for #29: `scripts/build-playstation-prompts.py`
builds an optional three-texture pack from the user's stock Xbox fonts and
the PlayStation artwork already present in those assets. It replaces only
controller glyph rectangles, checking that all other decoded pixels remain
identical. Xbox font metrics/resources are unchanged. Physical A/B/X/Y map
to Cross/Circle/Square/Triangle; shoulder/trigger artwork follows the port's
actual XInput mapping, rather than the differing PS2 atlas order. Standard,
widescreen and HD medium-font variants are generated. Other font families
have empty controller glyph slots and are skipped.

Two bounded native menu runs used the pack. All three captured frames were
inspected: main-menu Cross/Select and Advanced Circle/Back plus Cross/Change
are correct, with ordinary text and Cerebro intact. Normal Options was also
inspected; its custom Back footer has no controller glyph. Settings and intro
were restored after both watchdog exits. Evidence: XBOXgame/logs/
issue29-playstation-prompts/ and issue29-playstation-advanced/.
This is optional artwork, not automatic controller detection, a new input
backend, or renamed textual bindings. Gameplay prompt coverage and physical
PlayStation controller operation remain unverified. Player instructions are
in docs/HD-TEXTURES.md; the private pack stays inside XBOXgame.

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

Brightness/gamma rendering is implemented as an intermediate step. The `[PC]`
settings now accept Brightness=50..150 and Gamma=50..200, both neutral at 100.
The transform is round(255 * brightness/100 * pow(channel/255, 100/gamma)),
clamped to 255. It applies to the game image before native capture/Present;
it never changes a monitor ramp. Neutral values bypass processing. Settings
round-trip, validation and x64-to-Win32 input-channel tests pass (IPC version
14). The native menu controls have not yet been authored, so this is not a
completed response to the requested in-menu display controls.

The initial renderer uses the validated native readback path, a CPU lookup
table and a native DX8 texture/quad, restoring graphics state afterward.
Native tests cover exact color values, neutral identity, edge coverage and
state restoration. All 20 readback/MSAA/fallback scenarios also pass color
pixel checks. A staged 720p run at Brightness=110/Gamma=140 shows the expected
brightened logo, text, menu background and button prompt. Its configuration
and intro fixture were restored; the single executable has the new renderer
embedded and passes integrity checks. Logs: XBOXgame/logs/issue30-color-*,
including the game capture in issue30-color-game/.

Performance is unfinished: the 1080p test's four-frame averages include
initial resource setup and a separate full validation readback, and measure
roughly 12–23 ms in the initial scenarios. This is not a steady-state gameplay
performance result. Optimize/measure the nonneutral path before claiming it
ready, and retain the independent direct-lock path for compatibility. Native
menu integration, custom shaders, invisible enemies and out-of-map enemies
remain pending.

Color-path performance follow-up: native PS 1.1 dependent texture lookups now
apply the same 8-bit table on the GPU. A render-target copy supplies the source;
two small lookup textures map red and green/blue independently. There is no
runtime shader compiler or extra DLL. The instruction behavior follows
[Microsoft's texreg2ar documentation](https://learn.microsoft.com/en-us/windows/win32/direct3dhlsl/texreg2ar---ps)
and the corresponding texreg2gb instruction. If shader/resource creation or
the copy fails, the GPU path is disabled and the independent CPU path is used.
Devices selected for direct-lock readback bypass GPU copying entirely.
The CPU path also no longer needs an intermediate full-size image buffer.

All 256 input values in every channel match the CPU table exactly through
both the automatic (GPU here) and forced CPU paths. All 20 readback scenarios
pass again, with the eight non-direct cases using the GPU and twelve direct
cases using CPU conversion. The revised 24-frame warmed benchmark includes
the game's required completion fence, not just asynchronous submission:
1080p GPU cases take 1.059–2.731 ms (median 1.623); direct CPU cases take
6.046–7.759 ms (median 6.464). These are isolated color-pass measurements on
the development Radeon, not total gameplay frame times or other-GPU results.
Neutral settings still bypass the pass. Native menu capture with nonneutral
settings was inspected after updating the single staged executable; logo,
text, background and prompt remain coherent. Embedded integrity passes.
Evidence: issue30-color-synchronized.log, issue30-color-gpu-pixels.log and
issue30-color-gpu-game/ under XBOXgame/logs.

Native brightness/gamma controls are now integrated into Advanced Options.
They change in five-point steps (brightness 50–150%, gamma 0.50–2.00),
wrap at the upper limit, and apply live only when Apply is selected. Cancel
preserves saved and running values; Defaults restores neutral values.
The authoring recipe reuses four dormant anchors within the native collector's
128-transform limit, preserving resource names and PKGB associations.
Transaction tests pass, including saved/live Apply behavior, range wrapping
and Cancel. Native controller navigation changed both settings to 105,
selected Apply, and saved both values. All three native captures were inspected:
the controls, focus highlight, existing menu content and Cerebro background
are visible, with the applied color change reflected in the final capture.
The bounded run ended at its watchdog and restored private settings/intro.
Evidence: XBOXgame/logs/issue30-color-ui-reused/ and
issue30-color-ui-controls.log. Audio was muted; this does not verify audio
or every animation frame. Custom shaders and the enemy reports remain open.

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
