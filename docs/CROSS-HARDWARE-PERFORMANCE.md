# Cross-hardware renderer changes, September 16, 2026

The six implementation changes below are staged for testing. Performance TODO
#2 remains open until the user personally tests and accepts the candidate on
multiple machines at home. The local Ryzen 7 8745HS / Radeon 780M measurements
cannot establish that the reported Intel i5-12500H / RTX 3050 problem is resolved.
Rendering still uses system Direct3D 8. Game-time calculation and the 60 FPS
cadence limit were not changed in this pass.

## Changes and safeguards

1. **Wait for GPU completion when the guest actually needs completion.** Ordinary
   kickoff retains immutable submitted bytes in order; BlockOnTime and swap still
   obtain actual renderer completion. Tracing identified the XDK software kickoff
   store at `0x35FC76`, which previously advanced the completed tag inline. The
   generated-code guard now prevents that premature store during live rendering.
   The regression executes the original generated kickoff, InsertFence and
   BlockOnTime with delayed acknowledgements, including tag wrap and ABI checks.
2. **Select and identify the actual rendering process.** The embedded Win32
   worker exports NVIDIA and AMD high-performance hints. Its verified cache has
   a stable executable path for Windows graphics preferences, with a verified
   versioned fallback if an older running game locks the stable file. The game
   records the path actually used. `graphicsAdapter = auto` remains the default;
   an explicit exposed DX8 adapter index is accepted and validated. Reports name
   the selected adapter and display separately from the game window's display.
   Driver hints do not override Windows policy or prove which physical GPU a
   hybrid driver ultimately uses. That requires measurement on the target laptop.
3. **Block on the real display's vertical blank.** The display helper calls
   D3DKMTWaitForVerticalBlankEvent instead of repeatedly polling the scanline.
   The rendering window publishes its monitor through the versioned 32/64-bit
   shared channel. The hidden helper cannot overwrite that display selection.
   There is no timer replacement or synthetic guest completion. A native test
   observed 30 waits over 487.317 ms with 0.000 ms measured thread CPU time.
4. **Batch ordered draw/clear submissions.** The B1 envelope carries multiple
   commands with one transport acknowledgement. Source-size changes, clears,
   texture mutations and final completion/presentation keep their original order.
   Nested batches and malformed geometry/token references are rejected. Recorded
   older packet versions still replay; new captures require the updated worker.
5. **Retain indexed geometry and reuse buffers.** V9 sends unique vertices and
   compact 16-bit indices. Dynamic native VB/IB rings use NOOVERWRITE only on new
   ranges and DISCARD on wrap, preserving queued GPU work. Texture bindings join
   the existing state cache. The original UP path remains available for diagnostic
   comparisons through `XML1_DX8_LEGACY_GEOMETRY=1`.
6. **Replace individual texture entries.** Address buckets avoid scanning the
   entire dictionary, and ordered per-token LRU eviction replaces the full-cache
   reset/inline-upload behavior. Tests cover mutations, capacity pressure and a
   definition that evicts several entries to meet the 64 MiB bound. Immutable
   snapshots and exact byte comparisons remain necessary: guest physical-memory
   aliases cannot safely use VirtualAlloc write-watch. This change does not claim
   to eliminate texture comparison bandwidth.

## Matched local measurement

Both runs used hidden, muted native 1920x1080 rendering, the same private Game1
save and stationary Central Park view. The final 1,800 presentations of each run
were compared. FPS uses total frame time, not an arithmetic mean of FPS values.
Both native captures from each run were inspected; the environment, Wolverine,
HUD and Xtraction effects were present. Save hashes were unchanged.

| Measurement | Before | Candidate |
| --- | ---: | ---: |
| FPS | 59.24 | 59.96 |
| Maximum frame time, ms | 57.611 | 23.770 |
| Renderer acknowledgements/frame | 12.56 | 2.00 |
| Actual completion waits/frame | 4.37 | 2.00 |
| Completion wait wall time/frame, ms | 5.54 | 3.74 |
| Total renderer work wall time/frame, ms | 7.14 | 5.42 |
| Decode/submit wall time/frame, ms | 1.21 | 1.23 |

This scene approaches the cap. It demonstrates fewer round trips and lower local
completion overhead, not an uncapped throughput gain or a discrete-GPU result.
The final executable adds diagnostic display fields and preserves the state-cache
disable switch after this comparison; its subsequent gameplay smoke is separate
from the paired benchmark. Evidence: `work/newgame-plus/hardware-ab.json` and
`hardware-{baseline,candidate}-v1/` beneath that directory.

## Validation and remaining coverage

- Native pixel comparisons cover indexed geometry versus the UP reference,
  texture mutation/eviction, batched versus separate submission and 100,000 draws
  that wrap both vertex and index buffers. Existing lighting, primitive-type,
  multitexture, mip-chain, clear and captured-combat replay checks passed.
- Actual generated fence waits, bounded texture-cache tests, configuration tests,
  native vertical-blank waiting and the 64-bit/32-bit control/display channel pass.
- The final build's native captures were individually inspected through intro
  logo FMV, Cerebro main menu, save load into Central Park, movement, pause Options
  with the world still visible, and return to gameplay. Its four-minute watchdog
  exit was intentional; private UDATA hashes were unchanged. Game cadence logs
  track wall time. Diagnostic PCM capture preserved 48 kHz pacing. The run was
  muted, so audible crackle and device-output quality remain unverified.
- A separate launch of the actual staged EXE from an unrelated working directory
  used the process-local private data-root switch. Its seven native captures were
  inspected in order: intro, Cerebro, loaded Central Park, enemy encounter with
  health loss, defeat, game-over menu and a changed menu selection. This confirms
  rendering and game progression through that brief encounter, not sustained
  successful combat. Earlier route attempts did not reach an enemy and are not
  counted as combat validation. The final run exited at its 150-second watchdog;
  private UDATA hashes were unchanged and renderer/display error logs were empty.
  Evidence: `work/newgame-plus/hardware-staged-combat-v3/`. Native capture and PCM
  recording add overhead; this run is not the matched benchmark above.
  **Remaining finding:** after defeat, the PCM-enabled run recorded audio submit
  gaps of 956 ms and 2,091 ms, with queue-empty observations and a concurrent
  multi-second frame stall. The renderer/display error logs being empty does not
  make this a clean performance/audio pass.
- Repeating the route **without PCM recording** reached enemy attacks, player
  attacks with hit effects, broken benches and continued movement. All seven
  native captures were inspected individually in order. Across 74 audio-queue
  summaries there were zero empty observations and a maximum submit gap of
  12.902 ms. The previous multi-second stall did not recur; saves were unchanged
  and renderer/display error logs were empty. Evidence:
  `work/newgame-plus/hardware-staged-combat-no-pcm/`. Capture overhead is a
  plausible contributor, not a proven diagnosis: the encounter's outcome also
  differed. Retain the earlier stall evidence for follow-up instead of declaring
  audio fixed. This run also remained muted.
- Hybrid GPU selection, monitor hotplug, Intel/NVIDIA performance, sustained
  multi-level play and the user's other home machines remain unverified. A
  successful local run is not acceptance of TODO #2.

Player executable: `XBOXgame/X-Men Legends.exe`, SHA256
`408e2fb4ab57a081419c944536aa02a2da09e5dcd21904fc452c5ba9c455f25c`.
The exact embedded worker matches
`build/optimized/embedded-renderer/Release/xml1-dx8-worker.exe` and both images
import only Windows system DLLs. The previous player EXE and configuration are
preserved under `work/player-stage-backups/hardware-20260916/`.

The already-in-progress NewGame+ source remains part of this candidate. This
performance pass does not close or certify NewGame+ carry-over validation.

## Follow-up: old-PC CPU pass (October 30, 2026)

[Old-PC performance](OLD-PC-PERFORMANCE.md) removes two spinning loops (the
NV2A acknowledgement thread and the retail frame limiter's clock poll), cutting
game-process CPU from about 1.6 to 0.5 core equivalents on an emulated 4-core
machine with unchanged rendering. Old-hardware results remain unverified.
