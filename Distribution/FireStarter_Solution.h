// Run date: 11/02/23 19:45:51 Pacific Daylight Time
// Run duration = 47083.309498 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.49791831
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
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
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

// Solution0 result = 0.40332890
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -2.02857637f;
    r1 = n *= 0.59258723f;
    r2 = n *= 0.29521668f;
    r3 = n *= 1.60836089f;
    n *= -2.04761839f;
    n *= -1.40948868f;
    n *= 0.23520941f;
    n *= -0.25662324f;
    r4 = n *= -0.63582921f;
    r5 = n *= -0.49998564f;
    n += -0.27817866f;
    n = r2 *= n;
    n *= r3;
    n = r1 *= n;
    n = r2 *= n;
    r3 = n += -1.77895868f;
    n += 0.74303353f;
    n = r2 *= n;
    n += r3;
    n *= 2.15440226f;
    n *= r0;
    n += -27.72196198f;
    n = r4 *= n;
    r0 = n *= 1.21751332f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r4;
    n *= 5.48821354f;
    n *= r1;
    n *= 1.24284029f;
    n += 0.40332890f;
    return n;
} // Solution0

// Solution1 result = 0.19286287
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.92947608f;
    r1 = n *= 1.02331865f;
    r2 = n *= 0.18647350f;
    r3 = n *= -2.01224923f;
    n *= -615.26562500f;
    n *= -0.32299638f;
    n *= -0.45563135f;
    n *= 0.59261775f;
    r4 = n *= -0.00380259f;
    r5 = n *= -2.30304885f;
    n += -1.18925810f;
    n = r2 *= n;
    n *= r3;
    n = r1 *= n;
    n = r2 *= n;
    r3 = n += -2.18301153f;
    n += 3.29375005f;
    n = r2 *= n;
    n += r3;
    n *= 0.08322466f;
    n *= r0;
    n += 1.46087706f;
    n = r4 *= n;
    r0 = n *= -3.80075955f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r4;
    n *= 9.72424793f;
    n *= r1;
    n *= -8.29426289f;
    n += 1.04513705f;
    return n;
} // Solution1

// Solution2 result = 0.49791831
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.48005238f;
    r1 = n *= 1.03366780f;
    r2 = n *= 0.45017952f;
    r3 = n *= -0.89214557f;
    n *= -0.54135060f;
    n *= -1.93608892f;
    n *= 1.44713914f;
    n *= -0.93661541f;
    r4 = n *= -1.59208417f;
    r5 = n *= -0.19360766f;
    n += 0.92108637f;
    n = r2 *= n;
    n *= r3;
    n = r1 *= n;
    n = r2 *= n;
    r3 = n += 3.62487245f;
    n += -1.55507660f;
    n = r2 *= n;
    n += r3;
    n *= 1.61283350f;
    n *= r0;
    n += 7.40036106f;
    n = r4 *= n;
    r0 = n *= -5.97709131f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r4;
    n *= -0.20390184f;
    n *= r1;
    n *= 1.08281291f;
    n += 0.49790394f;
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
