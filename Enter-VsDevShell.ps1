param(
    [string]$VsDevCmd = "E:\Program Files\Microsoft Visual Studio\18\Community\Common7\Tools\VsDevCmd.bat",
    [string]$Arch = "x64",
    [string]$HostArch = "x64"
)

$ErrorActionPreference = "Stop"

if (-not (Test-Path -LiteralPath $VsDevCmd)) {
    throw "VsDevCmd.bat not found at '$VsDevCmd'."
}

# Run VsDevCmd in cmd.exe, then dump env as key=value lines.
$tmpCmd = Join-Path $env:TEMP "enter-vsdevshell-$PID.cmd"
@(
    "@echo off"
    "call `"$VsDevCmd`" -arch=$Arch -host_arch=$HostArch >nul"
    "if errorlevel 1 exit /b 1"
    "set"
) | Set-Content -LiteralPath $tmpCmd -Encoding ASCII

$envDump = & cmd.exe /d /c "`"$tmpCmd`""
$exit = $LASTEXITCODE
Remove-Item -LiteralPath $tmpCmd -ErrorAction SilentlyContinue
if ($exit -ne 0) {
    throw "Failed to initialize Visual Studio developer environment."
}

foreach ($line in $envDump) {
    $idx = $line.IndexOf("=")
    if ($idx -le 0) { continue }
    $name = $line.Substring(0, $idx)
    $value = $line.Substring($idx + 1)
    Set-Item -Path "Env:$name" -Value $value
}

Write-Host "VS developer environment loaded in current PowerShell session."
Write-Host "  VsDevCmd : $VsDevCmd"
Write-Host "  Arch     : $Arch"
Write-Host "  HostArch : $HostArch"
Write-Host ""
Write-Host "Quick check:"
Write-Host "  where cl"
Write-Host "  where cmake"
