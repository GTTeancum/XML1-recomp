# First-run Raven XMLB conversion

Current source builds compile XML1's Raven text data into the later games' native
binary XML format. This setup path is included in the 0.9 beta release.

## Player behavior

With PreferFilesLoose enabled, the existing first-run dialog extracts the archive,
publishes PKGBs while preserving overlays, finishes native Quit-menu authoring,
and compiles the effective data files. An existing loose installation performs
just the conversion on its next launch; it does not require the ZIP again.

- `.xml` becomes `.xmlb`; language variants become `.engb`, `.freb`, `.gerb`, etc.
- Character, navigation and buoy data use `.chrb`, `.navb` and `.boyb`.
- Original text files remain unchanged. Runtime asset selection uses the binary
  counterparts, without falling back to text or assetsfb.zip.
- Existing binary mods are validated and retained. After migration, author mods
  in the compiled files; changing a retained text original does not replace an
  existing binary. New binary-only mods can be added normally.
- PKGB resource names and associations remain extensionless and unchanged.
- Saves, settings, media and IGB artwork are not converted.
- `.xml1-xmlb-ready` is published only after successful conversion and installation.
  It must not be distributed in beta packages. Cancellation/failure can be retried;
  complete existing binaries are validated and retained.
- For [the Shadow King encounter (#36)](https://github.com/GTTeancum/XML1-recomp/issues/36),
  setup also checks the selected language's mission and the generated map roster on
  existing installs. If the mission requires ProfXGladiator and the roster contains
  only the three Shadow King actors, his map entry is added to the compiled roster.
  Other rosters and binary overlays that differ from the compiled source are left
  alone. No archive, text original, or save is rewritten.

No new DLL, external converter, Python installation or command-line launcher is
required for players. The codec is part of the self-contained game executable.

## Format and traced runtime integration

The format matches installed XML2 data: little-endian `0x11b1`, version `1`, then
16-byte nodes with absolute name, next-sibling and first-child offsets plus an
attribute count. Each attribute is a pair of absolute string offsets. `FFFFFFFF`
terminates links. A deduplicated NUL-terminated byte-string pool follows records.
The root starts at offset 8; multiple top-level elements use sibling links.

The compiler preserves node/attribute order, names, values, duplicate attributes
and raw localized bytes. XML1's attribute reader at `001282C0` copies values
between matching quotes (or accepts unquoted values). It does not apply standard
XML entity expansion. Literal ampersands, less-than signs, accented bytes and
attribute whitespace must therefore survive unchanged. A standards-compliant
XML parser alone is inappropriate for the retail input.

XMLB has no character-data record. Four retail combat documents contain stray
`/>` character data between complete elements. This punctuation has no named
element or attribute to query and is omitted, like comments/formatting whitespace.
Other non-whitespace character data is rejected, not silently discarded. Empty
retail placeholder documents produce an empty eight-byte binary document.

The existing file-load boundary at `001277B5` now uses the general nested decoder
through its historical PKGB C ABI. XML1 still builds its own runtime XML objects
from decoded Raven text; this is binary data compatibility, not a claim that the
engine directly traverses mapped XMLB nodes or that XML parsing became faster.

Cached resources take a different path. `0014A3D5` allocates the cache input with
category EBX/tag EBX+0x51; `0014A3EE` terminates the completed read; `0014A406`
publishes the pointer. The new generation guard decodes at that publication
boundary, reallocates with the original category, frees the original buffer with
the same category, and preserves the native cache's ownership and lifetime.
Both generated guards remain reproducible after recompilation.

Binary input checks cover header/version, bounded records/strings, overlapping
records, cycles/shared nodes, depth, output size, native string limits and quote
representability. Unsupported input fails with an explicit diagnostic.

## Validation evidence

Local evidence is retained under `work/xmlb/` (not distributed):

- `xmlb-test`: hand-authored golden bytes, nested trees, sibling roots, raw
  localization/entity bytes, empty input and malformed/cyclic/truncated data.
- `test-xmlb-setup.py`: fresh extraction, overlay priority, save preservation,
  repeat startup, upgrade without ZIP, failure/retry, existing binary mods and
  corrupt binary rejection.
- `test-xmlb-corpus.py`: an independent ElementTree comparison of all 3,968
  effective source files and their compiled node/attribute graphs. The same
  comparison passed for fresh retail extraction, including source ordering and
  localized strings. This does not compare merely compiler/decoder agreement.
- XML2 reference pass: 3,621 installed binary data files decoded and recompiled
  without changing their decoded trees.
- Actual retail `assetsfb.zip` first run: 3,968 binary files, 30,922,335 bytes;
  extraction plus conversion completed in 38.91 seconds locally. File hashes and
  completion markers are recorded in `first-run-audit.json`.
- `smoke-v3`: native captures inspected for intro FMV, Cerebro, saved Central Park,
  enemy approach, attacks/hit effects, broken benches and continued movement.
  No binary-loader errors; private saves unchanged.
- `options-save`: inspected pause Options and Advanced Options over the level,
  returning to gameplay, and the objectives panel. Its attempted save-menu
  navigation opened Objectives instead and is not counted as a save test.
- `save-reload`: Xtraction interaction opened its scripted menu, a new Game 2 save
  completed, and the new save appeared in the Load Game list. This used private
  UDATA, never the player's saves.
- `reload-final-v2`: the staged EXE listed the new Game 2 save, loaded it into
  Central Park, and accepted movement. All five native captures were inspected
  in order, including the intro movie and Cerebro background. Private save hashes
  remained unchanged during reload; the diagnostic watchdog ended the run.

The self-contained EXE is staged in `XBOXgame/X-Men Legends.exe`, SHA-256
`4037d379d4076d6bea4437bbdebadb9614e58ac63cb8480c51db399c7a862a4f`.
The staged assets were upgraded successfully and player save hashes remained
unchanged. Prior player files and save hashes are backed up under
`work/player-stage-backups/xmlb-20260916/`.

For the next beta package, compare additions against a freshly converted retail
baseline so generated retail XMLB files are not mistaken for distributable mod
overlays. Neither setup completion marker belongs in the release payload.

Tests run hidden and muted through the game's process-local test channel and
native capture facility. Audible fidelity and the GUI dialog's interactive
cancellation were not assessed. Full-campaign testing and performance acceptance
on the user's other machines remain separate open work.

### 10th Avenue Nightcrawler comic (#37)

First-run extraction restores the Nightcrawler comic in the English Sentinel
Flashback map. The installer compiles the two PS2-derived pickup nodes into
the extracted Xbox map's `nyc_fb4.engb`. It leaves the original `.eng` alone
and declares the existing Xbox pickup model in the generated map package if
needed. No PS2 map or model is installed. Installations with custom English
map/package overrides are left alone; already-prepared installs are not
migrated by this first-run fix.

`scripts/test-nightcrawler-comic-install.py --driver <loose-extract-driver>`
exercises the installer extraction entry point with synthetic archives.
