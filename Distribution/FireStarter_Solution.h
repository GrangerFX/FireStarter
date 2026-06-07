#pragma once
#include <math.h>

// Run date: 06/07/26 14:44:05 Pacific Daylight Time
// Run duration = 18.904870 seconds
// Run test = 0
// Run generation = 6
// Run evolution = 0
// Run precision  = 0.00000121
// Run max result = 0.00000009

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f


#define SOLUTION_VARIATIONS 1
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
        default:
        case 0:
            return sinf(n);
        case 1:
            return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
        case 2:
            return sinf(n * 1.2f) + n * 0.2f;
        case 3:
            return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

inline float Solution(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.54854393f;
    n += -0.59304869f;
    r0 = n *= 0.32764855f;
    r1 = n *= 2.40623569f;
    n *= 0.65900201f;
    r2 = n *= -0.18824737f;
    n *= -0.47389501f;
    n *= r1;
    n += -0.47689301f;
    r1 = n += 0.17835784f;
    r3 = n *= 0.73805106f;
    n += -1.52038014f;
    n *= -1.20700264f;
    r4 = n *= 2.38483024f;
    r5 = n *= -1.32230282f;
    r6 = n *= -0.85927165f;
    n *= r3;
    n *= -9.46709251f;
    n += -5.48449278f;
    n *= 0.00224195f;
    n += 1.31767559f;
    n *= -0.05058808f;
    n = r5 *= n;
    n = r5 *= n;
    n += 3.34273696f;
    n += r6;
    n *= r1;
    n *= r4;
    n *= r5;
    n *= r0;
    n += -0.00000000f;
    n += r2;
    return n;
} // Solution
