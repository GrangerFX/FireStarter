// Run date: 09/21/24 10:36:19 Pacific Daylight Time
// Run duration = 25.677135 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00001176
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 8
// Run units = 1
// Run states = 11000
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 0

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

    r0 = n += -1.51010871f;
    n *= 0.01380117f;
    r1 = n *= -1.34626126f;
    n *= -1.40523219f;
    r2 = n *= 0.10431997f;
    r3 = n += -1.37777817f;
    n *= -0.17865965f;
    n *= 2.42687845f;
    n += r2;
    n *= 2.23527861f;
    n = r1 *= n;
    n = r1 += n;
    n *= r1;
    r1 = n += -0.76388180f;
    r2 = n *= -1.08736491f;
    r4 = n *= -1.53842711f;
    n = r2 *= n;
    r5 = n += -0.85503840f;
    n = r1 *= n;
    n += r4;
    n *= r1;
    n *= r3;
    n *= r5;
    n *= r0;
    n = r2 += n;
    n *= -0.13032858f;
    n += r2;
    r2 = n *= 0.57704502f;
    n += 1.02150214f;
    n *= r2;
    n *= 2.22267509f;
    n *= -1.72465491f;
    return n;
} // Solution
