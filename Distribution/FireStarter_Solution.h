// Run date: 07/26/23 11:16:28 Pacific Daylight Time
// Run duration = 870.134478 seconds
// Run generation = 110
// Run evolution = 0
// Run result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation)
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.18403678f;
    r2 = n *= -0.11587016f;
    n *= r2;
    r2 = n *= 20.77124405f;
    r3 = n *= -0.79647940f;
    n *= 1.19202495f;
    r4 = n *= -0.17360815f;
    r5 = n *= -2.38904834f;
    n *= r4;
    n *= 0.07148573f;
    n *= 43.44196701f;
    n = r5 += n;
    n *= -1.39038825f;
    n = r3 *= n;
    n *= r5;
    n += r2;
    r2 = n += -1.56976306f;
    r5 = n += 0.15865318f;
    n = r3 += n;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n = r5 *= n;
    n *= r0;
    n += r3;
    n += -0.36431155f;
    n += 0.17896090f;
    n = r5 *= n;
    r3 = n += 0.00000000f;
    n += r3;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.18957824f;
    r2 = n *= 0.26289865f;
    n *= r2;
    r2 = n *= -2.82359147f;
    r3 = n *= 0.12588376f;
    n *= -5.55245733f;
    r4 = n *= 0.61831129f;
    r5 = n *= 5.68529320f;
    n *= r4;
    n *= 5.79273319f;
    n *= 1.39270830f;
    n = r5 += n;
    n *= 0.59695470f;
    n = r3 *= n;
    n *= r5;
    n += r2;
    r2 = n += 1.45560896f;
    r5 = n += -0.84668672f;
    n = r3 += n;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n = r5 *= n;
    n *= r0;
    n += r3;
    n += 1.80005229f;
    n += -0.28475189f;
    n = r5 *= n;
    r3 = n += -0.05906589f;
    n += r3;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= -0.11676666f;
    r2 = n *= 1.36018634f;
    n *= r2;
    r2 = n *= -0.72794455f;
    r3 = n *= -0.31997541f;
    n *= -0.18739310f;
    r4 = n *= -0.40922856f;
    r5 = n *= -10.14680099f;
    n *= r4;
    n *= 32785.01171875f;
    n *= -0.00005966f;
    n = r5 += n;
    n *= -2.35069799f;
    n = r3 *= n;
    n *= r5;
    n += r2;
    r2 = n += 0.01418341f;
    r5 = n += 1.51594019f;
    n = r3 += n;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n = r5 *= n;
    n *= r0;
    n += r3;
    n += 1.40361178f;
    n += -1.73149693f;
    n = r5 *= n;
    r3 = n += 0.26179937f;
    n += r3;
    n += r5;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
