# Native DX8 custom shaders

The renderer supports an optional single-pass pixel shader applied to the game
picture after brightness/gamma and before capture/presentation. Black aspect
margins are excluded. This is native Direct3D 8, not a ReShade effect pipeline.
Advanced Options provides a shader selector in its lower-right footer. Move
down from Apply to reach it, select an effect, then select Apply to activate it
immediately. Cancel discards the pending selection. A failed effect leaves the
ordinary image active and shows a status message in the menu.

Copy `shaders/grayscale.ps`, `shaders/invert.ps`, or your own effect into
`XBOXgame/shaders/`. The selector lists files with a lowercase `.ps` extension,
up to 63 characters, using letters, digits, spaces, underscores, hyphens and
dots. Leading spaces and `..` are rejected. Long names are shortened only in
the displayed label. The selected filename is saved as `[PC] Shader` in
`pc-settings.ini`; an empty value means Off.

The menu's Default choice (`Shader = @build`) uses the optional legacy
`CustomShader` value in the `[BUILD]` section of `XBOXgame/build.ini`:

```ini
CustomShader = shaders/grayscale.ps
```

An empty or absent legacy setting disables the default effect. Relative paths
resolve beside the game data. Existing PC settings without a Shader entry use
Default. Explicit Off overrides the legacy setting. Changing the selected file
and applying reloads the effect live; edits to the same file require selecting
Off and applying, then selecting the file again and applying, or restarting.
The game never modifies shader source files.

Files contain DX8 pixel shader assembly (`ps.1.1` through `ps.1.4`), limited
to 64 KiB. The selected GPU must support the requested version. The Windows
system `d3dcompiler_47.dll` assembles the source; the D3D8 device creates and
executes the shader. No compiler DLL is loaded from the shader directory.
Includes are disabled. Modern HLSL/GLSL/ReShade sources are not accepted.

Texture stage 0 supplies the current rendered image with point sampling and
clamped addressing. The full-screen quad has one texture coordinate set;
coordinates already account for power-of-two allocation and the picture's
position within the backbuffer. Stages 1–7 are unbound. Define any constants
used by the effect in its source. There are no time, depth, auxiliary texture,
history-buffer or multipass inputs. See Microsoft's
[pixel shader 1.x instruction reference](https://learn.microsoft.com/en-us/windows/win32/direct3dhlsl/dx9-graphics-reference-asm-ps-instructions-ps-1-x).

The image copy prefers the GPU path. Devices using direct-lock readback use
the independent CPU upload path automatically, and a rejected GPU copy also
falls back to it. The effect itself still runs as a native pixel shader.
Missing files, assembly errors, unsupported shaders, or an unavailable system
assembler disable the optional effect and leave ordinary rendering active.
Details appear in the `[CUSTOM SHADER]` log. Brightness/gamma remain separate.

Validation includes exact invert pixels, full-frame edges, preserved black
margins, graphics-state restoration and invalid-source rejection in all 20
native readback/MSAA cases on the development Radeon. These results do not
establish compatibility or performance for every GPU or user-authored effect.
