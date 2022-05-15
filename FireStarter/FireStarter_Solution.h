// Run date: 05/14/22 17:06:32 Pacific Daylight Time
// Run duration = 2.284489 seconds
// Run count = 12
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 11

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float SolutionTarget(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 2:
        return sinf(n * 1.2f) + n * 0.2f;
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

// Precision = 0.000075

// Solution0 precision = 0.000050
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.48559076f;
    r0 = n += -0.61429524f;
    n += -0.29698488f;
    n += -0.90633452f;
    n += 0.17018186f;
    r1 = n *= -0.26376319f;
    n += 0.45343277f;
    n = r0 += n;
    r2 = n *= 0.21037921f;
    r3 = n += -0.97318411f;
    r4 = n += 0.04230616f;
    n *= 1.87542129f;
    n += 0.96553171f;
    n *= r2;
    n *= -0.05338445f;
    r2 = n += 0.99438816f;
    n *= 0.34126633f;
    n *= r1;
    n *= r2;
    n *= -1.06236351f;
    n += 0.28573713f;
    n *= r4;
    r4 = n *= -0.93985099f;
    r2 = n += 0.82964122f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.12706828f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.11367600f;
    return n;
} // Solution0

// Solution1 precision = 0.000075
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.26823497f;
    r0 = n += 0.16456373f;
    n += -0.85106409f;
    n += -0.59696704f;
    n += 0.79812872f;
    r1 = n *= -1.50980103f;
    n += 0.82809621f;
    n = r0 += n;
    r2 = n *= 0.10076579f;
    r3 = n += -0.50478810f;
    r4 = n += 0.62327313f;
    n *= -0.62127489f;
    n += 1.50651944f;
    n *= r2;
    n *= -0.22568254f;
    r2 = n += -0.54129905f;
    n *= 1.57967627f;
    n *= r1;
    n *= r2;
    n *= 1.40741122f;
    n += -0.67237413f;
    n *= r4;
    r4 = n *= -0.49079484f;
    r2 = n += 0.72810417f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.76791227f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.14633523f;
    return n;
} // Solution1

// Solution2 precision = 0.000025
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.43815842f;
    r0 = n += -0.92182589f;
    n += -0.66530740f;
    n += -0.45667964f;
    n += -0.26358825f;
    r1 = n *= 0.40702873f;
    n += 1.63358831f;
    n = r0 += n;
    r2 = n *= 0.17616305f;
    r3 = n += -0.43564704f;
    r4 = n += -0.96176934f;
    n *= 0.83428603f;
    n += 0.88706928f;
    n *= r2;
    n *= -0.06710076f;
    r2 = n += 0.81245536f;
    n *= 0.63386661f;
    n *= r1;
    n *= r2;
    n *= 0.79758322f;
    n += 0.38950375f;
    n *= r4;
    r4 = n *= -0.40207532f;
    r2 = n += 0.64279342f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.01420128f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.77913392f;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
