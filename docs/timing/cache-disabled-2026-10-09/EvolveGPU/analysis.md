# EvolveGPU timing results with compilation caching disabled

October 9, 2026. One Sin target variation; Release x64; CUDA_CACHE_DISABLE=1 reported by the user. Source anchor 13461b1733a03019eded0745a557ab021613fa17. See the [campaign report](../README.md) for complete protocol and limitations.

| Metric | Run 1 | Run 2 |
| --- | --- | --- |
| Mean seconds | 1.51211 | 1.50586 |
| Median seconds | 1.20000 | 1.20000 |
| Sample standard deviation seconds | 1.07407 | 1.07463 |
| Minimum seconds | 0.70000 | 0.70000 |
| Maximum seconds | 7.00000 | 7.00000 |
| P90 seconds | 2.80000 | 2.80000 |
| P95 seconds | 3.80000 | 3.80000 |
| Tests / successes | 256 / 256 | 256 / 256 |
| Mean generations | 3.4921875 | 3.4921875 |
| Median generations | 3.0 | 3.0 |
| Application Run seconds | 387.812855 | 386.246887 |

## Repeatability

Mean Run 2 relative to Run 1 changes by -0.4133%. Of 256 pairs, Run 2 is faster on 51, equal at logged resolution on 173, and slower on 32. All paired outer generation counts and settings match. Result differences occur on tests [17, 29, 32, 36, 50, 65, 84, 86, 104, 168, 179, 218, 222, 239]; exact fields are preserved in comparison.json.

## Generation count distribution

| Generations | Run 1 tests | Run 2 tests |
| --- | --- | --- |
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

## Timing progression

| Run | Test indices | Mean Duration seconds | Mean generations | Mean Duration divided by generations |
| --- | --- | --- | --- | --- |
| 1 | 0-63 | 1.51875 | 3.40625 | 0.41492 |
| 1 | 64-127 | 1.41250 | 3.35938 | 0.39847 |
| 1 | 128-191 | 1.55156 | 3.57812 | 0.41862 |
| 1 | 192-255 | 1.56563 | 3.62500 | 0.41397 |
| 2 | 0-63 | 1.51562 | 3.40625 | 0.41609 |
| 2 | 64-127 | 1.40000 | 3.35938 | 0.39465 |
| 2 | 128-191 | 1.54062 | 3.57812 | 0.41323 |
| 2 | 192-255 | 1.56719 | 3.62500 | 0.41229 |

Run 1: startup solution Duration 7.0 seconds, 5 generations. Startup remains included. High-duration outlier tests (Q3 + 1.5 IQR): [0, 16, 21, 46, 50, 56, 74, 88, 97, 118, 122, 131, 144, 157, 172, 173, 191, 201, 213, 217, 231]. Generation-average observations above median + 3 sample SD: [0]. Integrity/completion anomalies: []. Excluding startup only, mean logged GenTime is 0.39569 seconds and median 0.40 seconds.

Run 2: startup solution Duration 7.0 seconds, 5 generations. Startup remains included. High-duration outlier tests (Q3 + 1.5 IQR): [0, 16, 21, 46, 50, 56, 74, 88, 97, 118, 122, 131, 144, 157, 172, 173, 191, 201, 213, 217, 231]. Generation-average observations above median + 3 sample SD: [0]. Integrity/completion anomalies: []. Excluding startup only, mean logged GenTime is 0.38941 seconds and median 0.40 seconds.

GenTime and Duration/Generation are whole-test averages, not individual-generation or kernel timers. Every outlier remains in headline statistics. No perfectly flat timing claim is made. CPU regressions explain over 99.996% of duration variance; GPU and New search work varies between tests.

## Fitness and validation

| Completion fitness | Run 1 | Run 2 |
| --- | --- | --- |
| minimum | 4e-08 | 4e-08 |
| maximum | 1e-06 | 1e-06 |
| mean | 3.2464844e-07 | 3.2054687e-07 |
| median | 2.1e-07 | 2.1e-07 |

Only final test 255 records dense-grid precision: 2.718e-05 / 2.718e-05. All other dense values are unavailable, not presumed passing. Boundary-fitness tests: [188] / [188].

Fitness uses 15 samples; validation uses 256 samples and does not guarantee accuracy over the continuous domain. GPU/CPU solution times are rounded to 0.1 seconds; New to 0.01 seconds. Run totals, startup-sensitive supplementary values, and summary means are distinct metrics.
