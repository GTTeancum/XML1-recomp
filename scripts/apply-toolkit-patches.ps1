$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$toolkit = Join-Path $projectRoot 'external/xboxrecomp'
$pin = (git -C $toolkit rev-parse HEAD).Trim()
if ($pin -ne '3706cefa416aedea6d10c87ced805f89576560c4') { throw "Unexpected XboxRecomp pin: $pin" }
$patchNames = @('xboxrecomp-xml1-memory.patch', 'xboxrecomp-flag-joins.patch', 'xboxrecomp-dsp-integration.patch', 'xboxrecomp-kernel-abi.patch', 'xboxrecomp-stereo-output.patch', 'xboxrecomp-immediate-boundaries.patch', 'xboxrecomp-kernel-dispatch-thread.patch', 'xboxrecomp-incdec-carry.patch', 'xboxrecomp-idex-channel.patch', 'xboxrecomp-native-dsp-output.patch', 'xboxrecomp-device-interrupts.patch', 'xboxrecomp-physical-pages.patch', 'xboxrecomp-guest-vm-release.patch', 'xboxrecomp-fist-rounding.patch', 'xboxrecomp-voice-resampling.patch', 'xboxrecomp-audio-consumption-pacing.patch', 'xboxrecomp-ssl-diagnostics.patch', 'xboxrecomp-guest-irql.patch', 'xboxrecomp-stream-physical-zero.patch', 'xboxrecomp-stream-format-diagnostics.patch', 'xboxrecomp-voice-source-capture.patch', 'xboxrecomp-irql-exclusion.patch', 'xboxrecomp-prologue-saved-frame.patch', 'xboxrecomp-x87-classification.patch', 'xboxrecomp-incdec-result-snapshot.patch', 'xboxrecomp-idle-dsp-phase.patch', 'xboxrecomp-sar-operand-width.patch', 'xboxrecomp-directory-query-abi.patch', 'xboxrecomp-playback-diagnostics.patch', 'xboxrecomp-dsp-output-headroom.patch', 'xboxrecomp-hdtv-settings.patch', 'xboxrecomp-audio-device-recovery.patch', 'xboxrecomp-muted-output.patch', 'xboxrecomp-counted-object-names.patch', 'xboxrecomp-asset-path-filter.patch', 'xboxrecomp-configurable-video.patch', 'xboxrecomp-audio-thread-priority.patch', 'xboxrecomp-contiguous-free.patch', 'xboxrecomp-directory-lifetime.patch', 'xboxrecomp-nv2a-ack-pacing.patch')
& (Join-Path $projectRoot ".venv/Scripts/python.exe") (Join-Path $PSScriptRoot "check-toolkit-patch-stack.py") @patchNames
if ($LASTEXITCODE -eq 0) { return }
foreach ($patchName in $patchNames) {
    $patch = Join-Path $projectRoot "patches/$patchName"
    git -C $toolkit apply --reverse --check $patch 2>$null
    if ($LASTEXITCODE -eq 0) { Write-Host "$patchName already applied."; continue }
    git -C $toolkit apply --check $patch
    if ($LASTEXITCODE -ne 0) { throw "Toolkit patch conflicts with local changes: $patchName" }
    git -C $toolkit apply $patch
    if ($LASTEXITCODE -ne 0) { throw "Toolkit patch application failed: $patchName" }
}
