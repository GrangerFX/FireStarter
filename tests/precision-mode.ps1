$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path $PSScriptRoot -Parent
$vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio/Installer/vswhere.exe'
$installation = & $vswhere -latest -version '[18.0,19.0)' -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
if (!$installation) { throw 'Visual Studio 2026 with C++ build tools was not found.' }
& (Join-Path $installation 'Common7/Tools/Launch-VsDevShell.ps1') -Arch amd64 -HostArch amd64 -SkipAutomaticLocation
$cudaInclude = Join-Path $env:CUDA_PATH 'include'
foreach ($precision in 0, 1) {
    $outputPath = Join-Path $projectRoot "Build/PrecisionTests/$precision"
    New-Item -ItemType Directory -Force -Path $outputPath | Out-Null
    Push-Location $outputPath
    try {
        & cl /nologo /std:c++20 /EHsc /MD /O2 /DNOMINMAX /D_WINDOWS "/DFIRESTARTER_USE_PRECISION=$precision" "/DFIRESTARTER_MODE=FIRESTARTER_EVOLVE_CPU" "/I$projectRoot/FireStarter" "/I$cudaInclude" `
            "$PSScriptRoot/precision-mode.cpp" "$projectRoot/FireStarter/FireStarterState.cpp" /Feprecision-mode.exe
        if ($LASTEXITCODE -ne 0) { throw "Precision test compilation failed for flag $precision." }
        & ./precision-mode.exe
        if ($LASTEXITCODE -ne 0) { throw "Precision checks failed for flag $precision (exit $LASTEXITCODE)." }
    } finally {
        Pop-Location
    }
}
