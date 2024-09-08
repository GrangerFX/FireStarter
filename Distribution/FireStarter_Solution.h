// Run date: 09/08/24 10:10:47 Pacific Daylight Time
// Run duration = 28.606602 seconds
// Run generation = 10
// Run evolution = 0
// Run max result = 0.00000018
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
    float r0, r1, r2, r3, r4, r5;

    n *= 1.11305308f;
    r0 = n += -2.15271378f;
    n += r0;
    r0 = n += 2.81528020f;
    r1 = n *= -0.18454111f;
    n = r0 *= n;
    r2 = n += 3.38700175f;
    n *= 2.02936602f;
    r3 = n *= -0.24687316f;
    n *= 5.78563166f;
    r4 = n *= -0.23824304f;
    r5 = n *= -2.80348730f;
    n += r5;
    n += 0.83135504f;
    r5 = n += -5.11646652f;
    n *= 0.53988457f;
    n *= r3;
    n *= 0.37639984f;
    n *= 2.77412987f;
    n *= -0.07463027f;
    r3 = n += 0.17143101f;
    n = r5 += n;
    n += 1.18747902f;
    n += r2;
    n += r0;
    n *= 1.67188144f;
    n += r4;
    n += -1.09753823f;
    n *= r1;
    n *= 0.10528568f;
    n *= r5;
    n *= r3;
    return n;
} // Solution
