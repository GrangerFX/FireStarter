# EvolveNew timing results — October 8, 2026

Benchmark date: October 8, 2026 (Pacific Daylight Time). Exact Git commit: `13461b1733a03019eded0745a557ab021613fa17`. User-launched Release x64 executable, one Sin variation, two complete batches without rebuilding or changing settings within the pair. See the campaign README for environment, binary provenance, and raw-file manifests.

This is a primary timing target.

| Metric | Run 1 | Run 2 |
| --- | ---: | ---: |
| Configured / completed tests | 256 / 256 | 256 / 256 |
| Successes / failures / incomplete | 256 / 0 / 0 | 256 / 0 / 0 |
| Fitness success rate | 100.00% | 100.00% |
| Mean time per successful solution (s) | 0.16504 | 0.16504 |
| Median (s) | 0.11000 | 0.11000 |
| Sample standard deviation (s) | 0.08133 | 0.08113 |
| Minimum (s) | 0.11000 | 0.11000 |
| Maximum (s) | 0.63000 | 0.63000 |
| P90 (s) | 0.28000 | 0.27000 |
| P95 (s) | 0.33000 | 0.33000 |
| Mean generations to solution | 2.58594 | 2.58594 |
| Median generations to solution | 2.00000 | 2.00000 |
| Sum of rounded solution durations (s) | 42.25 | 42.25 |
| Final logged cumulative solution duration (s) | 42.35 | 42.31 |
| Final snapshot application Run duration (s) | 42.685173 | 42.649148 |
| Raw files preserved | 259 | 259 |
| Median logged GenTime (s) | 0.06 | 0.06 |

Times use each successful summary row’s `Duration`. Standard deviation uses n−1, and P90/P95 use linear interpolation. Each run is a separate observation. CPU/GPU Duration is logged to 0.1 s; New to 0.01 s. More aggregate digits do not imply finer measurement resolution. Startup remains included. Application Run duration is the saved-state timer, not a separately measured process stopwatch; numeric OS exit codes were not collected.

## Generation distributions

The summary `Generation` field is an outer CPU evolution-batch count or a GPU/New evolution-state generation count. GPU/New evolution overlaps optimization. These counts do not represent identical work between modes. CPU also logs the winning candidate’s `Best Generations` and `Evolutions`; their per-test values and the candidate-generation distribution are in analysis.json and tests.csv.

| Summary generations | Run 1 tests | Run 2 tests |
| ---: | ---: | ---: |
| 2 | 154 | 154 |
| 3 | 70 | 70 |
| 4 | 22 | 22 |
| 5 | 6 | 6 |
| 6 | 3 | 3 |
| 8 | 1 | 1 |

## Completion errors and validation

Fitness is a maximum absolute error on 15 samples. The CPU-computed precision check is a maximum absolute error on 256 evenly spaced samples over the same Sin domain. These are different sample sets. The completion check uses a strict comparison against the floating target; the success marker and printed eight-decimal values are retained, including rounding ambiguity. A precision evaluation is not a direct comparison of CPU and GPU arithmetic on identical inputs.

| Logged completion fitness | Run 1 | Run 2 |
| --- | ---: | ---: |
| Minimum | 0.00000004 | 0.00000004 |
| Maximum | 0.00000095 | 0.00000095 |
| Mean | 0.00000022 | 0.00000022 |
| Median | 0.00000012 | 0.00000012 |

Per-test dense precision is not logged for EvolveNew; the analysis contains missing values, not presumed precision passes. The last saved-state snapshot identifies test 255 and logs precision 0.00000069 versus fitness 0.00000006 in both runs. That snapshot cannot establish a precision success rate for all 256 tests.
GPU/New evolution-stage fitness and final optimization-stage fitness are separate fields. Every result is retained in tests.csv; distributions for both stages are in analysis.json.

## Timing progression and anomalies

| Run | Test indices | Mean solution duration (s) | Mean generations | Mean Duration/Generation (s) | Median Duration/Generation (s) |
| ---: | --- | ---: | ---: | ---: | ---: |
| 1 | 0–63 | 0.16516 | 2.53125 | 0.06295 | 0.05500 |
| 1 | 64–127 | 0.17875 | 2.76562 | 0.06220 | 0.05917 |
| 1 | 128–191 | 0.14391 | 2.34375 | 0.05964 | 0.05500 |
| 1 | 192–255 | 0.17234 | 2.70312 | 0.06098 | 0.05500 |
| 2 | 0–63 | 0.16547 | 2.53125 | 0.06288 | 0.05500 |
| 2 | 64–127 | 0.17875 | 2.76562 | 0.06228 | 0.05917 |
| 2 | 128–191 | 0.14438 | 2.34375 | 0.05980 | 0.05500 |
| 2 | 192–255 | 0.17156 | 2.70312 | 0.06083 | 0.05500 |

Run 1: descriptive high-duration outliers (Q3 + 1.5 IQR) [120, 221, 230, 242]; generation-average high outliers (> median + 3 sample SD) [0, 20, 29, 117, 123, 219]. Rounded completion boundary tests []. Integrity/completion anomalies [].

Run 2: descriptive high-duration outliers (Q3 + 1.5 IQR) [120, 221, 230, 242]; generation-average high outliers (> median + 3 sample SD) [11, 20, 25, 29, 117, 123, 219]. Rounded completion boundary tests []. Integrity/completion anomalies [].

Every observation remains included. Outliers alone are not evidence of a failure; generation counts and target-specific work vary. Timing qualifications and outcome differences are analyzed in [investigation.md](investigation.md).

Mean Run 2/Run 1 time ratio: 1.000000. All summary generation counts match. Runtime headers and settings-source hashes match. Tests with a fitness/candidate/precision difference: []. Exact fields are in comparison.json. Neither run is labeled cold-cache; normal NVIDIA caches were left untouched.

Six completed batches and complete test sequences show no logged failures or timeouts. No full diagnostic/debugger trace, continuous GPU/CPU telemetry, cache-hit trace, or independently captured exit code exists; do not infer those checks passed from absent output. Raw native files include summaries, every test’s status, settings-source snapshots, and final saved states.
