// Run date: 10/05/24 13:35:53 Pacific Daylight Time
// Run duration = 130.665116 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000067
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 32
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

    n *= 0.36170238f;
    n += -1.13632154f;
    r0 = n *= -1.37118912f;
    n += 0.00000001f;
    n *= -0.91557664f;
    r1 = n *= -0.23244010f;
    n *= r1;
    r1 = n += -0.10995346f;
    r2 = n *= -1.16936088f;
    r3 = n *= -0.52281970f;
    n *= r3;
    n += 0.83950180f;
    n = r1 *= n;
    r3 = n *= -2.99748278f;
    r4 = n += 2.35477471f;
    n += r2;
    r2 = n *= 0.59398317f;
    r5 = n += -0.32428354f;
    n *= r2;
    r2 = n *= 1.38980651f;
    n += r1;
    n = r2 *= n;
    n += r4;
    n *= 3.92416811f;
    n += 1.13537943f;
    n *= r5;
    n += 1.17665482f;
    n += -1.63310647f;
    n *= -0.02469933f;
    n += r2;
    n *= r0;
    n *= r3;
    return n;
} // Solution
