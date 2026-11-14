# Issue 33: startup exits during the first graphics completion

The reporter's logs identify a Direct3D 8 readback failure, not a demonstrated
installation failure. The Intel Arc adapter successfully creates a windowed
1920x1080 HAL device with FSAA off and receives two draws. Before the first
completion, `native_readback.surface(device, true, &surface)` returns
`0x8876086c` (`D3DERR_INVALIDCALL`) at `dx8_replay.h:246`. The renderer throws and
exits; the host then reports `graphics acknowledgement failed`, Win32 109
(broken pipe). The latter is a consequence of the renderer exit.

This log localizes the failure to the mandatory readback helper, but does not
distinguish GetBackBuffer, GetDesc, CreateImageSurface or CopyRects. The leading
compatibility hypothesis is rejection of the 1x1 partial backbuffer copy. Do
not claim Intel-hardware confirmation from tests on another GPU, or attribute
the issue to the separate concurrent-launch cache race.

## Change

Before displaying the window or consuming guest commands, validate completion
and full-size capture, including LockRect/UnlockRect. Select the one-pixel path
where supported, otherwise validate a full-size image copy. There is no
failure-triggered path selection while processing guest work.

If image readback initialization is rejected, automatically recreate the device
with D3DPRESENTFLAG_LOCKABLE_BACKBUFFER and FSAA off. Validate direct backbuffer
locking before accepting game work. This fallback uses neither image-surface
allocation nor CopyRects, so it covers rejection of both copy sizes as well as
image-surface lock rejection. Publish the effective FSAA-off setting and support
mask to the running options UI without changing the saved configuration.
No player relaunch, settings edit or log submission is needed to activate it.

Completion still blocks on LockRect/UnlockRect; it never acknowledges an
unsynchronized or stale frame. Reset invalidates the selected path. Device loss,
allocation exhaustion and failures of the direct-lock device remain real errors;
this does not promise recovery from arbitrary driver or hardware failure.

Diagnostic game runs with XML1_TEST_GAME_DIR now pass a save/partition directory
inside that test root rather than writing partition images into host AppData.
The existing process-local-test gate remains required. Normal launch behavior
is unchanged.

## Validation

On the local AMD Radeon 780M, the native DX8 readback test passed 32 changing
frames in each of 20 scenarios (requested FSAA off/2x/4x/8x, each with normal
readback, rejected pixel copy, both copies rejected, capture-only rejection,
and image LockRect rejection). Direct-lock scenarios recreate a non-MSAA device
and assert zero copy calls while checking fresh completion/capture pixels.
Tests also check resolved edges, reset invalidation, device-loss propagation,
failed initialization and rejected 1x1 allocation. Ordered-submission and
texture-replacement pixel tests passed.

The optimized Release build and embedded-renderer integrity/import checks
passed. The import checker now recognizes windowscodecs.dll, an existing
Windows system dependency of the renderer.

The earlier candidate completed first-run asset preparation and rendered the
Raven intro and a story cinematic with subtitles. A subsequent launch with
the same prepared assets also rendered a cinematic without a readback error.
Three native captures were inspected across these runs. They establish intro
and movie output, not main-menu interaction or gameplay correctness. Audio
was muted and is unverified. The first run ended at the external 175-second
watchdog (including asset preparation); the second was deliberately stopped
after capture. Neither termination was a readback crash.

Current candidate executable SHA256:
`5634f50f9de5b6c3a1272d03f41d95b930c2888592ff688b0db2f644fbd20478`.

The current candidate passed startup completion/capture validation on AMD,
then rendered the Raven intro (native capture inspected). That bounded run
was deliberately stopped after capture. Direct compatibility mode is covered
by the native fault-injected pixel tests; it was not selected by this GPU in
the game run. Gameplay and audio remain unverified.

The fallback can cost more bandwidth and time because it reads the full frame,
and direct mode disables FSAA. The one-pixel path remains available on supporting
devices. Tests do not
establish the reporter's Intel performance or successful startup on that GPU.

All test artifacts and the single playable candidate live in ignored
`XBOXgame/`. The original ISO is read-only input. Its extracted default.xbe
matches the committed symbol registry SHA256. No assets or reporter logs are
included in this commit. Issue 33 remains open pending Intel verification.
