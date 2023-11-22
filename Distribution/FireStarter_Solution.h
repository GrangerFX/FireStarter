// Run date: 11/21/23 15:00:29 Pacific Standard Time
// Run duration = 63376.770216 seconds
// Run generation = 303
// Run evolution = 13
// Run result = 0.00000119
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

// Solution0 result = 0.00000119
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.34822106f;
    r1 = n += -2.42051053f;
    r2 = n += -0.67685038f;
    r3 = n *= -0.05526409f;
    n = r0 += n;
    r4 = n *= -0.36100429f;
    n = r1 *= n;
    n += r0;
    n *= 0.11469711f;
    n += r3;
    n *= 0.57945621f;
    r3 = n += 1.74556243f;
    r0 = n *= 0.34821072f;
    r5 = n *= 0.93524283f;
    n = r0 *= n;
    r6 = n *= -1.04715657f;
    r7 = n += -1.43166447f;
    n *= r2;
    n = r5 *= n;
    n *= r1;
    n *= r3;
    n *= r0;
    n += r5;
    n += 0.84840739f;
    n = r4 += n;
    n += r6;
    n *= -1.41423404f;
    n += 0.72444749f;
    n += r4;
    n *= 0.50808614f;
    n *= r7;
    n += 0.39983380f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.49097848f;
    r1 = n += -2.83040404f;
    r2 = n += 0.66457850f;
    r3 = n *= -0.09595168f;
    n = r0 += n;
    r4 = n *= -0.50155574f;
    n = r1 *= n;
    n += r0;
    n *= 0.15261613f;
    n += r3;
    n *= 0.14635144f;
    r3 = n += 0.98975348f;
    r0 = n *= 0.71253437f;
    r5 = n *= 0.65454590f;
    n = r0 *= n;
    r6 = n *= -1.02763414f;
    r7 = n += -1.35196543f;
    n *= r2;
    n = r5 *= n;
    n *= r1;
    n *= r3;
    n *= r0;
    n += r5;
    n += -0.51963258f;
    n = r4 += n;
    n += r6;
    n *= 1.95049429f;
    n += -1.06890643f;
    n += r4;
    n *= -0.12624897f;
    n *= r7;
    n += 0.71217161f;
    return n;
} // Solution1

// Solution2 result = 0.00000113
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.33072650f;
    r1 = n += -1.54544055f;
    r2 = n += -1.09904373f;
    r3 = n *= -0.12139865f;
    n = r0 += n;
    r4 = n *= -0.30543771f;
    n = r1 *= n;
    n += r0;
    n *= 0.24196719f;
    n += r3;
    n *= 0.65082312f;
    r3 = n += 2.10403299f;
    r0 = n *= -0.32449609f;
    r5 = n *= 0.86809981f;
    n = r0 *= n;
    r6 = n *= -0.67851025f;
    r7 = n += -1.32884133f;
    n *= r2;
    n = r5 *= n;
    n *= r1;
    n *= r3;
    n *= r0;
    n += r5;
    n += 3.54823208f;
    n = r4 += n;
    n += r6;
    n *= -0.32755271f;
    n += 2.36910844f;
    n += r4;
    n *= 0.45762184f;
    n *= r7;
    n += 3.12411904f;
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
