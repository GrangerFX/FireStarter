// Run date: 09/08/24 10:18:37 Pacific Daylight Time
// Run duration = 46.108068 seconds
// Run generation = 18
// Run evolution = 0
// Run max result = 0.00000060
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 100
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

    r0 = n += 0.76517284f;
    r1 = n += 0.29306072f;
    n += -1.66467142f;
    n = r0 *= n;
    n += 0.20322149f;
    n *= 1.54296064f;
    r2 = n *= -0.98406297f;
    n += -5.02146482f;
    r3 = n += 0.19305721f;
    r4 = n *= 0.10311817f;
    n += 0.03162730f;
    r5 = n *= -1.93079257f;
    r6 = n += 0.43671921f;
    n += r5;
    n *= 0.29244167f;
    n *= 1.89051867f;
    n *= 0.12003990f;
    n += r4;
    n *= 2.25357175f;
    n *= r0;
    n *= -0.36961269f;
    n += -1.53636253f;
    r0 = n *= 2.42707849f;
    n *= r3;
    n += r2;
    n *= -1.31541944f;
    n += r6;
    n *= -4.91454697f;
    r6 = n *= -2.35462880f;
    n += r6;
    n *= r0;
    n *= r1;
    return n;
} // Solution
