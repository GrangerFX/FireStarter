# Command-line builds

Verified October 15, 2026 from Codex desktop on Windows.

From the repository root in PowerShell:

```powershell
& .\scripts\build.ps1 -Configuration Evolve_New_Release
& .\scripts\build.ps1 -Configuration Evolve_GPU_Release
& .\scripts\build.ps1 -Configuration Evolve_CPU_Release
```

Add `-Rebuild` for a full rebuild. Other configurations in FireStarter.sln can also be supplied. The script finds Visual Studio 2026 through vswhere, initializes its x64 Developer PowerShell environment, and runs its x64 MSBuild. It changes only the current PowerShell process environment, not Windows environment settings. Build failures produce a PowerShell error.

Outputs are under `Build\FireStarter_x64\<Configuration>\`; the project's post-build step copies the executable into `FireStarter\`.

## Diagnosed failure and verification

The October 7 chat, "Run FireStarter timing campaign", recorded:

```text
LINK : fatal error LNK1101: incorrect MSPDB140.DLL version; recheck installation of this product
```

The inherited PATH included Visual Studio 2019/MSVC 14.29 tools while the project selected Visual Studio 2026/MSVC 14.51. The same failure was reproduced October 15 by calling the 2026 MSBuild directly without initializing Developer PowerShell. After initializing the matching 2026 tools using this script, Evolve_New_Release x64 compiled, linked, and copied successfully (exit code 0). This supports using a consistent developer environment as the fix; no Visual Studio repair or global PATH edit was needed.

## Codex handoff

Use scripts/build.ps1 for builds instead of controlling Visual Studio with keyboard and mouse. Source inspection, editing, and compilation are available through command-line tools.

Compilation success does not establish that a sandbox launch is equivalent to a desktop benchmark launch. The earlier timing chat found redirected LOCALAPPDATA and TEMP in the command tool's sandbox; today's shell also has redirected LOCALAPPDATA. Keep formal benchmark launch provenance separate from build verification. No benchmark was launched during this troubleshooting session. CUDA_CACHE_DISABLE was observed as 1 in the current process and machine environment and was left unchanged.
