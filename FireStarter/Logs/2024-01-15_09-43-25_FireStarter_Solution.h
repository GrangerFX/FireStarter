// Run date: 01/15/24 09:43:25 Pacific Standard Time
// Run duration = 30628.946520 seconds
// Run generation = 24
// Run evolution = 10
// Run max result = 0.00000048
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
// Run tests = 16
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.53509784f;
    r1 = n += -1.68105936f;
    r2 = n *= -0.37866223f;
    n += 0.63655382f;
    n = r0 *= n;
    r3 = n += -0.00000020f;
    r4 = n += 2.83544350f;
    r5 = n *= 1.24284863f;
    n *= -0.28129897f;
    n += 1.35469103f;
    n = r2 *= n;
    n *= r2;
    n *= -5.93614388f;
    n += 1.43905354f;
    n += 4.39630556f;
    n *= -0.06262840f;
    r2 = n += -2.04952550f;
    n = r2 *= n;
    n += r5;
    n += r2;
    n *= -0.00214627f;
    n = r0 *= n;
    n = r3 += n;
    n *= -2.84202528f;
    n *= r0;
    n = r4 += n;
    n *= r1;
    n *= -0.11221795f;
    n *= r3;
    n *= r4;
    n += -1.10754633f;
    n += 1.10754657f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.26542109f;
    r1 = n += -0.82032883f;
    r2 = n *= -0.81211287f;
    n += 0.66619164f;
    n = r0 *= n;
    r3 = n += 1.78471816f;
    r4 = n += -0.84343761f;
    r5 = n *= 4.08971024f;
    n *= 1.04249716f;
    n += -5.13427448f;
    n = r2 *= n;
    n *= r2;
    n *= 8.26107407f;
    n += 6.37707090f;
    n += 4.17442322f;
    n *= -0.00924219f;
    r2 = n += 0.04270069f;
    n = r2 *= n;
    n += r5;
    n += r2;
    n *= 0.00510714f;
    n = r0 *= n;
    n = r3 += n;
    n *= 1.20693040f;
    n *= r0;
    n = r4 += n;
    n *= r1;
    n *= -0.74810618f;
    n *= r3;
    n *= r4;
    n += -0.11559258f;
    n += -0.00255135f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.57078850f;
    r1 = n += 1.49432075f;
    r2 = n *= -0.23310506f;
    n += -0.34833369f;
    n = r0 *= n;
    r3 = n += -0.13602309f;
    r4 = n += 1.65236866f;
    r5 = n *= 0.37983829f;
    n *= -3.29710126f;
    n += 0.11488001f;
    n = r2 *= n;
    n *= r2;
    n *= 9.18281841f;
    n += -1.77575517f;
    n += -0.33767626f;
    n *= -0.00092787f;
    r2 = n += 1.28043401f;
    n = r2 *= n;
    n += r5;
    n += r2;
    n *= -0.01089669f;
    n = r0 *= n;
    n = r3 += n;
    n *= -5.17793846f;
    n *= r0;
    n = r4 += n;
    n *= r1;
    n *= 1.12033033f;
    n *= r3;
    n *= r4;
    n += 2.77999377f;
    n += -2.25639510f;
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
