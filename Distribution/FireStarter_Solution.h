// Run date: 11/09/24 14:52:49 Pacific Standard Time
// Run duration = 257.534400 seconds
// Run generation = 228
// Run evolution = 0
// Run max result = 0.00000013
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
// Run population = 65536
// Run iterations = 64
// Run passes = 500
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

    r0 = n += -3.14159274f;
    r1 = n *= 0.51098639f;
    n = r1 *= n;
    r2 = n += -0.92655063f;
    r3 = n *= 0.36395931f;
    n += -12.91909695f;
    n *= -1.39812326f;
    r4 = n *= 0.00464850f;
    n = r1 *= n;
    r5 = n += -1.50526929f;
    n += -4.98454952f;
    n *= 0.05195864f;
    n = r1 *= n;
    n += r4;
    n += 0.67873299f;
    n += r1;
    n *= 0.36314401f;
    n += 0.50134593f;
    r1 = n += -0.60978204f;
    n += 4.57815790f;
    n += r2;
    n *= 0.01878111f;
    n *= -2.50220537f;
    n += r3;
    r3 = n *= 0.89410621f;
    n += -5.32638645f;
    n += -0.45231816f;
    n *= r1;
    n *= r3;
    n += 0.17605156f;
    n *= r5;
    n *= r0;
    return n;
} // Solution
