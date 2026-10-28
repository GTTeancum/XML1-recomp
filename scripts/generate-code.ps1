param([switch]$Disassemble, [string]$XbePath)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$python = Join-Path $projectRoot '.venv/Scripts/python.exe'
if (-not $XbePath) { $XbePath = Join-Path $projectRoot 'XBOXgame/default.xbe' }
$XbePath = (Resolve-Path -LiteralPath $XbePath -ErrorAction Stop).Path
Push-Location (Join-Path $projectRoot 'external/xboxrecomp')
try {
    if ($Disassemble) {
        & $python -m tools.disasm $XbePath -o ../../analysis/disasm --force --seed-functions ../../config/function-seeds.json
        if ($LASTEXITCODE -ne 0) { throw 'Disassembly failed.' }
    }
    & $python (Join-Path $PSScriptRoot 'validate-seeds.py')
    if ($LASTEXITCODE -ne 0) { throw 'Verified function seed missing.' }
    & $python -m tools.func_id $XbePath --functions ../../analysis/disasm/functions.json --strings ../../analysis/disasm/strings.json --xrefs ../../analysis/disasm/xrefs.json --output ../../analysis/func_id
    if ($LASTEXITCODE -ne 0) { throw 'Function identification failed.' }
    & $python -m tools.abi_analysis $XbePath --disasm-dir ../../analysis/disasm --func-id-dir ../../analysis/func_id --output-dir ../../analysis/abi
    if ($LASTEXITCODE -ne 0) { throw 'ABI analysis failed.' }
    & $python (Join-Path $PSScriptRoot 'validate-symbols.py') --xbe $XbePath --export-manual ../../analysis/recomp/manual-functions.json
    if ($LASTEXITCODE -ne 0) { throw 'Symbol registry validation failed.' }
    & $python -m tools.recomp $XbePath --all --split 250 --game-name 'X-Men Legends' --disasm-dir ../../analysis/disasm --func-id-dir ../../analysis/func_id --abi-dir ../../analysis/abi --gen-dir ../../src/recomp/gen --output-dir ../../analysis/recomp --manual-functions ../../analysis/recomp/manual-functions.json
    if ($LASTEXITCODE -ne 0) { throw 'Code generation failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-generated.py')
    if ($LASTEXITCODE -ne 0) { throw 'Generated diagnostic guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-package-loading.py')
    if ($LASTEXITCODE -ne 0) { throw 'Package guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-xmlb.py')
    if ($LASTEXITCODE -ne 0) { throw 'XMLB cache guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-parser-text-arena.py') --apply
    if ($LASTEXITCODE -ne 0) { throw 'Parser text arena guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-pc-menu.py')
    if ($LASTEXITCODE -ne 0) { throw 'PC menu guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-character-limits.py')
    if ($LASTEXITCODE -ne 0) { throw 'Character layout guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-character-filter.py')
    if ($LASTEXITCODE -ne 0) { throw 'Character combat-property guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-character-race.py')
    if ($LASTEXITCODE -ne 0) { throw 'Character Race metadata guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-ai-modes.py')
    if ($LASTEXITCODE -ne 0) { throw 'Actor AI mode metadata guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-leader-definition.py')
    if ($LASTEXITCODE -ne 0) { throw 'Leader definition metadata guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-newgame-plus.py')
    if ($LASTEXITCODE -ne 0) { throw 'NewGame+ boundary guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-extraction-state.py')
    if ($LASTEXITCODE -ne 0) { throw 'Extraction campaign guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-saved-stats.py')
    if ($LASTEXITCODE -ne 0) { throw 'Saved-stat lifecycle guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-progress-extension.py')
    if ($LASTEXITCODE -ne 0) { throw 'Additional progress lifecycle guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-campaign-extra.py')
    if ($LASTEXITCODE -ne 0) { throw 'Additional campaign lifecycle guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-stash-lifecycle.py')
    if ($LASTEXITCODE -ne 0) { throw 'Stash inventory lifecycle guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-stash-menu.py')
    if ($LASTEXITCODE -ne 0) { throw 'Stash menu guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-native-gameplay-command.py')
    if ($LASTEXITCODE -ne 0) { throw 'Additional campaign lifecycle guards failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-auto-equip.py')
    if ($LASTEXITCODE -ne 0) { throw 'Automatic equipment pickup guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-frame-limit.py')
    if ($LASTEXITCODE -ne 0) { throw 'Frame-limit guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-script-extensions.py')
    if ($LASTEXITCODE -ne 0) { throw 'Script-extension guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-filter-event.py')
    if ($LASTEXITCODE -ne 0) { throw 'Filter event guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-bishop-drain.py')
    if ($LASTEXITCODE -ne 0) { throw 'Bishop contact guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-handler-live-trace.py')
    if ($LASTEXITCODE -ne 0) { throw 'Handler live trace guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-vertex-state.py')
    if ($LASTEXITCODE -ne 0) { throw 'Vertex viewport guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-crt-rotates.py')
    if ($LASTEXITCODE -ne 0) { throw 'CRT division rotate guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-operand-trace.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven operand trace guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-energy.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven energy guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-removal-health.py')
    if ($LASTEXITCODE -ne 0) { throw 'Removal health guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-silent-action.py')
    if ($LASTEXITCODE -ne 0) { throw 'Silent action guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-actor-scale.py')
    if ($LASTEXITCODE -ne 0) { throw 'Actor scale lifecycle guard failed' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-power-bindings.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven power bindings guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-damage.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven damage guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-powerup-metadata.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven powerup metadata guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-secondary-victim.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven secondary victim guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-loop-sound.py')
    if ($LASTEXITCODE -ne 0) { throw 'Raven loop sound guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-raven-effect-sound.py')
    if ($LASTEXITCODE -ne 0) { throw 'Effect/sound event guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-leader-event.py')
    if ($LASTEXITCODE -ne 0) { throw 'Leader event guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-actor-transform.py')
    if ($LASTEXITCODE -ne 0) { throw 'Actor transformation guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-danger-room-unlock.py')
    if ($LASTEXITCODE -ne 0) { throw 'Danger Room unlock guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-talent-ranks.py') --apply
    if ($LASTEXITCODE -ne 0) { throw 'Expanded talent rank migration failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-talent-slot-layout.py')
    if ($LASTEXITCODE -ne 0) { throw 'Talent slot layout guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-talent-sources.py') --apply
    if ($LASTEXITCODE -ne 0) { throw 'Talent source registry guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-talent-packages.py') --apply
    if ($LASTEXITCODE -ne 0) { throw 'Talent package lifecycle guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-talent-registry.py') --apply
    if ($LASTEXITCODE -ne 0) { throw 'Talent registry guard failed' }
    & $python (Join-Path $PSScriptRoot 'guard-talent-source-cache.py') --apply
    if ($LASTEXITCODE -ne 0) { throw 'Talent source cache guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-character-talent-map.py') --apply
    if ($LASTEXITCODE -ne 0) { throw 'Character talent map guard failed.' }
    & $python (Join-Path $PSScriptRoot 'guard-vitality-bonus.py')
    if ($LASTEXITCODE -ne 0) { throw 'Vitality lifecycle guard failed.' }
    # Keep raw guard input separate from named build output. Repeated generation
    # must never mix freshly emitted chunks with stale named function files.
    $namingRoot = Join-Path $projectRoot 'work/generated-names'
    $namingId = [guid]::NewGuid().ToString('N')
    $namedCandidate = Join-Path $namingRoot ($namingId + '-candidate')
    $namedBackup = Join-Path $namingRoot ($namingId + '-previous')
    $namedDestination = Join-Path $projectRoot 'src/recomp/named'
    & $python (Join-Path $PSScriptRoot 'name-recomp-functions.py') --source (Join-Path $projectRoot 'src/recomp/gen') --output $namedCandidate
    if ($LASTEXITCODE -ne 0) { throw 'Known-function naming or body-equivalence validation failed.' }
    # All directory moves are confined to the project; preserve the previous
    # named output for recovery instead of deleting it during publication.
    $projectPrefix = [IO.Path]::GetFullPath($projectRoot).TrimEnd('\') + '\'
    foreach ($target in @($namedCandidate, $namedBackup, $namedDestination)) {
        if (-not [IO.Path]::GetFullPath($target).StartsWith($projectPrefix, [StringComparison]::OrdinalIgnoreCase)) {
            throw 'Named-output path escaped the project.'
        }
    }
    if (Test-Path -LiteralPath $namedDestination) {
        Move-Item -LiteralPath $namedDestination -Destination $namedBackup
    }
    try {
        Move-Item -LiteralPath $namedCandidate -Destination $namedDestination
    } catch {
        if ((Test-Path -LiteralPath $namedBackup) -and -not (Test-Path -LiteralPath $namedDestination)) {
            Move-Item -LiteralPath $namedBackup -Destination $namedDestination
        }
        throw
    }
} finally { Pop-Location }
