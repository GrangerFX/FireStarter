#include <math.h>

// Run date: 03/19/22 16:46:07 Pacific Daylight Time
// Run duration = 103.044315 seconds
// Run count = 1
// Run units = 1
// Run population = 17408
// Run iterations = 4096
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
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
} // Target

// Precision = 0.000436

// Solution0 precision = 0.000203
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.19401085f;
    r1 = n += -0.61551076f;
    r2 = n *= -2.30211687f;
    r3 = n += -0.60072511f;
    n = r3 *= n;
    r4 = n += -1.32536268f;
    r5 = n *= -0.41570535f;
    n += r5;
    n *= -0.29502666f;
    r5 = n += -0.04419388f;
    r6 = n *= -0.47718272f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= 0.58125377f;
    r2 = n += 0.34023061f;
    n *= 0.70130825f;
    n += r3;
    n *= 0.45958549f;
    n += r1;
    n *= -0.44179225f;
    n += 0.62159139f;
    n *= -2.22653532f;
    n += -0.44271740f;
    n *= r5;
    n += r6;
    n *= -0.48636389f;
    n += r2;
    n *= -1.84367025f;
    n += -0.05980328f;
    return n;
} // Solution0

// Solution1 precision = 0.000114
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.28379539f;
    r1 = n += -0.77904505f;
    r2 = n *= -1.39041638f;
    r3 = n += -0.62790710f;
    n = r3 *= n;
    r4 = n += -1.26616311f;
    r5 = n *= -0.05140025f;
    n += r5;
    n *= 0.77414286f;
    r5 = n += -0.78726840f;
    r6 = n *= -0.62492394f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= -1.35156047f;
    r2 = n += -0.38697794f;
    n *= -0.78120810f;
    n += r3;
    n *= -2.42887449f;
    n += r1;
    n *= -0.61454058f;
    n += -0.34519482f;
    n *= 0.19129218f;
    n += 0.00896463f;
    n *= r5;
    n += r6;
    n *= -0.93573648f;
    n += r2;
    n *= 1.35563076f;
    n += -0.05652103f;
    return n;
} // Solution1

// Solution2 precision = 0.000436
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.50747782f;
    r1 = n += 0.72834265f;
    r2 = n *= -0.75317663f;
    r3 = n += 1.86186564f;
    n = r3 *= n;
    r4 = n += -0.69126338f;
    r5 = n *= -0.55187529f;
    n += r5;
    n *= -0.07742406f;
    r5 = n += 0.59125274f;
    r6 = n *= -3.94154096f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= 0.40536794f;
    r2 = n += -0.04215905f;
    n *= 0.61389953f;
    n += r3;
    n *= -1.41034734f;
    n += r1;
    n *= 0.78109092f;
    n += 2.03305554f;
    n *= 0.72680634f;
    n += -0.03237233f;
    n *= r5;
    n += r6;
    n *= 0.76364970f;
    n += r2;
    n *= 0.80505705f;
    n += 0.66001821f;
    return n;
} // Solution2
