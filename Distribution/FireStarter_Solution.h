// Run date: 09/08/24 10:13:18 Pacific Daylight Time
// Run duration = 26.195307 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000024
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

    n *= -2.10946274f;
    r0 = n += -3.06964064f;
    n += r0;
    r0 = n += 1.32116067f;
    r1 = n *= -2.01319194f;
    n = r0 *= n;
    r2 = n += 0.36706892f;
    r3 = n *= 1.57041264f;
    r4 = n *= -0.17944281f;
    n *= 4.65007162f;
    r5 = n *= -0.25835401f;
    n *= 4.27939844f;
    n += 1.83801019f;
    n += 4.29531240f;
    n = r5 += n;
    n *= 4.50947857f;
    n *= r4;
    n *= 0.72182959f;
    n *= -0.98545611f;
    n += r3;
    r3 = n += 0.30300185f;
    n += -7.68803358f;
    r4 = n += 0.86293644f;
    n += r2;
    n += r0;
    n += r4;
    n *= r5;
    n += -0.75837314f;
    n *= r1;
    n *= 2.12422299f;
    n *= 0.70873302f;
    n *= r3;
    return n;
} // Solution
