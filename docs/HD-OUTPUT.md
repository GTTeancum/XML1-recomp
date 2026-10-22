# Widescreen HD output and renderer performance

The human launcher defaults to 1920x1080 progressive. Select 1280x720 with:

```powershell
./scripts/playtest.ps1 -Resolution 720p
```

`Play XML1.cmd` accepts the same arguments. The renderer loads system `d3d8.dll`
and uses the native D3D8 HAL on the AMD Radeon 780M. The existing 64-bit game /
32-bit native renderer arrangement is unchanged. OBS settings are unchanged.

## Original widescreen mode

The original title's graphics initialization at 0x194330 selects 1280x720 and
16:9 when its XGetVideoFlags result includes 720p and the raw SMC AV-pack value
is 1. XboxRecomp's video-setting bits were in the low byte, so the title's
original right shift by 16 erased them. Its boot SMC export was also zero,
which caused the original XDK routine to mask out HD modes.

Patch 31 fixes the dashboard bit positions, raw versus decoded AV-pack values,
combined encoder capabilities, and guest-visible HalBootSMCVideoMode export.
The actual game now logs `[DX8 GUEST MODE] 1280x720`. The engine's mode-validation
routine includes 1920x1080, but its observed startup path selects 720p.

The Windows 1080p option keeps that original widescreen camera and projection.
It scales viewport and clear coordinates to a 1920x1080 native backbuffer,
where the geometry is rasterized progressively. It does not invoke interlaced
scanout or upscale a completed 720p image. Original textures, UI art and FMVs
retain their source detail. This is a host output option, not a claim that the
guest is selecting an original 1080p console mode.

Constants were checked against [nxdk video.h](https://github.com/XboxDev/nxdk/blob/master/lib/hal/video.h)
and the AV-pack distinction against [Cxbx kernel AV exports](https://github.com/Cxbx-Reloaded/Cxbx-Reloaded/blob/master/src/core/kernel/exports/EmuKrnlAv.cpp).
`video-settings-test` calls the actual kernel handlers and thunk initialization,
including the guest-visible data export and original title's shift/mask.

## Performance changes

Repeated textures use references instead of transferring and decoding identical
pixels again. The v8 stream retains references across frames. Full byte equality,
including mip levels, is required; modified textures and reused guest addresses
cannot silently reuse stale pixels. The dictionary is bounded to 256 textures /
64 MiB and falls back to inline payloads when full, then resets at the next
frame boundary. Each requested capture explicitly resets both dictionaries before
its first command, so captures remain self-contained. The older v7 replay format
still discards references after each frame. Native tests cover both lifetimes.

The native worker also skips identical render-state, texture-stage and light
updates. It preserves the original values and draw order. Native fence completion
and ordered clear behavior remain in place. Set `XML1_DX8_NO_WIRE_CACHE=1` and
`XML1_DX8_NO_STATE_CACHE=1` together for the game A/B comparison.

### Live game comparison

The same process-local input sequence entered Begin Story in each 100-second
run, with native audio enabled and periodic screenshot readbacks disabled.
The comparison uses the last eight complete 120-frame intervals in each run,
all at the level entrance. FPS is total frames / total elapsed time, rather
than the arithmetic mean of FPS samples. This tests actual simulation, audio,
transport and native presentation together, in a hidden diagnostic window.

At 720p, disabling the new texture-reference and state caches gave **28.95 FPS**
over the selected 960 frames. The final v8 build gave **43.46 FPS**, about **50%
higher**, with 120-frame averages of 40.99-45.77 FPS. The initial v7 version had
inconsistent live results (28.08 FPS in its comparison run); retaining unchanged
textures across frames produced the measured improvement.

The v8 720p run still contained a 137 ms outlier, including its requested native
frame capture. These are bounded diagnostic results, not a promise of smooth
combat or a long-session FPS minimum. Logs: `work/hd4-720-baseline-dx8-live.log`
and `work/hd7-720-v8-dx8-live.log`.

The final 1080p run measured **37.08 FPS** over its selected 960 frames, with
120-frame averages of **35.94-38.18 FPS** and a 75.55 ms worst individual frame.
Its log is `work/hd8-1080-v8-dx8-live.log`. All bounded runs exited through the
100-second watchdog (exit 3); that exit is the time limit, not a gameplay verdict.
The final 1080p capture, `build/dx8-request-5008-frame-2890.bin`, starts with an
S2 dictionary reset and replays independently to a native 1920x1080 BMP.

### Captured combat rendering (first optimization, v7)

Three previously captured combat frames were replayed serially, with five warmup
iterations and 100 timed iterations per case. The baseline uses v6 payloads and
the state cache disabled; the new path uses equivalent v7 texture references
and the state cache enabled. Both use the existing content-based GPU texture
cache. Timing includes native rendering completion, without Present, audio,
or game simulation. These numbers are renderer cost, not gameplay FPS.

| Capture | 720p baseline → optimized | 1080p baseline → optimized |
| --- | --- | --- |
| 1661 / frame 2422 | 17.085 → 12.504 ms | 19.463 → 16.274 ms |
| 1662 / frame 4429 | 14.869 → 12.301 ms | 18.001 → 14.934 ms |
| 1681 / frame 3454 | 15.106 → 11.600 ms | 18.945 → 14.974 ms |

The average reduction across these frames is 23% at 720p and 18% at 1080p.
These measurements predate the final v8 cache's reuse across frames.
The converter can deduplicate identical textures across different guest addresses;
the live producer conservatively requires the same guest address as well.

Reproduce with `scripts/convert-texture-wire.py` and the worker's
`--benchmark packet.bin 100` command. Set `XML1_DX8_RESOLUTION` to `1280x720`
or `1920x1080`. Local benchmark logs are `work/hd-bench-*.log`.

### Regression evidence

- Three captured combat frames produce byte-identical native BMPs with both
  optimizations enabled versus the old protocol and uncached native state calls.
- Texture mutation, reuse across flushes and frames, explicit dictionary reset, duplicate/undefined/
  mismatched references, invalid IDs and invalid source dimensions are checked.
- Native 720p and 1080p tests exercise a nonzero viewport origin and partial
  ordered clear, comparing equivalent source-coordinate systems exactly.
- Existing native geometry, texture-coordinate, lighting, mip, culling,
  texture-cache collision/eviction and vblank tests pass.
- Generated BlockOnTime/InsertFence tests still verify completion only after
  the native acknowledgement, including pending fences and counter wrap.

Relevant tests: `scripts/test-dx8-batches.py`, `scripts/test-dx8-texture-cache.py`,
`scripts/test-dx8-wire.py`, `texture-wire-cache-test`, `video-settings-test` and
`graphics-fence-wait-test`. Pixel tests use local private game captures.

Full-level performance, long-session audio quality, and every effect at the
higher resolution still need human testing. This does not establish a locked
60 FPS or completion of the original fidelity goal.


## Tester intake check, 2026-09-15

Current staging passed a bounded 1080p 16:9 presentation smoke through gameplay;
no graphics or asset changes were needed. This supports engine tester handoff,
not complete game fidelity. Ran !GAME/X-Men Legends.exe from an unrelated
working directory, hidden and muted, using only process-local input.

All seven native captures were inspected individually in sequence:
1. Startup movie imagery (an indistinct animation moment; not full movie fidelity).
2. Main menu: textured 3D background, seven entries including Quit and prompts fit.
3. Story movie: RVN news imagery and complete two-line subtitle with margins.
4. Level arrival: Wolverine, HUD, world textures, shadows and translucent marker.
5. Movement/camera follow: enemies and scene remain intact; no distinct power
   effect is established merely by the requested quick-power key.
6. Pause: all entries/prompts fit over the retained level.
7. Resume: menu closes and enemies advance in gameplay.

All captures are native 1920x1080 (top-down BMPs). Reused accepted Options/Advanced
v212 staging and v213 saved-720p evidence in PC-OPTIONS-CONTROLS.md. No additional
4:3 or mixed-device smoke. Evidence: work/native-igb-menu-test/run-hd-v220.py,
native-v220.log, worker-v220.log, native-hd-v220-capture-1.bmp through -7.bmp,
and exit-v220.json. Exit 3 is the configured 135-second watchdog. UDATA and all
11 pre-existing save/settings/config baseline hashes are unchanged.

Game SHA256: 1cf4ed0104255a228edb04ae34b1947274adfc7f16218df2aeb3cbe70f9718a5.

Source confirms successful presents feed the half-second FPS title update and
the window class uses IDC_ARROW. Hidden runs do not exercise the visible title
or physical hover; that short human check remains open for tester intake.
Audio fidelity, every effect/movie, full-level completion and the multi-level
player matrix remain outside this bounded presentation check.


### Pause Options route

Follow-up v221 ran the same staged executable at 1080p. Both main.eng and
pause.eng use `openmenu options`; the shared menu links to the same Advanced
Options resource and settings model. Six native captures were inspected in
order: Pause, Options, Advanced, Back to Options, Back to Pause, resumed gameplay.
Both settings screens retain the paused level as their 3D background and fit
the output. Returning resumes the enemies and HUD correctly. No settings were
changed or applied in this navigation check. Evidence uses run-hd-v221.py,
native-v221.log, worker-v221.log, native-hd-v221-capture-1.bmp through -6.bmp
and exit-v221.json in work/native-igb-menu-test.

## 4K output (2026-10-22)

Supported widescreen output modes are now 1280x720, 1920x1080, 2560x1440 and
3840x2160. Advanced Options cycles through those modes; Apply and restart to
change the active render size. The default remains 1920x1080. Original 640x480
remains available through the INI. Manual configuration uses `pc-settings.ini`:

```ini
[PC]
Width=3840
Height=2160
```

The previous INI validator rejected 4K before startup, and the DX8 worker had a
second independent resolution whitelist. INI validation, the native menu and
renderer now share the supported-mode definition. Window fitting retains the
chosen render resolution, even when the desktop is smaller.

Validation: optimized Release build and PC controls tests passed, including
manual 4K INI loading, saved-settings round trips, native menu cycling/display,
and rejection of unsupported dimensions. Embedded renderer and system-only DLL
imports verified. Headless/muted game run used the manual INI (no resolution
environment override), with hidden window fitting enabled on a 1920x1080 desktop.
The actual render buffer and every native BMP were 3840x2160; fitted client size
was 1765x993. No desktop input or capture was used.

Native captures inspected individually: initial black startup frames (1-2),
story FMV/subtitles (3), level-one Wolverine/scenery/HUD (4), movement and changed
camera position (5), pause menu (6), Advanced Options displaying 3840x2160 over
level scenery (7-8), objectives (9), quit confirmation (10), and return to the
Cerebro main menu (11). The in-game resolution cycle logged all four widescreen
modes. This was a bounded visual/functionality check, not a full combat or
performance acceptance campaign. Audio was muted. Physical 4K-monitor behavior,
other GPUs, FSAA at 4K and a separate 1440p gameplay run were not tested.

Evidence stays in `work/4k-validation/`, including the process-local harness,
private settings/profile/temp folders, native captures and logs. Asset links
resolve within this repository. Owned test processes were closed. Staged EXE:
`XBOXgame/X-Men Legends.exe`, SHA-256
`5a5b6e5c35c75fea250488c446e08ce73c86cc07232a235fb9cee93f8334eb20`.
