// Run date: 11/18/23 23:34:14 Pacific Standard Time
// Run duration = 31895.131996 seconds
// Run generation = 81
// Run evolution = 14
// Run result = 0.00000024
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
// Run tests = 0
// Run seeds = 1
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 100
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.76325536f;
    n *= 0.27391469f;
    r0 = n += 1.51733124f;
    r1 = n *= -0.44997755f;
    n += 0.05219265f;
    r2 = n += -0.05219259f;
    n *= -0.00000001f;
    r3 = n += 0.10543264f;
    r4 = n *= -1.70777369f;
    n = r0 *= n;
    n = r1 += n;
    n = r1 *= n;
    n *= 0.92952925f;
    r5 = n += -0.73174149f;
    n *= 0.00867251f;
    n += r4;
    r4 = n *= -2.21803331f;
    n *= r1;
    n += 0.59886950f;
    n += -0.60735351f;
    r1 = n += -0.55340165f;
    n += -2.32426333f;
    r6 = n += -4.58687401f;
    n *= r1;
    n = r5 += n;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= r6;
    n *= 3.57450604f;
    n *= r5;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.21479149f;
    n *= 0.97515905f;
    r0 = n += 0.64735651f;
    r1 = n *= 0.02116917f;
    n += -0.29372549f;
    r2 = n += 0.17559402f;
    n *= -0.00001644f;
    r3 = n += 2.08854699f;
    r4 = n *= 0.22722663f;
    n = r0 *= n;
    n = r1 += n;
    n = r1 *= n;
    n *= -1.14878261f;
    r5 = n += 0.04071654f;
    n *= 0.33315644f;
    n += r4;
    r4 = n *= -2.08169436f;
    n *= r1;
    n += 0.36880600f;
    n += -2.32858038f;
    r1 = n += 2.23479271f;
    n += -0.10718286f;
    r6 = n += 4.57932377f;
    n *= r1;
    n = r5 += n;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= r6;
    n *= -0.60358441f;
    n *= r5;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 2.44218040f;
    n *= 0.11749223f;
    r0 = n += -0.75119984f;
    r1 = n *= 1.60551453f;
    n += 0.32234603f;
    r2 = n += 0.20125261f;
    n *= -0.00000099f;
    r3 = n += 1.91719592f;
    r4 = n *= 0.12720421f;
    n = r0 *= n;
    n = r1 += n;
    n = r1 *= n;
    n *= 0.22703305f;
    r5 = n += -0.34887078f;
    n *= -0.02267826f;
    n += r4;
    r4 = n *= -0.57027733f;
    n *= r1;
    n += -1.38005066f;
    n += -1.29936767f;
    r1 = n += 3.08823776f;
    n += 1.56793845f;
    r6 = n += 3.41758633f;
    n *= r1;
    n = r5 += n;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= r6;
    n *= 4.07862568f;
    n *= r5;
    n += r2;
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
