#include <math.h>

// Run date: 04/02/22 17:29:55 Pacific Daylight Time
// Run duration = 6.299942 seconds
// Run count = 6
// Run units = 1
// Run population = 34816
// Run iterations = 128
// Run generations = 10
// Run samples = 15

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

// Precision = 0.011187

// Solution0 precision = 0.007909
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.58854508f;
    r0 = n += -0.29625967f;
    n += 0.60579306f;
    n += 0.35250220f;
    n += -0.24565023f;
    r1 = n *= -0.62268662f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.09151320f;
    r3 = n += -0.20749217f;
    r4 = n += -0.69410479f;
    r5 = n *= -0.08416034f;
    n += 0.04595649f;
    n *= r2;
    n *= -0.22743306f;
    r2 = n += -0.62887686f;
    n *= -0.71735263f;
    n *= r1;
    n *= r2;
    n *= -1.07969010f;
    n += -1.21555352f;
    n *= r4;
    r4 = n *= 0.65293586f;
    r2 = n += -3.22914934f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.49190837f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.001965
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.14658284f;
    r0 = n += -0.73991698f;
    n += 0.61006767f;
    n += 0.15645607f;
    n += 0.64537936f;
    r1 = n *= -0.46601802f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.10923138f;
    r3 = n += -0.55054563f;
    r4 = n += 0.02850735f;
    r5 = n *= 0.28517911f;
    n += -0.22625588f;
    n *= r2;
    n *= -0.68806654f;
    r2 = n += 0.79647183f;
    n *= -0.66096371f;
    n *= r1;
    n *= r2;
    n *= 0.71041429f;
    n += -0.15202922f;
    n *= r4;
    r4 = n *= 0.71742302f;
    r2 = n += -0.51455343f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.55255330f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.011187
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.54404807f;
    r0 = n += -0.31069776f;
    n += 0.16907206f;
    n += 0.87804645f;
    n += -1.14414871f;
    r1 = n *= -0.89269638f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.86610985f;
    r3 = n += 0.57760864f;
    r4 = n += 0.49765521f;
    r5 = n *= 0.06317388f;
    n += 0.13586573f;
    n *= r2;
    n *= 0.32313395f;
    r2 = n += 0.53037387f;
    n *= -1.26497865f;
    n *= r1;
    n *= r2;
    n *= -1.76717615f;
    n += -0.48221263f;
    n *= r4;
    r4 = n *= -0.32028681f;
    r2 = n += 1.48297048f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.80124879f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += r5;
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
