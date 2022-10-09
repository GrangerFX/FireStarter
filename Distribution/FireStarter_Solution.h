// Run date: 10/09/22 12:43:35 Pacific Daylight Time
// Run duration = 0.330676 seconds
// Run count = 35
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
// Run seed = 7988;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 35

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

// Precision = 0.00083584

// Solution0 precision = 0.00030357
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.06561480f;
    n *= -1.26244223f;
    r0 = n += 0.80685592f;
    r1 = n *= 1.21382332f;
    r2 = n *= -0.55379689f;
    n *= r1;
    n += 0.62383586f;
    n += -0.07582689f;
    n += 0.59683430f;
    r1 = n += 0.31724915f;
    r3 = n += 0.30130240f;
    n = r0 *= n;
    n = r2 *= n;
    r4 = n *= -1.09865379f;
    n += -0.52197075f;
    n = r0 += n;
    r5 = n += -1.09657907f;
    r6 = n += 1.00443983f;
    n = r5 += n;
    n *= r0;
    n *= -0.80456030f;
    n += r6;
    n *= -12.21887875f;
    n *= -3.19682479f;
    n *= r1;
    n += -3.40949965f;
    n *= r4;
    n *= r3;
    n = r5 *= n;
    n *= -0.70434767f;
    n += r5;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.00021619
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.26793098f;
    n *= -1.09591186f;
    r0 = n += 0.50005877f;
    r1 = n *= 0.63725948f;
    r2 = n *= -0.15574872f;
    n *= r1;
    n += -0.76714909f;
    n += 1.02672386f;
    n += 1.18926513f;
    r1 = n += -0.68014699f;
    r3 = n += 0.21865253f;
    n = r0 *= n;
    n = r2 *= n;
    r4 = n *= 1.44405675f;
    n += 1.50804663f;
    n = r0 += n;
    r5 = n += 1.34100080f;
    r6 = n += 2.75441980f;
    n = r5 += n;
    n *= r0;
    n *= -0.24663046f;
    n += r6;
    n *= 0.98329347f;
    n *= -2.83704519f;
    n *= r1;
    n += 0.38135836f;
    n *= r4;
    n *= r3;
    n = r5 *= n;
    n *= -0.02534701f;
    n += r5;
    n += r2;
    return n;
} // Solution1

// Solution2 precision = 0.00083584
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.62884885f;
    n *= -0.55098629f;
    r0 = n += 4.23557615f;
    r1 = n *= -0.40782577f;
    r2 = n *= 0.62633502f;
    n *= r1;
    n += -0.75695086f;
    n += 1.65404963f;
    n += -3.05555916f;
    r1 = n += 0.43899465f;
    r3 = n += -0.14927532f;
    n = r0 *= n;
    n = r2 *= n;
    r4 = n *= 0.62080425f;
    n += 1.35252821f;
    n = r0 += n;
    r5 = n += -1.15316486f;
    r6 = n += 0.47349992f;
    n = r5 += n;
    n *= r0;
    n *= -0.26444939f;
    n += r6;
    n *= -0.08418603f;
    n *= -2.29849839f;
    n *= r1;
    n += -0.40269816f;
    n *= r4;
    n *= r3;
    n = r5 *= n;
    n *= 2.35187793f;
    n += r5;
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
