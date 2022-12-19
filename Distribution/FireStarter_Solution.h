// Run date: 12/18/22 16:06:43 Pacific Standard Time
// Run duration = 43.199274 seconds
// Run count = 41
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
// Solution Generation = 41

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

// Precision = 0.00006938

// Solution0 precision = 0.00003290
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.24155486f;
    r0 = n *= -0.14325902f;
    r1 = n += 0.50190467f;
    r2 = n += 0.76611948f;
    r3 = n *= 2.07476306f;
    n *= -0.00480095f;
    n *= r0;
    r0 = n += 0.58639622f;
    n = r1 *= n;
    r4 = n += -3.82074499f;
    r5 = n += 3.17050767f;
    n *= r2;
    r2 = n += -0.52686638f;
    r6 = n += -0.45716482f;
    n += 0.33716023f;
    n = r2 += n;
    n *= 2.43265414f;
    n = r5 *= n;
    r7 = n += -1.17500031f;
    n += r2;
    n *= r1;
    n += 0.08381698f;
    n *= r5;
    n = r7 *= n;
    n *= -0.00012709f;
    n *= r4;
    n *= -10.17606068f;
    n += r3;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= 1.10882521f;
    return n;
} // Solution0

// Solution1 precision = 0.00006938
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.66781878f;
    r0 = n *= -0.20089553f;
    r1 = n += -0.01850829f;
    r2 = n += -1.75371552f;
    r3 = n *= 1.11143088f;
    n *= 0.00855145f;
    n *= r0;
    r0 = n += -0.60889941f;
    n = r1 *= n;
    r4 = n += -0.61568785f;
    r5 = n += -0.03597983f;
    n *= r2;
    r2 = n += 0.28798422f;
    r6 = n += 1.16611743f;
    n += -1.15334201f;
    n = r2 += n;
    n *= 0.21353675f;
    n = r5 *= n;
    r7 = n += 0.35969204f;
    n += r2;
    n *= r1;
    n += 1.18848622f;
    n *= r5;
    n = r7 *= n;
    n *= 0.01780410f;
    n *= r4;
    n *= 26.04595947f;
    n += r3;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= 7.28999472f;
    return n;
} // Solution1

// Solution2 precision = 0.00006640
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -0.53684652f;
    r0 = n *= 0.36725867f;
    r1 = n += -0.19109765f;
    r2 = n += -0.78521341f;
    r3 = n *= 0.28095824f;
    n *= 0.05615723f;
    n *= r0;
    r0 = n += -0.39346042f;
    n = r1 *= n;
    r4 = n += 0.29936439f;
    r5 = n += 0.54761112f;
    n *= r2;
    r2 = n += 5.54039526f;
    r6 = n += -0.43414760f;
    n += 0.24790715f;
    n = r2 += n;
    n *= -0.26756167f;
    n = r5 *= n;
    r7 = n += 1.14631081f;
    n += r2;
    n *= r1;
    n += -1.12206972f;
    n *= r5;
    n = r7 *= n;
    n *= -11.29974556f;
    n *= r4;
    n *= 0.00022974f;
    n += r3;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= -1.22143722f;
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
