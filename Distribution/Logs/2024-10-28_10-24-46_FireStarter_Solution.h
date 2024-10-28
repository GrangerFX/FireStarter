// Run date: 10/28/24 10:24:46 Pacific Daylight Time
// Run duration = 164.827632 seconds
// Run generation = 46
// Run evolution = 0
// Run max result = 0.00000093
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 32768
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

    n += -3.14159274f;
    r0 = n *= 0.61287284f;
    r1 = n *= 0.15624450f;
    n = r1 += n;
    n = r1 *= n;
    r2 = n *= 0.35416567f;
    r3 = n += -0.02337870f;
    r4 = n += 0.10067486f;
    r5 = n *= 0.03255146f;
    n += r2;
    n += r4;
    n += -0.71436083f;
    n += -1.76303005f;
    r4 = n *= 0.16939774f;
    n = r1 += n;
    r2 = n += -2.09671855f;
    n = r4 *= n;
    n = r1 *= n;
    n += r3;
    n *= -8.03011322f;
    n += r4;
    n *= -0.36334881f;
    n *= -2.04902744f;
    n += 5.51410389f;
    n *= r5;
    n += r2;
    r2 = n *= 1.19785738f;
    n *= 0.51171988f;
    n += 0.19038458f;
    n *= r2;
    n *= r1;
    n *= r0;
    return n;
} // Solution
