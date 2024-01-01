// Run date: 12/31/23 20:40:49 Pacific Standard Time
// Run duration = 1174.512801 seconds
// Run generation = 24
// Run evolution = 15
// Run max result = 0.00000036
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
// Run tests = 1
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.63509923f;
    r0 = n += 1.99522316f;
    n *= -0.34661338f;
    r1 = n *= -1.95674968f;
    r2 = n *= -0.59927535f;
    n *= -0.35383573f;
    n = r0 *= n;
    n *= -0.56265330f;
    n *= -0.79756165f;
    r3 = n += -1.72638059f;
    n *= r3;
    r3 = n += 1.16591752f;
    n += -1.69649982f;
    n *= 1.74942243f;
    n *= 0.50097394f;
    n *= -0.05775478f;
    n = r3 *= n;
    n += r0;
    r0 = n += -0.29838288f;
    r4 = n *= 0.00054669f;
    r5 = n *= -28.27150917f;
    n += r4;
    n *= r2;
    n *= r5;
    n += r1;
    n *= r0;
    n *= r3;
    n += 6.49227667f;
    n += -7.01397991f;
    r3 = n += 0.52170324f;
    n += r3;
    n *= 2.77878976f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.29192102f;
    r0 = n += -0.90222836f;
    n *= 4.64027500f;
    r1 = n *= -0.03848241f;
    r2 = n *= 0.26285237f;
    n *= 2.19968343f;
    n = r0 *= n;
    n *= 1.51848662f;
    n *= -1.33812296f;
    r3 = n += -0.92851299f;
    n *= r3;
    r3 = n += -0.22586796f;
    n += 0.00950405f;
    n *= -0.80438632f;
    n *= 0.71002185f;
    n *= -0.14249359f;
    n = r3 *= n;
    n += r0;
    r0 = n += 5.26505327f;
    r4 = n *= 1.42234147f;
    r5 = n *= 1.59074211f;
    n += r4;
    n *= r2;
    n *= r5;
    n += r1;
    n *= r0;
    n *= r3;
    n += 2.71122432f;
    n += -3.16439199f;
    r3 = n += 0.39115220f;
    n += r3;
    n *= 0.95244038f;
    return n;
} // Solution1

// Solution2 result = 0.00000005
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.25423217f;
    r0 = n += -3.28357196f;
    n *= 0.97860241f;
    r1 = n *= 0.20039652f;
    r2 = n *= 0.03035552f;
    n *= -11.36568832f;
    n = r0 *= n;
    n *= 1.78844988f;
    n *= 0.19505808f;
    r3 = n += 1.96901011f;
    n *= r3;
    r3 = n += 0.11211020f;
    n += -0.14735448f;
    n *= -0.34166837f;
    n *= 0.22331467f;
    n *= -0.98922008f;
    n = r3 *= n;
    n += r0;
    r0 = n += -0.25227016f;
    r4 = n *= 0.02947528f;
    r5 = n *= -2.82840180f;
    n += r4;
    n *= r2;
    n *= r5;
    n += r1;
    n *= r0;
    n *= r3;
    n += -0.07217323f;
    n += 0.00465366f;
    r3 = n += -0.06722695f;
    n += r3;
    n *= -1.94290280f;
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
