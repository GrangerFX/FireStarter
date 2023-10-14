// Run date: 10/14/23 10:23:12 Pacific Daylight Time
// Run duration = 17104.317805 seconds
// Run generation = 41
// Run evolution = 10
// Run result = 0.00000031
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -2.64942145f;
    n *= 0.11642817f;
    n *= 0.47251451f;
    r0 = n += 0.45790371f;
    r1 = n *= -1.43220270f;
    r2 = n *= 0.76009899f;
    n = r0 += n;
    n = r1 += n;
    n = r0 *= n;
    n *= 10.33684254f;
    r3 = n += -2.58294582f;
    r4 = n *= 0.63411963f;
    r5 = n *= 0.22028670f;
    r6 = n += -1.49125910f;
    n = r6 *= n;
    r7 = n += -1.42344940f;
    n *= -2.32545733f;
    n = r7 *= n;
    n *= r2;
    n *= 0.11688477f;
    r2 = n *= 1.87596667f;
    n *= 0.22237751f;
    n = r1 *= n;
    n += r4;
    n += r7;
    n *= r1;
    n *= r3;
    n += r0;
    n += r5;
    n += r6;
    n *= r2;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -1.22654414f;
    n *= -0.93491119f;
    n *= -0.09616313f;
    r0 = n += 0.34081066f;
    r1 = n *= -0.90765893f;
    r2 = n *= 1.16200840f;
    n = r0 += n;
    n = r1 += n;
    n = r0 *= n;
    n *= -21.37633705f;
    r3 = n += 0.97755790f;
    r4 = n *= 5.31441784f;
    r5 = n *= 0.05209343f;
    r6 = n += 0.58409405f;
    n = r6 *= n;
    r7 = n += 0.67316365f;
    n *= 0.86184865f;
    n = r7 *= n;
    n *= r2;
    n *= 11.15376377f;
    r2 = n *= -0.49873117f;
    n *= 0.11674220f;
    n = r1 *= n;
    n += r4;
    n += r7;
    n *= r1;
    n *= r3;
    n += r0;
    n += r5;
    n += r6;
    n *= r2;
    n += -0.11813176f;
    return n;
} // Solution1

// Solution2 result = 0.00000031
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.25662020f;
    n *= -1.54637730f;
    n *= -1.81851971f;
    r0 = n += 1.88926518f;
    r1 = n *= -1.29023445f;
    r2 = n *= 0.21342319f;
    n = r0 += n;
    n = r1 += n;
    n = r0 *= n;
    n *= 0.72017032f;
    r3 = n += 1.23751843f;
    r4 = n *= -0.46969831f;
    r5 = n *= -0.06067887f;
    r6 = n += -1.13649416f;
    n = r6 *= n;
    r7 = n += -2.24616957f;
    n *= 4.05658197f;
    n = r7 *= n;
    n *= r2;
    n *= 0.22407785f;
    r2 = n *= -4.15339422f;
    n *= 0.08425625f;
    n = r1 *= n;
    n += r4;
    n += r7;
    n *= r1;
    n *= r3;
    n += r0;
    n += r5;
    n += r6;
    n *= r2;
    n += 0.52359867f;
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
