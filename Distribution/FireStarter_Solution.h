// Run date: 11/12/22 15:04:43 Pacific Standard Time
// Run duration = 18.258901 seconds
// Run count = 7
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
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

// Precision = 0.00130385

// Solution0 precision = 0.00051951
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.18912043f;
    r1 = n += -0.69182760f;
    r2 = n += 0.25881159f;
    r3 = n *= 0.26667333f;
    r4 = n += -0.97640496f;
    n = r4 *= n;
    r5 = n += -2.77669001f;
    n *= r0;
    n += -2.11957479f;
    n += -11.57177544f;
    n += 2.24933362f;
    n += 4.20850849f;
    n *= 0.27643621f;
    n += 6.12260485f;
    n += 3.49350953f;
    n *= -0.10399200f;
    n += 0.89810491f;
    n = r2 += n;
    r0 = n += 1.19818449f;
    n = r0 *= n;
    r6 = n += -0.38555345f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.00028515
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.34056047f;
    r1 = n += 0.55667633f;
    r2 = n += 0.29862893f;
    r3 = n *= 0.00813937f;
    r4 = n += 1.18487132f;
    n = r4 *= n;
    r5 = n += -2.87935233f;
    n *= r0;
    n += -424.90353394f;
    n += 254.30986023f;
    n += -2.75326824f;
    n += 1.12529898f;
    n *= 0.00632298f;
    n += -0.35926095f;
    n += 0.74445045f;
    n *= -5.10159540f;
    n += -1.44433022f;
    n = r2 += n;
    r0 = n += -1.40446031f;
    n = r0 *= n;
    r6 = n += -15.70559406f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.00130385
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.16070896f;
    r1 = n += -0.18991828f;
    r2 = n += -0.31508687f;
    r3 = n *= -1.39356303f;
    r4 = n += -0.64884681f;
    n = r4 *= n;
    r5 = n += -1.10607374f;
    n *= r0;
    n += 3.91569638f;
    n += -5.33899593f;
    n += -6.69271660f;
    n += 2.35658908f;
    n *= 0.18544696f;
    n += -3.00169897f;
    n += 8.57975578f;
    n *= 0.13654347f;
    n += 0.06966705f;
    n = r2 += n;
    r0 = n += 0.20565414f;
    n = r0 *= n;
    r6 = n += -0.61794186f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
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
