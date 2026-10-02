// Run date: 11/12/24 21:12:59 Pacific Standard Time
// Run duration = 1836.151378 seconds
// Run generation = 44
// Run evolution = 0
// Run max result = 0.00000058
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

    n += -3.14159274f;
    r0 = n *= 0.67280394f;
    r1 = n *= -1.10275626f;
    n = r0 += n;
    r2 = n += 0.55991435f;
    n += r2;
    r2 = n += -1.11982870f;
    r3 = n *= -0.58431309f;
    n *= r1;
    r1 = n += 1.44732201f;
    n *= r3;
    n = r0 += n;
    n = r2 *= n;
    n = r1 += n;
    n += 11.01329327f;
    n *= -0.14540423f;
    n += r2;
    n += 1.15677118f;
    r2 = n += 7.99199390f;
    r3 = n += -14.07172680f;
    n *= -0.01073441f;
    n = r1 += n;
    r4 = n *= 0.32830065f;
    n = r1 += n;
    n += r2;
    n = r1 += n;
    n += r1;
    n += r3;
    n *= r0;
    n *= 1.82072079f;
    n *= -1.43833554f;
    n *= r4;
    return n;
} // Solution
