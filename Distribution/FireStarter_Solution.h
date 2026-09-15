#pragma once
#include <math.h>

// Run date: 09/15/26 12:41:58 Pacific Daylight Time
// Run duration = 69.766957 seconds
// Run test = 0
// Run generation = 60
// Run evolution = 7
// Run precision  = 0.00000053
// Run max result = 0.00000005

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000000f

// Run mode = FIRESTARTER_SPEED_TEST
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 348160
// Run generations = 5
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 0

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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.22322917f;
    n += 0.04848384f;
    n *= -2.46244073f;
    n = r0 += n;
    r1 = n *= 0.01742013f;
    r2 = n *= -1.63732553f;
    n = r0 *= n;
    n *= -4.25829601f;
    n += -0.38757515f;
    n *= -0.05561120f;
    r3 = n += 1.21373403f;
    r4 = n *= 0.71817786f;
    r5 = n += -0.39413956f;
    n = r2 *= n;
    n = r1 *= n;
    n += r5;
    r5 = n *= -1.32608461f;
    n *= r3;
    n *= -7.17608356f;
    n += 3.27561593f;
    n *= r4;
    n = r1 += n;
    n += 4.75791693f;
    n *= r5;
    n *= r0;
    n *= -1.76909077f;
    n += r1;
    n *= 2.52849412f;
    n *= -0.81749326f;
    n *= r2;
    n *= 2.00840688f;
    n *= 1.45551538f;
    return n;
} // Solution
