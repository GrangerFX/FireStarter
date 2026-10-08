# EvolveGPU timing results — October 8, 2026

Benchmark date: October 8, 2026 (Pacific Daylight Time). Exact Git commit: `13461b1733a03019eded0745a557ab021613fa17`. User-launched Release x64 executable, one Sin variation, two complete batches without rebuilding or changing settings within the pair. See the campaign README for environment, binary provenance, and raw-file manifests.

This is a primary timing target.

| Metric | Run 1 | Run 2 |
| --- | ---: | ---: |
| Configured / completed tests | 256 / 256 | 256 / 256 |
| Successes / failures / incomplete | 256 / 0 / 0 | 256 / 0 / 0 |
| Fitness success rate | 100.00% | 100.00% |
| Mean time per successful solution (s) | 1.51016 | 1.38086 |
| Median (s) | 1.20000 | 1.10000 |
| Sample standard deviation (s) | 1.03616 | 0.91655 |
| Minimum (s) | 0.60000 | 0.60000 |
| Maximum (s) | 6.40000 | 5.90000 |
| P90 (s) | 2.80000 | 2.50000 |
| P95 (s) | 3.90000 | 3.32500 |
| Mean generations to solution | 3.49219 | 3.49219 |
| Median generations to solution | 3.00000 | 3.00000 |
| Sum of rounded solution durations (s) | 386.60 | 353.50 |
| Final logged cumulative solution duration (s) | 387.40 | 353.30 |
| Final snapshot application Run duration (s) | 387.778984 | 353.692365 |
| Raw files preserved | 259 | 259 |
| Median logged GenTime (s) | 0.40 | 0.40 |

Times use each successful summary row’s `Duration`. Standard deviation uses n−1, and P90/P95 use linear interpolation. Each run is a separate observation. CPU/GPU Duration is logged to 0.1 s; New to 0.01 s. More aggregate digits do not imply finer measurement resolution. Startup remains included. Application Run duration is the saved-state timer, not a separately measured process stopwatch; numeric OS exit codes were not collected.

## Generation distributions

The summary `Generation` field is an outer CPU evolution-batch count or a GPU/New evolution-state generation count. GPU/New evolution overlaps optimization. These counts do not represent identical work between modes. CPU also logs the winning candidate’s `Best Generations` and `Evolutions`; their per-test values and the candidate-generation distribution are in analysis.json and tests.csv.

| Summary generations | Run 1 tests | Run 2 tests |
| ---: | ---: | ---: |
| 2 | 99 | 99 |
| 3 | 67 | 67 |
| 4 | 42 | 42 |
| 5 | 19 | 19 |
| 6 | 9 | 9 |
| 7 | 6 | 6 |
| 8 | 4 | 4 |
| 9 | 2 | 2 |
| 10 | 5 | 5 |
| 11 | 1 | 1 |
| 12 | 1 | 1 |
| 13 | 1 | 1 |

## Completion errors and validation

Fitness is a maximum absolute error on 15 samples. The CPU-computed precision check is a maximum absolute error on 256 evenly spaced samples over the same Sin domain. These are different sample sets. The completion check uses a strict comparison against the floating target; the success marker and printed eight-decimal values are retained, including rounding ambiguity. A precision evaluation is not a direct comparison of CPU and GPU arithmetic on identical inputs.

| Logged completion fitness | Run 1 | Run 2 |
| --- | ---: | ---: |
| Minimum | 0.00000006 | 0.00000004 |
| Maximum | 0.00000100 | 0.00000100 |
| Mean | 0.00000033 | 0.00000033 |
| Median | 0.00000021 | 0.00000022 |

Per-test dense precision is not logged for EvolveGPU; the analysis contains missing values, not presumed precision passes. The last saved-state snapshot identifies test 255 and logs precision 0.00002718 versus fitness 0.00000080 in both runs. That snapshot cannot establish a precision success rate for all 256 tests.
GPU/New evolution-stage fitness and final optimization-stage fitness are separate fields. Every result is retained in tests.csv; distributions for both stages are in analysis.json.

## Timing progression and anomalies

| Run | Test indices | Mean solution duration (s) | Mean generations | Mean Duration/Generation (s) | Median Duration/Generation (s) |
| ---: | --- | ---: | ---: | ---: | ---: |
| 1 | 0–63 | 1.44375 | 3.40625 | 0.40010 | 0.40000 |
| 1 | 64–127 | 1.43281 | 3.35938 | 0.40318 | 0.40000 |
| 1 | 128–191 | 1.56719 | 3.57812 | 0.42202 | 0.42500 |
| 1 | 192–255 | 1.59688 | 3.62500 | 0.42170 | 0.41667 |
| 2 | 0–63 | 1.33906 | 3.40625 | 0.37566 | 0.37083 |
| 2 | 64–127 | 1.30937 | 3.35938 | 0.37040 | 0.36667 |
| 2 | 128–191 | 1.42188 | 3.57812 | 0.38551 | 0.40000 |
| 2 | 192–255 | 1.45312 | 3.62500 | 0.38720 | 0.40000 |

Run 1: descriptive high-duration outliers (Q3 + 1.5 IQR) [16, 21, 50, 56, 74, 88, 118, 122, 131, 157, 172, 191, 201, 231]; generation-average high outliers (> median + 3 sample SD) []. Rounded completion boundary tests [188]. Integrity/completion anomalies [].

Run 2: descriptive high-duration outliers (Q3 + 1.5 IQR) [16, 21, 50, 56, 74, 88, 118, 122, 131, 157, 172, 191, 201, 231]; generation-average high outliers (> median + 3 sample SD) []. Rounded completion boundary tests [188]. Integrity/completion anomalies [].

Every observation remains included. Outliers alone are not evidence of a failure; generation counts and target-specific work vary. Timing qualifications and outcome differences are analyzed in [investigation.md](investigation.md).

Mean Run 2/Run 1 time ratio: 0.914382. All summary generation counts match. Runtime headers and settings-source hashes match. Tests with a fitness/candidate/precision difference: [12, 17, 44, 50, 86, 99, 109, 168, 169, 215, 218, 242]. Exact fields are in comparison.json. Neither run is labeled cold-cache; normal NVIDIA caches were left untouched.

Six completed batches and complete test sequences show no logged failures or timeouts. No full diagnostic/debugger trace, continuous GPU/CPU telemetry, cache-hit trace, or independently captured exit code exists; do not infer those checks passed from absent output. Raw native files include summaries, every test’s status, settings-source snapshots, and final saved states.
