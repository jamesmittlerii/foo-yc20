param(
    [string]$ProjectDir = "C:\Users\chica\git\foo-yc20",
    [string]$FaustRoot = "E:\Program Files\Faust",
    [string]$Lv2Path,
    [switch]$Clean,
    [switch]$TestOnly,
    [string]$BuildDir = "build-msvc-cmake"
)

$ErrorActionPreference = "Stop"

function Assert-Tool {
    param([string]$Name)
    if (-not (Get-Command $Name -ErrorAction SilentlyContinue)) {
        throw "Required tool '$Name' not found on PATH."
    }
}

Assert-Tool -Name "cl.exe"
Assert-Tool -Name "cmake.exe"

if (-not (Test-Path -LiteralPath $ProjectDir)) {
    throw "Project directory not found at '$ProjectDir'."
}

if (-not (Test-Path -LiteralPath $FaustRoot)) {
    throw "Faust install not found at '$FaustRoot'."
}

if (-not $Lv2Path) {
    $userProfile = [Environment]::GetEnvironmentVariable("USERPROFILE")
    if (-not $userProfile) {
        throw "USERPROFILE is not set and -Lv2Path was not provided."
    }
    $Lv2Path = Join-Path $userProfile ".lv2"
}

$buildDir = if ([System.IO.Path]::IsPathRooted($BuildDir)) { $BuildDir } else { Join-Path $ProjectDir $BuildDir }

if ($Clean -and (Test-Path -LiteralPath $buildDir)) {
    Remove-Item -LiteralPath $buildDir -Recurse -Force
}

New-Item -ItemType Directory -Force -Path $buildDir | Out-Null

Write-Host "Configuring CMake (MSVC)..."
& cmake -S $ProjectDir -B $buildDir -DFAUST_INCLUDE_DIR="$FaustRoot\include" -DYC20_LV2_BUNDLE_DIR="$Lv2Path\foo-yc20.lv2"
if ($LASTEXITCODE -ne 0) {
    throw "CMake configure failed with exit code $LASTEXITCODE."
}

Write-Host "Building CMake targets..."
& cmake --build $buildDir
if ($LASTEXITCODE -ne 0) {
    throw "CMake build failed with exit code $LASTEXITCODE."
}

Write-Host "Running test-msvc..."
& cmake --build $buildDir --target test-msvc
if ($LASTEXITCODE -ne 0) {
    throw "test-msvc failed with exit code $LASTEXITCODE."
}

if ($TestOnly) {
    Write-Host "MSVC test complete."
    return
}

Write-Host "Installing LV2 bundle..."
& cmake --install $buildDir
if ($LASTEXITCODE -ne 0) {
    throw "CMake install failed with exit code $LASTEXITCODE."
}

Write-Host "MSVC build complete. LV2 bundle installed at:"
Write-Host "  $(Join-Path $Lv2Path 'foo-yc20.lv2')"

