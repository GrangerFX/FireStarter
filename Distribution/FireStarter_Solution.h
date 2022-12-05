// Run date: 12/04/22 17:36:19 Pacific Standard Time
// Run duration = 67.932097 seconds
// Run count = 75
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 75

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00022614

// Solution0 precision = 0.00001800
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.14979553f;
    r1 = n *= -1.62778378f;
    r2 = n += -0.65716958f;
    r3 = n += 0.33343846f;
    r4 = n += -0.07389831f;
    n *= r4;
    n += -6.37389946f;
    n += 2.53318429f;
    n *= 0.06394148f;
    n *= -0.13428067f;
    r4 = n += 1.54421496f;
    n *= r4;
    n += 0.13880092f;
    r4 = n *= -0.56251466f;
    r5 = n += -0.88895422f;
    n += 0.34751382f;
    r6 = n += 0.54132503f;
    n *= -0.51143873f;
    r7 = n += -1.12888861f;
    n += r0;
    n *= r1;
    n += r2;
    n += r3;
    n *= -0.06769134f;
    n = r4 += n;
    n *= r4;
    n *= r6;
    n += 1.35612440f;
    n *= 0.25871050f;
    n *= r5;
    n += 0.25109899f;
    n += r7;
    return n;
} // Solution0

// Solution1 precision = 0.00005120
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.34987354f;
    r1 = n *= 0.21052456f;
    r2 = n += -4.25562525f;
    r3 = n += 1.06621659f;
    r4 = n += 2.42147422f;
    n *= r4;
    n += 0.49086523f;
    n += -0.97680664f;
    n *= 6.21946669f;
    n *= -0.03225678f;
    r4 = n += 0.81228542f;
    n *= r4;
    n += -0.92029005f;
    r4 = n *= 0.83934158f;
    r5 = n += 0.26847482f;
    n += 0.27238491f;
    r6 = n += 0.18345499f;
    n *= 0.13630953f;
    r7 = n += 0.47854286f;
    n += r0;
    n *= r1;
    n += r2;
    n += r3;
    n *= 4.22060633f;
    n = r4 += n;
    n *= r4;
    n *= r6;
    n += 3.31957364f;
    n *= -0.02594171f;
    n *= r5;
    n += -0.67184293f;
    n += r7;
    return n;
} // Solution1

// Solution2 precision = 0.00022614
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.31108165f;
    r1 = n *= -0.48284510f;
    r2 = n += 0.31238654f;
    r3 = n += 0.41936803f;
    r4 = n += 0.74065351f;
    n *= r4;
    n += 0.72150540f;
    n += -1.79708278f;
    n *= -6.93150473f;
    n *= 0.00885343f;
    r4 = n += 0.72442418f;
    n *= r4;
    n += 0.41550344f;
    r4 = n *= -1.96350539f;
    r5 = n += -0.56328332f;
    n += 0.69852364f;
    r6 = n += 1.44754994f;
    n *= -2.60079241f;
    r7 = n += -1.08781981f;
    n += r0;
    n *= r1;
    n += r2;
    n += r3;
    n *= -0.13950245f;
    n = r4 += n;
    n *= r4;
    n *= r6;
    n += 0.79465842f;
    n *= -0.92750591f;
    n *= r5;
    n += 0.60839146f;
    n += r7;
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
