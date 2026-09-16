#pragma once
#include <math.h>

// Run date: 09/16/26 10:00:58 Pacific Daylight Time
// Run duration = 43.532348 seconds
// Run test = 6
// Run generation = 0
// Run evolution = 0
// Run precision  = 0.00000461
// Run max result = 0.00000298

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 348160
// Run generations = 0
// Run passes = 512
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
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.16003418f;
    n += 2.82923031f;
    r0 = n *= -0.19102044f;
    n *= 1.57947648f;
    r1 = n += 1.00530314f;
    r2 = n *= -5.05774164f;
    r3 = n *= 3.10071802f;
    n *= -0.33197829f;
    r4 = n *= -0.82066017f;
    r5 = n *= -1.44249880f;
    n *= 2.17960930f;
    r6 = n *= 0.59188086f;
    n *= 0.25957814f;
    n += 2.07485271f;
    n = r0 *= n;
    r7 = n *= 1.44607759f;
    r8 = n += 1.14375961f;
    n *= -3.57374740f;
    n *= r1;
    n = r4 *= n;
    n += r4;
    n *= r8;
    n = r7 += n;
    n *= r6;
    n *= -0.44988108f;
    n *= 1.48826480f;
    n *= r2;
    n *= r5;
    n *= 1.82674313f;
    n *= r7;
    n += r3;
    n *= r0;
    return n;
} // Solution
