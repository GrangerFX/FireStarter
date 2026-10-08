# FireStarter timing results — October 8, 2026

This report records the six user-launched timing batches on October 8, 2026 for the **FireStarter Evolutionary Computational Discovery** white paper.

For provenance, these measurements were the second formal timing attempt. An earlier attempt was aborted after benchmark-environment issues made some timing results unreliable; its changes were discarded and never checked into the repository. There is therefore no separate first-campaign report to consult. No more specific cause was supplied for that aborted attempt. Its observations are excluded from this dataset. The internal directory name `campaign-2-2026-10-08` identifies the attempt, not a second published report.

Exact source revision: **`13461b1733a03019eded0745a557ab021613fa17`**. Commit subject: “Made the naming of log files consistent and based on the mode being tested. Evolve CPU now logs its results like Evolve GPU and Evolve New.” The revision was verified before the manual tests and again during analysis; tracked source/settings were unchanged. Its mode-specific filenames and CPU field order are reflected in the native output.

The user completed the six runs and explicitly confirmed the agreed protocol: reboot, direct local console, ChatGPT/Ollama/LM Studio/Visual Studio closed, and no rebuild or settings change within each pair. Executables had already been built through Visual Studio 2026 before reboot. The assistant performed no launch, rebuild, code optimization, cache manipulation, or benchmark-environment modification for these observations; collection and analysis began after the tests.

## Results at a glance

All **1,152 configured tests** produced fitness successes: 256 per New/GPU run and 64 per CPU run. Each complete test sequence starts at 0 and ends at the configured final test. All paired summary generation counts match. Runtime headers and the six settings-source snapshots match; the settings snapshots also match the checked-in source. No logged failure, incomplete test, result-marker/status discrepancy, or generation-total discrepancy was found. Numeric OS exit codes and a full debug-output trace were not captured.

| Target | Run | Tests / successes | Mean successful-solution time (s) | Median (s) | Mean generations | Median generations |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| EvolveNew | 1 | 256 / 256 | 0.16503906 | 0.11 | 2.5859375 | 2 |
| EvolveNew | 2 | 256 / 256 | 0.16503906 | 0.11 | 2.5859375 | 2 |
| EvolveGPU | 1 | 256 / 256 | 1.51015625 | 1.2 | 3.4921875 | 3 |
| EvolveGPU | 2 | 256 / 256 | 1.38085938 | 1.1 | 3.4921875 | 3 |
| EvolveCPU | 1 | 64 / 64 | 27.71875000 | 19.0 | 5.0000000 | 3.5 |
| EvolveCPU | 2 | 64 / 64 | 27.84531250 | 19.45 | 5.0000000 | 3.5 |

The primary timing comparison is **EvolveNew versus EvolveGPU**, each using one Sin target variation. CPU timing is secondary, as the user specified; CPU capability and validation are retained as the main CPU findings. No Run 1/Run 2 average is used by default. Both repetitions use seed 0; they are repeated configured batches, not two new independently randomized campaigns.

Complete statistics, including sample standard deviation, minimum/maximum, P90/P95, generation distributions, completion fitness, logged validation, and every anomalous/outlier test:

- [EvolveNew report](EvolveNew/analysis.md) and [interpretation](EvolveNew/investigation.md).
- [EvolveGPU report](EvolveGPU/analysis.md) and [timing/result investigation](EvolveGPU/investigation.md).
- [EvolveCPU report](EvolveCPU/analysis.md) and [capability/precision investigation](EvolveCPU/investigation.md).
- [Six-run summary CSV](summary.csv). Each run also has `tests.csv`, `analysis.json`, terminal status rows, provenance, and a raw-file manifest.

## First-run versus second-run behavior

**EvolveNew:** the two mean rounded solution durations are equal, with 223/256 paired Durations equal at logged resolution. Median logged GenTime is 0.06 seconds in both runs. Quarter mean logged GenTime stays near 0.060–0.064 seconds, with small test-to-test variation and no persistent step slowdown. This supports approximately flat generation-average timing throughout both batches. It does not establish the time of every individual generation.

Startup test 0 is included unchanged: Duration 0.18 s / GenTime 0.09 s in Run 1 and Duration 0.14 s / GenTime 0.07 s in Run 2, each over two recorded evolution generations. The first generation's separate duration is not logged. No startup cost was corrected, removed, or replaced. Final cumulative solution times are 42.35 and 42.31 seconds; saved-state application Run durations are 42.685173 and 42.649148 seconds.

**EvolveGPU:** mean solution Duration is **8.5618% lower in Run 2**. Generation counts and evolution fitness match on every test; final optimization fitness differs on 12 tests, consistent with first-qualifying-report selection among four asynchronous optimization units. Those differences are listed and preserved. Startup test 0 is 2.1 versus 2.0 seconds and remains included. Saved-state application Run durations are 387.778984 and 353.692365 seconds.

**GPU timing qualification:** quarter mean Duration/Generation rises from about 0.4001 to 0.4217 seconds in Run 1 and 0.3757 to 0.3872 in Run 2. The test work mix also changes, and the normalization is not an isolated kernel timer. The investigation includes generation-count strata and status-stage timing. The logs do not establish whether an environmental clock/cache effect contributed. These observations are retained in all reported statistics; the report does not claim perfectly flat GPU timing or an exclusively cache-caused speedup.

**EvolveCPU:** all outer batch counts match. Eight tests select different terminal candidate/register arrays, consistent with asynchronous qualifying reports. Both runs solve all 64 training-fitness tests, but 60/64 in each exceed 1e−6 on the denser 256-point validation grid. Mean dense-grid errors are 0.00000450625 and 0.00000522484; maxima are 0.00002104 and 0.00002217. Apparent changes in mean solution time are dominated by changing generations to solution: quarter mean generation counts are 3.25, 6.25, 4.5, and 6.0 in both runs. A descriptive linear fit against generation count explains over 99.97% of solution-time variance in each run. The smaller early Run 1 Duration/Generation difference remains documented separately; the logs do not establish an execution slowdown. Larger batches would generally smooth sampling variation, but CPU behavior at 256 tests was not measured. CPU timing is retained as context and is not used as a primary performance conclusion.

Run 1 means the first launch in this manual pair, **not an empty-cache claim**. Reboot and earlier activity do not identify cache-hit coverage in the logs. Normal NVIDIA caches were never disabled, cleared, enlarged, relocated, or otherwise adjusted. Different mode behavior is recorded without imposing identical caching expectations. A causal cache attribution would require evidence absent from this output.

## Benchmark environment and build provenance

| Item | Record | Basis |
| --- | --- | --- |
| Benchmark date | October 8, 2026, Pacific Daylight Time (America/Los_Angeles) | Native filenames and saved-state Run dates |
| CUDA GPU | One NVIDIA GeForce RTX 5090 | Every status header; post-run nvidia-smi |
| GPU UUID | GPU-c0061cd0-d2f7-763f-8a10-47554c209c56 | Post-run query |
| GPU/VRAM settings | Actual stock settings; NVIDIA automatic tuning disabled | User-specified environment; unchanged 575 W current/default power limits confirmed after runs |
| NVIDIA driver | Studio Driver 617.42 | Studio distribution supplied by user; version confirmed after runs |
| CUDA Toolkit | 13.4.2; NVRTC/compiler components 13.4.92 | Installed version.json captured after runs |
| Processor | AMD Ryzen 9 7950X | User-specified system; registry read agrees |
| Windows display | Integrated Radeon output; RTX 5090 does not drive display | User-specified configuration; NVIDIA display-active Disabled after runs |
| Actual execution | Direct local console after reboot; no Remote Desktop | Explicit user confirmation |
| Competing applications | ChatGPT, Ollama, LM Studio, Visual Studio closed during all six runs | Explicit user confirmation; user procedure included checking idle GPU activity |
| Build mode | Release x64 for each named target | User build/launch protocol; checked-in project targets |
| Build tool | Visual Studio 2026 UI, v145 project toolset | User workflow and project configuration |

The environment assertions during testing are user-confirmed; post-run checks corroborate installed driver/toolkit, device, display state, and current power limits. They are not continuous in-run telemetry. GPU/CPU clock trajectories, temperature traces, per-process GPU activity, and cache-hit traces were not captured.

Intended launch directory: `C:/Work/FireStarter/FireStarter`, containing the Release executable and runtime CUDA sources. Linker directory: `C:/Work/FireStarter/Build/FireStarter_x64/<configuration>/`. The project copies the linker output to the launch directory. Post-run hashes match between these two locations for each target. Build-file timestamps precede all six observations.

| Configuration | Launch-copy last write (Pacific) | Post-run SHA-256 |
| --- | --- | --- |
| Evolve_New_Release | Oct 8, 11:49:15 | 1982A6DC33C21E94896366D861C7BFF50D03F12C4CF03CE9FF7178D32ED4ED82 |
| Evolve_GPU_Release | Oct 8, 11:49:42 | 0C4F3F686A8A77FBFA6D5821F024FFB41719DDE0D831D7577CD28394E936CC80 |
| Evolve_CPU_Release | Oct 8, 11:49:56 | D875BD3F82803808C269CD083F4CC57AAD7F5638DB311BF8B1C993D99142EA33 |

[Source/build provenance](source-and-build-provenance.json) includes full paths, file sizes/timestamps, matching linker hashes, and current source hashes. These hashes were captured after the user tests; no continuous image-path or before/after-binary capture was taken while ChatGPT was closed. The user's confirmation of no rebuild/settings changes within each pair supplies that part of the provenance. A Git hash embedded in the executable was not logged.

## Run identification and complete raw output

| Target | Run 1 summary prefix | Run 2 summary prefix | Raw files per run |
| --- | --- | --- | ---: |
| EvolveNew | 2026-10-08_12-16-24 | 2026-10-08_12-17-11 | 259 |
| EvolveGPU | 2026-10-08_12-19-24 | 2026-10-08_12-26-10 | 259 |
| EvolveCPU | 2026-10-08_12-44-07 | 2026-10-08_14-05-25 | 67 |

Each mode's summary ends in `_<mode>_Results.txt`. Every set contains one summary, all per-test status logs, the settings-source snapshot, and the final saved state. Status filenames identify the tested mode even when their header/body describes the optimization phase. The GPU/New header `mode = FIRESTARTER_EVOLVE_OPTIMIZE`, population 65536, passes 384 is therefore expected phase information, not evidence of a wrong executable.

CPU Run 2's 66 status/settings/saved-state files use prefix `2026-10-08_14-05-26`, one second after its summary prefix. The original names and association are preserved in provenance and manifests. CPU's longer inter-launch interval is visible in the timestamps; no artificial delay or timing correction is assumed. Actual whole-process launch/exit timestamps were not instrumented.

Original files remain unchanged in `C:/Work/FireStarter/FireStarter/Logs`. Each observation has a separate byte-identical `raw/` collection, preserving filenames. Manifests record original paths, sizes, SHA-256 hashes, and original last-write timestamps. [Integrity audit](integrity-audit.json): **1,170 raw files, 2,340 original/copy hash checks, zero mismatches**. No raw file was altered, trimmed, normalized, excluded for looking unfavorable, or averaged with its partner. Earlier campaign data is outside this dataset.

## Relevant FireStarter settings

One variation, starting variation 0: `sinf(n)` over `[0, 2 * 3.14159265f]`. CPU's separate three-variation capability is excluded. Common: 32 instructions, 30 maximum registers, three weighted opcode entries (multiply, multiply, add), fitness target `0.000001f`, 15 fitness samples, 256 dense precision samples, 64 data iterations, seed 0 for evolution and optimization, start test 0, scale 0.3, start scale 2.5, start result 10. Multi-GPU, GPU simulation, and compilation multiprocessing are off; auto-quit is on. Optional best-state/code/solution saving flags are off; native settings and final saved-state snapshots are nevertheless produced.

| Setting | CPU evolution | GPU evolution | New evolution | GPU/New optimization |
| --- | ---: | ---: | ---: | ---: |
| Configured units / states | 16 / 16 | 1 / 1 | 1 / 1 | 1 / 1 |
| Population | 348160 | 32768 | 32768 | 65536 |
| Passes | 512 | 256 | 256 | 384 |
| Generation limit | 0 | 0 | 0 | 0 |
| Optimize setting | 1 | 1 | 1 | 1 |
| Tests | 64 | 256 | 256 | 256 |

Zero generation limit provides no configured generation cap. GPU creates four asynchronous optimization execution units on the single GPU; New creates one. New evolves opcodes with fixed instruction-register assignments, while GPU evolves register assignments as well. The measured time-to-solution comparison includes these mode-specific search/work differences; it is not an isolated implementation comparison of identical kernels. The CPU-generated mode also performs CUDA optimization work and is not a CPU-only hardware benchmark.

Runtime NVRTC options in the checked-in source select the GPU architecture (`compute_120` for the reported capability), `-default-device`, `-ftz=false`, `-prec-div=true`, `-prec-sqrt=true`. They were not changed. Effective runtime optimizer settings are confirmed in every GPU/New status header; the full settings-source snapshots preserve all compile-time definitions.

## Statistical method, precision, and limits

Statistics use each successful solution's native summary `Duration`. Standard deviation uses n−1; percentiles use linear interpolation at index `(n−1) * p`. All reported tests succeeded on logged fitness; failures and incomplete tests are separate counts. The two runs remain separate. The machine-readable reports include the complete generation-count distributions and every evolution, optimization, completion, and available dense-precision value.

CPU and GPU Duration are printed to 0.1 seconds; New Duration/GenTime to 0.01 seconds. Extra digits in means and percentiles come from arithmetic on rounded observations. New/GPU `GenTime` is whole-test Duration divided by evolution-state generation count, printed separately. Recomputing it from already rounded Duration can give a different number. It does not expose each individual generation or directly isolate the first compilation. Startup observations remain in all headline statistics.

Completion fitness is maximum absolute error on 15 points. Dense precision is a CPU-computed maximum absolute error on 256 evenly spaced points, not a guarantee over the continuous domain or a direct CPU/GPU arithmetic comparison. CPU logs dense error per test. GPU/New logs it only in the final test's saved state: New test 255 is 0.00000069 versus fitness 0.00000006; GPU test 255 is 0.00002718 versus fitness 0.00000080. Those single snapshots cannot support a complete dense-precision success rate. GPU test 188's fitness prints exactly at the 1e−6 boundary in both runs; recorded success and the underlying strict completion check are preserved without inventing unrounded values.

Native file output is preserved completely for these six sets. `OutputDebugStringA` diagnostics were not captured; no debugger/profiler was attached. No unexpected failures, missing tests, settings differences, or evolutionary-generation divergence was observed. Reported winner differences, timing trends, rounding boundaries, and the CPU filename-stamp offset remain explicit qualifications. The reports provide descriptive evidence of current behavior rather than an unqualified claim that every aspect of the environment was independently instrumented.

## Reproduce the analysis and use the figures

`analyze.py` copies/verifies native files and calculates the per-run JSON/CSV results from these exact six identities. It refuses a changed source revision or a mismatching existing raw copy and never launches an executable. `write-report.py` renders target reports and comparisons; `plot-report.py` renders figures. These are analysis utilities, not FireStarter changes. Run them with Python; the figure utility additionally uses Matplotlib.

- [Generation timing figure](generation-timing.png), [PDF](generation-timing.pdf): New approximately flat; GPU sequence-associated change retained.
- [Successful-solution time distributions](solution-time-distribution.png), [PDF](solution-time-distribution.pdf): primary targets, both observations separately.
- [CPU dense precision](cpu-precision.png), [PDF](cpu-precision.pdf): all 64 tests per run and the 1e−6 reference.

No new benchmark, rebuild, cache adjustment, performance optimization, or environment intervention is required or was performed to generate this report.
