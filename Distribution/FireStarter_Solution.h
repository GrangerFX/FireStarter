// Run date: 07/02/23 18:22:40 Pacific Daylight Time
// Run duration = 598.385887 seconds
// Run generation = 44
// Run evolution = 0
// Run result = 0.00000116
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000116
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.34765810f;
    n += 1.09220016f;
    n *= -1.75959563f;
    r0 = n *= -0.49563193f;
    r1 = n *= 0.95661855f;
    n *= r0;
    r0 = n += -0.65902513f;
    r2 = n += 0.19225280f;
    n *= r2;
    n *= -0.06655739f;
    n *= 1.18571734f;
    n *= -0.25529322f;
    n *= 0.10330541f;
    r2 = n += 1.68960440f;
    r3 = n *= -0.52454573f;
    n = r1 *= n;
    r4 = n *= -0.37464011f;
    n *= r4;
    n += -1.33994627f;
    r4 = n += -0.17965245f;
    r5 = n *= -0.87544525f;
    n = r4 *= n;
    r6 = n += 0.93180746f;
    n *= r5;
    n *= r0;
    n *= r2;
    n += 0.37668419f;
    n *= r4;
    n *= r1;
    n *= r6;
    n *= r3;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.58371669f;
    n += 1.80406857f;
    n *= 0.13099343f;
    r0 = n *= 1.02328932f;
    r1 = n *= -3.48592257f;
    n *= r0;
    r0 = n += -1.82435179f;
    r2 = n += 1.79191351f;
    n *= r2;
    n *= 0.63693464f;
    n *= 0.00241659f;
    n *= -0.12247377f;
    n *= -2.75872207f;
    r2 = n += -1.24437511f;
    r3 = n *= -1.18633235f;
    n = r1 *= n;
    r4 = n *= -0.30053836f;
    n *= r4;
    n += -1.51029038f;
    r4 = n += 1.12758601f;
    r5 = n *= 1.63805997f;
    n = r4 *= n;
    r6 = n += 1.66784859f;
    n *= r5;
    n *= r0;
    n *= r2;
    n += -1.32818270f;
    n *= r4;
    n *= r1;
    n *= r6;
    n *= r3;
    n += -0.11813151f;
    return n;
} // Solution1

// Solution2 result = 0.00000077
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.29566279f;
    n += -0.77404320f;
    n *= 0.57434911f;
    r0 = n *= 0.88904476f;
    r1 = n *= 3.14094758f;
    n *= r0;
    r0 = n += -0.34505737f;
    r2 = n += -0.04476279f;
    n *= r2;
    n *= -0.01566871f;
    n *= 0.02552362f;
    n *= -2.10057044f;
    n *= -1.93679535f;
    r2 = n += -1.15571451f;
    r3 = n *= -0.14184310f;
    n = r1 *= n;
    r4 = n *= 1.61656463f;
    n *= r4;
    n += 0.19330968f;
    r4 = n += -1.67424643f;
    r5 = n *= -2.12264514f;
    n = r4 *= n;
    r6 = n += 1.03944969f;
    n *= r5;
    n *= r0;
    n *= r2;
    n += -0.12608287f;
    n *= r4;
    n *= r1;
    n *= r6;
    n *= r3;
    n += 0.52359849f;
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
