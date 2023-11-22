// Run date: 11/22/23 10:57:42 Pacific Standard Time
// Run duration = 862.353707 seconds
// Run generation = 11
// Run evolution = 5
// Run result = 0.00007134
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

// Solution0 result = 0.00002062
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14158726f;
    n *= 0.03740156f;
    n *= -0.50660348f;
    n *= -0.01882223f;
    r1 = n *= -0.18069483f;
    n *= 0.03958114f;
    r2 = n += 0.09607686f;
    n = r2 += n;
    n *= r1;
    r1 = n *= -154260.34375000f;
    r3 = n *= 0.50851297f;
    r4 = n += -0.00052272f;
    r5 = n *= -0.18179387f;
    n = r3 += n;
    r6 = n *= 1.83506405f;
    n *= r2;
    n *= -0.03149704f;
    n *= r3;
    n += 0.84150004f;
    r3 = n *= 0.33628997f;
    n *= r0;
    n *= r4;
    n += -3.67412734f;
    n += -0.52229106f;
    n *= r5;
    n += r6;
    r6 = n *= -0.24600591f;
    n += -0.00006492f;
    n *= r6;
    n += -1.84983301f;
    n *= r1;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00003195
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.98315692f;
    n *= -0.02551674f;
    n *= -0.20939672f;
    n *= -0.13515419f;
    r1 = n *= 0.15816019f;
    n *= 2.41546464f;
    r2 = n += -0.15834193f;
    n = r2 += n;
    n *= r1;
    r1 = n *= -198130.07812500f;
    r3 = n *= 0.07867715f;
    r4 = n += 0.07877259f;
    r5 = n *= -0.23777261f;
    n = r3 += n;
    r6 = n *= 0.14487754f;
    n *= r2;
    n *= -0.20210791f;
    n *= r3;
    n += -0.25814509f;
    r3 = n *= 0.30790144f;
    n *= r0;
    n *= r4;
    n += -0.33361918f;
    n += -1.66756701f;
    n *= r5;
    n += r6;
    r6 = n *= -1.35343838f;
    n += -0.05476461f;
    n *= r6;
    n += -1.92855418f;
    n *= r1;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00007134
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.00000752f;
    n *= 0.31000414f;
    n *= -0.19109099f;
    n *= 0.29535967f;
    r1 = n *= -0.00336725f;
    n *= -7.12516689f;
    r2 = n += 0.19804414f;
    n = r2 += n;
    n *= r1;
    r1 = n *= 155395.48437500f;
    r3 = n *= -0.03798788f;
    r4 = n += 0.63137573f;
    r5 = n *= 1.40192294f;
    n = r3 += n;
    r6 = n *= -0.42504698f;
    n *= r2;
    n *= -1.54178345f;
    n *= r3;
    n += -2.28105879f;
    r3 = n *= -0.30025524f;
    n *= r0;
    n *= r4;
    n += 3.78627729f;
    n += -0.98468179f;
    n *= r5;
    n += r6;
    r6 = n *= 0.55779701f;
    n += -0.74141961f;
    n *= r6;
    n += 0.11246889f;
    n *= r1;
    n *= r3;
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
