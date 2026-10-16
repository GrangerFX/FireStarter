param(
    [string]$Configuration = 'Evolve_New_Release',
    [switch]$Rebuild
)

$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path $PSScriptRoot -Parent
$vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio\Installer\vswhere.exe'
$installation = & $vswhere -latest -version '[18.0,19.0)' -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
if (!$installation) { throw 'Visual Studio 2026 with C++ build tools was not found.' }

# Initialize matching tools in this process; inherited VS 2019 paths can cause LNK1101.
& (Join-Path $installation 'Common7\Tools\Launch-VsDevShell.ps1') -Arch amd64 -HostArch amd64 -SkipAutomaticLocation
$msbuild = Join-Path $installation 'MSBuild\Current\Bin\amd64\MSBuild.exe'
$target = if ($Rebuild) { 'Rebuild' } else { 'Build' }
Push-Location $projectRoot
try {
    & $msbuild 'FireStarter.sln' "/t:$target" "/p:Configuration=$Configuration" '/p:Platform=x64' /m /nologo /v:minimal
    if ($LASTEXITCODE -ne 0) { throw "MSBuild failed with exit code $LASTEXITCODE." }
} finally {
    Pop-Location
}
