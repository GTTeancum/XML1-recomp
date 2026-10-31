# Audio bring-up

**Superseded:** XDK DirectSound is now replaced natively, and the APU is no
longer emulated. See [AUDIO-HLE-PLAN.md](AUDIO-HLE-PLAN.md). The history below
describes the emulation path it replaced.

The live game produces original DSP audio through XAudio2 with mapped DMA and
stateful voice resampling. Consumer-paced output now produces samples near real time in boot115; complete
audio fidelity and synchronization remain unverified. Details below retain the
bring-up history.

XboxRecomp at 3706cefa includes XAudio2 error handling (PR31) and synchronized
DirectSound cursors (PR24). Its GP/EP DSP file is explicitly a passthrough stub.
RECOMP_APU_DSP_ACK clears command words without executing DSP programs; it is
not enabled for XML1. The game host now initializes the APU and routes its MMIO
when run with `-APU`; the GP/EP source is replaced by real interpreter processing.

## Interpreter dependency

external/xemu-dsp contains xemu's C DSP56300 interpreter and DMA implementation
from 75650bd8cd91945f7b79774e2cee0b200ca373ff. See its SOURCE.md and COPYING.
The narrow adapters remove UI configuration/JIT dependencies and provide the
allocation/endian/trace definitions required by standalone MSVC compilation.
Instruction arithmetic and DMA behavior come from the pinned implementation.

Build and run the adapter checks:

```powershell
cmake -S external/xemu-dsp -B build/dsp -A x64
cmake --build build/dsp --config Release
./build/dsp/Release/dsp-core-test.exe
```

The tests execute 640 immediate-add vectors through the instruction decoder,
including both accumulators, positive/negative boundaries and extended carries.
They also execute scratch-memory DMA in both directions with neighboring-byte
guards and verify bootstrap word masking. These checks pass on MSVC; they do
not validate full DSP instruction coverage, timing, effects or game audio.

## GP/EP connection

src/apu_dsp_real.c adapts the pinned xemu GP/EP reset, memory registers, DMA and
frame processing. scripts/adapt-apu-dsp.py records the standalone adaptations;
patches/xboxrecomp-dsp-integration.patch replaces stale toolkit DSP structures,
routes GP/EP MMIO and connects cleanup. It applies cleanly to the pinned source.

`apu-dsp-test` passes GP reset/bootstrap across scatter/gather pages and GP/EP
X/Y/P/mix-buffer register round-trips. It opens no audio device. The existing
640-vector core/DMA/bootstrap test also still passes in the combined build.

`run-boot-probe.ps1 -Seconds 20 -TestPad -LiveDX8 -APU` now exercises the APU
register handler. boot-020/021 reaches an initialization/cleanup loop with
0x8007000E on the guest stack, earlier than the previous DSP command wait.
This was not an out-of-memory condition: a subsequent native-thread probe located
the actual wait in the AC97 channel-reset poll. Startup register handling now
self-clears reset and preserves interrupt enables, tested without an audio device.
The contiguous-window MmGetPhysicalAddress fix then allows DSP scatter/gather DMA
to read physical offsets. boot-025 starts the APU, creates the audio worker and
opens x_common.zsM, before rejecting DSP opcode 0x0c1890 at PC 0x0519.
EXTRACTU immediate is now implemented for normal arithmetic mode from NXP's
DSP56300FM Rev. 5, pp. 13-72/73; 17,040 independent instruction vectors pass.
Sixteen-bit arithmetic mode remains explicitly unsupported. boot-026/027 passes
that instruction and reads the common sound bank, then stops at a Y-memory
bounds assertion: PC 0x031e, opcode 0x5ee800, address 0x0fc9 (R0=0x0fc2, N0=7).
Program/register context is recorded before the original assertion; mapping,
program setup and decoding still need investigation. AC97 DMA progress is not implemented.

boot-029 identifies that failure as EP execution. The toolkit advertised
0x00010001 (mono plus AC3), incorrectly labeled stereo in its source, while
the native output is two-channel PCM. The fifth toolkit patch reports stereo
PCM (0), verified against Cxbx's src/common/EmuEEPROM.h definitions and by a
settings API test. boot-030/031 passes this startup point and loads x_voice.zsS;
the sampled game thread now waits in D3D sub_0035FDE0. The encoded-output DSP
failure remains unresolved; stereo output correctness is not yet verified.

## Remaining integration

- Resolve APU physical memory correctly. The current diagnostic runtime backs
  low guest RAM and the 0x80000000 contiguous allocation window separately;
  the current connection uses contiguous RAM for the observed DSP allocations.
  Low-memory PCM buffers and all physical-address translations remain unverified.
- Diagnose the Y-memory bounds failure, then exercise the game's
  actual GP/EP programs beyond the synthetic integration tests.
- Validate the actual command completion, decoded/mixed output and timing through
  native logs/captures. Do not replace the wait with a success-only return.

Current evidence: build/boot-019-live-dx8.log, build/build-dsp-test.log and the
executed dsp-core-test output. No FMV/audio milestone is claimed.

## Native DSP output routing and silent APU diagnosis (boot080–082)

The inherited monitor discarded the completed256-frame DSP buffer, cleared it,
and filled a1024-frame XAudio2 submission from a separate HLE software mixer.
Root builds now enable RECOMP_APU_NATIVE_DSP_OUTPUT through ordered toolkit
patch10, submitting the actual256 stereo samples and preserving them across
bounded XAudio2 backpressure. Inactive XAudio2/submission failure is explicit.
The legacy HLE mixer remains the upstream default when the macro is absent.

src/apu_output.c optionally captures precisely the submitted samples with
XML1_CAPTURE_DSP_PCM=1 to build/apu-dsp-output.pcm (s16le,48kHz,stereo) and a
wall-time/sample-count CSV. This is own-process PCM, not host loopback capture.
The output regression verifies stereo payload preservation across two rejected
submissions, with no audio device opened. GP/EP bootstrap/MMIO tests still pass;
the DSP adapter regenerates byte-identically and all ten patches are idempotent.

boot080/081 captures are entirely zero. GP/EP reset flags are both3, but sampled
VP mixbins are zero. boot082 then identifies an APU transition from active
FECTL100F to trapped FECTL1FEF, ISTS60, IEND9; DSP frame processing stops while
the output path continues silence. Standalone pci_irq_assert is a stub. The
next required work is real process-local delivery to the registered guest ISR,
plus the earlier silent voice/memory path. Do not bypass the trap or pretend
completion. No audible fidelity milestone is established. Sample production is
also slower than48kHz wall time (192000 frames in about4.96s), requiring timing
validation after interrupt/voice processing works. FMV timing remains open.

## APU interrupt delivery (boot083–084)

Ordered patch11 publishes the APU interrupt level to the connected guest vector5
handler0037342F (context010810F4). The kernel dispatcher invokes it on its guest
stack/TIB, at the registered IRQL, and checks stack cleanup. The guest handler
acknowledges the APU registers; the implementation does not clear the trap on its
behalf. KeGetCurrentIrql now returns the actual thread-local tracked IRQL rather
than constant0. Dispatcher creation is shared/synchronized with timer startup.

boot083/084 show claimed interrupts and transitions from trappedFECTL1FEF back
to active1F0F, with DSP execution continuing past20480 frames. The synthetic
device IRQ regression verifies context, device IRQL, acknowledgement, no repeat
after deassertion, reassertion, stack cleanup and restored IRQL. Prior thread
dispatch and PCM payload/backpressure regressions still pass. All11 ordered
patch checks and DSP adapter regeneration pass.

Audio remains silent. boot084 reports VP voice table base00848000,4–6 active
voices, and heads0043/004C, so voice activation occurs. First activevoice64 is a
looping16-bit mono voice (format5200E0E6); it may be a persistent silent helper.
Do not infer the contents of the other active voices from this first voice.
Next: trace all active voice source/SG or stream segments and samples before
mixing, and verify low guest RAM versus contiguous physical backing. The current
voice_resample ignores pitch ratio and will also need real resampling for audio
fidelity; its separate libsamplerate shim is stubbed but is not used by that path.
No recognizable FMV or audible correctness milestone has been established.


## Pageable audio DMA mapping (boot085–093)

- Voice/gain tracing established that movie voice76 becomes unmuted but reads
  zeros: MmGetPhysicalAddress returned low guest VA offsets into an unrelated
  contiguous backing allocation. Ordered patch12 routes APU VP/GP/EP physical
  transfers through a live page map. Low guest pages reserve identities from
  the same atomic contiguous allocator, avoiding physical offset collisions.
- The map preserves offsets, supports physical and guest page zero, and splits
  DMA at physical page boundaries. CPU writes and DMA writes share guest bytes.
  Synthetic tests pass for stable identities, collision avoidance, independent
  contiguous storage and transfers across physically adjacent but virtually
  distant pages. GP/EP bootstrap/MMIO, output retry/payload, IRQ and kernel
  dispatch tests also pass. Adapter regeneration is identical. Overlapping
  patches are now checked by reversing the complete stack in a temporary copy;
  all twelve validate without changing the checkout.
- boot092 produced975562 nonzero stereo sample values, peak20854, no clipping
  by17.444 seconds. boot093 completed its60-second diagnostic bound(exit3),
  produced900808 nonzero values with the same peak and no clipping, but audio
  subsequently became silent and presentation stopped afterframe780. This is
  a DMA correctness milestone, not a claim of correct audio or movie playback.
  Native captures remain black; no duplicate screenshot posted.
- Next: resolve movie/audio progression and implement correct voice resampling;
  then revalidate level1 input after the IRQ and physical-memory changes.
  Page mappings currently persist for the process lifetime, as does the existing
  contiguous arena allocator. No full virtual-memory remap/free semantics claimed.


## Movie virtual-memory release (boot097–101)

- boot099 confirms repeated MEM_RELEASE requests for movie buffers0136D000,
  0156E000,0176F000,etc. Each buffer is2097200 bytes. The old low-address VM
  free fell through to native VirtualFree, despite allocating from xbox_HeapAlloc.
  No guest blocks were freed; boot096 had22 live blocks and exhausted the heap.
- Ordered patch13 rounds VM allocations to pages and records low heap-backed
  VM ownership/state/protection in guest_vmem. Release returns the owning block
  to xbox_HeapFree. Decommit/recommit and queries use that same metadata; an
  interior release is rejected. The synthetic VM test now verifies low-address
  query, decommit/recommit, neighboring-byte preservation, exact-owner release
  and reuse in addition to the existing high-address VM tests. All pass.
- boot100(45s) and boot101(30s, native capture every presentation) finish at
  diagnostic bound3 without movie heap exhaustion. Repeated movie releases
  reuse0136D000. Thirteen-patch reverse-stack validation passes.
- Movie output remains black: boot101's renderer upload atframe240 contains
  242574 colored pixels and307200 alpha-bearing pixels in the1024x512 ARGB
  texture. The F0000000 aperture is already a view of contiguous memory, and
  upload contents confirm that path. Next inspect the actual movie draw packet,
  transforms/UVs/blending and native output rather than assuming another alias
  mismatch. No new screenshot posted; no FMV/audio fidelity claim.


## Stateful voice resampling (boot112)

- Added libsamplerate0.2.2 as a pinned submodule at
  c96f5e3de9c4488f4e6c97f59f5245f22fda22f7 (annotated release tag resolves here).
  Its BSD license is retained in external/libsamplerate/COPYING. CMake links
  the real library and enables RECOMP_APU_LIBSAMPLERATE, replacing the shim's
  dummy SRC functions only for this configuration.
- Ordered patch15 restores xemu's callback-based SINC_FASTEST resampling path
  from the previously pinned reference. Rate changes now affect source-frame
  consumption. Starvation supplies silence without a zero-progress callback
  loop; filters reset with voice/VP reset and are freed on VP finalization.
  The exact Xbox interpolation kernel remains unverified.
- Native actual-VP regression fetches stereo PCM through the real SG path and
  verifies rates0.5,1,48000/44100,2; expected consumption and tone crossings;
  stereo preservation; identical output across32/64-frame reads; reset clears
  history; finalization releases state. GP/EP bootstrap/MMIO test also passes.
  Fifteen-patch reverse-stack validation passes. Setup now creates/installs the
  Python environment before invoking the Python-backed patch-stack checker.
- boot112 finishes40s bound3 without fatal guards or heap exhaustion. Native
  output reaches1440000 sample frames(30s) by38.663 wall seconds,2305818 nonzero
  stereo values, peak27417 and no clipping. Pitch path is improved, but output
  is still slower than real time and full A/V fidelity is not established.
  Next investigate pacing/performance, then revalidate movies/menu/level1.


## Consumer-paced audio output (boot113–115)

- Profiling boot113 separates throttle time from processing/output: by24576 VP
  frames,6.08s was spent in throttle and14.56s in processing/output. The old
  throttle periodically rebased its clock after overruns and added waits on top
  of the native output path; 30s of PCM had required38.663s in boot112.
- Ordered patch16 adds an XAudio2 voice callback event for completed source
  buffers. Root PCM output waits for this event under backpressure instead of
  polling Sleep(1). The native-DSP path bypasses the separate wall-clock
  throttle; XAudio2's48kHz consumer and bounded queue set the pace.
- boot114 showed that retaining the APU device mutex during output waits would
  starve guest register writes. Completed256-frame PCM blocks are now copied
  locally, the mutex is released around output, then reacquired. A native test
  uses another own-process thread to prove the mutex is available during the
  callback and held afterward, while checking payload and buffer clearing.
- boot115 ends30s bound3 with nonzero audio:1344000 sample frames(28s) at28.010
  wall seconds,1938666 nonzero stereo values, peak17301, no clipping or fatal
  guard. This establishes near-real-time production in this run, not full
  audible fidelity or movie synchronization. Movie presentation remains slow.
- Output retry/payload/event-wait test, output mutex test, actual VP resampling
  and GP/EP bootstrap tests pass. Sixteen-patch reverse-stack validation passes.
  Next investigate movie processing speed and revalidate menu/level1 with audio.


Long-run failures remain: boot122 asserts on a zero streaming segment address;
patch17 records descriptor context without bypassing the assertion. boot124
instead completes the intro sequence and then blocks the main thread entering
DirectSound critical section0037A70C. Lock ownership/recursion and guest IRQ/DPC
interaction are the next investigation. Correct sustained audio is not verified.


The zero-offset failure is now explained: boot127 records guest80000000 passed
to MmGetPhysicalAddress at0037800F and returned as physical0 immediately before
the assertion. Patch19 accepts valid physical0; actual stream-reader regressions
verify both16-bit PCM and known stereo ADPCM at that address. Patch18 separately
publishes IRQL to guest fs:[0x24] and runs DPCs at dispatch level. boot128 reaches
the main menu with both fixes. Full audio fidelity and level1 remain unverified.


Audio comparison remains weak even with independent native vblank observation.
XML1_CAPTURE_APU_MIX optionally records48-kHz stereo mixbins0/1 immediately before
DSP processing as build/apu-premix-stereo.f32. Their mismatch with the decoded
movie reference shows the final DSP/output stage is not the sole investigation.
scripts/compare-movie-audio.py accepts s16 PCM or --native-format f32 captures;
its exploratory normalized correlations exclude quiet windows and do not certify
perceptual quality, channel routing or full-band frequency response.

Diagnostic patch20 compares SSL and voice format fields without changing them.
boot136 voice68 agrees on ADPCM container2, samples-per-block2, stereo1, with
valid physical0. This does not support overriding voice fields from descriptors.
boot135 sustains APU output while reaching level1 and accepting movement, but
reference waveform mismatch and full audio fidelity remain unresolved.

Pre-resampling source capture is now available with XML1_CAPTURE_VOICE_SOURCE
set to a decimal voice ID0..255. It writes stereo float32 source samples plus
CSV format/base/offset records. This is fetched guest audio, before any SRC,
mixing, GP/EP DSP or XAudio2 submission; it is not host audio capture.

boot140's first movie voice76 (records3776..984800, format5A01E0E6/base2124)
contains538080 unchanged same-position ring frames out of981024 (54.85%);
519670 of those are nonzero. Reproduce with scripts/analyze-voice-ring.py and
work/boot140-voice76.f32/.csv, --begin 3776 --end 984800.
Raw source also mismatches decoded i102 before SRC. Refill timing/source decode
are current leads. Do not remove repetitions from runtime audio: unchanged
samples may be legitimate, and the current evidence does not prove underrun.

Shared native vblank completion fixes the large repeated-ring-read symptom in
boot145:0 unchanged frames out of460064 for the first movie, versus538080 out
of981024 before. Concurrent callers now wake for the same actual raster edge
instead of each consuming a separate edge. The first movie's source duration
is ~10.432s versus the decoded reference's ~10.400s. Raw-source waveform windows
now align at their expected times. Final DSP energy correlation reaches0.935,
but waveform correlation remains substantially weaker; audible fidelity and
remaining processing differences still require verification.

Actual GP scratch output and EP scratch input now have paired captures (boot152).
Both preserve close waveform alignment. The remaining difference occurs after
EP input. The optional newer DSP backend is a diagnostic experiment and does
not yet play this title's EP program successfully; C remains the default.
See DSP-COMPARISON.md. No complete audio-fidelity claim is made.


## Game-sound reference

scripts/zsnd-reference.py decodes a named sound out of the disc's ZSND banks so a
captured voice can be compared against known-correct samples. Until now the only
reference was decoded movie audio, which is long, stereo and continuously mixed;
a menu cue is short, mono and played on its own, which isolates a smaller part of
the path. The script takes the extracted sounds/zsds directory and a sound name,
reports the bank and format, and writes a raw interleaved stereo s16 file for
compare-movie-audio.py, or a WAV at the bank's own rate for listening.

Use --rate 48000 (the default) against final output, and --rate 0 against the
pre-SRC capture from XML1_CAPTURE_VOICE_SOURCE, which is at the source rate.
Resampling is linear, so the resampled reference supports alignment and envelope
work rather than full-band fidelity claims; --rate 0 is unresampled.

The decoder was checked against ffmpeg's adpcm_ima_xbox on the same bank data:
menus/menu_flip (1664 samples), menus/menu_accept (5312) and music/menu_c
(988736 per channel) decode sample-for-sample identically. That establishes the
reference itself, not any property of the port's output.

The bank layout (ZSND/XBOX header, 8-byte hash entries over the PJW hash of the
upper-cased name, 24-byte sounds, 28-byte samples, 84-byte sample files) and the
ADPCM block layout are documented in the remake project's Docs/02_AUDIO_RESEARCH.md.

### Recorded upstream observation

external/xboxrecomp src/apu/apu_regs.h:336 defines ADPCM_SAMPLES_PER_BLOCK as 64
with a FIXME asking whether it should be 65. The decode above is evidence that 64
is correct: an Xbox ADPCM block is 36 bytes per channel and carries the header
sample plus 63 coded samples, and decoding on that basis reproduces ffmpeg's
output exactly, while 65 samples per block drifts by one sample per block. The
pinned revision is unchanged; this is recorded for an upstream report.


## Frame-rate-coupled break-up

A tester reports that the output breaks up whenever the frame rate falls below
about 50 FPS, and is clean above it. That rules out the sample path: a decoder
produces the same bytes at any frame rate, and the reference check above shows
the bank data itself decodes exactly.

Consumption pacing already decouples production from the renderer in principle.
With RECOMP_APU_NATIVE_DSP_OUTPUT the wall-clock throttle returns immediately and
mcpx_apu_frame_thread is paced by XAudio2 accepting buffers, which is the correct
arrangement. The coupling that remains is scheduling: that thread blocks on the
device for most of its period but still needs a burst of CPU for VP and DSP work
every 256-sample block, or 5.33 ms, and nothing raises it above normal priority.
When the frame loop saturates the CPU - the condition the low-FPS item already
tracks - the audio thread is delayed past the device's demand, the queue drains
and the output breaks up. The 50 FPS boundary is where the machine stops having
spare time for it, not a property of audio code.

patches/xboxrecomp-audio-thread-priority.patch raises that thread to
THREAD_PRIORITY_HIGHEST and logs when the call fails. TIME_CRITICAL was rejected
deliberately: it would take CPU from a frame loop that is already the bottleneck.
This does not raise the frame rate and is not a substitute for the performance
work; it stops audio degrading as a side effect of a slow frame.

The diagnosis can be checked without rebuilding by starting the staged executable
at Windows High priority and reproducing the same low-FPS scene. If the break-up
disappears while the frame rate stays low, scheduling is confirmed as the cause.
Audible verification on a real low-FPS scene is required before treating this as
resolved; no fidelity claim is made here.

## Hardware voices across level changes

A session that changed level nine times closed with "no free voice for
CreateSoundBuffer". The HLE gave every buffer a mixer voice for its whole life
and allowed 512. The game's bank loader (00191130) creates every sound with
DSBCAPS_LOCDEFER (flags 0x400A0) and keeps recently used banks loaded across
levels, so loaded sounds piled up: about 30 more stayed loaded after each level
change, plus a burst of 150-180 while a level played.

The XDK code compiled into the game handles this differently, and the HLE now
follows it. The voice manager starts with 192 2D and 64 3D hardware voices
(00372B51); a buffer flagged 0x200010 draws from the 3D pool. AllocateVoices
(00372BCD) returns DSERR_NOFREEVOICE (0x88780032) when the pool is empty. A
buffer takes its voice at creation (003715FB) unless it is deferred, in which
case Play takes it (00376AC1) and the buffer gives it back when playback stops
(00376ED7 -> 00376DA1 -> FreeVoices 00372C5E). Buffers themselves are heap
objects limited only by memory, so the HLE handle pools and mixer state now grow
on demand instead of using fixed tables. Streams are created without the defer
flag and keep their voice from creation, as in the XDK.

A run of 24 level changes in one session completed without a fatal error and
never found the hardware pool empty (4,672 buffers created). The run was muted:
it shows that sound buffers no longer exhaust a fixed pool, not that every sound
is audibly correct. dsound-mixer-test covers the pool sizes, deferred take and
return, release on a natural end and on free, and the separate 3D pool.

## Level music layout

XML1_DSOUND_TRACE now also logs SetFormat, stream Process packets and stream
volumes. A traced run of the first level showed how level music is played: a
music bank such as nyc1_c holds one sample of two stereo Xbox ADPCM streams
interleaved in 36864-byte chunks. The music player (00192FD0) reads 73728 bytes
at a time and gives the first half to one stream and the second half to the
other; both use the same mix bins, and the game fades each stream independently
(-390 or silent in the traced run). The menu music is a single stream.
scripts/zsnd-reference.py decodes a sample as one stream, which is correct for
menu_c but splices the two layers of a level music bank every 0.74 s.
