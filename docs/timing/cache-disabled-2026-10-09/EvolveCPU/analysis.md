# EvolveCPU timing results with compilation caching disabled

October 9, 2026. One Sin target variation; Release x64; CUDA_CACHE_DISABLE=1 reported by the user. Source anchor 13461b1733a03019eded0745a557ab021613fa17. See the [campaign report](../README.md) for complete protocol and limitations.

| Metric | Run 1 | Run 2 |
| --- | --- | --- |
| Mean seconds | 27.88125 | 27.84844 |
| Median seconds | 19.50000 | 19.50000 |
| Sample standard deviation seconds | 24.57327 | 24.53731 |
| Minimum seconds | 5.60000 | 5.60000 |
| Maximum seconds | 111.40000 | 111.20000 |
| P90 seconds | 70.40000 | 70.33000 |
| P95 seconds | 86.52500 | 86.25500 |
| Tests / successes | 64 / 64 | 64 / 64 |
| Mean generations | 5 | 5 |
| Median generations | 3.5 | 3.5 |
| Application Run seconds | 1799.351328 | 1797.595244 |

## Repeatability

Mean Run 2 relative to Run 1 changes by -0.1177%. Of 64 pairs, Run 2 is faster on 19, equal at logged resolution on 41, and slower on 4. All paired outer generation counts and settings match. Result differences occur on tests [7, 10, 18, 19, 20, 23, 29, 31, 34, 38, 47, 49, 50, 55]; exact fields are preserved in comparison.json.

## Generation count distribution

| Generations | Run 1 tests | Run 2 tests |
| --- | --- | --- |
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

## Timing progression

| Run | Test indices | Mean Duration seconds | Mean generations | Mean Duration divided by generations |
| --- | --- | --- | --- | --- |
| 1 | 0-15 | 18.12500 | 3.25000 | 5.57875 |
| 1 | 16-31 | 34.91250 | 6.25000 | 5.58838 |
| 1 | 32-47 | 25.07500 | 4.50000 | 5.59340 |
| 1 | 48-63 | 33.41250 | 6.00000 | 5.57497 |
| 2 | 0-15 | 18.10000 | 3.25000 | 5.57208 |
| 2 | 16-31 | 34.86875 | 6.25000 | 5.58255 |
| 2 | 32-47 | 25.06250 | 4.50000 | 5.58547 |
| 2 | 48-63 | 33.36250 | 6.00000 | 5.56790 |

Run 1: startup solution Duration 11.2 seconds, 2 generations. Startup remains included. High-duration outlier tests (Q3 + 1.5 IQR): [18, 25, 27, 36, 37, 56, 60, 62]. Generation-average observations above median + 3 sample SD: [33]. Integrity/completion anomalies: [].

Run 2: startup solution Duration 11.1 seconds, 2 generations. Startup remains included. High-duration outlier tests (Q3 + 1.5 IQR): [18, 25, 27, 36, 37, 56, 60, 62]. Generation-average observations above median + 3 sample SD: []. Integrity/completion anomalies: [].

GenTime and Duration/Generation are whole-test averages, not individual-generation or kernel timers. Every outlier remains in headline statistics. No perfectly flat timing claim is made. CPU regressions explain over 99.996% of duration variance; GPU and New search work varies between tests.

## Fitness and validation

| Completion fitness | Run 1 | Run 2 |
| --- | --- | --- |
| minimum | 6e-08 | 8e-08 |
| maximum | 9.6e-07 | 9.8e-07 |
| mean | 5.025e-07 | 5.1828125e-07 |
| median | 4.95e-07 | 4.75e-07 |

| Dense validation maximum absolute error | Run 1 | Run 2 |
| --- | --- | --- |
| minimum | 5.7e-07 | 6e-07 |
| maximum | 2.104e-05 | 2.217e-05 |
| mean | 4.0940625e-06 | 4.6778125e-06 |
| median | 2.86e-06 | 3.25e-06 |

Dense error exceeds printed 1e-6 on 59/64 and 60/64 tests. At-or-below threshold test indices: [26, 32, 47, 48, 49] / [26, 32, 47, 48]. All logged sampled-fitness successes are retained.

Fitness uses 15 samples; validation uses 256 samples and does not guarantee accuracy over the continuous domain. GPU/CPU solution times are rounded to 0.1 seconds; New to 0.01 seconds. Run totals, startup-sensitive supplementary values, and summary means are distinct metrics.
