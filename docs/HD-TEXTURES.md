# HD texture packs

The native DX8 renderer replaces game textures with PNG files from a texture
pack folder. The project does not ship an upscaled pack: players make their
own from an export of the original textures, using the upscaler of their
choice. `scripts/texture-pack.py` produces that export, and can also build a
4x pack itself. Exports and packs are derived game assets and stay out of Git.

## Exporting the original textures

```powershell
python scripts/texture-pack.py build --game XBOXgame --out XML1-original-textures --dumps <dump folder> --originals
```

Every texture is written once as a PNG at its original size, under the same
names a pack uses (see below). Upscale the PNGs by any power of two (2x, 4x,
8x), keep each file name, and place the results in the `texturepack` folder.
Folders inside the pack do not matter. The export is not meant to be used as a
pack unchanged: 1x copies only re-encode the original textures.

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

## Building a 4x pack

```powershell
python scripts/texture-pack.py build --game XBOXgame --out XBOXgame/texturepack --model "C:/Program Files/Upscayl/resources/models/ultramix-balanced-4x.param" --jobs 4
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

The pack uses a learned 4x super-resolution model, then locks the result to
the original texture.

1. **Model.** Any ESRGAN-family 4x model, passed with `--model`: an `.onnx`
   file or an ncnn `.param`/`.bin` pair such as those shipped with Upscayl.
   `scripts/ncnn_to_onnx.py` converts ncnn models once (cached under
   `work/texture-pack-models`) and needs only numpy. Inference uses
   onnxruntime, with DirectML when `onnxruntime-directml` is installed and
   the CPU otherwise. Each texture gets 8 texels of wrapped (tiling axes) or
   repeated-edge context; transparent texels are first filled from visible
   neighbors so they cannot bleed dark colors into edges.
2. **Lock to the original.** Six back-projection passes drive the 4x4 box
   average of the output, which is what the following mip levels see, back to
   the original texel. The model can add detail inside a texel but cannot
   shift its color, shape or tone.
3. **Alpha.** Alpha is not passed through the model. It is resampled with
   bounded Lanczos-3; binary (cut-out) alpha stays binary.

Model selection (24 stratified textures; drift is the RMS difference, 0-255,
between the 4x4 average of the raw model output and the original):

| Model (Upscayl) | Raw drift | Fine detail vs. Lanczos | Notes |
| --- | --- | --- | --- |
| remacri-4x | 4.2 | 4.5x | Posterizes faces and stone into flat shapes; rings around glows |
| ultramix-balanced-4x | 4.7 | 3.5x | Real wood, lava and fabric detail without new patterns. **Selected** |
| ultrasharp-4x | 6.2 | 4.4x | Grain and stripe artifacts on gradients |
| upscayl-standard-4x | 8.3 | 2.7x | |
| high-fidelity-4x | 8.9 | 1.7x | Little added detail |
| digital-art-4x | 9.3 | 2.6x | |

After back-projection, ultramix-balanced drift is 0.32 (worst texture 0.89).
Without `--model`, the builder falls back to the bounded Lanczos upscale
(resolution only, no learned detail).

On the development machine, Upscayl's ncnn/Vulkan binaries fail to allocate
memory for the 33 MB models on the Radeon 780M driver (the small models run),
which is why the models are converted and run through onnxruntime instead.

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

## Original-texture export validation (2026-10-30)

- Export: 3,632 textures, 146 MB of PNG, written in about 20 seconds.
- In game with the export loaded as a pack: all 115 non-movie textures used
  during boot, menus and the start of the first level matched an exported
  file, with no load failures. Screenshots showed the same artwork as the
  original textures; remaining pixel differences were timing (movie frame,
  camera position, animated markers).

## 4x pack validation (2026-10-30, Radeon 780M, 1080p)

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
