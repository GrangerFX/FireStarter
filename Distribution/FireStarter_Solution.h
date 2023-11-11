// Run date: 11/10/23 18:14:16 Pacific Standard Time
// Run duration = 1250.964442 seconds
// Run generation = 73
// Run evolution = 14
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.33809674f;
    r0 = n *= 1.26466322f;
    r1 = n += -1.34327745f;
    r2 = n += -1.34326601f;
    n += r2;
    n *= 0.00293695f;
    n = r0 *= n;
    n *= -0.07210187f;
    r2 = n += -1.27196109f;
    n *= r0;
    n = r2 += n;
    r0 = n += 2.19091630f;
    n += -0.51367128f;
    n += r0;
    n = r1 *= n;
    n *= -0.36003858f;
    r0 = n *= 1.19133627f;
    n = r0 *= n;
    n += -1.11450958f;
    r3 = n += -1.35089684f;
    r4 = n += -1.95277190f;
    n *= r0;
    n *= 0.86124396f;
    n += 1.24786365f;
    n *= r3;
    n += r2;
    n *= r1;
    n *= r4;
    n += 0.82661355f;
    n *= -0.09028683f;
    n += 0.03483482f;
    n += 0.03979763f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.95533133f;
    r0 = n *= -0.41124898f;
    r1 = n += 1.21425498f;
    r2 = n += 1.21426201f;
    n += r2;
    n *= 0.00341217f;
    n = r0 *= n;
    n *= 0.30911332f;
    r2 = n += 0.37885377f;
    n *= r0;
    n = r2 += n;
    r0 = n += -1.78452945f;
    n += 2.06066346f;
    n += r0;
    n = r1 *= n;
    n *= -1.56967235f;
    r0 = n *= -0.38620827f;
    n = r0 *= n;
    n += 1.02147722f;
    r3 = n += -2.19617963f;
    r4 = n += -2.23717523f;
    n *= r0;
    n *= -1.10988700f;
    n += -1.32535946f;
    n *= r3;
    n += r2;
    n *= r1;
    n *= r4;
    n += 0.35403040f;
    n *= 0.55651677f;
    n += -0.35523641f;
    n += 0.04008076f;
    return n;
} // Solution1

// Solution2 result = 0.00000003
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -1.26215613f;
    r0 = n *= 0.41409069f;
    r1 = n += 1.36828685f;
    r2 = n += 1.36829078f;
    n += r2;
    n *= -0.00295329f;
    n = r0 *= n;
    n *= -1.32437825f;
    r2 = n += 0.24096648f;
    n *= r0;
    n = r2 += n;
    r0 = n += 0.03418699f;
    n += -1.85435545f;
    n += r0;
    n = r1 *= n;
    n *= 0.32901379f;
    r0 = n *= -1.18454885f;
    n = r0 *= n;
    n += -1.30304301f;
    r3 = n += -1.70640659f;
    r4 = n += 0.21525623f;
    n *= r0;
    n *= 0.60689360f;
    n += 0.61525482f;
    n *= r3;
    n += r2;
    n *= r1;
    n *= r4;
    n += 0.12036677f;
    n *= -0.31766903f;
    n += 0.06360846f;
    n += 0.49822709f;
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
