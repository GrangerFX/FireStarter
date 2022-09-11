// Run date: 09/11/22 10:35:48 Pacific Daylight Time
// Run duration = 4.016676 seconds
// Run count = 15
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 8;
// Run process = 1;
// Run population = 17408;
// Run iterations = 128;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 72;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 4

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

// Precision = 0.00061893

// Solution0 precision = 0.00034619
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.85813999f;
    r1 = n *= 0.28254157f;
    r2 = n *= 0.95328766f;
    n *= -0.15215120f;
    n += -0.26558739f;
    r3 = n += -0.18629596f;
    n = r0 *= n;
    n += 4.93324947f;
    n *= -0.00022177f;
    n *= 1.28096199f;
    n += -0.90376908f;
    n = r2 += n;
    r4 = n += -0.86877859f;
    r5 = n *= -0.76677972f;
    n *= 0.25128567f;
    n *= 0.14496642f;
    n = r1 += n;
    n = r1 *= n;
    r6 = n += -0.50585592f;
    n = r2 *= n;
    r7 = n *= 0.45381355f;
    n += r3;
    n += -0.30974361f;
    n += r0;
    n = r1 += n;
    n *= r1;
    n *= r6;
    n += r2;
    n *= r5;
    n += -0.29444769f;
    n *= r4;
    n += r7;
    return n;
} // Solution0

// Solution1 precision = 0.00056314
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 1.13447773f;
    r1 = n *= -0.17057249f;
    r2 = n *= 0.97711474f;
    n *= 0.46636081f;
    n += 0.25810578f;
    r3 = n += 0.32191145f;
    n = r0 *= n;
    n += -0.58101267f;
    n *= 0.12032243f;
    n *= 3.28455257f;
    n += 2.66719079f;
    n = r2 += n;
    r4 = n += -0.66280329f;
    r5 = n *= -0.12842162f;
    n *= -3.06762695f;
    n *= -0.15234713f;
    n = r1 += n;
    n = r1 *= n;
    r6 = n += -0.70660168f;
    n = r2 *= n;
    r7 = n *= -0.16672470f;
    n += r3;
    n += 1.04347003f;
    n += r0;
    n = r1 += n;
    n *= r1;
    n *= r6;
    n += r2;
    n *= r5;
    n += -0.64799941f;
    n *= r4;
    n += r7;
    return n;
} // Solution1

// Solution2 precision = 0.00061893
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.73713654f;
    r1 = n *= -0.34304845f;
    r2 = n *= 0.61253124f;
    n *= 0.86615795f;
    n += -1.04025185f;
    r3 = n += 0.15036555f;
    n = r0 *= n;
    n += -0.48420885f;
    n *= -0.10171780f;
    n *= -2.42263484f;
    n += -0.06839227f;
    n = r2 += n;
    r4 = n += 0.75368768f;
    r5 = n *= 0.11676193f;
    n *= 0.95919091f;
    n *= 0.04644593f;
    n = r1 += n;
    n = r1 *= n;
    r6 = n += -2.11136198f;
    n = r2 *= n;
    r7 = n *= -1.35470057f;
    n += r3;
    n += 0.40445468f;
    n += r0;
    n = r1 += n;
    n *= r1;
    n *= r6;
    n += r2;
    n *= r5;
    n += 1.06718719f;
    n *= r4;
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
