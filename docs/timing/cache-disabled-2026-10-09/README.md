# FireStarter timing results with compilation caching disabled

Benchmark date: October 9, 2026, Pacific Daylight Time. Two complete user-launched batches for each mode. This report is the primary timing dataset for the revised Evolutionary Computational Discovery white paper.

All 1,152 configured tests met the logged 15-sample fitness criterion. Run means differ by +0.1656% for EvolveNew, -0.4133% for EvolveGPU, and -0.1177% for EvolveCPU (Run 2 relative to Run 1). These repeated seed-0 batches check timing repeatability; they are not independent random-seed replications.

| Mode | Run | Tests | Fitness successes | Mean seconds | Median seconds | P95 seconds | Mean generations |
| --- | --- | --- | --- | --- | --- | --- | --- |
| EvolveNew | 1 | 256 | 256 | 0.49547 | 0.32 | 0.900 | 2.58594 |
| EvolveNew | 2 | 256 | 256 | 0.49629 | 0.32 | 0.900 | 2.58594 |
| EvolveGPU | 1 | 256 | 256 | 1.51211 | 1.20 | 3.800 | 3.49219 |
| EvolveGPU | 2 | 256 | 256 | 1.50586 | 1.20 | 3.800 | 3.49219 |
| EvolveCPU | 1 | 64 | 64 | 27.88125 | 19.50 | 86.525 | 5.00000 |
| EvolveCPU | 2 | 64 | 64 | 27.84844 | 19.50 | 86.255 | 5.00000 |

EvolveNew has 3.052 and 3.034 times shorter mean time to solution than EvolveGPU in Runs 1 and 2. This compares the configured modes: New is supplied with a successful fixed register topology and uses one optimization unit; GPU searches register assignments and uses four. It does not isolate identical kernels or include the earlier cost of discovering New's register topology. CPU uses a different search strategy and includes CUDA optimization, so it is not a CPU-only hardware comparison.

## Purpose and cache conditions

The purpose is to measure current FireStarter time to first acceptable sampled-fitness solution without reuse from NVIDIA's compilation caches. The user set CUDA_CACHE_DISABLE=1 before testing and ran through a directly connected monitor, keyboard, and mouse, checked that the GPU was unused before the runs, and closed as many applications as practicable. The analysis process also inherited CUDA_CACHE_DISABLE=1, corroborating the current environment, although the native benchmark logs do not independently capture each executable's inherited environment or cache hits. Close paired timings support repeatability, not independent proof of the flag.

NVIDIA documents that CUDA_CACHE_DISABLE disables the driver PTX compilation cache and NVRTC's compilation cache. Loaded modules can still be reused within a process; disabling disk compilation caching does not force recompilation for each kernel launch. The source loads the evolution module once per execution unit and specializes selected candidate code into optimizer source. Compilation and GPU execution can overlap. This is an end-to-end search measurement, not a separate compiler or kernel microbenchmark.

References: [NVRTC compilation caching](https://docs.nvidia.com/cuda/nvrtc/index.html#caching-cuda-12-9); [CUDA cache controls](https://docs.nvidia.com/cuda/cuda-programming-guide/05-appendices/environment-variables.html#jit-compilation).

## Source and environment provenance

Tested source anchor: 13461b1733a03019eded0745a557ab021613fa17 (ECD-Timing-2026-10-08-Source). Current repository HEAD: ecc41e66c220a7b89dd766054a152981c96bb431, the October 8 report commit. All 55 source files recorded in the prior provenance and all three launch binaries match the October 8 hashes, as do each binary's launch and linker copies. All six settings snapshots match the current settings source. These are post-run checks; there is no embedded commit or in-run executable hash capture.

The established hardware/build record is one RTX 5090, Ryzen 9 7950X, stock GPU settings with automatic tuning off, integrated Radeon display, Release x64 builds from Visual Studio 2026, NVIDIA Studio Driver 617.42, and CUDA Toolkit 13.4.2 (compiler/NVRTC components 13.4.92). This record is inherited from the October 8 provenance; installation versions and device state are not continuously instrumented in the October 9 logs. Every native status header identifies the RTX 5090. Reboot is not asserted for October 9. No clock, temperature, process-load, cache-hit, or standalone compilation trace was captured.

## Settings

All runs use one sinf target variation on [0, 2*pi], 32 instructions, at most 30 registers, weighted opcode entries multiply/multiply/add, fitness target 1e-6, 15 fitness samples, 256 dense validation samples, 64 data iterations, evolution and optimization seed 0, start test 0, and no generation cap. CPU's separate multi-variation capability is outside this dataset.

| Setting | CPU evolution | GPU evolution | New evolution | GPU and New optimization |
| --- | --- | --- | --- | --- |
| Units / states | 16 / 16 | 1 / 1 | 1 / 1 | 1 / 1 setting |
| Population | 348160 | 32768 | 32768 | 65536 |
| Passes | 512 | 256 | 256 | 384 |
| Tests per batch | 64 | 256 | 256 | 256 |

GPU orchestrates four asynchronous optimization units on the single device; New orchestrates one. Settings remain mode specific. NVRTC options select compute_120, -default-device, -ftz=false, -prec-div=true, and -prec-sqrt=true.

## Timing stability and startup

All paired outer generation counts match exactly. New's logged evolution and completion fitness also match on every test. GPU has 14 differing completion-fitness tests; CPU has 14 differing candidate/fitness/validation tests. Those winner differences are consistent with asynchronous first-qualifying selection, but the logs do not identify every candidate's full code. They are preserved in each mode's comparison.json, not treated as identical outcomes.

Startup test 0 remains included in every headline statistic. Its solution durations are 3.70 / 3.46 seconds for New, 7.0 / 7.0 seconds for GPU, and 11.2 / 11.1 seconds for CPU. Compilation is not separately timed, so the startup increase cannot be assigned exclusively to a specific compilation stage.

As a clearly secondary sensitivity check, removing only test 0 gives New means 0.48290 / 0.48467 seconds and GPU means 1.49059 / 1.48431 seconds. This demonstrates that New's higher overall time is not explained by startup alone; these adjusted means do not replace the full-batch statistics.

New's mean logged GenTime over tests 1-255 and chronological quarters is reported in its mode analysis. The native GenTime is a whole-test solution duration divided by evolution generations, not a trace of individual generations. Later-quarter changes reflect both varying search/optimization work and timing; no monotonic persistent step slowdown is established. CPU duration versus generation count has descriptive R-squared above 0.99996 in each batch. Its changing solution-time averages track search effort rather than demonstrating a progressive execution slowdown.

## Precision and result validity

Success means satisfying maximum absolute error on 15 fitness samples. It is not a guarantee across the continuous interval. CPU records dense-grid error on all 64 tests: 59/64 in Run 1 and 60/64 in Run 2 exceed the printed 1e-6 threshold; means are 4.09406e-6 and 4.67781e-6, and maxima are 2.104e-5 and 2.217e-5.

GPU and New record dense precision only for final test 255: New is 6.9e-7 and GPU 2.718e-5 in both batches. These snapshots do not support a per-test dense-validation success rate. GPU test 188 prints completion fitness exactly as 1e-6 despite the underlying strict threshold check and success marker; unrounded fitness cannot be recovered. Validation is CPU evaluation over a denser sample grid, not a direct CPU/GPU arithmetic comparison.

## Context from the October 8 campaign

The October 8 observations used normal caching with an unknown initial cache state. They remain historical context and are not combined with October 9 measurements.

| Mode | Run | October 8 mean s | October 9 mean s | New divided by earlier |
| --- | --- | --- | --- | --- |
| EvolveNew | 1 | 0.16504 | 0.49547 | 3.0021 |
| EvolveNew | 2 | 0.16504 | 0.49629 | 3.0071 |
| EvolveGPU | 1 | 1.51016 | 1.51211 | 1.0013 |
| EvolveGPU | 2 | 1.38086 | 1.50586 | 1.0905 |
| EvolveCPU | 1 | 27.71875 | 27.88125 | 1.0059 |
| EvolveCPU | 2 | 27.84531 | 27.84844 | 1.0001 |

New is approximately three times slower with compilation caching disabled despite matching evolution generations and fitness on every test. GPU is close to the earlier first batch and 9.05% slower than the earlier second batch. CPU's means differ from the corresponding earlier means by +0.59% and +0.01%. These observations support mode-dependent sensitivity to the cache condition. They do not measure cache occupancy, prove cache eviction, establish that disabling the cache speeds a mode up, or isolate cache cost from separate-day environment variation.

## Raw output and integrity

| Mode | Run | Summary prefix | Status and snapshot prefix |
| --- | --- | --- | --- |
| EvolveNew | 1 | 2026-10-09_09-14-46 | 2026-10-09_09-14-46 |
| EvolveNew | 2 | 2026-10-09_09-17-02 | 2026-10-09_09-17-02 |
| EvolveGPU | 1 | 2026-10-09_09-19-20 | 2026-10-09_09-19-21 |
| EvolveGPU | 2 | 2026-10-09_09-28-05 | 2026-10-09_09-28-05 |
| EvolveCPU | 1 | 2026-10-09_09-34-40 | 2026-10-09_09-34-42 |
| EvolveCPU | 2 | 2026-10-09_10-09-18 | 2026-10-09_10-09-19 |

Each run retains the summary, every per-test status log, settings-source snapshot, and final saved state in its raw directory. Integrity audit: 1170 raw files and 2340 original/copy SHA-256 checks, with zero mismatches. The native originals in C:/Work/FireStarter/FireStarter/Logs are unchanged. No logged failure, missing test, settings mismatch, summary/status fitness mismatch, or cumulative-generation inconsistency was found. Numeric OS exit codes and debug output were not collected.

## Statistical method and files

Headline timings are native successful summary Duration values, with test 0 included. CPU/GPU log Duration to 0.1 seconds; New to 0.01 seconds. Sample standard deviation uses n-1; quantiles interpolate at (n-1)*p. Extra aggregate digits are arithmetic on rounded observations, not added timing resolution. Runs remain separate. Generation counts represent mode-specific work and are not identical units across modes. Failed tests would be counted separately; none are logged.

Final saved-state application Run durations are 127.264157 / 127.503211 seconds for New, 387.812855 / 386.246887 for GPU, and 1799.351328 / 1797.595244 for CPU. These are application timers, not independently captured process start-to-exit measurements. In particular, CPU records solution Duration before its separate final optimizer-code generation, so these durations exclude some post-solution work. Whole-application totals and sums of rounded solution durations should not be substituted for one another.

- Per-mode reports: [New](EvolveNew/analysis.md), [GPU](EvolveGPU/analysis.md), [CPU](EvolveCPU/analysis.md).
- Per-run tests.csv, analysis.json, terminal-status-rows.json, provenance.json, and raw-manifest.json contain every observation and available result.
- summary.csv, extended-analysis.json, and previous-campaign-comparison.json contain aggregate and comparative values.
- source-and-build-provenance.json records source and binary checks; integrity-audit.json records raw-file verification.
- analyze.py reproduces native-log parsing/statistics and raw integrity. Set FIRESTARTER_REPOSITORY if the repository moves. It never launches benchmarks or alters source/cache settings.
- Figures: [solution time distributions](solution-time-distributions.png), [generation averages](generation-averages.png), [CPU dense validation](cpu-dense-validation.png).
