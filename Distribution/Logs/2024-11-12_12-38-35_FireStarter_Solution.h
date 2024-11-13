// Run date: 11/12/24 12:38:35 Pacific Standard Time
// Run duration = 105.118544 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000084
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
// Run iterations = 64
// Run passes = 384
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation = 0)
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
            return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

inline float Solution(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.27644682f;
    n += 3.53930306f;
    n += -0.23500067f;
    r0 = n += -2.43581915f;
    r1 = n *= -1.48367310f;
    n = r0 += n;
    n *= -2.62383199f;
    n *= -0.35969883f;
    n = r1 *= n;
    r2 = n += 0.19843513f;
    n *= -1.54503119f;
    r3 = n += 0.87262928f;
    r4 = n *= -0.39910969f;
    n = r4 += n;
    n = r2 += n;
    n *= -0.00183513f;
    r5 = n *= 10.78203869f;
    n += -0.36846823f;
    n *= -0.60044312f;
    n *= r1;
    n *= r3;
    r3 = n += -0.94382155f;
    n = r4 += n;
    n *= -1.15479028f;
    n *= r3;
    n = r2 += n;
    n *= r5;
    n += r2;
    n *= -1.20202148f;
    n *= r0;
    n *= r4;
    n *= 2.49974608f;
    return n;
} // Solution
