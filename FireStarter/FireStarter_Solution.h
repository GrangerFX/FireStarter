// Run date: 05/21/22 17:04:53 Pacific Daylight Time
// Run duration = 6.707327 seconds
// Run count = 5
// Run units = 4
// Run population = 34816
// Run iterations = 128
// Run generations = 100
// Run samples = 15
// Solution Generation = 4

#ifndef __CUDACC__
#include <cmath>
#endif

// TARGET //
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
// END //
#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000033

// Solution0 precision = 0.000005
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.19825968f;
    r0 = n += 0.62285244f;
    r1 = n *= -0.98550218f;
    r2 = n += 0.00000152f;
    n *= r1;
    n += -0.91627049f;
    r1 = n += 0.53949374f;
    r3 = n += -1.34634066f;
    r4 = n += -0.40920037f;
    n += r3;
    n += -0.32151762f;
    r3 = n *= 1.31272805f;
    n += 0.82004100f;
    n = r2 *= n;
    r5 = n *= 0.02989860f;
    n *= r0;
    r0 = n *= -0.84131157f;
    n *= 0.02457166f;
    n *= -0.93487036f;
    n += r0;
    r0 = n += 0.59807831f;
    n *= 0.28406560f;
    r6 = n *= -1.41162813f;
    n += 2.41321111f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.00000299f;
    return n;
} // Solution0

// Solution1 precision = 0.000033
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.88672876f;
    r0 = n += -2.74069619f;
    r1 = n *= 0.25464860f;
    r2 = n += 0.00004322f;
    n *= r1;
    n += -0.79840964f;
    r1 = n += -0.34399650f;
    r3 = n += -0.85442913f;
    r4 = n += -0.34702495f;
    n += r3;
    n += -0.58969122f;
    r3 = n *= 0.58647162f;
    n += 0.14865047f;
    n = r2 *= n;
    r5 = n *= 0.01909578f;
    n *= r0;
    r0 = n *= -0.28255662f;
    n *= -0.75566834f;
    n *= 1.16653633f;
    n += r0;
    r0 = n += -0.23412137f;
    n *= 0.46134099f;
    r6 = n *= 2.13489389f;
    n += 1.41069055f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += -0.11807141f;
    return n;
} // Solution1

// Solution2 precision = 0.000031
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.34350255f;
    r0 = n += -0.89933801f;
    r1 = n *= -0.82849717f;
    r2 = n += -0.00005481f;
    n *= r1;
    n += -0.22993360f;
    r1 = n += -4.65970325f;
    r3 = n += -0.91557044f;
    r4 = n += -0.17784765f;
    n += r3;
    n += 0.62224430f;
    r3 = n *= -0.22678943f;
    n += -0.51084596f;
    n = r2 *= n;
    r5 = n *= -0.24834079f;
    n *= r0;
    r0 = n *= 0.26756889f;
    n *= 0.92620957f;
    n *= 1.18457723f;
    n += r0;
    r0 = n += -0.12480278f;
    n *= 0.20948732f;
    r6 = n *= -0.87935030f;
    n += 0.64135474f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.52367228f;
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
