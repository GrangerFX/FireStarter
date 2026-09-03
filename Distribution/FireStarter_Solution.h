#pragma once
#include <math.h>

// Run date: 09/03/26 10:05:37 Pacific Daylight Time
// Run duration = 19.088185 seconds
// Run test = 4
// Run generation = 15
// Run evolution = 0
// Run precision  = 0.00000085
// Run max result = 0.00000017

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

    n += -3.14159274f;
    r0 = n *= 0.71166277f;
    r1 = n *= 2.11627817f;
    n *= r1;
    n *= 0.15285631f;
    r1 = n += -2.74464154f;
    r2 = n += -3.82288241f;
    n += 12.17662907f;
    r3 = n *= 0.10195688f;
    n += r2;
    r2 = n *= 0.10852867f;
    r4 = n += -3.40677643f;
    n *= -0.17161131f;
    r5 = n += -0.34841430f;
    n *= -5.87917089f;
    r6 = n *= 0.02843196f;
    n += r6;
    n *= 2.99596334f;
    n *= r1;
    n *= -0.00430367f;
    n *= -19.04415321f;
    n = r5 += n;
    n *= r3;
    n += r2;
    n = r4 *= n;
    n += r4;
    n *= r0;
    n *= 0.43780288f;
    n *= 6.13135815f;
    n *= 0.40197274f;
    n *= -0.92514729f;
    n *= r5;
    return n;
} // Solution
