// Run date: 11/13/24 18:36:29 Pacific Standard Time
// Run duration = 1385.425766 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000025
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
    float r0, r1, r2, r3, r4;

    n *= -0.07482301f;
    n += 0.23506343f;
    r0 = n *= -2.14451051f;
    r1 = n *= 2.18875074f;
    n = r1 *= n;
    n += -1.13638508f;
    n *= -1.27688360f;
    n *= -0.86823606f;
    n *= -0.02781766f;
    n *= -6.84011650f;
    r2 = n += 0.65720743f;
    r3 = n += -1.80653334f;
    r4 = n *= 1.36495006f;
    n += -0.39024875f;
    n *= r4;
    n += r2;
    r2 = n *= 0.48451829f;
    n += 1.02844906f;
    n += 1.78689051f;
    n *= -2.83928609f;
    n = r2 *= n;
    n *= r1;
    n *= r3;
    n += -7.02223921f;
    n *= -0.87115723f;
    n += 0.30585143f;
    n += 3.51635075f;
    n *= -1.29618454f;
    n += r2;
    n *= -0.76499993f;
    n *= -0.17579621f;
    n *= r0;
    return n;
} // Solution
