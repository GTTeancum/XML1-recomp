# Roster and costume expansion

## Scope and status

Expand to 35 playable characters and ten costumes per character. Keep the original level-45 cap and XP curve per the user's correction. NewGame+ is deferred. The expansion is implemented and staged in !GAME. Player saves/settings are unchanged. NPC entries and additional costume artwork are test content, not finished playable-character conversions.

## Traced runtime boundaries

CharacterManager is created by 0x56E90 and constructed by 0x56B70. Its embedded pool begins at manager+4. Retail holds 24 objects of 0x484 bytes; the expansion holds 48 objects of 0x488 bytes. Thirty-five playable definitions plus default/astral require 37 slots, with room for transient NPC definitions. Forty-eight retains the six-slot reset loop. Construction/allocation bitmaps each use two words; handles use six index bits with generation checks. Metadata retains 255 entries and byte-sized persistent definition IDs. Pool handles are not saved definition IDs.

scripts/guard-character-limits.py changes audited manager/pool methods at 0x54150..0x57090 and named costume boundaries. Pool-relative, manager-relative and parser-biased pointers are treated separately. Unrelated 24-byte metadata strides remain unchanged. src/character_limits.h documents the relocated fields and appended storage inline.

The herostat parser at 0xAFD70 calls the skin-name lookup at return address 0xAFEFE. Additional names aoa, astonishing and 90s are recognized only there. Three new category bytes occupy CharacterDef+0x484; the eight original bytes at +0x372 and flags at +0x37A remain intact. Selected physical skin remains the existing byte at +0x1E. Manual cycling at 0xB0D30 preserves normal unlock conditions, deduplicates physical IDs and supports sparse two-digit IDs. Package naming at 0xB0EA0/0xB0F20 retains the native character name and actor prefix/variant. The distinct three-bit mission skin-default encoding has not been expanded.

Both original 17-entry snapshots now contain 48 states of 0x1E4 bytes. Constructor/destructor, copy/restore and serialization boundaries are expanded. All following manager fields and the inverse campaign-list base at 0x56FC3 are relocated. Snapshot methods include 0x549A0, 0x54AA0, 0x54E10 and 0x54E90.

The selector controller at 0x176C20 has capacity for 96 entries. A separate 16-name cache at 0x571448 was the visible roster bottleneck: its 20-byte entries ended immediately before live UI flags at 0x571588. The expanded cache occupies appended CharacterManager storage. Only audited cache fill/sort, iteration and lookup methods 0x164140, 0x164240 and 0x16B970 change; original UI flags remain in place. The unrelated 20-entry equipment transaction array remains unchanged.

## Save format and compatibility

0x54D40 writes manager state; 0x56F10 restores it. src/character_save.h adds a 48-byte version-1 header containing XML1CHR magic, version/header size, snapshot count and a 256-bit definition-presence map. Native state serializers remain unchanged. The writer emits instantiated herostat records and 48 snapshots. The loader interprets unframed retail data as sixteen definitions and seventeen snapshots without consuming header bytes. Missing saved definitions, unknown versions and insufficient stream space fail explicitly rather than corrupting subsequent data. Definition ordering remains the retail save contract; this does not remap reordered definitions by name.

Native load-retail-save-run loaded a copy of player Game 1, displayed Load successful, resumed level-2 Wolverine in Central Park and verified movement. Six captures were inspected individually. The trace confirms manager stream cursor 1478 (file offset 1502).

write-expanded-save-run used the native Xtraction Save Game flow to create private Game 3 (69F5833886DF), with Save successful inspected. The 195608-byte file contains 37 character records and 48 snapshots, followed by correctly aligned character markers. A fresh load-expanded-save-run loaded Game 3, displayed Load successful, resumed Central Park and moved. All 37 loaded level, XP and skin values match saved records. Every generated capture was inspected sequentially. Original player save copies remain byte-identical. An added NPC in the active party and a newly selected extra costume still require actual save/reload validation.

## Authored fixture assets

scripts/build-roster-fixture.py preserves fourteen retail playable definitions and adds 21 uniquely named NPC clones, each with ten distinct physical skins. Additional categories use aoa, astonishing and 90s. All assets are dummy NPC artwork, not finished alternate costumes. New packages retain native PKGB syntax, dependency ordering and resource paths. Original extracted resources are not renamed. The current v3 overlay contains 1540 files; planned manifests and authored IGBs round-trip before writing.

scripts/roster_menu_assets.py creates missing menu_idle/menu_action/menu_goodbye clips from each NPC's idle or its native fightstyle idle. Each dummy declares its authored animation database in its character PKGBs. Selection portraits use native selection geometry plus NPC portrait images, declared in characters_heads.pkgb. Retail 5801's HUD file is an untextured skeletal scene; its conversation portrait supplies the image instead. Graph copying distinguishes meta-object types from meta-field memory types and follows inherited object lists for track/binding relocation.

Private pause-menu, mission, roster-unlock and test save changes must never be staged into !GAME. The initial alison mission normally forbids selection and requires Wolverine/Cyclops; the private fixture permits team changes. The process-local unlockcostumes test command changes only the game's existing all-skins flag, behind XML1_TEST_PAD. It does not alter normal unlock rules.

## Validation evidence

- --progression-test executes generated XP routines at every level 1-45 boundary and the level-46 sentinel. It covers all 48 pool slots, both bitmap words, generation changes and boundary guards.
- Native snapshot constructor/destructor checks visit all 48 states. Native 0x47F80/0x49280 serialization round-trips 48 empty-inventory states with level 45, XP 589255845 and physical skins through 99, checking exact cursor and guards.
- Costume regressions cover ten distinct skins, duplicate categories, sparse IDs through 99, case-insensitive names and adjacent flag preservation.
- Save framing tests cover new and retail data, bit 32, unsupported version, missing definitions and stream bounds. Logs: test-state-roundtrip.log, test-save-section.log and test-save-trace.log.
- Native herostat loading matches all 35 playable names and ten skins per definition against the manifest, including slots beyond 31. All 35 names enter the selector.
- Individually inspected native captures include FMVs, Cerebro main menu, level-one arrival/movement, pause and Blackbird. select-npc-v3-run shows Blob's portrait, posed preview, gameplay model and HUD. select-inherited-idle-run does the same for Brotherhood using a native fightstyle idle. Brotherhood's long dummy display label needs shortening. Mouse attack input remains alive, but damage/attack animation is not established by those captures.
- cycle-costumes-run completed with unchanged private userdata. Captures 9, 10 and 20-30 were inspected individually in sequence. DummyNPC02 cycles physical skins 1 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 11 -> 1 with a visible preview at every step. Repeated art reflects shared dummy source models. The final gameplay capture wraps to base skin; it does not establish extra-costume gameplay or persistence.

## Validation limits

The native tests establish expanded roster loading, selection, costume cycling, gameplay movement and save/load persistence. They do not establish balanced NPC combat movesets, exhaustive playthroughs with all 350 combinations, or audio quality (runs were muted). NewGame+ remains separate.

upper-costume-gameplay-run selected DummyNPC21 and changed physical skin 1 to 28. Captures 9, 10, 20, 30 and 31 were inspected in sequence: the last added roster entry has a portrait and posed preview, enters level one in its extra costume with the associated HUD, and moves. Save/load of that selection remains pending. The v4 overlay shortens only authored dummy labels Brotherhood and HAARP Flamer; byte comparison with v3 confirms only herostat.eng and its manifest changed.

The regeneration audit found that separate cycle/tracing replacements could prepend an unreachable duplicate hook on repeat application. The guard now replaces that single, bounded hook region atomically. Reapplying it leaves every generated C file byte-identical. A full generation/build is being checked.

upper-costume-save-run created private Game 4 (419B3C4D303F) through the native Xtraction Save Game menu; Save successful was inspected. The native writer records definition 37 / DummyNPC21 / physical skin 28. Captures 9, 10, 20 and 30-34 were inspected sequentially. This private fixture relocates Central Park's default player start to its existing save point; trees obscure much of the gameplay camera there. It is not a player asset change. Fresh-process reload remains pending.

Fresh-process load-upper-costume-run selected Game 4, displayed Load successful, restored DummyNPC21 with skin 28 and resumed Central Park gameplay. Movement carried the model out from under the tree canopy into clear view with its matching HUD. All 37 loaded name/level/XP/skin records exactly match the writer trace. Captures 3-6 were inspected sequentially. This establishes native persistence of both the highest added definition in the active party and its changed extra costume. Audio remains unverified.

Full generation from !GAME/default.xbe completed (85 manager/pool method bodies updated), the optimized build succeeded, and test-regenerate-save-v2.log passes all progression/pool/snapshot/costume/save regressions. Reapplying the guard after full regeneration leaves all 106 generated C files unchanged. Both save/reload processes ended normally under their watchdogs; the reload did not modify userdata. The temporary Central Park spawn change is restored and the private roster callback again returns to level one. The regenerated executable is copied only to the private fixture, pending final native/staging audit.

## Final acceptance and staging

The regenerated build (SHA256 4dea6df9137b118e6611500a247924d41d8ea12ee7921bfcb4edb2f6d74d929d) passes the complete private menu-to-gameplay run. All thirteen captures (1-10, 20, 30, 31) were inspected sequentially, including the shortened Brotherhood label, alternate preview, model/HUD and movement after accepting the roster.

!GAME now contains the executable and all 1540 manifest-listed overlay files, verified by hash. Only two existing asset files were replaced: herostat.eng and characters_heads.pkgb. Those and the former executable are backed up in work/progression-limits/player-before-expansion. Private mission/pause/unlock scripts, map spawn changes and test saves were not staged.

player-expansion-smoke-run launched that exact player executable from an unrelated working directory and reached the normal Wolverine level-one start. Its five native captures were inspected individually: intro media, Cerebro main menu, story FMV, arrival and movement. Both this and the private regenerated run match all 35 playable names and all ten physical skin IDs per name against the manifest. The player run ended under its test-only watchdog with userdata unchanged. Staged file hashes and protected saves/build.ini match the staging audit.

Acceptance evidence: staging-audit.json, player-staging-manifest.json, guard-idempotence.json, test-regenerate-save-v2.log, regenerated-native-run/validation.json, player-expansion-smoke-run/validation.json, cycle-costumes-run/validation.json, and load-upper-costume-run/validation.json under work/progression-limits. Native save/load restores definition 37 in the active party with changed skin 28; all 37 state records match. The corrected level cap is 45. The stale goal wording about 99 was superseded by the user's explicit instruction.

## Outfit availability (#35)

The loose-file Windows build checks the active compiled herostat on every boot.
Registered physical outfit IDs with a valid Xbox-format model and the normal
and noncombat packages are selectable without story completion, modder mode or
New Game+. The scan checks the package's IGB dependencies and screens for
invalid or truncated IGB structures. It is not a replacement for the game's
full asset decoder. Files not registered in herostat are not outfits.

Cycling skips unavailable variants. A save that requests a missing or invalid
variant resolves to the character's default at the native resource-name
boundary, without rewriting the saved choice. If its default is also unusable,
the first valid registered outfit is used. If none are usable, startup names
the affected character rather than handing the game a known bad outfit. A
registered outfit restored or added to the installation appears after restart.
Campaign roster availability, Professor X and `SetInCampaign` are unchanged.

`costume-catalog-test <new-scratch-directory>` uses synthetic installations and
the production guest cycle and formatter. It tests boot re-discovery, sparse
IDs, missing/corrupted assets, save fallback and intact guest stack/state.
