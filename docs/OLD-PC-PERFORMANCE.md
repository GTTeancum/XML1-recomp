# Old-PC performance pass, October 30, 2026

Target: 2015-2017 PCs (4-core Intel 6th/7th gen or Ryzen 1000, GTX 950-1050 or
Intel HD 520-630, 8 GB). Development machine: Ryzen 7 8745HS / Radeon 780M.
Nothing here was measured on old hardware. The performance acceptance rule in
AGENTS.md still applies: only the user's own multi-machine tests can accept it.
HD texture packs were excluded from this pass at the user's direction.

## Method

`work/oldpc-perf/` holds an isolated fixture (read-only junctions to the
XBOXgame asset folders, private saves/settings/logs) and a hidden, muted,
process-local harness:

- `run.py`: boot, skip movies, 15 s on the main menu, Begin Story, 20 s idle on
  level 1 (nyc1_1_1), 40 s of movement plus Num4 attacks; one native capture
  per stage. `--cpus` sets process affinity (inherited by the DX8 worker),
  `--res` the output mode, `--burn N` adds N busy-loop competitors on the same
  CPUs, `--env` passes switches.
- `analyze.py` / `table.py`: per-stage FPS (total frames / total time), 1% low,
  frames over 50 ms, renderer pipeline times from the game's own performance
  CSV, and per-thread CPU from `QueryThreadCycleTime` (converted at 3.8 GHz).
  Plain `GetThreadTimes` over-reports threads that wake every millisecond.
- `threadprof.py`: suspends one thread of the owned test process at a time to
  record its instruction pointer and return-address candidates.

"4 cores" means logical CPUs 0,2,4,6 (four physical cores, no SMT); "2 cores"
means 0,2. Affinity cannot emulate clock speed, IPC, cache size or memory
bandwidth, and nothing here emulates an Intel or NVIDIA driver.

The machine was not idle: a WSL VM (about nine cores) and another game process
were running throughout and were left alone. Runs were interleaved and repeated,
and the harness records how busy the selected CPUs were in each stage.

## Findings

1. **The graphics-chip stand-in occupied a core.** XboxRecomp's NV2A ack
   thread clears register busy bits and copies DMA_PUT to DMA_GET from a
   `Sleep(0)` loop. The XDK kickoff at 0035FC00 (and 0035FCB0) sets the PFB
   flush bit at register+0x100410 and spins until that thread clears it, about
   11 times per frame (650 acknowledgements per second in level 1). That cost
   0.35-0.75 of a core continuously, and every kickoff depended on the thread
   being scheduled. Pacing the thread at 1 ms without changing the kickoff
   halved level-1 FPS on 4 cores (60 -> 30), confirming the dependency.
2. **The retail frame limiter polls the clock.** 00011400 re-reads the game
   clock until the minimum interval elapses. In menus that loop was the main
   thread's largest running cost.
3. **In the level, the game thread mostly waits for the renderer.** Most main
   thread samples are blocked in the pipe read for the worker's frame and fence
   acknowledgements. The 32-bit worker itself used 0.1-0.2 of a core.
4. **Intermittent ~0.8-1.0 s freezes in combat** occurred in some runs of both
   builds, 25-35 s into the combat stage: the game thread is busy and the
   renderer waits. Startup loading screens show similar single frames; those
   are expected. The combat freeze did not recur during the one profiled run,
   so its cause is not identified. See "Remaining blockers".

## Changes

- `scripts/guard-nv2a-inline-ack.py`: the two kickoff paths clear the PFB flush
  bit immediately after setting it and store GET with PUT, producing the same
  register values the ack thread produced, with no cross-thread wait. The
  native path at 0035FC76 already stores PUT and GET together.
  `graphics-fence-wait-test` (which runs the generated kickoff) passes.
- `patches/xboxrecomp-nv2a-ack-pacing.patch` (registered last in the toolkit
  patch stack): the ack thread waits 1 ms on a high-resolution waitable timer
  instead of `Sleep(0)`; `Sleep(1)` if the timer is unavailable.
  `RECOMP_NV2A_ACK_SPIN=1` restores the old loop. After the inline handshake
  the thread acknowledged 3 bits during boot and nothing during play. This is a
  reusable toolkit change, recorded here rather than applied to the pin.
- `scripts/guard-frame-limit-pause.py` + `xml1_frame_limit_pause`
  (`src/graphics/dx8/guest_graphics_live.c`): before each clock comparison the
  limiter sleeps on a high-resolution timer until 1.5 ms before the deadline.
  The original poll still decides when the frame starts and records the real
  elapsed time. `XML1_FRAME_LIMIT_SPIN=1` restores pure polling.

Both guards are wired into `scripts/generate-code.ps1`, accept `gen` or `game`,
are idempotent, and were applied to `src/recomp/game` and `src/recomp/gen`.

## Results (1920x1080, development machine)

Game-process CPU (cycle-based core equivalents), 4 cores, median of three
interleaved repeats:

| Stage | Before | After |
| --- | ---: | ---: |
| Main menu | 1.67 | 0.24 |
| Level 1 idle | 1.59 | 0.51 |
| Combat | 1.57 | 0.55 |

Without the limiter change (ack changes only) these were 0.78 / 0.68 / 0.65.

FPS on 4 cores was 53-60 for every stage of both builds when the background
load happened to be light; the cap is 60. On a contended run the original fell
to 34.5 FPS in combat (49.96 idle), while the new build's runs ranged 48.8-57.4
in combat. With 2 cores, combat measured 34.5 -> 39.9 FPS and level idle
49.7 -> 53.4 (single runs).

With two busy-loop competitors on the same 4 cores, combat frames over 50 ms
totalled 39 for two runs of the original, 8 for the new build and 11 for the
new build without the limiter change. One new-build run contained one 991 ms
combat freeze (finding 4); the original's runs had none of that length there.

Rough GPU sensitivity (4 cores, new build): combat 59.1 FPS at 1280x720, about
55 at 1920x1080 and 52.1 at 3840x2160 (original at 4K: 50.0). Four times the
pixels cost 2-3 ms of renderer completion time per frame on the Radeon 780M.

## Rendering check

Every run produced four native 1920x1080 captures (intro logo FMV, main menu
with Cerebro background, level 1 arrival with HUD, combat). The final 4-core
and 2-core runs were inspected individually: all present and correct; the
2-core combat capture shows a defeated enemy and "7 XP". The level-arrival
capture differs from the original build in 0.9-1.5% of pixels, the same as two
runs of the original differ from each other (1.2%); every changed pixel is on
an animated object (Wolverine idle, pickup marker, HUD portrait and icon).
Audio was muted and not assessed.

## What old-PC players can expect (estimate, not measured)

The game's critical path is one thread: game logic plus waiting for the
renderer. In combat on this CPU that is about 10 ms of game work and 7 ms of
renderer work per frame. A 6th/7th-gen quad-core runs one thread at roughly
55-65% of this CPU's speed, which suggests 35-45 FPS in heavy combat and 60 in
menus and quieter scenes at 1080p. Intel HD 520/620 graphics are several times
slower than the Radeon 780M; 720p is the likely fallback there. These numbers
are extrapolations; only the user's machines can confirm them.

## Remaining blockers

- Intermittent ~0.8-1.0 s combat freezes (both builds); also reported on a
  Ryzen 7 5700X3D (ISSUE-1-PERFORMANCE.md). Needs a timestamped main-thread
  profile that catches one; `threadprof.py ... main` records one.
- Per-thread speed of old CPUs cannot be emulated by affinity; the main thread's
  ~10 ms of combat work per frame is the likely limit there.
- No Intel/NVIDIA hardware, hybrid laptop or driver was available.
- The pinned 1.0 release (work/release-1.0) does not contain these changes.

Evidence: `work/oldpc-perf/runs/` (`r1-3-*`, `b1-2-*`, `base-2c`, `final-2c`,
`gpu*`, `prof*`, `stall1`), `fence-test.log`. Candidate executable
`build/optimized/Release/xml1-boot-probe.exe`, SHA256
`63cb32dfe66da71b6b6e51968de35fc9fa49b6e7f6b2a179c381785617a68b25`; the
pre-change build used for comparison is `work/oldpc-perf/baseline.exe`.
