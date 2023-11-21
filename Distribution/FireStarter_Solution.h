// Run date: 11/20/23 18:31:51 Pacific Standard Time
// Run duration = 36103.985655 seconds
// Run generation = 213
// Run evolution = 11
// Run result = 0.00000894
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
// Run tests = 16
// Run seeds = 64
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

// Solution0 result = 0.00000548
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.23903036f;
    r0 = n += -2.57083082f;
    r1 = n *= -0.26778731f;
    r2 = n += -1.08637619f;
    r3 = n *= -0.68078333f;
    r4 = n *= -0.01289808f;
    r5 = n *= -2.29212356f;
    n = r5 += n;
    n *= 1.69540620f;
    n = r0 *= n;
    n += -0.28053877f;
    n += -0.75649267f;
    n *= r3;
    n = r0 += n;
    n = r1 *= n;
    n += -1.04011428f;
    n += -0.22605321f;
    n = r5 += n;
    n *= -1.63800228f;
    n += r2;
    n = r4 += n;
    n *= r5;
    r5 = n += -2.06931400f;
    n *= 1.72148752f;
    n = r1 += n;
    n *= -1.83373845f;
    n += r5;
    n += -2.27820611f;
    n += r0;
    n += 0.56418771f;
    n += r1;
    n *= r4;
    return n;
} // Solution0

// Solution1 result = 0.00000894
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.23706007f;
    r0 = n += -2.02794051f;
    r1 = n *= -0.21485457f;
    r2 = n += -0.92180318f;
    r3 = n *= -1.00913572f;
    r4 = n *= 1.10596871f;
    r5 = n *= -0.00853794f;
    n = r5 += n;
    n *= 7.94498539f;
    n = r0 *= n;
    n += -1.19919443f;
    n += 4.01461744f;
    n *= r3;
    n = r0 += n;
    n = r1 *= n;
    n += 0.59419024f;
    n += 1.97271025f;
    n = r5 += n;
    n *= -0.31318456f;
    n += r2;
    n = r4 += n;
    n *= r5;
    r5 = n += -4.69353199f;
    n *= 0.38798478f;
    n = r1 += n;
    n *= -1.94290352f;
    n += r5;
    n += 1.12057185f;
    n += r0;
    n += 2.12480044f;
    n += r1;
    n *= r4;
    return n;
} // Solution1

// Solution2 result = 0.00000751
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.57089567f;
    r0 = n += -1.27450442f;
    r1 = n *= 0.57372981f;
    r2 = n += -0.87987167f;
    r3 = n *= -0.31381670f;
    r4 = n *= 0.01706438f;
    r5 = n *= -7.90057182f;
    n = r5 += n;
    n *= -0.48759577f;
    n = r0 *= n;
    n += 0.38596141f;
    n += 0.57595885f;
    n *= r3;
    n = r0 += n;
    n = r1 *= n;
    n += 1.63628125f;
    n += 0.14226720f;
    n = r5 += n;
    n *= 1.54722464f;
    n += r2;
    n = r4 += n;
    n *= r5;
    r5 = n += -3.48723698f;
    n *= 2.72421312f;
    n = r1 += n;
    n *= -1.45243526f;
    n += r5;
    n += 2.60374808f;
    n += r0;
    n += -2.31861186f;
    n += r1;
    n *= r4;
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
