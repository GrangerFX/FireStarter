// Run date: 10/31/23 21:14:04 Pacific Daylight Time
// Run duration = 60654.427768 seconds
// Run generation = 249
// Run evolution = 53
// Run result = 0.00000584
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
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

// Solution0 result = 0.00000167
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.03855264f;
    r1 = n *= 0.20911038f;
    r2 = n *= 0.12677100f;
    r3 = n *= 1.31124020f;
    r4 = n *= 2.41584945f;
    n *= r2;
    r2 = n *= 0.38887236f;
    n += r1;
    r1 = n += 0.00731634f;
    r5 = n += 0.17535052f;
    r6 = n += 0.11959738f;
    n += -1.19102967f;
    n = r3 *= n;
    n += -1.94498050f;
    n = r3 *= n;
    r7 = n += 0.65660048f;
    n = r5 *= n;
    n += 9.63613892f;
    n *= r3;
    n *= r4;
    n *= -1.76980817f;
    n *= r2;
    n *= r6;
    n += r0;
    n += r1;
    n += 0.94024432f;
    n += -5.15518236f;
    n = r7 *= n;
    n *= r7;
    n += -1.79186153f;
    n *= r5;
    n += 0.16112997f;
    return n;
} // Solution0

// Solution1 result = 0.00000584
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.61404014f;
    r1 = n *= 0.68299639f;
    r2 = n *= -0.03023204f;
    r3 = n *= 0.33117458f;
    r4 = n *= 0.45980883f;
    n *= r2;
    r2 = n *= -17.33363152f;
    n += r1;
    r1 = n += -1.30828083f;
    r5 = n += -0.05076674f;
    r6 = n += -2.30754232f;
    n += 1.55141866f;
    n = r3 *= n;
    n += 1.24263310f;
    n = r3 *= n;
    r7 = n += 0.36406374f;
    n = r5 *= n;
    n += -29.74218750f;
    n *= r3;
    n *= r4;
    n *= 4.03485775f;
    n *= r2;
    n *= r6;
    n += r0;
    n += r1;
    n += 0.66077447f;
    n += -1.32265484f;
    n = r7 *= n;
    n *= r7;
    n += -4.19510555f;
    n *= r5;
    n += -0.67300719f;
    return n;
} // Solution1

// Solution2 result = 0.00000560
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -0.06124900f;
    r1 = n *= 0.35604301f;
    r2 = n *= 0.04814695f;
    r3 = n *= 2.03179812f;
    r4 = n *= 0.13330537f;
    n *= r2;
    r2 = n *= -8.18540001f;
    n += r1;
    r1 = n += -0.95454019f;
    r5 = n += -0.60123402f;
    r6 = n += -1.98993945f;
    n += 1.72145402f;
    n = r3 *= n;
    n += -1.42922974f;
    n = r3 *= n;
    r7 = n += 0.58401543f;
    n = r5 *= n;
    n += -1.99789953f;
    n *= r3;
    n *= r4;
    n *= -32.00286484f;
    n *= r2;
    n *= r6;
    n += r0;
    n += r1;
    n += -0.79510289f;
    n += -0.48337328f;
    n = r7 *= n;
    n *= r7;
    n += -1.68987882f;
    n *= r5;
    n += 0.09554134f;
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
