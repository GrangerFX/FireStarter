// Run date: 05/15/22 17:23:10 Pacific Daylight Time
// Run duration = 1.338844 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// State Generation = 512000

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

// Precision = 0.000160

// Solution0 precision = 0.000121
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.34566900f;
    r1 = n += 1.16906202f;
    r2 = n += 0.01286600f;
    r3 = n += 0.18301401f;
    r4 = n += -0.95628500f;
    r5 = n *= 0.83474898f;
    r6 = n += 1.94188297f;
    n = r2 += n;
    n += -0.71464998f;
    n += r5;
    n *= -0.52691799f;
    n += r3;
    r3 = n += 0.51605099f;
    n *= 0.19716400f;
    n += r6;
    n *= -2.49954200f;
    n *= r3;
    n *= r0;
    r0 = n += -0.55002803f;
    n *= 0.05228800f;
    n *= r2;
    n += 1.34942806f;
    n *= r0;
    n += -1.28788602f;
    n += 1.30137801f;
    n *= r1;
    n += 0.73134798f;
    r1 = n += -0.14991100f;
    n *= 0.72709000f;
    n += 0.65511203f;
    n *= r4;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.000054
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.29000700f;
    r1 = n += 1.04829502f;
    r2 = n += 0.60189098f;
    r3 = n += 0.07368200f;
    r4 = n += -1.23885906f;
    r5 = n *= 0.73934501f;
    r6 = n += 0.24218100f;
    n = r2 += n;
    n += -4.25684309f;
    n += r5;
    n *= 0.00001600f;
    n += r3;
    r3 = n += 1.14847696f;
    n *= -0.38808000f;
    n += r6;
    n *= 0.65522498f;
    n *= r3;
    n *= r0;
    r0 = n += 0.24829900f;
    n *= 1.08835602f;
    n *= r2;
    n += 2.59495711f;
    n *= r0;
    n += 0.31563899f;
    n += 0.78498501f;
    n *= r1;
    n += -1.00905502f;
    r1 = n += -0.11827700f;
    n *= 0.39371899f;
    n += -0.35516101f;
    n *= r4;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.000160
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.60055000f;
    r1 = n += -2.95698500f;
    r2 = n += 0.36266100f;
    r3 = n += -1.30247700f;
    r4 = n += 0.52179003f;
    r5 = n *= -1.18277502f;
    r6 = n += -0.70087701f;
    n = r2 += n;
    n += -0.36072800f;
    n += r5;
    n *= -0.22675700f;
    n += r3;
    r3 = n += -1.41033006f;
    n *= 0.63676798f;
    n += r6;
    n *= -0.87028098f;
    n *= r3;
    n *= r0;
    r0 = n += 0.48130700f;
    n *= 0.05038600f;
    n *= r2;
    n += -0.21549900f;
    n *= r0;
    n += -0.75191402f;
    n += 0.53360599f;
    n *= r1;
    n += -0.05824600f;
    r1 = n += 0.66198802f;
    n *= 0.52827698f;
    n += -0.35535100f;
    n *= r4;
    n += r1;
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
