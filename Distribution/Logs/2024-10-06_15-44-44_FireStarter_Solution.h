// Run date: 10/06/24 15:44:44 Pacific Daylight Time
// Run duration = 442.648706 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000012
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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

    n *= -0.20867671f;
    n += 0.65557724f;
    r0 = n *= 2.03346777f;
    n += -0.00000002f;
    n *= 0.80654669f;
    r1 = n *= 0.42365378f;
    n *= r1;
    r1 = n += -0.20749304f;
    r2 = n *= 0.64790106f;
    r3 = n *= 0.18637443f;
    n *= r3;
    n += 0.10808173f;
    n = r1 *= n;
    r3 = n *= 0.30920064f;
    r4 = n += -0.79818529f;
    n += r2;
    r2 = n *= -2.12001681f;
    r5 = n += 1.17251074f;
    n *= r2;
    r2 = n *= -1.37316322f;
    n += r1;
    n = r2 *= n;
    n += r4;
    n *= -2.59993958f;
    n += 5.77948189f;
    n *= r5;
    n += 2.26624084f;
    n += -2.58341455f;
    n *= 0.69598025f;
    n += r2;
    n *= r0;
    n *= r3;
    return n;
} // Solution
