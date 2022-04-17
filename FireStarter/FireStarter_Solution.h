#pragma once
#include <math.h>

// Run date: 04/17/22 15:43:30 Pacific Daylight Time
// Run duration = 1.769085 seconds
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

// Precision = 0.000068

// Solution0 precision = 0.000032
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.09446380f;
    r0 = n += -0.95191222f;
    n += 0.20696826f;
    n += 0.49088570f;
    n += -1.57659638f;
    r1 = n *= -0.41383544f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.24005698f;
    r3 = n += 0.75070029f;
    r4 = n += 0.88188374f;
    n *= -0.62195814f;
    n *= 0.24800821f;
    n *= r2;
    n *= 0.15091020f;
    r2 = n += 0.74863696f;
    n *= 0.55948061f;
    n *= r1;
    n *= r2;
    n *= -0.93361962f;
    n += 0.05227299f;
    n *= r4;
    r4 = n *= 0.23050405f;
    r2 = n += 0.61162668f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.18516850f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.23484081f;
    return n;
} // Solution0

// Solution1 precision = 0.000068
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.23159719f;
    r0 = n += -0.20330152f;
    n += 0.01089347f;
    n += -0.77513045f;
    n += -0.75458610f;
    r1 = n *= -0.42225298f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.11622053f;
    r3 = n += 0.20174827f;
    r4 = n += 0.58011299f;
    n *= -0.06418612f;
    n *= -0.55460501f;
    n *= r2;
    n *= 2.75607324f;
    r2 = n += -1.07216251f;
    n *= 0.56826842f;
    n *= r1;
    n *= r2;
    n *= -1.61497533f;
    n += 0.62029463f;
    n *= r4;
    r4 = n *= 0.16496243f;
    r2 = n += 0.92464662f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.39536035f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 1.04206014f;
    return n;
} // Solution1

// Solution2 precision = 0.000057
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.85507435f;
    r0 = n += 0.06673598f;
    n += -0.83329892f;
    n += 1.30546713f;
    n += -0.80707932f;
    r1 = n *= -0.59864402f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.26403353f;
    r3 = n += -0.52051950f;
    r4 = n += -0.45954978f;
    n *= 0.39471531f;
    n *= -0.53653222f;
    n *= r2;
    n *= 0.51798683f;
    r2 = n += 1.19240975f;
    n *= -2.36915231f;
    n *= r1;
    n *= r2;
    n *= -0.11093993f;
    n += -0.02665543f;
    n *= r4;
    r4 = n *= 0.38217121f;
    r2 = n += 1.02842033f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.88777262f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.39742741f;
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
