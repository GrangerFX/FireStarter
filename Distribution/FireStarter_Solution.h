// Run date: 05/13/23 12:05:05 Pacific Daylight Time
// Run duration = 847.193780 seconds
// Run generation = 228
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 8
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.03827367f;
    n *= r0;
    r0 = n *= 0.19514255f;
    n += -1.12342477f;
    n *= -1.37233782f;
    r2 = n *= -1.53614807f;
    n = r2 *= n;
    r3 = n *= 1.97297025f;
    n *= r0;
    n += -1.58426213f;
    r0 = n *= 1.90323997f;
    r4 = n += 2.61667824f;
    n *= 0.78844494f;
    r5 = n *= 1.69709730f;
    n += r4;
    n *= -4.52297497f;
    n *= -0.00228473f;
    n *= 1.91049612f;
    n *= 2.47263908f;
    n += -0.69413942f;
    n = r2 *= n;
    n *= r3;
    n *= 0.02854468f;
    n = r0 += n;
    n += r5;
    n *= r0;
    n += r2;
    n *= -0.77439821f;
    n = r1 *= n;
    n += r1;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065819f;
    r1 = n *= 0.08937362f;
    n *= r0;
    r0 = n *= -0.31006160f;
    n += 3.51734090f;
    n *= -0.61468172f;
    r2 = n *= 0.78625405f;
    n = r2 *= n;
    r3 = n *= -1.50962019f;
    n *= r0;
    n += 2.47927928f;
    r0 = n *= 1.36410093f;
    r4 = n += -4.43539286f;
    n *= 2.97491622f;
    r5 = n *= -0.33661142f;
    n += r4;
    n *= 0.12210865f;
    n *= 0.71451348f;
    n *= -1.72559333f;
    n *= -6.13154745f;
    n += 0.48643568f;
    n = r2 *= n;
    n *= r3;
    n *= 2.00502753f;
    n = r0 += n;
    n += r5;
    n *= r0;
    n += r2;
    n *= -0.08544568f;
    n = r1 *= n;
    n += r1;
    n += -0.11813149f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= 0.52295256f;
    n *= r0;
    r0 = n *= -0.11627251f;
    n += 7.15309858f;
    n *= -0.12257537f;
    r2 = n *= -1.02557778f;
    n = r2 *= n;
    r3 = n *= -3.64543176f;
    n *= r0;
    n += -1.03929090f;
    r0 = n *= -3.72613764f;
    r4 = n += 0.30900261f;
    n *= -1.20761633f;
    r5 = n *= 0.86145300f;
    n += r4;
    n *= -0.16317977f;
    n *= 0.02235242f;
    n *= -72.79737091f;
    n *= -4.28278112f;
    n += 0.40837938f;
    n = r2 *= n;
    n *= r3;
    n *= 0.32051215f;
    n = r0 += n;
    n += r5;
    n *= r0;
    n += r2;
    n *= 0.35277998f;
    n = r1 *= n;
    n += r1;
    n += 0.52359879f;
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
