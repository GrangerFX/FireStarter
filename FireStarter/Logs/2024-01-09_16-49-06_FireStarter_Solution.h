// Run date: 01/09/24 16:49:06 Pacific Standard Time
// Run duration = 4907.811197 seconds
// Run generation = 30
// Run evolution = 6
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 4
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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

    n *= 0.19546129f;
    r0 = n += -0.61405975f;
    n *= 6.03103542f;
    r1 = n *= 0.12448051f;
    r2 = n *= 0.66977018f;
    n *= r1;
    r1 = n += -1.91383553f;
    n *= -0.90519828f;
    n = r1 += n;
    n *= -2.65865111f;
    r3 = n += 1.38078797f;
    r4 = n *= -1.31094015f;
    n *= r2;
    r2 = n *= 0.49630412f;
    n = r0 *= n;
    r5 = n += 3.94677496f;
    n = r4 += n;
    n *= r5;
    n *= -0.73213321f;
    n *= r1;
    n += r0;
    n = r4 *= n;
    n *= -0.02261449f;
    n *= -6265.39746094f;
    n += 3.81098032f;
    n *= r4;
    n *= -0.04791505f;
    n += r3;
    n *= r2;
    n *= 1.82868505f;
    n += -0.00000002f;
    n *= -0.58037072f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.43894726f;
    r0 = n += -1.35663617f;
    n *= 2.01339149f;
    r1 = n *= 0.17059758f;
    r2 = n *= -1.56226814f;
    n *= r1;
    r1 = n += 0.91479617f;
    n *= 1.97000003f;
    n = r1 += n;
    n *= -0.25423622f;
    r3 = n += -0.67502081f;
    r4 = n *= 0.12955849f;
    n *= r2;
    r2 = n *= 0.08250596f;
    n = r0 *= n;
    r5 = n += -1.65809846f;
    n = r4 += n;
    n *= r5;
    n *= -0.66617852f;
    n *= r1;
    n += r0;
    n = r4 *= n;
    n *= -4.32875109f;
    n *= -7667.82031250f;
    n += 5.20668364f;
    n *= r4;
    n *= -0.00060463f;
    n += r3;
    n *= r2;
    n *= 0.14004768f;
    n += -0.10607605f;
    n *= 1.11365402f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.18373933f;
    r0 = n += -0.48102841f;
    n *= 1.49593508f;
    r1 = n *= 1.20366049f;
    r2 = n *= 2.77692819f;
    n *= r1;
    r1 = n += -1.80852866f;
    n *= 0.32510760f;
    n = r1 += n;
    n *= 0.00451950f;
    r3 = n += -0.26782116f;
    r4 = n *= 0.20925416f;
    n *= r2;
    r2 = n *= 1.80821097f;
    n = r0 *= n;
    r5 = n += 0.76644444f;
    n = r4 += n;
    n *= r5;
    n *= 0.32326418f;
    n *= r1;
    n += r0;
    n = r4 *= n;
    n *= -0.00000794f;
    n *= -3278.89965820f;
    n += -3.23302341f;
    n *= r4;
    n *= 0.95833433f;
    n += r3;
    n *= r2;
    n *= -7.92591286f;
    n += -0.25971562f;
    n *= -2.01604652f;
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
