# Native DX8 custom shaders

The renderer supports an optional single-pass pixel shader applied to the game
picture after brightness/gamma and before capture/presentation. Black aspect
margins are excluded. This is native Direct3D 8, not a ReShade effect pipeline.
An in-menu selector has not yet been implemented.

Copy `shaders/grayscale.ps` or `shaders/invert.ps` into `XBOXgame/shaders/`.
In the `[BUILD]` section of `XBOXgame/build.ini`, select one:

```ini
CustomShader = shaders/grayscale.ps
```

Start the game to load it. An empty or absent setting disables the effect.
Relative paths resolve beside the game data. Shader edits take effect on the
next launch. The game never modifies the source file.

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
