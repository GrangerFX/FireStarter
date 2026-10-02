// Run date: 11/15/24 18:19:43 Pacific Standard Time
// Run duration = 907.383764 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000044
// Run variations = 1
// Run samples = 15
// Run instructions = 28
// Run registers = 28
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 512
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
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

    n *= 0.11821049f;
    n += -1.19669342f;
    r0 = n += 0.82532424f;
    r1 = n *= 1.92373288f;
    n = r1 *= n;
    r2 = n += -0.19044212f;
    n *= -0.96142745f;
    r3 = n += 2.12695360f;
    n += r1;
    n += 0.12308420f;
    r1 = n += -2.44401622f;
    r4 = n *= -12.24719143f;
    r5 = n += 1.17044687f;
    n += 0.15964265f;
    n *= r2;
    n += -0.43132523f;
    n = r3 *= n;
    n += -1.52978003f;
    r2 = n *= 3.15263391f;
    n *= r4;
    n += r1;
    n += 4.79172897f;
    n += r3;
    n += -1.14216208f;
    n *= r5;
    n += r2;
    n += 0.66513133f;
    n *= r0;
    return n;
} // Solution
