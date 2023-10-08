// Run date: 10/08/23 10:54:25 Pacific Daylight Time
// Run duration = 12904.844819 seconds
// Run generation = 54
// Run evolution = 17
// Run result = 0.00000107
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
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00000021
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -1.39089227f;
    r1 = n *= -0.06200210f;
    r2 = n += -0.54185098f;
    r3 = n *= 0.86007220f;
    r4 = n += 0.23301558f;
    n *= 0.00043596f;
    n *= 0.00831678f;
    r5 = n += 0.00000063f;
    n *= -18.55459595f;
    r6 = n += -0.01263744f;
    n *= -5.02483892f;
    n *= r6;
    n += 0.28374711f;
    n *= r3;
    n *= r1;
    n += -0.53101963f;
    n += -2.21948481f;
    n *= -0.53487444f;
    n = r4 *= n;
    r1 = n *= -1.60691583f;
    n = r4 += n;
    n *= -3.28208566f;
    n *= r4;
    n *= 1.86850011f;
    r4 = n += 1.14656568f;
    n = r4 *= n;
    n += 2.32625604f;
    n *= r1;
    n *= r4;
    n *= r0;
    n *= r2;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -1.15001202f;
    r1 = n *= -0.19163290f;
    r2 = n += -1.36223865f;
    r3 = n *= -1.22938216f;
    r4 = n += -0.83735484f;
    n *= -1.20393884f;
    n *= -0.96258539f;
    r5 = n += -0.11813394f;
    n *= 21.09953690f;
    r6 = n += 2.46062899f;
    n *= -0.00000347f;
    n *= r6;
    n += -0.03146747f;
    n *= r3;
    n *= r1;
    n += -0.74742383f;
    n += -1.32655489f;
    n *= 0.90964448f;
    n = r4 *= n;
    r1 = n *= -1.16031277f;
    n = r4 += n;
    n *= 3.35574746f;
    n *= r4;
    n *= 0.52224731f;
    r4 = n += -0.67379212f;
    n = r4 *= n;
    n += 0.74151164f;
    n *= r1;
    n *= r4;
    n *= r0;
    n *= r2;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00000107
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.46601599f;
    r1 = n *= -0.70640403f;
    r2 = n += -1.72366917f;
    r3 = n *= 0.18554665f;
    r4 = n += 0.15991141f;
    n *= -1.32346010f;
    n *= -2.47411633f;
    r5 = n += 0.52360612f;
    n *= -23.37444305f;
    r6 = n += 12.07998466f;
    n *= 0.00005308f;
    n *= r6;
    n += 0.23616490f;
    n *= r3;
    n *= r1;
    n += -3.54145670f;
    n += -0.60689759f;
    n *= 0.94401205f;
    n = r4 *= n;
    r1 = n *= 1.24494648f;
    n = r4 += n;
    n *= -0.58552247f;
    n *= r4;
    n *= -0.21575855f;
    r4 = n += -1.06334209f;
    n = r4 *= n;
    n += 2.23237681f;
    n *= r1;
    n *= r4;
    n *= r0;
    n *= r2;
    n += r5;
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
