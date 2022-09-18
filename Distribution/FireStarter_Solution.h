// Run date: 09/18/22 14:57:44 Pacific Daylight Time
// Run duration = 1.480593 seconds
// Run count = 12
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_UNIT;
// Run units = 4;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 128;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 8337;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 12

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

// Precision = 0.00000811

// Solution0 precision = 0.00000799
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.60484099f;
    n *= 0.40365064f;
    r2 = n *= 1.08289206f;
    n = r1 *= n;
    r3 = n *= -0.19499485f;
    n *= 1.18008971f;
    r4 = n += 0.74442333f;
    r5 = n += -0.39113694f;
    n *= r1;
    n *= r5;
    n *= 10.41712284f;
    n *= -0.09402149f;
    n += 5.24976969f;
    r5 = n *= 0.00869705f;
    n = r4 += n;
    n += 0.23298791f;
    n *= -2.05403471f;
    n += r3;
    n = r4 *= n;
    n = r2 *= n;
    n = r5 *= n;
    n += r2;
    n *= -4.01378345f;
    n *= r4;
    r4 = n += 0.00000014f;
    n *= -0.48241895f;
    n += r0;
    n *= -0.77792376f;
    n += r4;
    n += r5;
    n *= -0.28996444f;
    return n;
} // Solution0

// Solution1 precision = 0.00000811
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09066033f;
    r1 = n *= -0.11114589f;
    n *= 0.67456162f;
    r2 = n *= -0.28118774f;
    n = r1 *= n;
    r3 = n *= -4.67906046f;
    n *= 3.65680575f;
    r4 = n += -1.32955968f;
    r5 = n += 0.86350930f;
    n *= r1;
    n *= r5;
    n *= 4.61116457f;
    n *= 2.12306929f;
    n += -17.02421761f;
    r5 = n *= 0.04547698f;
    n = r4 += n;
    n += 1.01693082f;
    n *= 5.16464376f;
    n += r3;
    n = r4 *= n;
    n = r2 *= n;
    n = r5 *= n;
    n += r2;
    n *= -2.03078341f;
    n *= r4;
    r4 = n += -0.16275768f;
    n *= 0.91382509f;
    n += r0;
    n *= 0.02185880f;
    n += r4;
    n += r5;
    n *= 0.71160668f;
    return n;
} // Solution1

// Solution2 precision = 0.00000663
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799097f;
    r1 = n *= 0.92682308f;
    n *= -0.32115811f;
    r2 = n *= -0.51730043f;
    n = r1 *= n;
    r3 = n *= 0.72311884f;
    n *= -0.79116732f;
    r4 = n += 6.64844275f;
    r5 = n += 6.72634029f;
    n *= r1;
    n *= r5;
    n *= -1.15680075f;
    n *= 0.28280494f;
    n += 0.41325051f;
    r5 = n *= 0.00219103f;
    n = r4 += n;
    n += -1.35753703f;
    n *= -0.31056473f;
    n += r3;
    n = r4 *= n;
    n = r2 *= n;
    n = r5 *= n;
    n += r2;
    n *= 0.14517674f;
    n *= r4;
    r4 = n += -0.96423519f;
    n *= 0.17040260f;
    n += r0;
    n *= -0.72608751f;
    n += r4;
    n += r5;
    n *= -0.61969066f;
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
