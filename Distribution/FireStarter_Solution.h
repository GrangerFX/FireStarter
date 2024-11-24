// Run date: 11/24/24 14:14:26 Pacific Standard Time
// Run duration = 66.604049 seconds
// Run generation = 14
// Run evolution = 0
// Run max result = 0.00000075
// Run variations = 1
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
// Run passes = 384
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

    r0 = n += -3.14159274f;
    n *= 0.21252264f;
    r1 = n *= -0.12583116f;
    n *= r0;
    r0 = n += 0.10759212f;
    r2 = n *= -2.31306434f;
    n += -0.88187885f;
    r3 = n += 0.82301646f;
    n += r2;
    n *= -2.98723984f;
    r2 = n += 1.70920169f;
    r4 = n *= -0.91052580f;
    r5 = n += 1.63372040f;
    n *= -0.10574291f;
    n += r3;
    n *= 3.33615613f;
    r3 = n += -4.17837143f;
    n += r4;
    n *= 0.26277938f;
    r4 = n += -4.23171806f;
    n *= r3;
    n = r2 *= n;
    r3 = n *= 0.35606498f;
    n += r2;
    n += 25.96050453f;
    n += -20.60632706f;
    n *= -0.03643340f;
    n *= r4;
    n *= r0;
    n += r3;
    n += r5;
    n *= r1;
    return n;
} // Solution
