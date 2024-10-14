// Run date: 10/13/24 19:53:45 Pacific Daylight Time
// Run duration = 753.435475 seconds
// Run generation = 49
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

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.36395019f;
    r0 = n += -1.14338326f;
    r1 = n *= -1.16561151f;
    n *= r1;
    n *= -0.26705709f;
    r1 = n *= -1.52383399f;
    n *= 1.88516355f;
    n += -0.04636553f;
    r2 = n += -0.72101885f;
    r3 = n += -1.49615228f;
    r4 = n += 0.90089363f;
    n += -1.10827816f;
    n *= -0.36395779f;
    r5 = n += -0.61793661f;
    n = r1 += n;
    n += -0.37916735f;
    r6 = n *= -5.91042137f;
    n = r2 += n;
    n = r6 += n;
    n *= 0.13185346f;
    n *= 0.55995595f;
    n *= r6;
    n *= r5;
    n += 2.81452250f;
    n += -8.65424728f;
    n *= r1;
    n = r2 *= n;
    n += -1.06443274f;
    n *= r3;
    n += r2;
    n *= r4;
    n *= r0;
    return n;
} // Solution
