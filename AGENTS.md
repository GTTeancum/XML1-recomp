# OpenXML1xbox

- Goal: an X-Men Legends original Xbox to Windows port with a genuine Xbox-era Windows Direct3D 8 backend. DX8 is mandatory; substituting D3D11/12 or a wrapper is not an accepted deliverable.
- XboxRecomp's existing D3D11 backend is an upstream baseline only. Building its libraries does not establish a game port or the required DX8 renderer.
- Prioritize measured progress toward playable XML1 and mod support. Record blockers and evidence; do not promise delivery dates from architecture alone.
- Keep the GameCube project untouched. This is an independent feasibility project.
- Preserve a future original-Xbox build path. The current64-bit Windows target is interim; keep host-specific backends separate and retain Xbox-compatible game data and mod formats. See docs/XBOX-RETURN.md. An Xbox hardware build is not implemented yet.
- Never use Computer Use, desktop capture, screen takeover, UI automation, or host input injection. Use files, logs, non-interactive terminal commands, and process-local test harnesses only. Use the game's native capture for visual evidence.
- Keep original ISO files unchanged. Inputs, extracted assets, saves, captures, and build products stay local and excluded from Git. The user-authorized Git-only build tracks canonical guest code under src/recomp/game; raw gen and maintainer named output remain ignored.
- Pin XboxRecomp as a submodule. Record any required upstream changes rather than silently updating the pinned revision.
- Do not invent XBE addresses, title IDs, or compatibility results. Derive them from the user's supplied image.
- Community mod-hook documentation is out of scope. Focus upstream contribution work on reusable toolkit fixes.

- Standing TODO rule: TODO.MD contains only unfinished work. Remove completed items from both the summary and detailed sections, renumber remaining items and update internal references. Keep completion history and evidence in progress documentation, not in the TODO list. Do not reopen accepted work without user direction.
- Performance acceptance rule: neither the user nor Codex may close the performance optimization TODO (currently #2) until the user has personally tested the candidate build on multiple machines locally at home and accepted the results. The user has two laptops and a different desktop available. Development-machine results, automated checks and completed implementation alone cannot close this item. Preserve this requirement if TODO numbering changes.
- Standing staging rule: provide a self-contained, player-friendly folder with a plainly named game executable, build.ini, game data, and runtime dependencies. Never present separate build/work fixture paths as the playable delivery. Keep technical fixtures separate from player staging.
- User-selected player staging is XBOXgame. Put X-Men Legends.exe and build.ini directly beside default.xbe and the loose asset directories, with the renderer embedded in the executable and the C/C++ runtimes statically linked. No CMD launcher or adjacent executable/DLL dependencies; Windows system DLLs remain OS-provided. Do not create another player/ tree or nest the assets under game/ there.
- A smoke check that only proves frames rendered is never sufficient. Inspect expected artwork, FMVs, menu backgrounds, transitions and applicable audio in the actual staged build; explicitly report any unverified portions.
- Preserve original resource filenames and use the reference PKGB format. Correct extraction and package declarations at their source; do not invent PKGB attributes, runtime alias routing, or other custom fixes to compensate for packaging errors.
- Imported XML2 menu IGBs must retain their PKGB associations and declared relative paths. Author the IGB assets and menu contents within that structure; do not replace it with an independent overlay or rename extracted resources.
- XML2 gameplay import tests must preserve existing XML1 characters. The user selected Bishop and Sunfire to replace explicitly identified dummy roster entries in private fixtures. Do not overwrite an existing XML1 hero or NPC, or silently replace a colliding shared asset. Keep original resource paths and surface collisions for proper integration.
- User-authorized character-import exception: assign Bishop and Sunfire unused hero/skin numbers (hero numbers up to 255, prefer two-digit families), updating their physical skin/portrait filenames and matching package/character references together. Existing NPC families may share a number only with distinct, verified-unused skin suffixes. This does not authorize overwriting existing skins or shared assets, or renaming unrelated menu resources.
- Menu asset authoring is limited to the IGBs and their populated menu contents. Preserve the reference file structure and package relationships when copying and staging them.
- PKGB clarification: declarations may change to match authored menus. Preserve the normal PKGB format, original resource names and relative paths; byte-for-byte identity with an imported manifest is not required.

- XML2 combat/script import acceptance: prioritize missing systems and differences a player will notice. Keep XML1 behavior for minor rounding differences and other non-noticeable discrepancies; do not pursue internal XML2 parity for its own sake. Material combat balance, broken powers, missing effects and unavailable character behavior remain in scope.
- XML2 import scope spans missing executable combat, character and scripting functions overall. Bishop and Sunfire are priority test fixtures, never the coverage or completion boundary. Track other character handlers, powerup/event systems and script additions explicitly; do not infer completeness from those two characters working.
- For the XML2 missing-function goal, the user's updated validation policy is basic programmatic functionality validation only. Build and check relevant contracts, dispatch, arithmetic and lifetimes through targeted programmatic checks. Users perform gameplay testing; do not run further visual/gameplay acceptance campaigns or require them to complete this engineering goal. This does not authorize claiming gameplay verification from programmatic checks.

- XML2 import scope clarification (2026-09-19): new functionality ONLY. If a combat, character or script function/system already exists in XML1, skip it without comparing XML2 semantics, signatures, rounding, balance or implementation. Do not extend this goal into parity fixes. Inspect existing XML1 integration interfaces only as needed to connect an actually missing function.

- 2026-09-20 handler crash-testing goal: the user now explicitly authorizes in-game testing of all 15 newly imported handlers, including activation, interruption/reuse, target lifecycle and cleanup. This supersedes the earlier programmatic-only validation limit for this bounded goal. Use isolated test assets/saves and process-local input; do not operate the desktop. Full balance validation remains out of scope.

## User workspace and testing policy (2026-11-13)

- All project work stays in C:\Programming\GitHub\XML1recomp, including temporary files, caches, logs and build artifacts. Do not create external workspaces.
- Keep the user's original Xbox ISO untouched and ignored by Git (`*.iso`). Never commit or upload game assets.
- `!TEST_BUILD/` is the sole location for all testing and the ONE test build. Reuse and update that build in place; do not create parallel, numbered, backup or alternative test builds.
- This user instruction supersedes the older `XBOXgame` player-staging location above. Keep the playable test executable, configuration and game data together within `!TEST_BUILD/`; keep test logs, captures and temporary test artifacts inside that same ignored tree.
- `.local/` is reserved for non-test investigation/support files; it must not contain a second test build.
