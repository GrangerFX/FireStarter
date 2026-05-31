#pragma once
#include <math.h>

// Run date: 05/31/26 13:44:29 Pacific Daylight Time
// Run duration = 1.573755 seconds
// Run test = 9
// Run generation = 0
// Run evolution = 0
// Run precision  = 1.00073600
// Run max result = 0.00000000

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_SINSIM
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 1000
// Run passes = 1
// Run samples = 4096
// Run iterations = 16
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 0.19993579f;
    n *= -0.41866159f;
    n *= -2.00612330f;
    n *= -0.87044722f;
    r1 = n *= -0.10171479f;
    n *= r1;
    r1 = n *= -1.30208898f;
    r2 = n *= -0.38119587f;
    n *= r1;
    r1 = n += 0.31904662f;
    r3 = n *= 1.01700461f;
    r4 = n *= 2.00670815f;
    r5 = n *= 0.62454242f;
    n = r4 *= n;
    n *= r5;
    r5 = n *= 1.85649443f;
    n = r0 *= n;
    r6 = n *= 1.52124012f;
    n *= 1.29111755f;
    n = r6 += n;
    r7 = n *= 1.12245905f;
    n *= r1;
    n *= -0.90207565f;
    n += r6;
    n *= r7;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 1.52545202f;
    n += r5;
    n *= -0.34389016f;
    n *= r2;
    return n;
} // Solution
