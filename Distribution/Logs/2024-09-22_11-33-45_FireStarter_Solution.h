// Run date: 09/22/24 11:33:45 Pacific Daylight Time
// Run duration = 226.664385 seconds
// Run generation = 44
// Run evolution = 4
// Run max result = 0.00000020
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.16108276f;
    n += 1.51816916f;
    n *= 1.77049816f;
    n *= -0.64237076f;
    n = r0 *= n;
    r1 = n += -0.47833383f;
    r2 = n *= -9.74530220f;
    n += -7.70701694f;
    r3 = n *= -1.54237330f;
    n += r2;
    n *= -0.06099075f;
    r2 = n *= 0.15270862f;
    n *= 1.48766112f;
    r4 = n *= -2.78659773f;
    r5 = n += 19.70928001f;
    n *= r1;
    n *= 0.01117447f;
    n += 0.37882772f;
    r1 = n *= -0.97674948f;
    r6 = n += -0.84334588f;
    n *= r4;
    n *= r5;
    n = r6 *= n;
    n *= -1.68654501f;
    n *= r0;
    n += r6;
    r6 = n *= -0.47834995f;
    n += r3;
    n *= 0.17768981f;
    n *= r1;
    n *= r6;
    n += r2;
    return n;
} // Solution
