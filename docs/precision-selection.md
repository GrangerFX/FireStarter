# Precision-based candidate selection

In `FireStarter/FireStarterSettings.h`, set:

```cpp
#define FIRESTARTER_USE_PRECISION   1
```

Rebuild the configuration you want to run. The default is `0`, which retains sampled-fitness selection and completion.

When enabled, every valid completed optimization candidate is evaluated on the CPU using `FIRESTARTER_PRECISION` evenly spaced points, including the interval endpoints and every target variation. The resulting maximum absolute error determines which candidate is retained, CPU historical-state replacement and selection weights, and whether the candidate meets the existing target. Completion uses a strict comparison: precision must be less than the configured target.

Candidates are checked even if their sampled fitness is worse than the current winner. In precision mode the multi-variation optimizer also avoids the sampled-parent cutoff, which could discard a better precision candidate before evaluating every variation. Equal precision is resolved by sampled error, candidate generation, id, and index so worker arrival order does not select between otherwise tied candidates. Each asynchronous optimizer uses its own precision result for early completion; all units in the current batch are synchronized before the next evolution decision.

The GPU's inner fitness and the GPU/New structural screening still use the configured fitness samples. At the end of each register-optimization pass, precision mode considers every valid population member on the dense CPU grid before choosing register data for that variation. A member does not need to beat the lowest sampled error to be tested. Identical register data is evaluated once per scan, and evaluation stops early when the measured dense error already exceeds the current dense leader. These shortcuts preserve the precision ranking. Precision is the denser CPU error measurement, not a switch to double-precision arithmetic or a proof of error bounds between grid points.

The option applies to the mathematical Random, EvolveSelect, EvolveCPU, EvolveGPU, EvolveNew, EvolveOptimize, and Optimize paths. MoneyMaker, SinSim, EvolveSinSim, and SpeedTest retain their existing objectives. `FIRESTARTER_PRECISION` must be at least `2` when this option is enabled.

Status headers and state comments report `usePrecision` and `precisionSamples`, alongside the existing target and fitness sample count. In precision mode, EvolveOptimize status rows include the reporting worker's `Index`, `Generation`, `Result`, and `Precision`, followed by the shared `Best` and `BestError`. The result fields retain their sampled-error meaning; precision fields report dense error. This distinguishes each tested candidate from an unchanged shared best. In precision mode sampled error can increase when a candidate has better dense precision. Saved states retain their precision value and validity; changing code or optimization data invalidates that measurement.

From PowerShell, run `./tests/precision-mode.ps1` to compile and execute focused checks for both flag values using Visual Studio 2026. These checks include an actual sine approximation with better dense error but worse sampled error, selection of a later precision-qualified member from a population dominated by better sampled scores, reversed candidate arrival order, ties, historical selection weights, incomplete/nonfinite validation, multiple target variations, and saved-state/log output. Build artifacts go under `Build/PrecisionTests`.
