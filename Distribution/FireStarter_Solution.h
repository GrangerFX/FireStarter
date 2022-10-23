// Run date: 10/23/22 12:17:25 Pacific Daylight Time
// Run duration = 0.109874 seconds
// Run count = 7
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
// Solution Generation = 7

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

// Precision = 0.00000238

// Solution0 precision = 0.00000072
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -4.03535175f;
    r0 = n += 0.89375871f;
    n += 0.00000063f;
    r1 = n *= 0.28370148f;
    n = r1 *= n;
    r2 = n *= 0.19496661f;
    n += r2;
    r2 = n += 0.17386885f;
    r3 = n *= -13.27631474f;
    n += 8.64781570f;
    n += r3;
    r3 = n *= 0.00053954f;
    r4 = n += -3.40398145f;
    n = r1 += n;
    r5 = n += -5.35734034f;
    n *= 0.09106725f;
    n *= r1;
    r1 = n *= -0.25513753f;
    n += r2;
    n *= r5;
    r5 = n *= 0.14928935f;
    n += 7.66998625f;
    n *= r4;
    n += -6.01452065f;
    n *= r3;
    n += -0.69922686f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -1.37619889f;
    n *= r0;
    n += -0.00000038f;
    return n;
} // Solution0

// Solution1 precision = 0.00000203
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.32613087f;
    r0 = n += 0.23547369f;
    n += -0.00000296f;
    r1 = n *= -0.16289350f;
    n = r1 *= n;
    r2 = n *= -0.77287126f;
    n += r2;
    r2 = n += 0.97782159f;
    r3 = n *= -1.21794569f;
    n += 1.46900988f;
    n += r3;
    r3 = n *= -0.36170551f;
    r4 = n += -0.04537401f;
    n = r1 += n;
    r5 = n += 0.19835469f;
    n *= 0.11121514f;
    n *= r1;
    r1 = n *= 3.82049942f;
    n += r2;
    n *= r5;
    r5 = n *= -0.98257226f;
    n += 5.88873291f;
    n *= r4;
    n += -7.61475039f;
    n *= r3;
    n += 30.18679047f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 0.67848653f;
    n *= r0;
    n += -0.11813014f;
    return n;
} // Solution1

// Solution2 precision = 0.00000238
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.62451088f;
    r0 = n += -1.99348068f;
    n += -0.00000353f;
    r1 = n *= 0.11779728f;
    n = r1 *= n;
    r2 = n *= -4.55899906f;
    n += r2;
    r2 = n += 0.81986493f;
    r3 = n *= -0.39479777f;
    n += -0.67544872f;
    n += r3;
    r3 = n *= -0.30213529f;
    r4 = n += 0.27256754f;
    n = r1 += n;
    r5 = n += 0.34531018f;
    n *= 0.50935894f;
    n *= r1;
    r1 = n *= -0.67191452f;
    n += r2;
    n *= r5;
    r5 = n *= 0.34559903f;
    n += 5.16948938f;
    n *= r4;
    n += 8.90906811f;
    n *= r3;
    n += 9.30297565f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 0.72466117f;
    n *= r0;
    n += 0.52360082f;
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
