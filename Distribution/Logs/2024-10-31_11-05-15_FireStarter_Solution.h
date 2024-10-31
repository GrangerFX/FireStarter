// Run date: 10/31/24 11:05:15 Pacific Daylight Time
// Run duration = 87.936036 seconds
// Run generation = 5
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
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.31245041f;
    n *= 1.18161738f;
    r0 = n += -1.15986609f;
    r1 = n *= -0.50333655f;
    n = r1 *= n;
    r2 = n *= 1.08093286f;
    r3 = n += -0.90591335f;
    n += 0.61308360f;
    r4 = n *= 1.46541750f;
    n *= -0.43543947f;
    r5 = n *= -0.01012290f;
    n *= 11.79350567f;
    n *= r1;
    n *= -5.26458263f;
    r1 = n += -1.16169631f;
    r6 = n += 0.23652413f;
    n += -5.80818796f;
    r7 = n *= 1.50841391f;
    n *= r5;
    n *= r7;
    r7 = n *= 1.28569961f;
    n += r1;
    n += 0.06881691f;
    n *= 3.83009863f;
    n += -0.06745666f;
    n *= r3;
    n += r7;
    n *= r2;
    n += r4;
    n += r6;
    n = r0 *= n;
    n += r0;
    return n;
} // Solution
