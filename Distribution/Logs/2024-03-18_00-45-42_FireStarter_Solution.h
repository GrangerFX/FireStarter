// Run date: 03/18/24 00:45:42 Pacific Daylight Time
// Run duration = 23109.923253 seconds
// Run generation = 1916
// Run evolution = 24
// Run max result = 0.00000036
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
// Run optimizeSeed = 42273026
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.58430737f;
    r1 = n += -1.83565533f;
    n += -1.83565664f;
    n *= -0.22783279f;
    n = r0 *= n;
    n *= -3.97964501f;
    r2 = n *= -0.04274973f;
    r3 = n += 1.50136328f;
    n = r3 *= n;
    n += -0.11158498f;
    r4 = n *= -0.62694269f;
    n = r4 += n;
    r5 = n *= -0.12306879f;
    n += r3;
    r3 = n += 0.67386097f;
    n *= -0.66045910f;
    n *= r0;
    n += 3.04363084f;
    n += r2;
    n *= r5;
    r5 = n += -1.00628233f;
    n *= 8.06310749f;
    r2 = n *= -0.00753816f;
    n *= r2;
    n += r3;
    n += 3.36226678f;
    n += 0.31905755f;
    n *= r1;
    n *= r4;
    n *= -0.14393823f;
    n *= r5;
    n += 0.00000067f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.37665927f;
    r1 = n += 1.16412723f;
    n += 1.16412020f;
    n *= -1.04769850f;
    n = r0 *= n;
    n *= 0.04098924f;
    r2 = n *= 1.51602864f;
    r3 = n += 1.63210893f;
    n = r3 *= n;
    n += -0.53938496f;
    r4 = n *= 0.15699519f;
    n = r4 += n;
    r5 = n *= -0.64001685f;
    n += r3;
    r3 = n += -0.88140255f;
    n *= -0.28968701f;
    n *= r0;
    n += 0.62385482f;
    n += r2;
    n *= r5;
    r5 = n += 0.38798666f;
    n *= -3.69875789f;
    r2 = n *= -0.06526919f;
    n *= r2;
    n += r3;
    n += 3.54514503f;
    n += 1.33917367f;
    n *= r1;
    n *= r4;
    n *= 1.64608908f;
    n *= r5;
    n += -0.11813800f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.57797754f;
    r1 = n += -1.51314116f;
    n += -1.51314235f;
    n *= 0.11070736f;
    n = r0 *= n;
    n *= -3.31122041f;
    r2 = n *= 0.12993045f;
    r3 = n += 1.65500069f;
    n = r3 *= n;
    n += -0.65892017f;
    r4 = n *= 0.21228583f;
    n = r4 += n;
    r5 = n *= 0.39428848f;
    n += r3;
    r3 = n += 1.23871481f;
    n *= 0.91157407f;
    n *= r0;
    n += 1.13022304f;
    n += r2;
    n *= r5;
    r5 = n += -0.32102284f;
    n *= 0.00831722f;
    r2 = n *= -14.50350952f;
    n *= r2;
    n += r3;
    n += -3.49541163f;
    n += 1.80443668f;
    n *= r1;
    n *= r4;
    n *= 2.04979372f;
    n *= r5;
    n += 0.52359945f;
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
