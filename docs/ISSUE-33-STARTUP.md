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

Keep the existing one-pixel completion path where it works. On INVALIDCALL
from its allocation/copy, retry a full-size image surface and full backbuffer
copy. Remember that successful fallback for subsequent completions; clear it
with the cached surfaces. Capture and completion reuse the same full-size
surface, but each request copies fresh pixels. The caller still locks/unlocks
the returned surface before acknowledging GPU completion. Device loss and
failed fallback remain errors, never successful fences.

New diagnostics distinguish image allocation from partial/full CopyRects and
include dimensions, format, multisampling and HRESULT. If Intel also rejects
full-size readback, those diagnostics provide the next required evidence.

Diagnostic game runs with XML1_TEST_GAME_DIR now pass a save/partition directory
inside that test root rather than writing partition images into host AppData.
The existing process-local-test gate remains required. Normal launch behavior
is unchanged.

## Validation

On the local AMD Radeon 780M, the native DX8 readback test passed 32 changing
frames each with FSAA off/2x/4x/8x, both normally and with injected INVALIDCALL
for the one-pixel copy. Tests check actual pixel values and resolved edges,
one-time fallback selection, reset/reprobe, failed full-copy propagation,
device-loss propagation and a rejected 1x1 allocation. The ordered-submission
pixel tests also passed (draw/clear order, completion and texture reuse).

The optimized Release build and embedded-renderer integrity/import checks
passed. The import checker now recognizes windowscodecs.dll, an existing
Windows system dependency of the renderer.

The single candidate completed first-run asset preparation and rendered the
Raven intro and a story cinematic with subtitles. A subsequent launch with
the same prepared assets also rendered a cinematic without a readback error.
Three native captures were inspected across these runs. They establish intro
and movie output, not main-menu interaction or gameplay correctness. Audio
was muted and is unverified. The first run ended at the external 175-second
watchdog (including asset preparation); the second was deliberately stopped
after capture. Neither termination was a readback crash.

Candidate executable SHA256:
`230a1224679a80a4045500b1334b5765e35d6afefa50fc4d9f52f56c30ee9ae8`.

The fallback can cost more bandwidth and time because it reads the full frame;
the one-pixel path remains unchanged on supporting devices. Tests do not
establish the reporter's Intel performance or successful startup on that GPU.

All test artifacts and the single playable candidate live in ignored
`XBOXgame/`. The original ISO is read-only input. Its extracted default.xbe
matches the committed symbol registry SHA256. No assets or reporter logs are
included in this commit. Issue 33 remains open pending Intel verification.
