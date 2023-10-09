// Run date: 10/09/23 10:05:22 Pacific Daylight Time
// Run duration = 1106.092966 seconds
// Run generation = 215
// Run evolution = 9
// Run result = 0.00000030
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
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 128

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
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.02283135f;
    n *= 7.72114182f;
    r2 = n *= -0.00058046f;
    n *= r2;
    r2 = n += 1.19534695f;
    n = r2 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += -0.26176861f;
    n += 0.41830730f;
    r3 = n *= 1.37004149f;
    n *= -0.01314851f;
    n *= r2;
    n += 0.05525078f;
    n *= 5.09289742f;
    r2 = n += -1.78431511f;
    r4 = n += 0.77744824f;
    n += -2.50785112f;
    n *= r2;
    n = r4 += n;
    r2 = n *= 1.44455135f;
    n *= r3;
    n *= 0.32281578f;
    n += 3.40662813f;
    r3 = n *= 0.21792376f;
    n += r0;
    n *= r1;
    n *= r3;
    n *= r4;
    n *= r2;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000030
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065819f;
    r1 = n *= -0.21234937f;
    n *= -0.32338092f;
    r2 = n *= -1.23045611f;
    n *= r2;
    r2 = n += -0.35477954f;
    n = r2 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += -2.41228890f;
    n += 1.57811284f;
    r3 = n *= 0.21903449f;
    n *= -120.80211639f;
    n *= r2;
    n += 82.42268372f;
    n *= -0.00081354f;
    r2 = n += -0.43475059f;
    r4 = n += -1.92190111f;
    n += 2.00468612f;
    n *= r2;
    n = r4 += n;
    r2 = n *= -0.31021190f;
    n *= r3;
    n *= 0.83530891f;
    n += -1.62518537f;
    r3 = n *= 1.26759863f;
    n += r0;
    n *= r1;
    n *= r3;
    n *= r4;
    n *= r2;
    n += -0.11813144f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    r1 = n *= -0.40080103f;
    n *= -0.23151374f;
    r2 = n *= -0.44022024f;
    n *= r2;
    r2 = n += -0.42285454f;
    n = r2 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += -0.82347113f;
    n += -1.53135765f;
    r3 = n *= 2.14531207f;
    n *= -2.37291789f;
    n *= r2;
    n += 7.02925634f;
    n *= -0.00227865f;
    r2 = n += -0.76504964f;
    r4 = n += -1.71234775f;
    n += 0.58068699f;
    n *= r2;
    n = r4 += n;
    r2 = n *= -0.51461416f;
    n *= r3;
    n *= -1.24018526f;
    n += -0.96726048f;
    r3 = n *= 0.96933180f;
    n += r0;
    n *= r1;
    n *= r3;
    n *= r4;
    n *= r2;
    n += 0.52359873f;
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
