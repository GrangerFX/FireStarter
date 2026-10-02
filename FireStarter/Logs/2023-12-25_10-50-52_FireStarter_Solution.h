// Run date: 12/25/23 10:50:52 Pacific Standard Time
// Run duration = 2193.269763 seconds
// Run generation = 50
// Run evolution = 10
// Run max result = 0.00000019
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.37626958f;
    r0 = n += 1.18208575f;
    n *= 1.65202343f;
    r1 = n *= -1.53915107f;
    r2 = n *= -0.55326885f;
    r3 = n *= -0.23049697f;
    n *= r3;
    r3 = n += -1.79062068f;
    n *= r3;
    r3 = n += -0.92263412f;
    r4 = n *= -0.42567158f;
    n = r3 *= n;
    r5 = n += 1.34733665f;
    n += 0.20059654f;
    r6 = n *= -0.81501967f;
    n = r4 += n;
    r7 = n *= 0.41945824f;
    n *= 21.37215614f;
    n += 22.61999893f;
    n *= r4;
    n *= r7;
    n *= r0;
    n = r1 += n;
    n *= -44.91538239f;
    n += r6;
    n *= r1;
    n *= -0.00000241f;
    n += r3;
    n += 0.05510389f;
    n *= r5;
    n *= r2;
    n += 0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000019
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.49814326f;
    r0 = n += -1.53959107f;
    n *= 1.51994860f;
    r1 = n *= -0.11936507f;
    r2 = n *= 0.92386377f;
    r3 = n *= 1.28085649f;
    n *= r3;
    r3 = n += -2.02856851f;
    n *= r3;
    r3 = n += -1.78373837f;
    r4 = n *= 0.92590439f;
    n = r3 *= n;
    r5 = n += -1.33258605f;
    n += -3.45770669f;
    r6 = n *= 1.13597572f;
    n = r4 += n;
    r7 = n *= -0.24419217f;
    n *= -3.74825621f;
    n += -4.98214436f;
    n *= r4;
    n *= r7;
    n *= r0;
    n = r1 += n;
    n *= -12.37501526f;
    n += r6;
    n *= r1;
    n *= 0.00000324f;
    n += r3;
    n += -1.47178149f;
    n *= r5;
    n *= r2;
    n += -0.11813238f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.60352719f;
    r0 = n += -1.58003068f;
    n *= 0.29309875f;
    r1 = n *= -3.16906786f;
    r2 = n *= 0.38985896f;
    r3 = n *= -0.74028671f;
    n *= r3;
    r3 = n += -1.59850776f;
    n *= r3;
    r3 = n += -0.24029693f;
    r4 = n *= -0.51119345f;
    n = r3 *= n;
    r5 = n += -0.03102807f;
    n += -42.02120972f;
    r6 = n *= -0.00000002f;
    n = r4 += n;
    r7 = n *= -0.00200649f;
    n *= -16.69058228f;
    n += 5.62405348f;
    n *= r4;
    n *= r7;
    n *= r0;
    n = r1 += n;
    n *= -0.58361000f;
    n += r6;
    n *= r1;
    n *= -0.84113896f;
    n += r3;
    n += 1.08786118f;
    n *= r5;
    n *= r2;
    n += 0.52359837f;
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
