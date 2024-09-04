// Run date: 09/04/24 10:29:07 Pacific Daylight Time
// Run duration = 37.835643 seconds
// Run generation = 23
// Run evolution = 0
// Run max result = 0.00001556
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

    n *= -2.98791838f;
    r0 = n += -0.83454609f;
    n += r0;
    r0 = n += 3.07023716f;
    r1 = n *= -0.89722002f;
    n = r0 *= n;
    r2 = n += 0.55201113f;
    n *= 0.83650887f;
    r3 = n *= -0.38808641f;
    n *= -0.39738756f;
    r4 = n *= -0.33035731f;
    n *= -0.68828571f;
    n += -2.00382566f;
    n += -1.98547471f;
    r5 = n += -0.21888597f;
    n *= 0.50254357f;
    n *= r3;
    r3 = n += -2.64990711f;
    n *= r4;
    r4 = n *= 6.48732376f;
    r6 = n += -2.39520264f;
    n += r4;
    r4 = n += -0.34097618f;
    n += r2;
    n += r0;
    n += r4;
    n += r5;
    n += -1.41798294f;
    n *= r1;
    n *= 0.01238819f;
    n *= r3;
    n *= r6;
    return n;
} // Solution
