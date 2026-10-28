# OpenXML1xbox

A Windows recompilation of the original Xbox **X-Men Legends**, built with
[XboxRecomp](https://github.com/sp00nznet/xboxrecomp) and a native Windows
**Direct3D 8** renderer.

**[Download 0.10.0](https://github.com/GTTeancum/XML1-recomp/releases/tag/0.10.0)**

Version 0.10.0 is an engine-assessment build. It reaches gameplay, supports
keyboard/mouse and XInput controls, and includes PC Options and Advanced Options
using XML2 menu assets recolored for XML1. It also adds the Angel mod plus beta
Bishop and Sunfire imports used to exercise the newly supported XML2 combat
handlers and PC sound banks. Full-game compatibility, imported-power coverage,
performance across different PCs, and audio fidelity are still being assessed.

<table>
  <tr>
    <td><img src="docs/images/main-menu.png" alt="X-Men Legends main menu with its 3D background" width="480"><br>Main menu</td>
    <td><img src="docs/images/gameplay.png" alt="Wolverine in level-one gameplay at 1080p" width="480"><br>1080p gameplay</td>
  </tr>
  <tr>
    <td><img src="docs/images/options.png" alt="Blue XML1-themed Options over the 3D Cerebro scene" width="480"><br>Options</td>
    <td><img src="docs/images/advanced-options.png" alt="Advanced Options with display settings and control bindings" width="480"><br>Advanced Options</td>
  </tr>
</table>

## Install the beta

Requires 64-bit Windows 10/11 and your own **X-Men Legends (World)** Xbox ISO.

1. Extract the files from your ISO into a writable folder using an Xbox ISO extraction tool.
2. Extract `OpenXML1xbox-0.9b-win64.zip` into that same folder, replacing the
   supplied files. Keep `runtime` and the hidden `.xml1-player-layout` file.
3. Launch **X-Men Legends.exe**. First-run setup extracts the archive into loose
   assets and generates PKGB manifests

The game also compiles Raven XML data during first-run setup to the
later games' XMLB format (`.xmlb`, `.engb` and other  variants, `.chrb`,
`.navb`). Existing loose installations upgrade once on launch. Original text files
and saves are retained; loose-mode gameplay reads the compiled versions.

The tested World ISO SHA-256 is:
`0a1ef03e57458144609906bbc2d44d2c26028cf704f4698ce0f1e61c34030b44`.

## Features and controls

- 1080p widescreen by default, adjustable display settings and live title-bar FPS.
- Native Options and Advanced Options, retaining the 3D menu or paused level.
- Rebindable keyboard/mouse and controller controls.
- WASD movement; left/right mouse attacks; Space jumps; E interacts.
- Middle mouse + drag, or V + drag, controls the camera. Esc pauses/resumes.
- Options > Space opens Advanced Options; Backspace returns to the previous menu.
- Main-menu Quit closes the application. Normal play has no session limit.

See the included `Read Me.txt` for the full default controls. Display and input
assignment changes require a restart. PC preferences are stored in
`pc-settings.ini`; original save data lives in `UDATA` and `TDATA`.

`build.ini` selects installed languages and asset loading. `PreferFilesLoose=1`
(or `true`) uses loose resources and PKGBs with **no archive fallback**. The new
PC menus were validated in English; localized PC menu adaptation is not complete.

`modderMode=1` (or `true`) in `[BUILD]` unlocks all installed playable characters
and costumes for testing, including after loading a save. Use `0` or `false`
to disable it, then restart. Unlocks written to a save remain unlocked. If the
key is absent, modder mode is off.

## Building from source

Development requires Git, Python 3.12, CMake and Visual Studio 2022 Desktop C++
tools. XboxRecomp and libsamplerate are pinned submodules; the setup script applies
our ordered toolkit patches.

```powershell
git clone --recurse-submodules https://github.com/GTTeancum/OpenXML1xbox.git
cd OpenXML1xbox
./scripts/setup.ps1
cmake -S . -B build/optimized -A x64 -DOPENXML1_BUILD_BOOT_PROBE=ON -DOPENXML1_OPTIMIZE_RECOMP=ON -DPython3_EXECUTABLE="$PWD/.venv/Scripts/python.exe"
cmake --build build/optimized --config Release --target xml1-boot-probe
```

Compilation uses the committed `src/recomp/game` tree, including the remaining
address-named functions. It does not require an ISO, XBE, disassembly or code
generation. The 32-bit DX8 renderer is built and embedded automatically.
The result is `build/optimized/Release/xml1-boot-probe.exe`; deploy it as
`X-Men Legends.exe` beside your own extracted game data and `default.xbe`.
Running the game still requires those original files and the release's modified
assets. Compiling the executable does not create a complete playable asset set.

See [Git-only build and regeneration](docs/GIT-ONLY-BUILD.md) for the source map,
checks and optional maintainer regeneration. The game host is 64-bit; an
original-Xbox hardware build is not implemented. [PC menu documentation](docs/PC-OPTIONS-CONTROLS.md)
covers optional menu asset authoring, which needs local XML2 reference assets
and the IGB writer. Original game assets remain outside Git.

This is an unofficial project, not affiliated with the original game's publishers
or developers. X-Men Legends and its artwork belong to their respective owners.
Third-party components retain their licenses and notices.
