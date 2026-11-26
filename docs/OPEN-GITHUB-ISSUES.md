# Open GitHub issue work

Scope: open issues in GTTeancum/XML1-recomp, excluding #33 at the user's
direction. Issue bodies and all comments were read on 2026-11-13. Local fixes
are not published resolutions; do not close issues from tests alone.

## Post-1.0.2 source handoff (2026-11-25)

The [1.0.2 release](https://github.com/GTTeancum/XML1-recomp/releases/tag/1.0.2)
predates the candidates below. Verify a Windows build from current source with
the corresponding setup files, not an executable swapped into a mixed
installation.

- **[#36: Shadow King](https://github.com/GTTeancum/XML1-recomp/issues/36).**
  `f4da4f2` conditionally repairs the isolated final encounter roster during
  loose-file setup when it needs Professor X and matches the known three-actor
  case. Fixture tests cover fresh setup, repeat/migration, and preservation
  of unrelated files and saves; the broken stock roster and boss fight have
  not been reproduced on Windows. First verify Professor X spawns and the
  fight can be completed from a pre-fight save. See [setup](XMLB-SETUP.md).
- **[#37: Nightcrawler comic](https://github.com/GTTeancum/XML1-recomp/issues/37).**
  `16c5b72` repairs the English map during **fresh extraction**, not when
  replacing the EXE in an already-prepared install. Test with a clean setup,
  reach the 10th Avenue rooftop in the final Sentinel Flashback
  (`nyc_fb4`), pick up the comic and confirm it registers. The installer
  fixture is not a gameplay proof; see [setup](XMLB-SETUP.md#10th-avenue-nightcrawler-comic-37).
- **[#29: in-game Options labels](https://github.com/GTTeancum/XML1-recomp/issues/29).**
  The released 1.0.1 and 1.0.2 normal Options resources both contain the
  Effects Volume, Music Volume and Combat Music text/control definitions.
  Compare the main-menu Options screen with Pause → Options after loading
  the same English save, once the animation settles, at the same renderer
  and output settings. Test each slider separately. Compare the installed
  `ui/menus/options.engb` and `ui/menus/x2m_options.igb` with a fresh
  1.0.2 setup without overlays. `f4da4f2` fixes a viewport-clear mismatch
  in source but has not been shown to restore these captions.
- **[#29: Beast and the Juggernaut memory](https://github.com/GTTeancum/XML1-recomp/issues/29).**
  The report was on 1.0.1; 1.0.2 behavior is unknown. The release manifests
  do not show changed Beast dialogue/scripts or an X-Mansion map override.
  Retest from a pre-conversation save: after the Magma Danger Room test,
  speak to Beast in the subbasement lab before leaving the second X-Mansion
  interlude after HAARP. This is a route to try, not a verified Xbox-port
  reproduction or confirmed fix.

## Current assessment (2026-11-14)

The open-issue inventory was rechecked against GitHub. No additional issue
groups were found. This table describes local work, not GitHub closure status.

| GitHub issue | Local outcome | Evidence and remaining limits |
| --- | --- | --- |
| #24 | Fullscreen/aspect handling implemented; 60 FPS retained as the maintainer requested | Native hidden-window geometry, presentation and pointer checks pass. Physical fullscreen interaction and multiple-machine acceptance are unverified. |
| #27, #28, #31, #32 | Reproduced Conversion Sequencer draw failure fixed | Exact draw/pixel tests, isolated Reactor Core panel-to-door transition and Sequencer walkway traversal pass. Reporter saves and full mission progression remain unverified; grouping does not establish identical causes. |
| #29: custom resolutions | Implemented with bounded dimensions and aspect-preserving output | Settings, native geometry/pointer checks and inspected custom-resolution captures pass. Not every GPU/output mode has been tested. |
| #29: PS2 prompts | Optional pack builder implemented and documented | Native Cross/Select and Circle/Back inspected; ordinary font pixels preserved. Gameplay-wide prompt coverage and physical PlayStation-controller operation are unverified. |
| #29: texture support/audit | Xbox template export audited; same-size replacement and mip-chain cache defects fixed | 3,631-texture export, native replacement tests and two bounded gameplay runs completed. The unidentified historical flickering pack has not been reproduced or established fixed. PS2 pack identifiers require artwork matching to Xbox keys. |
| #30: looping Options decorations | Reproduced and fixed in native menu assets | Exact animation attributes traced; native before/after captures checked. No claim about all animations or every transition frame. |
| #30: brightness/gamma | Native controls, persistence and live Apply implemented | Transaction tests, exact GPU/CPU color checks and native menu captures pass. Measurements cover this development GPU, not all hardware. |
| #30: custom shaders | Native DX8 assembly effects, menu selection and failure feedback implemented | Twenty readback/MSAA cases, state/pixel/margin tests, cross-ABI transactions, and inspected live selection/error/Off captures pass. Arbitrary shader compatibility and performance are unverified. |
| #30: invisible enemies | Investigated; no established root cause or fix | Report and user provide no location, enemy, save or reproducer. Inspected visibility/interrupt paths do not establish a defect. |
| #30: enemies outside map | Investigated; no established root cause or fix | No location, enemy, save or reproducer. Imported teleport path retains native spatial validation; this does not rule out other movement/collision defects. |

Remaining external evidence: a reproducible enemy incident (or affected save)
and the actual flickering texture pack would permit targeted investigation.
Do not infer fixes for those symptoms from successful rendering tests or from
the related defects repaired here. Broader gameplay, audio and multi-machine
acceptance remain outside the evidence collected so far.

The sole staged executable after the shader-menu work has SHA256
`e6295e2a09344b6d611f0f5e3593ab03ba6c6eacffc3bb7660d4e48e21e8bf2d`.
Its embedded renderer integrity check passed. Older hashes below identify
historical evidence builds, not additional retained player builds.

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

### Expanded transition check (2026-11-14)

The current staged executable also passes an isolated Reactor Core panel/door
check. Process-local input activated the original control-panel script; native
captures show its camera sequence and the exit door changing from closed to
open. Using the actual zone link loaded Conversion Sequencer. The party then
broke a barrel and moved onto the grated walkway beyond the earlier test point.

Captured draw streams at entry (frame 4845) and on the walkway (frame 9986)
each contain the formerly rejected `0x500452` / 68-byte triangle strips:
931 indices / 567 unique vertices and 1,408 indices / 842 unique vertices.
Both complete frames replay successfully through the exact embedded renderer;
the resulting images were inspected for characters, machinery, walkway and
water. No renderer fatal occurred; the run ended at its 180-second watchdog.

Fixture limits: pump completion was supplied, Reactor Core enemy spawns were
removed, heroes were invulnerable, and the original coolant-side spawn was
selected. After using the panel, the fixture repositioned the party near the
exit; it did not verify the intervening walk. The panel script, door script and
Sequencer map were unchanged. Coolant surface rise was not established by the
inspected captures. Audio was muted. This is not a reporter-save replay or
full mission acceptance. All temporary staged files were restored byte-for-byte.

Private proof: `XBOXgame/logs/sequencer-transition-confirmation/`, especially
`verification.json`, `entry-draws.json`, `walkway-draws.json`, captures 2/5
(closed/open door), 6 (Sequencer entrance), 10 (walkway), and both replay logs
and images. Replay packets remain under `XBOXgame/build/dx8-request-9103-*`
and `dx8-request-9105-*`. No additional player build was created.

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
  The PlayStation prompt implementation and pack/template audit are documented
  below; the historical flickering symptom remains unverified.

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
This initial run preceded the broader gameplay audit and PlayStation prompt
implementation documented below. The PS2 artwork's differing font metrics
required glyph-level replacement rather than swapping the whole atlas.

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
14 at this intermediate stage). Native controls and the subsequent version-15
shader selection channel are documented below.

The initial renderer uses the validated native readback path, a CPU lookup
table and a native DX8 texture/quad, restoring graphics state afterward.
Native tests cover exact color values, neutral identity, edge coverage and
state restoration. All 20 readback/MSAA/fallback scenarios also pass color
pixel checks. A staged 720p run at Brightness=110/Gamma=140 shows the expected
brightened logo, text, menu background and button prompt. Its configuration
and intro fixture were restored; the single executable has the new renderer
embedded and passes integrity checks. Logs: XBOXgame/logs/issue30-color-*,
including the game capture in issue30-color-game/.

The initial performance measurement was incomplete: its four-frame averages include
initial resource setup and a separate full validation readback, and measure
roughly 12–23 ms in the initial scenarios. This is not a steady-state gameplay
performance result. Optimize/measure the nonneutral path before claiming it
ready, and retain the independent direct-lock path for compatibility. Native
menu integration and custom shaders were still pending at that stage; their
completed implementations follow below. Both enemy reports remain unresolved.

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

Custom-shader backend follow-up for #30: `CustomShader` in build.ini now
accepts a native DX8 pixel shader assembly file. The optional final pass runs
after brightness/gamma and before capture/presentation, restricted to the
game picture so aspect margins stay black. It uses GPU image copying where
available and independent CPU upload for direct-lock/fallback devices.
Malformed/unsupported shader files disable only the effect. Rendering remains
native DX8; the Windows system assembler compiles the source. Tracked grayscale
and invert examples and docs/CUSTOM-SHADERS.md explain the supported contract.
This backend step preceded the in-menu selector documented below.

All 20 native readback/MSAA cases pass exact invert pixel checks, edge coverage,
margin preservation, shader-state restoration and malformed-source rejection.
Build-setting tests cover default off, paths with spaces, explicit off and
oversize paths. The staged executable passes embedded integrity checks. Two
native grayscale captures (Options and main menu) were inspected: artwork,
ordinary text, selection, background and prompt remain coherent in grayscale.
The bounded run ended at its watchdog and restored build.ini, PC settings and
intro. Evidence: XBOXgame/logs/issue30-custom-shader-test.log and
issue30-custom-grayscale/. Audio was muted; arbitrary shader and GPU
compatibility/performance are not established.

Enemy reports remain unverified. The user has no reproduction details either.
The inspected visibility path at guest 2E220 changes opacity through 76B40 and
the actor's hidden flag; 2E280 queries the original invisibility powerup.
The added restore-visible interrupt handler preserves an active effect and
otherwise calls that existing path. The imported teleporter event is gated by
its configured owner and delegates candidate placement to original spatial
validation at D56B0; it does not directly write an actor position. These checks
do not establish either reported root cause. No blanket visibility or position
override has been introduced. A location/save/reproduction or stronger runtime
evidence is still needed to connect either symptom to a failing path.

Shader menu follow-up: Advanced Options now cycles Off, Default (the legacy
build.ini choice), and validated filenames from shaders/. Apply persists the
selection in pc-settings.ini and updates the renderer live; Cancel leaves the
applied selection untouched. A renderer failure is reported in the native
status row while ordinary rendering continues. The existing dormant footer
link is reused, retaining the 128-anchor layout and original PKGB resources.
IPC version 15 carries the filename and renderer result. Settings round-trip,
filename validation, enumeration, Apply/Cancel and error-feedback tests pass,
including x64/Win32 channel communication.

A bounded native run navigated to the selector, selected grayscale as a draft,
applied it live, applied a deliberately invalid file, then selected Off. All
five captures were inspected in order: the draft kept the colored image,
Apply produced grayscale, the invalid shader restored ordinary color with a
visible error, and Off cleared the error. Menu content and Cerebro remained
coherent. The run restored private settings/intro and removed the invalid
fixture. Logs/captures: XBOXgame/logs/issue30-shader-ui/; transaction results:
issue30-shader-controls.log. Package audit passes. Native Cancel behavior is
covered by transaction tests, not an additional interactive capture sequence.
Audio and arbitrary user-authored effects remain unverified.

## Working constraints

One test build, updated in place in ignored `XBOXgame/`. Private assets and
temporary mission fixtures remain there and are restored after bounded runs.
No desktop input or capture, no push and no GitHub comments. #33's Intel
verification is outside this goal.
