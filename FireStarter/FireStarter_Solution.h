#pragma once
#include <math.h>

// Run date: 04/17/22 15:24:55 Pacific Daylight Time
// Run duration = 1.756829 seconds
// Run count = 4
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
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

// Precision = 0.000053

// Solution0 precision = 0.000038
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.09858378f;
    r0 = n += -1.07412469f;
    n += 0.31980595f;
    n += 0.58405000f;
    n += -1.28581178f;
    r1 = n *= -0.71189135f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.42692655f;
    r3 = n += 0.66021228f;
    r4 = n += 0.79044813f;
    n *= 0.01315739f;
    n *= 0.97630757f;
    n *= r2;
    n *= -3.03935552f;
    r2 = n += 0.97361511f;
    n *= 0.75312531f;
    n *= r1;
    n *= r2;
    n *= -0.74218726f;
    n += 0.12584653f;
    n *= r4;
    r4 = n *= 0.11701512f;
    r2 = n += 0.83978349f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.42887259f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.22691819f;
    return n;
} // Solution0

// Solution1 precision = 0.000043
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.20416415f;
    r0 = n += 0.06721339f;
    n += 0.58973098f;
    n += -0.30193841f;
    n += -1.71726251f;
    r1 = n *= -0.41171610f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.11609652f;
    r3 = n += 0.25343460f;
    r4 = n += 0.61090130f;
    n *= 0.06852828f;
    n *= -2.54922748f;
    n *= r2;
    n *= -0.58300614f;
    r2 = n += -1.26900709f;
    n *= 0.55092919f;
    n *= r1;
    n *= r2;
    n *= -1.15335190f;
    n += 0.56850284f;
    n *= r4;
    r4 = n *= 0.16811472f;
    r2 = n += 0.87700379f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.33378530f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.93701589f;
    return n;
} // Solution1

// Solution2 precision = 0.000053
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.14291996f;
    r0 = n += -0.56885421f;
    n += -0.46668333f;
    n += 0.22848858f;
    n += -0.28663692f;
    r1 = n *= 0.51745719f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.05604706f;
    r3 = n += 0.75561982f;
    r4 = n += -0.18732716f;
    n *= 1.27168548f;
    n *= -0.29794541f;
    n *= r2;
    n *= -0.55987149f;
    r2 = n += -1.43475282f;
    n *= 1.03208554f;
    n *= r1;
    n *= r2;
    n *= -0.30597371f;
    n += -0.18569237f;
    n *= r4;
    r4 = n *= -0.23774600f;
    r2 = n += 0.74984372f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.74693459f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.78478253f;
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
