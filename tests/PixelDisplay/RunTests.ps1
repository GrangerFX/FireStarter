param([switch]$Cuda)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
$includePath = Join-Path $projectRoot 'Life2'
$glfwInclude = Join-Path $includePath 'GLFW/include'
$glLibraries = Join-Path $includePath 'OpenGL'
$buildDirectory = Join-Path $PSScriptRoot 'build'
New-Item -ItemType Directory -Force -Path $buildDirectory | Out-Null
Push-Location $buildDirectory
try {
    $compilerArguments = @('/nologo', '/std:c++17', '/EHsc', '/W4',
        '/I', $includePath, '/I', $glfwInclude,
        (Join-Path $PSScriptRoot 'PixelDisplayTests.cpp'),
        (Join-Path $includePath 'glad/glad.c'), '/Fe:PixelDisplayTests.exe')
    $linkArguments = @('/link', "/LIBPATH:$glLibraries", 'glfw3dll.lib', 'opengl32.lib')
    if ($Cuda) {
        if (-not $env:CUDA_PATH) { throw 'CUDA_PATH must identify the CUDA toolkit.' }
        & nvcc '-std=c++17' '-arch=native' '-I' $includePath '-c' `
            (Join-Path $PSScriptRoot 'CudaRenderer.cu') '-o' 'CudaRenderer.obj'
        if ($LASTEXITCODE -ne 0) { throw 'CUDA renderer compilation failed.' }
        $compilerArguments += @('/DPIXEL_DISPLAY_ENABLE_CUDA=1', '/I',
            (Join-Path $env:CUDA_PATH 'include'), 'CudaRenderer.obj')
        $linkArguments += @("/LIBPATH:$(Join-Path $env:CUDA_PATH 'lib/x64')", 'cudart_static.lib')
    }
    & cl @compilerArguments @linkArguments
    if ($LASTEXITCODE -ne 0) { throw 'PixelDisplay tests compilation failed.' }
    $previousPath = $env:PATH
    try {
        $env:PATH = "$glLibraries;$previousPath"
        & ./PixelDisplayTests.exe
        if ($LASTEXITCODE -ne 0) { throw 'PixelDisplay tests failed.' }
    } finally { $env:PATH = $previousPath }
} finally { Pop-Location }
