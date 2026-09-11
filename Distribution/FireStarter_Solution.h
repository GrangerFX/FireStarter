#pragma once
#include <math.h>

// Run date: 09/11/26 10:17:00 Pacific Daylight Time
// Run duration = 21.834361 seconds
// Run test = 0
// Run generation = 1
// Run evolution = 0
// Run precision  = 0.00029961
// Run max result = 0.00112040

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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.34557033f;
    n += -4.22572708f;
    n *= -0.00933953f;
    n *= r0;
    n *= -0.40938443f;
    r0 = n *= 1.80307138f;
    n *= -2.22621727f;
    r1 = n *= 2.25224757f;
    n *= 0.23829183f;
    r2 = n += 1.92793059f;
    n += -1.59712052f;
    n *= 1.52286875f;
    n += 1.68796265f;
    r3 = n *= -1.34821439f;
    n += 0.42179543f;
    r4 = n += -1.11275744f;
    r5 = n *= 0.75338411f;
    n = r5 += n;
    n *= r0;
    r0 = n *= 0.90444613f;
    r6 = n *= 0.97176278f;
    n *= -0.27418113f;
    n *= r4;
    n *= r6;
    n = r0 += n;
    n *= r2;
    n += r0;
    n *= r3;
    n += r1;
    n *= -0.23088685f;
    n *= -0.52996445f;
    n *= r5;
    return n;
} // Solution
