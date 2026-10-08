# EvolveCPU timing results — October 8, 2026

Benchmark date: October 8, 2026 (Pacific Daylight Time). Exact Git commit: `13461b1733a03019eded0745a557ab021613fa17`. User-launched Release x64 executable, one Sin variation, two complete batches without rebuilding or changing settings within the pair. See the campaign README for environment, binary provenance, and raw-file manifests.

Timing is secondary for CPU; the primary interest is fitness success and dense-grid precision.

| Metric | Run 1 | Run 2 |
| --- | ---: | ---: |
| Configured / completed tests | 64 / 64 | 64 / 64 |
| Successes / failures / incomplete | 64 / 0 / 0 | 64 / 0 / 0 |
| Fitness success rate | 100.00% | 100.00% |
| Mean time per successful solution (s) | 27.71875 | 27.84531 |
| Median (s) | 19.00000 | 19.45000 |
| Sample standard deviation (s) | 24.59249 | 24.53046 |
| Minimum (s) | 5.30000 | 5.60000 |
| Maximum (s) | 111.20000 | 111.10000 |
| P90 (s) | 70.40000 | 70.33000 |
| P95 (s) | 86.44000 | 86.35500 |
| Mean generations to solution | 5.00000 | 5.00000 |
| Median generations to solution | 3.50000 | 3.50000 |
| Sum of rounded solution durations (s) | 1774.00 | 1782.10 |
| Final logged cumulative solution duration (s) | Not logged | Not logged |
| Final snapshot application Run duration (s) | 1775.016256 | 1782.928523 |
| Raw files preserved | 67 | 67 |
| Median logged GenTime (s) | Not logged | Not logged |

Times use each successful summary row’s `Duration`. Standard deviation uses n−1, and P90/P95 use linear interpolation. Each run is a separate observation. CPU/GPU Duration is logged to 0.1 s; New to 0.01 s. More aggregate digits do not imply finer measurement resolution. Startup remains included. Application Run duration is the saved-state timer, not a separately measured process stopwatch; numeric OS exit codes were not collected.

## Generation distributions

The summary `Generation` field is an outer CPU evolution-batch count or a GPU/New evolution-state generation count. GPU/New evolution overlaps optimization. These counts do not represent identical work between modes. CPU also logs the winning candidate’s `Best Generations` and `Evolutions`; their per-test values and the candidate-generation distribution are in analysis.json and tests.csv.

| Summary generations | Run 1 tests | Run 2 tests |
| ---: | ---: | ---: |
| 1 | 6 | 6 |
| 2 | 12 | 12 |
| 3 | 14 | 14 |
| 4 | 12 | 12 |
| 5 | 4 | 4 |
| 6 | 3 | 3 |
| 7 | 2 | 2 |
| 8 | 1 | 1 |
| 9 | 2 | 2 |
| 12 | 1 | 1 |
| 13 | 3 | 3 |
| 16 | 2 | 2 |
| 19 | 1 | 1 |
| 20 | 1 | 1 |

## Completion errors and validation

Fitness is a maximum absolute error on 15 samples. The CPU-computed precision check is a maximum absolute error on 256 evenly spaced samples over the same Sin domain. These are different sample sets. The completion check uses a strict comparison against the floating target; the success marker and printed eight-decimal values are retained, including rounding ambiguity. A precision evaluation is not a direct comparison of CPU and GPU arithmetic on identical inputs.

| Logged completion fitness | Run 1 | Run 2 |
| --- | ---: | ---: |
| Minimum | 0.00000006 | 0.00000006 |
| Maximum | 0.00000098 | 0.00000098 |
| Mean | 0.00000053 | 0.00000051 |
| Median | 0.00000052 | 0.00000046 |

Both summary fitness fields match in each CPU test. The report uses Evolve Result for CPU completion. All 64 tests met the logged fitness criterion in both runs; this demonstrates solution search on 15 samples, not uniform 1e−6 accuracy over all inputs.

| Dense 256-sample error | Run 1 | Run 2 |
| --- | ---: | ---: |
| Mean | 0.00000451 | 0.00000522 |
| Median | 0.00000319 | 0.00000331 |
| Minimum | 0.00000057 | 0.00000060 |
| Maximum | 0.00002104 | 0.00002217 |
| Tests above printed 1e−6 | 60 / 64 | 60 / 64 |

Tests at or below 1e−6 at the printed precision: Run 1 [26, 32, 47, 49]; Run 2 [26, 32, 47, 48]. Run 2 test 48 is printed exactly at the boundary; no unrounded dense-error value is available. Test 63’s final snapshot has precision 0.00001857 and fitness 0.00000083 in both runs. No result has been removed or relabeled to improve the success rate.

CPU solution-time variation is dominated by generations required to find a solution. Both runs have quarter mean generation counts of 3.25, 6.25, 4.5, and 6.0. Longer searches explain the higher later solution-time averages; these averages do not establish an execution slowdown. See investigation.md and generation-time-relationship.json for the descriptive regression and the smaller residual timing observations. These batches contain 64 tests; smoothing at 256 tests was not measured.

## Timing progression and anomalies

| Run | Test indices | Mean solution duration (s) | Mean generations | Mean Duration/Generation (s) | Median Duration/Generation (s) |
| ---: | --- | ---: | ---: | ---: | ---: |
| 1 | 0–15 | 17.53125 | 3.25000 | 5.38812 | 5.34500 |
| 1 | 16–31 | 34.86875 | 6.25000 | 5.58322 | 5.58062 |
| 1 | 32–47 | 25.07500 | 4.50000 | 5.59340 | 5.60000 |
| 1 | 48–63 | 33.40000 | 6.00000 | 5.57454 | 5.56667 |
| 2 | 0–15 | 18.11875 | 3.25000 | 5.57542 | 5.57750 |
| 2 | 16–31 | 34.84375 | 6.25000 | 5.57483 | 5.57434 |
| 2 | 32–47 | 25.04375 | 4.50000 | 5.58180 | 5.60000 |
| 2 | 48–63 | 33.37500 | 6.00000 | 5.57729 | 5.56667 |

Run 1: descriptive high-duration outliers (Q3 + 1.5 IQR) [18, 25, 27, 36, 37, 56, 60, 62]; generation-average high outliers (> median + 3 sample SD) []. Rounded completion boundary tests []. Integrity/completion anomalies [].

Run 2: descriptive high-duration outliers (Q3 + 1.5 IQR) [18, 25, 27, 36, 37, 56, 60, 62]; generation-average high outliers (> median + 3 sample SD) [52]. Rounded completion boundary tests []. Integrity/completion anomalies [].

Every observation remains included. Outliers alone are not evidence of a failure; generation counts and target-specific work vary. Timing qualifications and outcome differences are analyzed in [investigation.md](investigation.md).

Mean Run 2/Run 1 time ratio: 1.004566. All summary generation counts match. Runtime headers and settings-source hashes match. Tests with a fitness/candidate/precision difference: [2, 5, 7, 10, 25, 31, 48, 49]. Exact fields are in comparison.json. Neither run is labeled cold-cache; normal NVIDIA caches were left untouched.

Six completed batches and complete test sequences show no logged failures or timeouts. No full diagnostic/debugger trace, continuous GPU/CPU telemetry, cache-hit trace, or independently captured exit code exists; do not infer those checks passed from absent output. Raw native files include summaries, every test’s status, settings-source snapshots, and final saved states.
