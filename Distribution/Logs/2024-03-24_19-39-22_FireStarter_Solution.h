// Run date: 03/24/24 19:39:22 Pacific Daylight Time
// Run duration = 162.764310 seconds
// Run generation = 48
// Run evolution = 5
// Run max result = 0.00000012
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
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= 0.87425476f;
    n *= r0;
    r0 = n *= -1.91568434f;
    n *= -0.21336845f;
    r2 = n += -1.17734873f;
    n = r2 += n;
    n *= -0.01092100f;
    r3 = n += 0.28159851f;
    r4 = n *= 1.68093145f;
    r5 = n += 1.75427067f;
    n += 1.76575959f;
    r6 = n *= -0.23371324f;
    n = r6 *= n;
    n = r4 += n;
    n *= r6;
    n += r5;
    n *= r4;
    r4 = n *= -0.68144578f;
    n *= 0.19395739f;
    n *= r0;
    n += r2;
    n *= -1.83907974f;
    n += 25.78895569f;
    n += -1.64844334f;
    n *= r1;
    n *= 0.41495365f;
    n *= r3;
    n *= r4;
    n *= 0.09330338f;
    n += -0.10261095f;
    n += 0.10261095f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    r1 = n *= 0.04360204f;
    n *= r0;
    r0 = n *= 1.38135266f;
    n *= 1.04763818f;
    r2 = n += -1.97299182f;
    n = r2 += n;
    n *= -1.31493795f;
    r3 = n += -0.87315661f;
    r4 = n *= -1.04167354f;
    r5 = n += -2.27001452f;
    n += 2.57203865f;
    r6 = n *= 0.10179925f;
    n = r6 *= n;
    n = r4 += n;
    n *= r6;
    n += r5;
    n *= r4;
    r4 = n *= -0.04108177f;
    n *= 0.72465801f;
    n *= r0;
    n += r2;
    n *= 1.71382523f;
    n += -896.24676514f;
    n += -11.96542168f;
    n *= r1;
    n *= -0.13341957f;
    n *= r3;
    n *= r4;
    n *= 0.03578852f;
    n += -0.08907377f;
    n += -0.02905792f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -0.41726804f;
    n *= r0;
    r0 = n *= 0.13896208f;
    n *= 1.57313788f;
    r2 = n += 0.78532827f;
    n = r2 += n;
    n *= -0.15229914f;
    r3 = n += -1.74779594f;
    r4 = n *= 1.65391254f;
    r5 = n += 1.04365158f;
    n += 1.71643984f;
    r6 = n *= 0.17542924f;
    n = r6 *= n;
    n = r4 += n;
    n *= r6;
    n += r5;
    n *= r4;
    r4 = n *= -3.32336926f;
    n *= -1.45725906f;
    n *= r0;
    n += r2;
    n *= -0.24083357f;
    n += 0.40440863f;
    n += -2.32666349f;
    n *= r1;
    n *= -0.03318425f;
    n *= r3;
    n *= r4;
    n *= 0.63873553f;
    n += 0.15234235f;
    n += 0.37125644f;
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
