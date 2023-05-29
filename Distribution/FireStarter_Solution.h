// Run date: 05/29/23 12:09:30 Pacific Daylight Time
// Run duration = 676.885530 seconds
// Run generation = 105
// Run evolution = 0
// Run result = 0.00036406
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
// Run tests = 0
// Run units = 1
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

// Solution0 result = 0.00015265
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.69435912f;
    r0 = n *= 0.21441376f;
    r1 = n *= -1.52260411f;
    r2 = n *= 0.05453647f;
    n *= 2.17798066f;
    n *= -1.55772698f;
    n += -1.84363198f;
    r3 = n *= -1.37462854f;
    r4 = n *= -2.83753538f;
    r5 = n *= -0.86695844f;
    n += -1.93630385f;
    n = r1 *= n;
    n *= r2;
    n += 1.83937991f;
    r2 = n *= -0.30102959f;
    r6 = n += 1.50752759f;
    n += r2;
    n *= r1;
    n += r6;
    n *= -0.06850311f;
    n = r5 *= n;
    n += -1.59248006f;
    n += r3;
    r3 = n *= 2.77631116f;
    n *= r5;
    n *= r3;
    n *= 2.50702119f;
    n *= r4;
    n *= 6.02282810f;
    n *= r0;
    n *= 0.06924005f;
    n += -0.00015264f;
    return n;
} // Solution0

// Solution1 result = 0.00027144
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -2.10557485f;
    r0 = n *= 1.02434993f;
    r1 = n *= -0.45653024f;
    r2 = n *= -0.23676215f;
    n *= -1.25583839f;
    n *= -1.27895069f;
    n += -1.45097375f;
    r3 = n *= 0.26757732f;
    r4 = n *= 0.66513717f;
    r5 = n *= -0.65599197f;
    n += -0.74593323f;
    n = r1 *= n;
    n *= r2;
    n += -0.74357510f;
    r2 = n *= -0.01793559f;
    r6 = n += -0.85307449f;
    n += r2;
    n *= r1;
    n += r6;
    n *= -1.24566793f;
    n = r5 *= n;
    n += 1.92723310f;
    n += r3;
    r3 = n *= -1.03341353f;
    n *= r5;
    n *= r3;
    n *= -2.67008567f;
    n *= r4;
    n *= 1.11258960f;
    n *= r0;
    n *= -0.69819874f;
    n += 0.85200286f;
    return n;
} // Solution1

// Solution2 result = 0.00036406
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.56777430f;
    r0 = n *= -1.28565276f;
    r1 = n *= 0.42635000f;
    r2 = n *= 0.27924469f;
    n *= 0.16723230f;
    n *= 3.11432815f;
    n += -0.62848026f;
    r3 = n *= -0.83878648f;
    r4 = n *= 2.08439279f;
    r5 = n *= -0.14290521f;
    n += -0.97830844f;
    n = r1 *= n;
    n *= r2;
    n += 0.18233876f;
    r2 = n *= 1.32004356f;
    r6 = n += 2.03703308f;
    n += r2;
    n *= r1;
    n += r6;
    n *= 1.26895654f;
    n = r5 *= n;
    n += 0.59679836f;
    n += r3;
    r3 = n *= 0.38823757f;
    n *= r5;
    n *= r3;
    n *= -1.84692788f;
    n *= r4;
    n *= -6.21063423f;
    n *= r0;
    n *= -4.98771000f;
    n += -0.00036406f;
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
