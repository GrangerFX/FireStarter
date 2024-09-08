// Run date: 09/08/24 10:15:11 Pacific Daylight Time
// Run duration = 39.796766 seconds
// Run generation = 16
// Run evolution = 0
// Run max result = 0.00000042
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
    float r0, r1, r2, r3, r4;

    n *= -1.06272769f;
    r0 = n += -4.07043648f;
    n = r0 += n;
    r1 = n *= -0.37487561f;
    n *= 5.47140837f;
    r2 = n *= 1.02385867f;
    n *= 2.82965040f;
    n = r2 += n;
    n *= r1;
    n += 2.38017821f;
    r1 = n *= -0.69823289f;
    n += 0.01296608f;
    r3 = n += 1.16708767f;
    n += -0.39436832f;
    n *= -2.01658320f;
    n *= 2.49396610f;
    n *= -1.74773693f;
    n += 0.93123496f;
    r4 = n += 4.34958076f;
    n = r0 *= n;
    n *= r3;
    n = r4 *= n;
    n += r0;
    n *= r2;
    n += 1.19085586f;
    r2 = n *= -1.30335248f;
    n *= -1.01696801f;
    n += r1;
    n += 4.04056120f;
    n += 0.93298084f;
    n += r2;
    n *= r4;
    return n;
} // Solution
