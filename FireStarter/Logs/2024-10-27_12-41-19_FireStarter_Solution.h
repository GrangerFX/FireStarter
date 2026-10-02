// Run date: 10/27/24 12:41:19 Pacific Daylight Time
// Run duration = 136.471495 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000048
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
// Run population = 16384
// Run iterations = 64
// Run passes = 1000
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

    n *= -0.42253292f;
    n *= -0.76177037f;
    r0 = n += -1.01119399f;
    r1 = n *= 0.59011602f;
    n = r1 *= n;
    r2 = n *= 0.92650121f;
    r3 = n += -1.79300296f;
    n += -0.96344066f;
    r4 = n *= -0.02613788f;
    n *= -1.85517836f;
    r5 = n *= 0.27090961f;
    n *= -4.29493713f;
    n *= r1;
    n *= 8.11041641f;
    r1 = n += -1.03012908f;
    r6 = n += -0.59532708f;
    n += 0.76599991f;
    r7 = n *= 0.87030113f;
    n *= r5;
    n *= r7;
    r7 = n *= 4.73778152f;
    n += r1;
    n += 0.13739088f;
    n *= 2.56002736f;
    n += -1.09752595f;
    n *= r3;
    n += r7;
    n *= r2;
    n += r4;
    n += r6;
    n = r0 *= n;
    n += r0;
    return n;
} // Solution
