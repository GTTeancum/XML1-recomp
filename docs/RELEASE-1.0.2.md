# XML1-recomp 1.0.2

- Fixed the reproduced Conversion Sequencer crash.
- Added a startup fallback for GPUs that reject the usual graphics readback path.
- Fixed fullscreen sizing and mouse alignment. Custom resolutions now preserve the game's aspect ratio.
- Fixed same-size PNG replacements and a texture-cache mix-up between mip chains.
- Stopped the looping Options decorations.
- Added brightness, gamma, and optional custom shaders to Advanced Options. Two example shaders are included.

## Install or update

Download **XML1-recomp-1.0.2-win64.zip**. You still need your own Xbox game data.

Close the game and extract the ZIP into your game folder, replacing the supplied files. Updating requires the menu files as well as the EXE. Saves and `pc-settings.ini` are not included or replaced. Back up any modified `build.ini` or menu files first, then reapply your changes.

For a new installation, extract your **X-Men Legends (World)** Xbox ISO into a writable folder, extract this ZIP into the same folder, then run **X-Men Legends.exe**. First launch prepares the loose game files.

The optional texture template from [1.0.1](https://github.com/GTTeancum/XML1-recomp/releases/tag/1.0.1) remains available. No texture pack is required for this update.

## Testing

The Sequencer fix passed the panel/door transition and movement onto the walkway using an isolated test setup. Captured frames include the exact draw that previously crashed and replay successfully through the shipped renderer. Display, texture, and menu changes also passed targeted local checks.

This is not a full playthrough or validation on every GPU. Intel Arc hardware was not available. The reported invisible enemies, enemies outside the map, and historical texture-pack flickering remain unconfirmed. Audio was muted during the gameplay checks.
