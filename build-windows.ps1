param(
    [string]$MsysBash = "C:\msys64\usr\bin\bash.exe",
    [string]$ProjectDir = "C:\Users\chica\git\foo-yc20",
    [string]$FaustRoot = "E:\Program Files\Faust",
    [switch]$Clean,
    [string]$Lv2Path
)

$ErrorActionPreference = "Stop"

if (-not (Test-Path -LiteralPath $MsysBash)) {
    throw "MSYS2 bash not found at '$MsysBash'."
}

if (-not (Test-Path -LiteralPath $ProjectDir)) {
    throw "Project directory not found at '$ProjectDir'."
}

if (-not (Test-Path -LiteralPath $FaustRoot)) {
    throw "Faust install not found at '$FaustRoot'."
}

$projectPosix = "/$($ProjectDir.Substring(0,1).ToLower())$($ProjectDir.Substring(2) -replace '\\','/')"
$faustBinPosix = "/$($FaustRoot.Substring(0,1).ToLower())$($FaustRoot.Substring(2) -replace '\\','/')/bin/faust.exe"

if (-not $Lv2Path) {
    $userProfile = [Environment]::GetEnvironmentVariable("USERPROFILE")
    if (-not $userProfile) {
        throw "USERPROFILE is not set and -Lv2Path was not provided."
    }
    $Lv2Path = Join-Path $userProfile ".lv2"
}

$lv2PathPosix = "/$($Lv2Path.Substring(0,1).ToLower())$($Lv2Path.Substring(2) -replace '\\','/')"

$steps = @(
    "export PATH=/mingw64/bin:/usr/bin:`$PATH",
    "cd `"$projectPosix`"",
    "export FAUST=`"$faustBinPosix`"",
    "export LV2_PATH=`"$lv2PathPosix`""
)

if ($Clean) {
    $steps += "/usr/bin/make cb CXX=/mingw64/bin/g++"
}

$steps += "/usr/bin/make lv2-headless test install LV2_PATH=`"$lv2PathPosix`" CXX=/mingw64/bin/g++"
$steps += "rm -f `"$lv2PathPosix/foo-yc20.lv2/foo-yc20.so`""

$bashCommand = ($steps -join " && ")

Write-Host "Running build via MSYS2..."
Write-Host $bashCommand

& $MsysBash -lc $bashCommand
if ($LASTEXITCODE -ne 0) {
    throw "Build failed with exit code $LASTEXITCODE."
}

# Ensure installed TTL metadata exactly matches source defaults.
$bundleDir = Join-Path $Lv2Path "foo-yc20.lv2"
Copy-Item -LiteralPath (Join-Path $ProjectDir "src\foo-yc20.lv2\foo-yc20.ttl") -Destination $bundleDir -Force
Copy-Item -LiteralPath (Join-Path $ProjectDir "src\foo-yc20.lv2\manifest.ttl") -Destination $bundleDir -Force

$manifestPath = Join-Path $bundleDir "manifest.ttl"
if (Test-Path -LiteralPath $manifestPath) {
    $manifest = Get-Content -LiteralPath $manifestPath -Raw
    $manifest = $manifest -replace "<foo-yc20\.so>", "<foo-yc20.dll>"
    Set-Content -LiteralPath $manifestPath -Value $manifest -NoNewline
}

Write-Host "Build + tests completed successfully."
