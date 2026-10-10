# EvolveNew timing results with compilation caching disabled

October 9, 2026. One Sin target variation; Release x64; CUDA_CACHE_DISABLE=1 reported by the user. Source anchor 13461b1733a03019eded0745a557ab021613fa17. See the [campaign report](../README.md) for complete protocol and limitations.

| Metric | Run 1 | Run 2 |
| --- | --- | --- |
| Mean seconds | 0.49547 | 0.49629 |
| Median seconds | 0.32000 | 0.32000 |
| Sample standard deviation seconds | 0.32765 | 0.31894 |
| Minimum seconds | 0.31000 | 0.31000 |
| Maximum seconds | 3.70000 | 3.46000 |
| P90 seconds | 0.89000 | 0.89000 |
| P95 seconds | 0.90000 | 0.90000 |
| Tests / successes | 256 / 256 | 256 / 256 |
| Mean generations | 2.5859375 | 2.5859375 |
| Median generations | 2.0 | 2.0 |
| Application Run seconds | 127.264157 | 127.503211 |

## Repeatability

Mean Run 2 relative to Run 1 changes by +0.1656%. Of 256 pairs, Run 2 is faster on 20, equal at logged resolution on 172, and slower on 64. All paired outer generation counts and settings match. Result differences occur on tests []; exact fields are preserved in comparison.json.

## Generation count distribution

| Generations | Run 1 tests | Run 2 tests |
| --- | --- | --- |
| 2 | 154 | 154 |
| 3 | 70 | 70 |
| 4 | 22 | 22 |
| 5 | 6 | 6 |
| 6 | 3 | 3 |
| 8 | 1 | 1 |

## Timing progression

| Run | Test indices | Mean Duration seconds | Mean generations | Mean Duration divided by generations |
| --- | --- | --- | --- | --- |
| 1 | 0-63 | 0.52234 | 2.53125 | 0.20477 |
| 1 | 64-127 | 0.53297 | 2.76562 | 0.18332 |
| 1 | 128-191 | 0.41219 | 2.34375 | 0.17024 |
| 1 | 192-255 | 0.51438 | 2.70312 | 0.17901 |
| 2 | 0-63 | 0.51875 | 2.53125 | 0.20289 |
| 2 | 64-127 | 0.53469 | 2.76562 | 0.18402 |
| 2 | 128-191 | 0.41469 | 2.34375 | 0.17128 |
| 2 | 192-255 | 0.51703 | 2.70312 | 0.18008 |

Run 1: startup solution Duration 3.7 seconds, 2 generations. Startup remains included. High-duration outlier tests (Q3 + 1.5 IQR): [0, 27, 72, 91, 92, 119, 120, 172, 221, 230, 242]. Generation-average observations above median + 3 sample SD: [0]. Integrity/completion anomalies: []. Excluding startup only, mean logged GenTime is 0.17906 seconds and median 0.16 seconds.

Run 2: startup solution Duration 3.46 seconds, 2 generations. Startup remains included. High-duration outlier tests (Q3 + 1.5 IQR): [0, 27, 72, 91, 92, 119, 120, 172, 221, 230, 242]. Generation-average observations above median + 3 sample SD: [0]. Integrity/completion anomalies: []. Excluding startup only, mean logged GenTime is 0.17941 seconds and median 0.16 seconds.

GenTime and Duration/Generation are whole-test averages, not individual-generation or kernel timers. Every outlier remains in headline statistics. No perfectly flat timing claim is made. CPU regressions explain over 99.996% of duration variance; GPU and New search work varies between tests.

## Fitness and validation

| Completion fitness | Run 1 | Run 2 |
| --- | --- | --- |
| minimum | 4e-08 | 4e-08 |
| maximum | 9.5e-07 | 9.5e-07 |
| mean | 2.2035156e-07 | 2.2035156e-07 |
| median | 1.2e-07 | 1.2e-07 |

Only final test 255 records dense-grid precision: 6.9e-07 / 6.9e-07. All other dense values are unavailable, not presumed passing. Boundary-fitness tests: [] / [].

Fitness uses 15 samples; validation uses 256 samples and does not guarantee accuracy over the continuous domain. GPU/CPU solution times are rounded to 0.1 seconds; New to 0.01 seconds. Run totals, startup-sensitive supplementary values, and summary means are distinct metrics.
