// Run date: 11/13/24 17:23:17 Pacific Standard Time
// Run duration = 1530.709917 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000020
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
// Run startScale = 3.000000f
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
    r0 = n *= 0.09549383f;
    r1 = n *= 1.80983388f;
    n *= r0;
    n *= -6.12853384f;
    r0 = n *= 0.48027971f;
    n += 0.38916773f;
    r2 = n *= 0.91890866f;
    r3 = n += 1.92776680f;
    r4 = n *= -0.37376183f;
    n *= -4.14893532f;
    n += 0.51697022f;
    n += r0;
    r0 = n *= -1.08519161f;
    n = r0 *= n;
    n += -15.76971912f;
    n *= 4.58808374f;
    n *= 0.00413207f;
    n += 1.61617875f;
    n *= 4.36230469f;
    r5 = n *= -0.72402966f;
    n += r4;
    n *= r3;
    n *= r2;
    n = r5 *= n;
    n += 7.19217682f;
    n *= 0.85924733f;
    n *= -2.13556623f;
    n += r0;
    n += r5;
    n *= 0.35679674f;
    n *= r1;
    return n;
} // Solution
