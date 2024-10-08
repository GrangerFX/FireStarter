// Run date: 10/08/24 11:46:41 Pacific Daylight Time
// Run duration = 1960.241638 seconds
// Run generation = 28
// Run evolution = 0
// Run max result = 0.00000077
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

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
    float r0, r1, r2, r3, r4;

    n += -3.13749075f;
    r0 = n *= 0.45415032f;
    r1 = n += -0.00186289f;
    r2 = n *= 0.27955452f;
    r3 = n += 0.03765792f;
    n *= 1.14974105f;
    n += -0.04329393f;
    n *= r1;
    r1 = n += -0.96777242f;
    r4 = n *= 1.71963406f;
    n += 0.42805365f;
    n *= r0;
    n += -1.89196527f;
    n *= r3;
    n += r4;
    n *= 0.00000521f;
    n = r1 += n;
    n *= -0.62111098f;
    r4 = n += 1.25733435f;
    n *= r4;
    r4 = n += 1.39175856f;
    n *= -0.41092739f;
    n += -1.66502523f;
    r3 = n *= 0.76805663f;
    n = r4 += n;
    n *= r3;
    n += 1.77546823f;
    n *= 0.88725775f;
    n += r1;
    n *= r4;
    n += 1.22799993f;
    n *= r2;
    return n;
} // Solution
