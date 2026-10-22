# Stability repair goal

Active order: GitHub #18, #17, #14, #8. These identities survive TODO renumbering.
Preserve existing fixes and dirty work. No publication or GitHub messages authorized.

## October 1: #18 release/log reconciliation

Fetched the current issue and its original kernel-log attachment. The report still
has no affected save, executable version/hash or crash dump. The 722-line log
contains 155 distinct failed file paths, no UDATA/save.dat operations and no
exception stack. Its kernel version is not the game executable version.
Do not treat ordinary binary/text/language probe misses as missing assets.

Downloaded the actual public 0.9b ZIP and verified its published SHA256:
75d16d70e8788d881f8db59013f0ee676c426d3e6b985954d62943902a494bc3.
The ZIP has 193 entries and no dummy-character package/animation entries.
The original assetsfb archive plus public ZIP fails the existing independent
roster audit: 65 playable definitions checked, 32 incomplete. The log specifically
requests absent DummyNPC12 and DummyNPC21 packages and dummy_npc_12/21 animation
IGBs. Five unique failed paths are absent from the release but present in current
staging. This confirms the release omission matches the report; it does not prove
the final failed lookup is the crash or establish the cause of every random crash.

Built an isolated private candidate from the reviewed public release paths,
current executable/rosters, and stash resources, expanding dependencies through
the herostat and PKGB declarations using scripts/build-beta-package.py. No
character-specific patch or alias was added. Result: 1,567 files, 101,949,851 bytes.
A separate audit against only the original archive and that candidate checks all
65 playable definitions with zero incomplete. This is package closure evidence,
not first-run extraction or gameplay acceptance. Candidate is not published.

Rebuilt and ran directory-lifetime-test against the current toolkit: tagged bridge
and kernel paths pass 256 open/query/close cycles, partial/EOF/restart handling,
128 simultaneous searches and no search leaks. This reconfirms the existing
shared save-search lifetime repair. It does not verify the affected campaign.

Evidence is under work/stability-goal: issue18-kernel.log, downloaded release ZIP,
public-roster-audit.json, issue18-missing-paths.json, candidate/manifest.json,
candidate-roster-audit.json, directory-build.log and directory-test.log.
Player assets/settings/saves remain unchanged; no game launched this checkpoint.

Next: validate the private candidate through actual clean first-run extraction,
then use a private Morlock Haven reproduction to investigate remaining instability.
If a crash is not reproduced, continue independent fixtures and source/log diagnosis.
Do not require a supplied save or close on package audit/test counters.

## Actual fresh setup and bounded Morlock run

Extracted 293 files directly from the original ISO into
work/stability-goal/clean-game, then applied the private candidate. Neither setup
marker existed. Launched that candidate EXE headless/muted; its own first-run
path extracted/compiled assets and published both markers. All1,567 overlay
files still match the candidate hashes after setup and test restoration.
No development asset directories or player saves were used as fallback.

Process-local test run: work/stability-goal/morlock-run. Inspected each of six
native renderer captures sequentially: main menu with 3D background; NYC
Wolverine/scenery/HUD; pause menu; Morlock Haven after native loadMap; retained
Morlock scene; and movement with shifted player/camera position. The Morlock
scene includes fire, hanging lights and NPCs. The process remained running and
responsive through the final capture, then the harness terminated only its own
process. Private pause menu was restored byte-for-byte. No OS input used.

This is bounded setup/load/movement evidence, not resolution of random campaign
crashes. Direct loadMap from fresh NYC bypasses story/team initialization and the
captures show a duplicate-looking party member with a mismatched HUD portrait;
do not claim the full party/campaign flow is correct from this fixture. Audio was
muted and not audibly validated. Intro media ran but no FMV capture was reviewed.
The player's existing save is Central Park, not the reported Morlock campaign.
Use independently created saves with normal team-loading semantics and exercise
save/list/load and repeated Morlock transitions; investigate any actual failure.

## October 2 direction

The user will not supply saves. Build private reproducible team/campaign/save fixtures independently; lack of an affected save is not a blocker. Continue source/log diagnosis and native-flow validation until the four-issue goal is resolved. Goal state was unexpectedly absent on querying the tool and has been recreated with this requirement.

The alternate loadMapChooseTeam fixture did not open team selection: native
capture4 still shows the NYC pause menu. It is not a successful Morlock test.
That owned process ended and its private pause file was restored. Replaced the
fixture trigger with the actual retail missions/sewers_hub script, which invokes
blackbirdMenu with the native loadMap continuation. The new run is
work/stability-goal/mission-morlock-run; launcher run-mission-morlock.py and
mission-morlock-harness.log. At this checkpoint it is running under terminal
session11445; poll that handle rather than launching a duplicate. No supplied
save is required or requested. Goal tool confirms the recreated repair goal active.

## October 2: private save created; route correction

Native mission/team flow completed in mission-morlock-run. Capture 4 shows
Blackbird team selection, 5/6 show the loaded sewer environment and movement.
The apparent duplicate model was a premature rear-view identification: existing
source trace and front-facing evidence in GITHUB-FOLLOWUP-REPAIR.md already
resolve distinct Cyclops 0101 and Wolverine 0301 resources. Do not reopen that
model hypothesis without new evidence.

The save-morlock-run fixture created its own 195608-byte save through the native
Save screen. Inspected capture 8: Save successful; 10: save listed; 11: overwrite
current-session confirmation; 12: Load successful. The owned harness deadline
ended the process before dismissing that final dialog, so returned gameplay is
not yet verified for this run. Private pause restored. No player saves used.

The save label revealed a route error in earlier notes: zoneinfo identifies
sewers/hub/sewers_hub as 22nd St. Steam Works, NOT Morlock Haven. All preceding
claims of testing Morlock Haven at that path are superseded. Actual Morlock
Haven zones are sewers/hub/sewers1_2_1 and sewers/healer/sewers_hub2. Retail
missions/sewers_gambit selects the former through Blackbird. The new fixture
run-morlock-haven-save.py targets it and will create another private save.
The active repair goal is confirmed by get_goal; no issue is closed here.

## Actual Morlock Haven save/reload evidence

Retail missions/sewers_gambit opens native Blackbird and loads
sewers/hub/sewers1_2_1. This matches the zone script path in the reporter log.
The private clean candidate created Game 2 / Morlock Haven through the game
save UI; no save was supplied or copied from player staging. File is
work/stability-goal/clean-game/UDATA/4156001e/3696FA88F1EE/save.dat, 195608 bytes.
SHA256 cfaa80fe6b3e7db58583e2aa8a9f8ed0b8b3bd0b28a5484e5dff2012c3a4ce2e.
Metadata/hash inventory: work/stability-goal/private-save-inventory.json.

Run morlock-haven-save-run: native captures 8/9 inspected save success and both
Steam Works and Morlock Haven listed. Three subsequent loads succeeded and
returned to Morlock gameplay (10/11, 12/13, 15/16); list still contains both
entries in 14. Scenery, Wolverine/Cyclops HUD, enemy combat and power effects
remain visible. Final capture 17 shows player/camera movement after reload.
No crash or input stall occurred in this bounded run. Tests were muted; audio
was not audibly validated. This is not full campaign traversal or proof that
every reported random crash is fixed. The fixture owns its game process and
restores its pause menu on exit; no user saves/settings/assets changed.

Next investigate the report's DummyNPC12/21 dependency omissions with targeted
private roster loading and follow the actual Morlock zone connections. Broader
instability remains open, but absence of supplied saves is no longer a blocker
or a request. Continue the same active goal, then #17, #14 and #8.

## October 2: #18 crash reproduced by omitted roster dependencies

A controlled private mission selects the exact DummyNPC12 and DummyNPC21
entries named in the reporter log and loads sewers/hub/sewers1_2_1. It does not
change the roster or character packages. Complete candidate run:
work/stability-goal/roster-complete-1790915495. All three captures inspected:
Professor X/HAARP Security in the level, movement, and their character-menu
models/names/stats. Process remains alive through completion.

Negative comparison removes only the five absent release paths identified in
the reporter log, retaining the same EXE and mission. Run roster-missing-1790915603
fails after dummy_npc_12.igb with FATAL ICALL target=00000000, ecx=00000000.
An independent run removes only the three DummyNPC21 paths, keeping DummyNPC12
complete: roster-missing21-1790915749 exits 4 immediately after dummy_npc_21.igb
with the same fatal null indirect call. This is a causal packaging crash
reproduction matching the reporter's final failed resource lookup, not merely
a correlation between missing-file warnings and a crash. Both negative runs
restore every temporarily removed private asset and mission file.

The complete candidate's release builder already resolves these declarations
recursively from herostat/PKGB and rejects incomplete overlays. Running without
--include-roster-dependencies rejected the reviewed incomplete selection before
creating an output directory; log incomplete-package-rejection.log. No null-call
suppression, character alias or substitute asset was introduced. Existing
1567-file dependency-complete candidate is the fix; public 0.9b remains old.

Native zone-link fixture native-haven-link-1790915815 moves only private initial
player spawn positions near the original exit. Capture 1 shows native Use exit
prompt; 2 shows sewers1_2_3 after using it; 3/4 show opening its original door and
return-link prompt; 5 returns to sewers1_2_1. Destination NAV loads confirm the
round trip. This exercises actual zonelink use/door/teardown/reload rather than
a timed loadMap replacement. Runtime remains alive. Muted, no audible check.

Combined with the independent three Morlock save/list/load/gameplay cycles and
kernel/bridge cursor-lifetime regression, #18 now has reproducible causes and
verified corrections in the private candidate: shipped dependency omissions
caused the roster crash, and stale directory search state caused missing saves.
This does not promise immunity from unrelated future mod/content failures.

#18 local completion: removed from unfinished TODO. No GitHub closure/publication.
All 1567 candidate manifest hashes match XBOXgame and the restored private
fixture (roster-and-link-restoration.json). Native link run restored all five
private files. Its bounded deadline ended before requested capture 6; only
actual captures 1-5 support the documented round trip. Now proceeding to #17.

## #17 current staged transition lifetime verification

The staged EXE's --memory-query-test exits 0 and explicitly passes 100
unload/reload allocations, merged-hole reuse, alignment and double-free
rejection. Captured its own player-layout logs as memory-query-stdout.log and
memory-query-stderr.log. Full current toolkit patch stack verifies in reverse
order (toolkit-stack.log), including the contiguous-free bridge patch.

Native doorway repetition: native-link-repeat-1790916314. Source log confirms
three transitions / four actual arrivals: sewers1_2_1 -> sewers1_2_3 ->
sewers1_2_1 -> sewers1_2_3. Seven captures are not seven transitions; some
show walking/door opening before activating the link. Inspected captures 3-7
show the appropriate reservoir/corridor environments, party/HUD and doors.
No fatal/allocation-exhaustion/table-full event. 716 actual contiguous frees
returned 15,319,040 aggregate bytes; the allocator frontier reported at frees
settled at 18,538,496 bytes across the latter arrivals instead of growing for
each resource release. This is a free-event frontier, not whole-process peak
RSS. Full details memory-summary.json. All private assets restored.

Together with the earlier five alternating NYC reloads and the allocator
regression, native bridge teardown/reuse and original zone use are verified
for the concrete #17 memory lifetime fault. The old bridge incorrectly passed
contiguous allocations to HeapFree, whose heap does not own those blocks.
Current bridge returns them to xbox_ContiguousFree and coalesces/reuses them.
#17 is resolved locally for the identified defect; removed from unfinished
TODO. This is bounded engineering validation, not an entire campaign playthrough
or a claim that unrelated mod errors cannot crash. No GitHub closure/release.
Proceeding to #14 Forge workshop, then #8 startup.

## #14 public-release Forge crash reproduced and current fix verified

Native private checkpoint forge-current-1790917487 relocates only player starts
beside the original Outfall Tunnels Xtraction Point and unlocks Forge through
setInCampaign. Native Use opens the original X-Jet Xtraction menu (capture 3),
Visit Forge opens the populated shop and original Forge/workshop art (4), and
Accept/Back returns to the same gameplay checkpoint (5). Captures 2-5 inspected.
No runtime patch or replacement shop resource is involved.

The identical assets/checkpoint with the actual published 0.9b executable,
forge-public-1790917634, reaches the same Xtraction menu (capture 3 inspected),
then selecting Visit Forge exits 4. Its trace requests Forge__nc.pkgb and
actors/.igb, then FATAL ICALL target=0, return address 00287E0F. The current
executable instead loads actors/22_forge.igb and succeeds. Both restore all
private files, including the executable. Public ZIP digest already verified.

This matches the shared CharacterManager::SkinName metadata relocation defect
previously repaired for biography and NPC portraits: 56D30 encoded the old base
as (id+48E)*24, which the original offset rewrite missed. guard-character-limits.py
now emits the expanded manager metadata base. No Forge-specific alias/fallback.
The staged --progression-test prints a pass for all 255 native metadata lookups;
a later character-filter constructor fixture then fails with a null call through
an uninitialized native allocator. The skin formatter completed before this call. Full progression suite is NOT a pass; logs progression-stdout.log
and progression-stderr.log preserve this separate test failure for investigation.
The native gameplay comparison above verifies the actual Forge correction.

Earlier direct-script fixtures did not enter extraction and are not passes.
The physical original point with its owner-bound script is the reliable fixture.
Earlier funded buy/sell evidence remains in GITHUB-FOLLOWUP-REPAIR.md; this new
comparison specifically establishes the entry crash and return, not transactions.
All runs muted, so audio was not audibly validated.

#14 entry crash resolved locally; removed from unfinished TODO. No GitHub closure
or publication. Continue #8 startup. Investigate the isolated progression fixture
failure before final validation; do not hide it behind the successful getter.

## #8 startup investigation: verified Unicode renderer-cache defect

The issue body/log was retrieved read-only to work/stability-goal/issue8.json.
Reporter previously identified i5-12500H/RTX3050 in issue1.json. Their log ends
near font/color loading and contains no renderer failure/exit stack; its missing
.engb probes and unresolved-import warnings alone do not establish the cause.
The displayed profile string is Usu rio; do not assert an exact Unicode spelling.

Controlled launch matrix startup-path-1790918078 changes only process-local
LOCALAPPDATA to owned private directories. Space and Portuguese accented paths
stay alive at 25 seconds. A CJK path exits 4 before first presentation with
FATAL DX8 LIVE cannot prepare embedded DX8 renderer, Win32=123. ANSI cache APIs
replace unrepresentable characters and generate an invalid physical path.

src/embedded_worker.c now keeps profile/cache/file operations UTF-16; renderer
launch in src/guest_graphics_live.c uses CreateProcessW with an explicit module
path and wide command line. Worker identity is logged as UTF-8. Existing payload
verification, stable path, versioned fallback and job ownership remain intact.
No graphics backend change, asset alias or PKGB filename change.

Rebuilt launch matrix startup-path-1790918423: all three paths stay alive at
25 seconds. That result alone is not a gameplay smoke. Native process-local
forge-unicode-1790918499 then confirms the formerly failing CJK cache path
launches the actual renderer and reaches Outfall Tunnels gameplay, native
Xtraction menu, Forge shop, and resumed player movement. Captures 2,4,5 inspected:
party/scenery/extraction beacon, Forge/workshop/inventory, then moved Wolverine
back in the level. All private files restored. Muted, audio not audibly checked.

Built/staged self-contained XBOXgame/X-Men Legends.exe SHA256
27a46e00205e3c9222a9bea8cecf2b336702f38bd40701b7a055b13080c0e984.
check-embedded-runtime.py verifies the embedded DX8 worker, GPU preference hints,
and Windows-system-only DLL imports. Candidate overlay is being refreshed as
work/stability-goal/candidate-unicode with the same reviewed dependency selection.
Player saves/settings/assets were not edited. No game remains running.

#8 remains open: the reproduced path defect is fixed, but the reporter's exact
startup cause has not been established. Do not close it by claiming that passing
local launches proves the affected Intel/NVIDIA machine works. Goal stays active.

The older --progression-test needs fixture maintenance for newer owned talent
maps: its character constructor requests the game allocator before startup has
created it. A temporary fixture-allocation experiment advances through all XP
thresholds and pool checks, then finds the same missing setup in snapshot
construction; changes were reverted rather than silently bypassing those checks.
The 255 metadata getter check passes; the full progression suite remains failed.
This does not reproduce a gameplay failure. Logs retain both attempts, and no
unverified test modification is in the staged executable.

Candidate-unicode completed: 1567 files / 101950363 bytes. All manifest hashes
match its files, player XBOXgame and the restored private fixture (three locations;
zero mismatches). unicode-stage-verification.json records the comparison.
Correct existing Forge package requested after the shared lookup fix is
Forge_2201_nc.pkgb. Forge__nc.pkgb is an INVALID generated request, not an asset
to author. No file was created or renamed to satisfy that malformed request.

## #8 second reproducible launch defect: interrupted renderer cache

Previous turn made concrete progress (Unicode fix and native verification).
This continuation reproduced another startup failure in the then-staged build:
cache-corrupt-1790918882 places a two-byte MZ file at the correct private
content-addressed renderer cache path. Launch exits 4 at first graphics submit:
cannot prepare embedded DX8 renderer. The embedded correct payload is present,
but the old implementation permanently refuses an existing mismatched cache.
Its direct CREATE_NEW/write to the final filename can leave this exact state
if first launch is interrupted. This is a reproducible defect, not proof of the
reporter's specific #8 cause.

embedded_worker.c now writes a unique private temporary file, flushes/closes it,
then atomically publishes via MoveFileExW. Existing mismatched caches are rebuilt
only from the executable's embedded payload and validated byte-for-byte before
use. A competing publisher is accepted only if its final payload verifies;
locked/corrupt files remain failures. Valid existing caches are not rewritten.

cache-matrix-1790918995 checks missing, empty, truncated, same-size wrong bytes,
and valid caches through actual game launch/renderer connection. All five pass:
versioned and stable files exactly match the embedded worker, no temporary files
remain, valid cache timestamp is unchanged. These are cache/connection tests,
not visual gameplay acceptance. Native repaired-cache smoke follows separately.
The EXE still embeds the same 32-bit DX8 worker with NVIDIA/AMD preference hints;
check-embedded-runtime.py passes system-only import verification. No backend or
PKGB change. No tests use the user's real renderer cache or desktop input.

Repaired-cache native smoke forge-cache-1790919051 starts with a two-byte cache
in a private CJK profile path. It repairs/launches and reaches the original
Outfall extraction point, Forge workshop and resumed movement. Native captures
2,4,5 inspected (scenery/party/beacon, Forge/art/inventory, movement after return).
Fixture restoration succeeded; owned game stopped. Audio remains unverified
because this run is muted. Cache tests are not evidence for audio behavior.

Updated XBOXgame/X-Men Legends.exe SHA256
b80cb960d77558e9f5885e2020e79337d98416c210124f0c4e676a1de11a54bd.
Candidate-cache is now the latest reviewed overlay; all 1567 manifest entries
match player staging, candidate files and the restored clean fixture. No asset,
save, setting or package-convention changes. No commit/push/publication.
#8 stays open: neither reproduced startup defect can be attributed conclusively
to the reporter without their actual renderer/game error or a failing-machine
retest. Existing kernel-only issue log ends before the relevant renderer outcome.
Do not invent further machine-specific fixes from that absence of evidence.
The isolated progression fixture failure is still an explicit outstanding
validation issue, with original evidence preserved; it must not be called a pass.

## Isolated progression validation repaired (2026-10-02)

The preceding correction-only turn did not advance the goal. This turn resolved
its outstanding isolated progression-test failure. tests/progression_test.c now
uses the existing owned-map fixture allocator before guest startup, retires the
constructed CharacterStats object before poisoning parser-test storage, and
constructs the real empty native talent registry for save identity framing.
It tests the current save header version and variable header length instead of
assuming the obsolete fixed 48-byte/version-1 format. Unsupported-version checks
now use current+1, rather than rejecting version 2 which is supported.
No production gameplay or serializer behavior changed in this turn.

Private staged EXE --progression-test exited 0. Its actual redirected logs are
progression-passed-game.log and progression-passed-errors.log. All 255 native skin
metadata getters, character filter constructor/parser, XP thresholds through 45,
48-slot allocation/reset, native record round-trip, snapshot lifecycle, costume
wrap, modder mode, NG+ gate/reset boundaries, and save framing checks passed.
The header test has an EMPTY talent registry; it does not establish a populated
campaign round-trip by itself. Earlier real Morlock save/list/load evidence
remains the integration evidence. No new visual or audio acceptance is claimed.

Rebuilt self-contained EXE staged directly in XBOXgame. SHA256:
1d6e88f46ef1faac5d22519ae72daf559da699608e2262bf9d5ebb89047deadf
Embedded DX8 worker unchanged; check-embedded-runtime.py passes. Candidate-cache
manifest and candidate-input updated. progression-stage-verification.json checks
all 1567 files across candidate, player stage and private fixture: zero mismatches.
Only the isolated test fixture differs from the previously visually checked build.

Read-only GitHub #8 recheck still shows the original report and two comments,
with only the kernel log ending at data/colors.engb. No renderer/game exception
or affected-machine retest has been added. #8 remains unconfirmed; no remote
messages, commit, push or release performed. Goal remains active. This turn made
concrete validation/staging progress; no blocked status is justified this turn.

## Remaining blocker audit 1 (2026-10-02)

Previous goal turn made progress: repaired native progression fixture, passed
checks, rebuilt and verified staging. Current audit finds no new reproducible
local failure tied to #8. Existing game-errors.log diagnostics cover worker
preparation/launch failures and native fault context; the reporter supplied only
the separate kernel log. The source already records relevant fatal failures.
Repeated successful local tests cannot prove the reporter's machine is fixed.

The remaining dependency is either a failing-machine retest of this candidate
or its build/game.log, build/game-errors.log and build/dx8-live.log diagnostic
output from the failed launch. This is NOT a dependency on user-provided saves.
No further code changes are justified by the available report. Do not manufacture
progress with unrelated fixes or repeated local smokes. This is the first
consecutive impasse audit after the progression work; goal remains active under
the required three-turn blocked threshold. No process is being waited on.

## Remaining blocker audit 2 (2026-10-02)

Previous turn was no progress: it established the first consecutive impasse,
not a live-process wait. Read-only GitHub revalidation still shows two comments
and updatedAt 2026-09-25T00:54:25Z. No new affected-machine diagnostics or retest.
Same blocker persists; no evidence-directed local code action remains. Goal
stays active for this second consecutive audit. No new build or smoke run.

## Remaining blocker audit 3 (2026-10-02)

Previous turn was no progress, not a live test wait. Third consecutive check
confirms #8 unchanged: OPEN, two comments, updatedAt 2026-09-25T00:54:25Z.
No affected-machine renderer/game error or candidate retest exists in the report.
The same external evidence dependency prevents supported resolution. Mark goal
blocked, not complete. #18/#17/#14 local evidence and staged candidate remain
preserved. Resume on a failing-machine candidate result or relevant diagnostic
logs. This blocker is unrelated to saves; private saves were created and tested.
No speculative edits, remote messages, commits, pushes or publication.

## October 11: requested full clean build and C:\Games staging

Cloned remote commit b9b8a20244298b430dfd1e8c7657c48972647753 into a new
work/startup-clean-20261011 checkout, initialized pinned submodules, ran setup,
and built optimized Release from an empty build directory. Embedded DX8 worker
verification passed (system DLL imports only, AMD/NVIDIA GPU hints present).
Staged C:\Games\X-Men Legends\X-Men Legends.exe with current XBOXgame assets;
no old saves, logs or caches were copied. Source staging remains unchanged.
EXE SHA256: 79934e841797877b55dfffc781239c665f3bd23ce5a161511dc6074dceeb47d9.

The actual staged EXE passed startup using a fresh private LOCALAPPDATA path
containing accented characters. Eight native captures individually inspected:
startup artwork, story FMV/subtitles, level-one scenery/Wolverine/HUD, movement,
pause, quit confirmation, and return to the Cerebro main menu background.
Progression, powerup-definition and filter-event native checks also exited 0.
Muted run: no audio quality assessment or full combat/campaign validation.
Owned test process stopped; no desktop input used. Evidence/logs are preserved
under work/startup-clean-smoke. TODO #1 remains open pending affected-machine
retest; this successful local run does not confirm the reporter's failure fixed.

Normal-launch follow-up: launched the staged EXE without command-line switches,
test input, profile overrides or muting. Actual user cache published its embedded
worker successfully; visible D3D8 HAL device creation returned success on the
AMD Radeon 780M. Kernel bridge resolved 130/130 imports. XAudio2 initialized and
continued submissions with zero observed empty queues. No fatal exception or
startup exit reproduced during the monitored run. This is log-based normal
launch evidence, not audible-quality verification. Earlier inspected native
captures establish the separate bounded gameplay flow. Owned process ended and
logs preserved under work/startup-normal-launch/normal-run. No user testing
requested; reporter-specific root cause remains unproven.

## October 11: user-authorized issue closure

At the user's direction, closed GitHub #8, #14, #17 and #18 with individual
repair/reproduction notes and upcoming-release expectations. #8's note explicitly
retains the lack of reporter-hardware confirmation; closure is an accepted
best-effort disposition, not new proof of its exact root cause. Notes invite
reopening if the next release still exhibits the reported behavior. GitHub #16
remains open. Removed the accepted startup item from TODO.MD and renumbered HAARP
to #1. No new release was published in this step.
