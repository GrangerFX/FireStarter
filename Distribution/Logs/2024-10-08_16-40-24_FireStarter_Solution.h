// Run date: 10/08/24 16:40:24 Pacific Daylight Time
// Run duration = 439.184677 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000028
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n *= -2.08013320f;
    r1 = n *= -0.16725565f;
    n = r1 *= n;
    n *= 0.01549756f;
    r2 = n *= 4.80405617f;
    n += -0.09398597f;
    r3 = n += -0.76358587f;
    r4 = n *= 1.63175797f;
    n = r2 *= n;
    n *= -0.75900561f;
    n *= 7.56119442f;
    n += 1.36288977f;
    n *= 0.55276793f;
    r5 = n += -2.69024634f;
    n += r5;
    r5 = n *= -1.51383257f;
    n *= -0.86026031f;
    n *= r4;
    n *= 0.00371113f;
    n *= -0.84296262f;
    n *= 6.13992357f;
    n *= r1;
    n += r2;
    n *= -1.29362595f;
    r2 = n *= 0.52549416f;
    n += r5;
    n *= -1.67968524f;
    n *= r2;
    n *= r3;
    n += -0.99999905f;
    n *= r0;
    return n;
} // Solution
