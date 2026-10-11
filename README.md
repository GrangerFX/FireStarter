<!-- Starting README draft for review and editing by the project author. -->

# FireStarter

FireStarter is a Windows C++/CUDA research project for evolving executable programs and their initial numerical state. It explores **Evolutionary Computational Discovery (ECD)**: searching for useful computational structures when the algorithm or architecture is not known in advance, but candidate behavior can be evaluated.

The engineering focus is making that search practical on NVIDIA GPUs. FireStarter separates program structure from register data, screens candidates for their response to limited evolution, and compiles promising structures into specialized CUDA code for deeper numerical optimization. ECD describes the research objective; it builds on established evolutionary computation and genetic programming.

The long-term motivation is discovering structures useful for machine intelligence, including methods that human or AI researchers could adapt to unfamiliar problems. The demonstrated work is narrower: evolving compact arithmetic programs for controlled mathematical targets. Broader applications remain research questions.

## White paper and demonstrated results

The repository includes the **Evolutionary Computational Discovery white paper, version 1.0** (October 9, 2026): [Markdown](docs/white-paper/version-1.0/Evolutionary_Computational_Discovery_White_Paper_Version_1_0.md) and [PDF](docs/white-paper/version-1.0/Evolutionary_Computational_Discovery_White_Paper_Version_1_0.pdf). It explains the architecture, motivation, experiments, and limitations.

In the [October 9 timing campaign](docs/timing/cache-disabled-2026-10-09/README.md), all 1,152 tests met the configured sine-fitness criterion on one RTX 5090 with compilation caching disabled. Mean solution times were approximately 0.496 seconds for EvolveNew, 1.51 seconds for EvolveGPU, and 27.9 seconds for EvolveCPU.

These are results for one configured benchmark: maximum absolute error below `1e-6` on 15 fitness samples over `[0, 2*pi]`. Accuracy between samples can be worse. EvolveNew is supplied with a previously successful register-use pattern, and its timing excludes discovering that pattern. EvolveCPU also uses GPU optimization, so these timings compare search strategies rather than CPU and GPU hardware alone.

## Test modes

The mode is selected by the Visual Studio build configuration, not a command-line option.

| Mode | Release configuration (`x64`) | Approach |
| --- | --- | --- |
| **EvolveCPU** | `Evolve_CPU_Release` | Keeps a historical pool of candidates, selects and mutates code on the CPU, then compiles candidates for register-data evolution on the GPU. Supports searching for one structure that works across related target variations. |
| **EvolveGPU** | `Evolve_GPU_Release` | Samples many random structures on the GPU and gives each a bounded data-evolution budget. Promising structures are compiled for deeper optimization. |
| **EvolveNew** | `Evolve_New_Release` | Holds a successful register-use pattern fixed, samples opcodes, and evolves register data. This experiment avoids costly dynamic register indexing during GPU evaluation. |
| **EvolveSelect** | `Evolve_Select_Release` | Select is an earlier version of EvolveGPU. It attempts to evolve by changing just two or three instructions when the code fails to evolve after a number of generations. |
| **EvolveSinSim** | `Evolve_SinSim_Release` | EvolveSinSim performs the same Sin() simulation as the original SinSim() but uses code evolution rather than a fixed neural network. This explores the generation of code and registers that processes multiple input samples without resetting the registers for each sample. |
| **SinSim** | `SinSim_Release` | This is the best GPU implementation of the original SinSim neural network from around 2008. It uses just four neurons and successfully matches the target function to six digits of accuracy over [0, 2*pi]. The Sin() simulation initializes the neuron weights and then runs the simulation over a number of samples. The target function is Sin(theta) where theta is offset 45 samples. |
| **Random** | `Random_Release` | Random creates randomly generated code instructions and then uses one or more Optimize passes to evolve the best register data. The results demonstrate that some random code instructions are far more evolvable than others. This discovery was the basis for the EvolveGPU code evolution method. |
| **MoneyMaker** | `MoneyMaker_Release` | MoneyMaker is an experiment to find out if code evolution can be used to predict the future rather than simulate a static function. This code is based on EvolveSinSim() but uses stock market data as the input and output. The goal is to evolve code that signal when to buy, sell or hold shares in a stock. Currently results are inconclusive. This problem may not be solvable using the current number of instructions, registers and opcodes. |
| **SpeedTest** | `SpeedTest_Release` | SpeedTest can be used to test the performance impact of changes to the evolve code. Paste the code you wish to modify into FireSpeedTest.cu before making changes and use it as a reference. |
| **Optimize** | `Optimize_Release` | Optimize mode allows previously evolved code instructions to have their data fully evolved. In addition, Optimize can run multiple tests to find alternate register data values. This is also a way to test the Optimize pass separately from the Evolve passes. |
| **Solution** | `Solution_Release` | Solution mode tests the solution code generated in another pass. It calls the generated function to draw a graph of the function for theta within the target range. |

Debug configurations are available for development; use Release configurations for timing.

## Stock market data for MoneyMaker

The data that was used to test MoneyMaker was obtained from: https://stooq.com/db/h/
It must be placed in a folder named "StockMarketData" at the same level as the main FireStarter repository folder. Download h_us_txt.zip and unzip it inside the StockMarketData folder.

## Computational substrate

The three main modes use fixed-length, straight-line programs. A candidate consists of an opcode sequence, a register-use sequence, and initial register values. The current setup uses 32 instructions and at most 30 registers, with two operations:

```cpp
n = r[i] += n;
n = r[i] *= n;
```

Each instruction updates both the selected register and the scalar intermediate value `n`. Registers retain their updated values within an evaluation; they are mutable working state rather than just constants. The evolved programs have no sine instruction. The reference sine function supplies the fitness target.

## Requirements

- Windows, with an NVIDIA CUDA-capable GPU and a compatible NVIDIA driver.
- Visual Studio 2026 with **Desktop development with C++**, the MSVC `v145` toolset, and a Windows SDK.
- A recent NVIDIA CUDA Toolkit that supports your GPU, including its headers, libraries, and NVRTC runtime compiler. The recorded benchmark used CUDA Toolkit 13.4.2.

The project uses `CUDA_PATH` to locate CUDA headers and libraries. Ensure it points to the installed toolkit and that its `bin` directory is on `PATH`. Generated CUDA programs are compiled at runtime with NVRTC.

## Build and run

1. Clone the repository:

   ```powershell
   git clone https://github.com/GrangerFX/FireStarter.git
   cd FireStarter
   ```

2. Open `FireStarter.sln` in Visual Studio 2026. Set **FireStarter** as the startup project, select **x64**, and choose **Evolve_New_Release** for an initial run.

3. For a short first run, edit `FireStarter/FireStarterSettings.h` and set `FIRESTARTER_EVOLVE_NEW_TESTS` to `1`. The checked-in defaults run 256 tests for EvolveNew and EvolveGPU, and 64 for EvolveCPU. Build the solution after changing settings.

4. Create `FireStarter/Logs` if it does not exist. Under **Project Properties > Debugging**, use `$(ProjectDir)FireStarter` as the working directory and `$(ProjectDir)FireStarter\$(TargetFileName)` as the command. Start with **F5**, or **Ctrl+F5** without debugging.

The build output is `Build/FireStarter_x64/<configuration>/<configuration>.exe`; the post-build step also copies the executable into `FireStarter/`. **Run with that source folder as the working directory**, because the application loads CUDA source and headers from relative paths.

Alternatively, from a Visual Studio 2026 Developer PowerShell at the repository root:

```powershell
msbuild .\FireStarter.sln /m /p:Configuration=Evolve_New_Release /p:Platform=x64
New-Item -ItemType Directory -Force .\FireStarter\Logs | Out-Null
$env:Path = "$env:CUDA_PATH\bin;$env:Path"
Set-Location .\FireStarter
.\Evolve_New_Release.exe
```

For another mode, substitute its configuration and executable name, such as `Evolve_GPU_Release` and `Evolve_GPU_Release.exe`. The application starts its configured search automatically, displays progress and graphs, and exits when the batch finishes. Press **Q** in the application window or close it to stop early. Status logs, summaries, settings snapshots, and saved-state snapshots are written under `FireStarter/Logs`.

## Changing experiments and saving solutions

Edit [FireStarterSettings.h](FireStarter/FireStarterSettings.h) for sample counts, target error, seeds, populations, passes, test counts, and target variations. Edit [FireStarterTarget.h](FireStarter/FireStarterTarget.h) to change the target function or input interval. Rebuild after changes. Several population defaults are sized around an RTX 5090; adjust them for other GPUs and record settings when comparing performance.

Generated solution export is disabled by default. Set `FIRESTARTER_SAVE_SOLUTION` to `1` and rebuild to write generated solution headers, including `FireStarter_Solution.h`. Then build and run `Solution_Release` to inspect that exported solution. `FIRESTARTER_SAVE_BESTSTATE` controls updating the working `FireStarter_LoadState.h` used by `Optimize_Release`; timestamped state snapshots are saved in `Logs` independently. Preserve any existing generated headers you want to keep before enabling these options.

Validate discovered programs on additional inputs and against the intended numerical requirements before reusing them. Meeting the search fitness threshold establishes success for that objective.

## Example generated Sin() function

Note: This is only one of a very large number of solutions that can be evolved.
```cpp
inline float Sin(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.57079625f;
    n *= r0;
    r0 = n += -1.55048871f;
    r1 = n *= -0.00504709f;
    r2 = n += -3.27915645f;
    r3 = n *= 0.97507936f;
    n += 6.77082920f;
    n *= 5.91008902f;
    n *= r0;
    n *= 0.04096542f;
    n *= -0.01095512f;
    n *= -0.05268164f;
    r0 = n += -0.22633524f;
    n *= 5.91095209f;
    r4 = n *= 1.69961059f;
    n = r1 *= n;
    n *= r4;
    r4 = n += 1.94992745f;
    n += r0;
    n *= -3.13565612f;
    n = r1 *= n;
    n += 0.89263713f;
    n = r1 += n;
    n *= 0.72802269f;
    n *= r4;
    n *= r2;
    n *= r1;
    n *= r3;
    n *= 0.31613135f;
    n *= 0.96034288f;
    n += -2.72793937f;
    n *= 0.36657712f;
    return n;
}
```

## License

[MIT](LICENSE). Author: Mark Granger.
