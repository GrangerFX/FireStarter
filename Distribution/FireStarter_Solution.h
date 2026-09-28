#pragma once
#include <math.h>

// Run date: 09/28/26 11:20:22 Pacific Daylight Time
// Run duration = 11.462161 seconds
// Run test = 1
// Run generation = 8
// Run evolution = 0
// Run precision  = 0.00000332
// Run max result = 0.00000018

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
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
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.14159274f;
    r1 = n *= -0.09848499f;
    r2 = n *= -2.67475915f;
    r3 = n *= 0.10341888f;
    r4 = n *= -1.53615248f;
    r5 = n *= -5.06349230f;
    r6 = n *= -0.15571143f;
    n *= -2.10268569f;
    n = r5 *= n;
    n += -1.37742198f;
    n += r5;
    r5 = n += -1.38496244f;
    r7 = n *= -0.89895511f;
    r8 = n *= -0.39915216f;
    n = r7 *= n;
    n *= r5;
    n += 2.09807420f;
    n *= r7;
    n *= r4;
    n *= 0.18432511f;
    n += r3;
    n *= 1.85609329f;
    n *= r0;
    n *= r8;
    n += 1.83050942f;
    n = r1 *= n;
    n *= 0.00000018f;
    n *= r2;
    n += r6;
    n = r1 += n;
    n *= 3.68881130f;
    n += r1;
    return n;
} // Solution
