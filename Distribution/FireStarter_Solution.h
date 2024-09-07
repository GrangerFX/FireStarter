// Run date: 09/06/24 20:41:20 Pacific Daylight Time
// Run duration = 32.159208 seconds
// Run generation = 21
// Run evolution = 0
// Run max result = 0.00000131
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8704
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 1.55173838f;
    n += 0.98606586f;
    n += -0.78775525f;
    r0 = n += -3.49683380f;
    r1 = n *= -0.41085607f;
    n = r0 *= n;
    r2 = n += 2.39582229f;
    r3 = n *= 0.53284705f;
    r4 = n *= -0.14333804f;
    n = r2 += n;
    r5 = n *= 1.62943017f;
    n *= -1.99743760f;
    n += 0.09440180f;
    n += -2.95305991f;
    n = r5 += n;
    n *= 0.49418128f;
    n *= r4;
    r4 = n += -1.58131933f;
    n *= -0.77357292f;
    n *= 1.64371967f;
    r6 = n += -1.14548135f;
    n *= r3;
    n += r0;
    n += r2;
    n += 4.52304411f;
    n *= -0.01286147f;
    n += r5;
    n += -2.80525875f;
    n *= r1;
    n *= -0.04179747f;
    n *= r4;
    n *= r6;
    return n;
} // Solution
