# 4x HD texture pack

The native DX8 renderer replaces game textures with PNG files from a texture
pack folder. The pack is generated locally from the player's own game files by
`scripts/texture-pack.py`; it is a derived game asset and stays out of Git.

## Player use

`build.ini` (the copy beside `default.xbe`):

```ini
HDTextures = 1
HDTexturePack = texturepack
```

`HDTextures = 0` restores the original textures. A missing pack folder is not
an error. Relative pack folders are resolved beside `default.xbe`. The game log
reports the resolved folder as `[HD TEXTURES]`; the renderer log reports
`[TEXTURE PACK]` with the number of replacements found and load statistics.

## Building the pack

```powershell
./.venv/Scripts/python.exe scripts/texture-pack.py build --game XBOXgame --out XBOXgame/texturepack
```

Every `igTextureAttr` base image in every IGB is a source (DXT1, DXT3 and
linear RGBA 8888). Optional renderer dumps add textures that are created
outside IGB files: run the game with `XML1_DX8_TEXTURE_DUMP=<folder>` and pass
`--dumps <folder>` (repeatable). Size/format groups with more than 16 dumped,
runtime-only keys are streamed content such as FMV frames and are skipped.
Existing PNGs are kept, so an interrupted build resumes and hand-edited files
are not overwritten.

Output names are `<folder>/<source>_<key>.png`. Only the 16 hex digits before
`.png` identify the replacement; folders and the prefix are for people.

## Matching

The key is the first 8 bytes of MD5 over little-endian `u32 width, height,
wire format`, followed by level 0 exactly as the renderer receives it: DXT
blocks, linear texels (BGRA), or a P8 palette followed by its indices. The mip
count is not part of the key. `tests/texture_pack_test.cpp` fixes the C++
definition against Python reference values.

Alchemy stores DXT blocks unchanged and RGBA 8888 as linear RGBA; the game
delivers the latter as linear BGRA. Both were confirmed against renderer dumps.

## Upscaling method

The upscale changes resolution only. In premultiplied alpha, separable
Lanczos-3 4x interpolation is clamped to the 2x2 source texels surrounding each
output texel; a mild unsharp mask (sigma 1 output texel, amount 0.6) is clamped
to the same bounds. No output texel leaves the color range of its source
neighborhood, so the method cannot add halos, new colors, texture or detail.
Binary alpha remains binary with smooth contours. Per axis, a texture is
treated as tiling when its opposite edges continue each other like interior
neighbors; tiling textures are resampled with wrapped edges so seams stay
closed. The method is deterministic: rebuilding produces the same files.

## Renderer behavior and flicker safeguards

A replacement is accepted when it is a uniform power-of-two multiple of the
original (1x recolors work). It keeps the original format: DXT1 stays DXT1
(with punch-through alpha), DXT3 stays DXT3, and linear formats stay linear.
Textures larger than the device limit are halved until they fit.

Earlier upscales flickered. This implementation removes each known cause:

- **Unfiltered minification.** A 4x level 0 sampled without mipmaps aliases
  and shimmers when the camera moves. Every replacement carries a full chain:
  the upscaled levels, followed by the original authored mip chain unchanged.
  When a stage has mip filtering disabled, the renderer enables linear mip
  filtering for replaced textures only and offsets `MAXMIPLEVEL` by the number
  of added levels. At a distance the game samples its own original mips.
- **Alternating between original and HD art.** Keys cover the whole base
  level. Streamed or animated textures change key each frame and are never in
  the pack, so they stay original rather than switching on matched frames.
  Loading is synchronous: a texture is never drawn as the original first and
  replaced later. A rejected PNG is logged once and remains original for the
  session. Loaded replacements are cached by key (1 GiB, or half the
  reported texture memory if less) independently of the original-texture
  cache.
- **Allocation reuse.** The original-texture cache recycles evicted
  allocations with an identical layout. Replacement allocations have a
  different layout and are never recycled.
- **Alpha-test edges.** Binary alpha stays binary at 4x and DXT1
  punch-through is encoded exactly, so cut-out edges do not crawl.

Replacements live in the default pool via a temporary system-memory upload,
so the 32-bit renderer keeps no second copy. The worker is large-address
aware.

## Mods

Edit a PNG and keep its name and size, or provide a 1x/2x/4x/8x image of the
original texture under the same key. Delete a PNG to use the original
texture. `XML1_DX8_TEXTURE_DUMP` reveals keys of textures not yet in a pack.
The pack never changes IGB files, PKGB declarations or resource names, and the
Xbox data formats are untouched.

## Validation (2026-10-30, Radeon 780M, 1080p)

Isolated fixture runs with process-local input only: boot, menus, Begin Story
and about 90 seconds of the first level, with and without the pack.

- Keys: all 774 textures dumped in a run recompute to the same key in Python.
  All 120 non-movie textures matched the IGB-derived pack; the other 651 were
  1024x512 FMV frames (left original) and two 1x1 generated textures.
- Pack: 3,632 textures, 1.9 GB of PNG, built in under 5 minutes on 16 cores.
- Replacement: 115 textures loaded, no failures. Close surfaces, characters
  and the HUD are visibly sharper with the same art. Surfaces already shown
  smaller than their original resolution render byte-identical to the
  original, because they sample the original mips.
- Mip safeguard: 408,921 replaced-texture draws had mip filtering disabled by
  the game. With the safeguard removed (diagnostic build), HUD and character
  pixels differed on 2-4% of still frames and 81% of a moving-camera frame.
- Still-frame stability: in eight consecutive captures 0.2 s apart, every
  changed pixel belonged to animated objects (character idle, pickups,
  portrait, HUD icon); static scenery did not change.
- Performance: steady gameplay held 60 FPS (vsync) in both modes. Loading
  replacements cost 2.1-2.8 s in total, mostly on the first frame after the
  loading screen (1.0 s); the slowest single texture took 120 ms. In-level
  frame spikes after that were 52 ms, versus 49 ms for the original textures.

Not verified: other levels and late-game content, long sessions, other GPUs
and drivers, motion shimmer by eye on a display. Player testing on other
machines is still required.
