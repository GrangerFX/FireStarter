#pragma once
#include <math.h>

// Run date: 03/22/26 12:35:13 Pacific Daylight Time
// Run duration = 4.829036 seconds
// Run test = 2
// Run generation = 3
// Run evolution = 0
// Run precision  = 0.99998009
// Run max result = 0.00000095

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
    float r0, r1, r2, r3, r4;

    n *= -3.14159274f;
    r0 = n *= 1.21740925f;
    n *= -0.02323627f;
    r1 = n *= 9.12419605f;
    r2 = n *= -1.66849828f;
    r3 = n *= -1.51018167f;
    n += r1;
    n += r2;
    n *= -4.17561388f;
    r2 = n += 1.62178504f;
    n = r3 *= n;
    r1 = n *= 0.80621952f;
    n *= -2.00248432f;
    r4 = n *= -0.40707779f;
    n = r0 *= n;
    n *= -2.88531733f;
    n *= -0.37497169f;
    n *= -0.03210155f;
    n *= 27.84400558f;
    n += r4;
    n += r1;
    n += -0.49643436f;
    n += 0.00000000f;
    n *= 0.00000000f;
    n = r2 += n;
    n *= r0;
    n += r2;
    r2 = n *= 0.00000000f;
    n += 0.00000000f;
    n += r2;
    n *= 0.00000000f;
    n *= r3;
    return n;
} // Solution
