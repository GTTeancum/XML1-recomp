param([string]$Destination, [string]$MenuSource, [string]$MenuWriterRoot)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
if (!$Destination) { $Destination = Join-Path $projectRoot 'XBOXgame' }
$Destination = [System.IO.Path]::GetFullPath($Destination)
if (!(Test-Path -LiteralPath (Join-Path $Destination 'default.xbe'))) { throw 'Stage into the existing asset directory containing default.xbe.' }
$gameExe = Join-Path $projectRoot 'build/optimized/Release/xml1-boot-probe.exe'
# Updating binaries must not certify an installation whose active media still
# depend on another folder. Do this before replacing any staged executable.
foreach ($relative in @('media','movies','sounds')) {
    $assetDirectory = Join-Path $Destination $relative
    if (!(Test-Path -LiteralPath $assetDirectory -PathType Container)) { throw "Missing player assets: $assetDirectory" }
    $pending = [System.Collections.Generic.Queue[string]]::new()
    $pending.Enqueue($assetDirectory)
    $fileCount = 0
    while ($pending.Count) {
        $current = Get-Item -LiteralPath $pending.Dequeue() -Force
        if ($current.Attributes -band [System.IO.FileAttributes]::ReparsePoint) {
            throw "Player staging requires real asset directories, not links: $($current.FullName)"
        }
        foreach ($entry in Get-ChildItem -LiteralPath $current.FullName -Force) {
            # Retained migration backups are inactive; never follow their links.
            if ($entry.Name.StartsWith('.previous-')) { continue }
            if ($entry.Attributes -band [System.IO.FileAttributes]::ReparsePoint) {
                throw "Player staging contains an asset link: $($entry.FullName)"
            }
            if ($entry.PSIsContainer) { $pending.Enqueue($entry.FullName) }
            else { $fileCount++ }
        }
    }
    if (!$fileCount) { throw "Empty player asset directory: $assetDirectory" }
}
foreach ($required in @($gameExe)) {
    if (!(Test-Path -LiteralPath $required -PathType Leaf)) { throw "Missing staging input: $required" }
}
if ($MenuSource) {
    $python = Join-Path $projectRoot '.venv/Scripts/python.exe'
    if (!$MenuWriterRoot) { $MenuWriterRoot = Join-Path $projectRoot 'work/igb-blender-reference' }
    $stamp = [DateTime]::UtcNow.ToString('yyyyMMdd-HHmmss') + '-' + [Guid]::NewGuid().ToString('N').Substring(0,8)
    $backupRoot = Join-Path $projectRoot "work/player-stage-backups/$stamp"
    $binaryBackup = Join-Path $backupRoot 'runtime-files'
    New-Item -ItemType Directory -Path $binaryBackup -Force | Out-Null
    $replaceFiles = @('X-Men Legends.exe','runtime/xml1-dx8-worker.exe','Read Me.txt','.xml1-player-layout','runtime/licenses/miniz.txt')
    foreach ($relative in $replaceFiles) {
        $existing = Join-Path $Destination $relative
        if (Test-Path -LiteralPath $existing -PathType Leaf) {
            $saved = Join-Path $binaryBackup $relative
            New-Item -ItemType Directory -Path (Split-Path -Parent $saved) -Force | Out-Null
            Copy-Item -LiteralPath $existing -Destination $saved
        }
    }
    & $python (Join-Path $PSScriptRoot 'stage-pc-menu.py') --source $MenuSource --destination $Destination --writer-root $MenuWriterRoot --report (Join-Path $backupRoot 'menu-stage.json') --backup (Join-Path $backupRoot 'menu-originals') --apply
    if ($LASTEXITCODE -ne 0) { throw 'Menu staging failed; player binaries were not replaced.' }
    Write-Host "Previous player files preserved at: $backupRoot"
}
foreach ($directory in @('runtime','build')) {
    New-Item -ItemType Directory -Path (Join-Path $Destination $directory) -Force | Out-Null
}
Copy-Item -LiteralPath $gameExe -Destination (Join-Path $Destination 'X-Men Legends.exe')
# Preserve then remove only obsolete, explicitly named distribution dependencies.
$obsoleteBackup = Join-Path $projectRoot ('work/player-stage-backups/embedded-' + [Guid]::NewGuid().ToString('N'))
foreach ($relative in @('runtime/xml1-dx8-worker.exe','msvcp140.dll','vcruntime140.dll','vcruntime140_1.dll','runtime/msvcp140.dll','runtime/vcruntime140.dll','runtime/vcruntime140_1.dll','Play XML1.cmd')) {
    $old = Join-Path $Destination $relative
    if (Test-Path -LiteralPath $old -PathType Leaf) {
        $saved = Join-Path $obsoleteBackup $relative
        New-Item -ItemType Directory -Path (Split-Path -Parent $saved) -Force | Out-Null
        Copy-Item -LiteralPath $old -Destination $saved
        Remove-Item -LiteralPath $old
    }
}

if (!(Test-Path -LiteralPath (Join-Path $Destination 'build.ini'))) { Copy-Item -LiteralPath (Join-Path $projectRoot 'build.ini') -Destination (Join-Path $Destination 'build.ini') }
Set-Content -LiteralPath (Join-Path $Destination '.xml1-player-layout') -Value 'OpenXML1 player layout version 2' -Encoding ascii
@'
X-Men Legends

Double-click X-Men Legends.exe to play with a keyboard/mouse or XInput controller.
The game defaults to 1080p widescreen and has no session timer.
Select Quit at the bottom of the main menu, or close the game window, to stop
the game and its audio.

Options > Advanced Options contains display settings and rebindable controls.
Apply saves pc-settings.ini. Back/Cancel discards unapplied changes.
Display settings, keyboard enable/disable and player assignments take effect
after restarting.
Existing Sound/Music, camera, subtitles and vibration settings remain in Options.
Music changes preview while you adjust the slider; Effects changes apply to
new menu sounds. Accept saves these Options settings; Back restores them.

Default keyboard/mouse controls:
WASD: move; Shift: walk; Space: jump; E: use/pick up.
Left mouse or Num 4: attack. Right mouse or Num 6: smash.
Num 5: hold for powers; 1-4: quick powers.
Middle mouse + drag (or V + drag): rotate horizontally, zoom vertically.
I/K: zoom; J/L: rotate. Mouse sensitivity adjusts rotation.
P/O: health/energy pack; C: call allies; arrows: select hero.
M: map; F1: team stats; Esc: pause.
Menus: arrows select, Enter accepts, and Backspace goes back.
Space opens Advanced Options from Options.
Options and Advanced Options support clicking their native controls.
Player 1-4 tabs select the binding profile to edit; Keyboard player selects
which player receives the keyboard and mouse after restarting.
The device panel shows each player's active controller slot and connection.
Select a device row to edit that player's bindings. The binding selector
switches between keyboard/mouse and controller controls.
Defaults 1/2/3 select the selected player's keyboard layout and restore that
player's standard controller bindings, from either binding view. Apply saves
the chosen preset; Cancel discards it. Reset all settings resets all PC profiles
and display/input settings in the draft until you Apply.
Hover a volume label and use the wheel to adjust it.
This first pass uses WASD movement, not XML2's click-to-move/targeting.

build.ini controls language and loose/packaged asset selection.
Assets live directly beside this EXE. UDATA and TDATA contain saved data.
The native Direct3D 8 renderer is embedded in X-Men Legends.exe.
Windows system DLLs are supplied by Windows; no separate runtime DLLs are needed.
build contains diagnostic logs if a problem needs reporting.

Keep this entire folder together when moving or copying the game.
No Python, developer checkout, environment variables or separate launcher is needed.
The original archive is retained for switching back to packaged mode.
Loose files are already prepared; new installations can prepare them using the
EXE's first-run progress dialog. Existing files and saved games are preserved.

First-run setup also compiles XML data to XMLB (including language, character
and navigation variants). Existing loose installations upgrade once. Original
text files and saves are retained; the game reads compiled files in loose mode.
Edit the compiled counterparts for mods. Existing binary mods are preserved.
Loose assets and PKGB modding are enabled. See build.ini for configuration.

HD textures: the texturepack folder holds 4x PNG replacements of the game's
textures. Set HDTextures = 0 in build.ini to play with the original textures.
Edit or delete a PNG to change or restore that one texture.
'@ | Set-Content -LiteralPath (Join-Path $Destination 'Read Me.txt') -Encoding utf8
New-Item -ItemType Directory -Path (Join-Path $Destination 'runtime/licenses') -Force | Out-Null
Copy-Item -LiteralPath (Join-Path $projectRoot 'external/miniz/LICENSE') -Destination (Join-Path $Destination 'runtime/licenses/miniz.txt')
Copy-Item -LiteralPath (Join-Path $projectRoot 'external/nv2a-vsh-cpu/NOTICE') -Destination (Join-Path $Destination 'runtime/licenses/nv2a-vsh-cpu.txt')
Write-Host "Player build staged at: $Destination"
exit 0
