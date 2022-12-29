// Run date: 12/29/22 12:44:09 Pacific Standard Time
// Run duration = 54.579672 seconds
// Run count = 9
// Run variations = 3
// Run samples = 
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run evolve = FIRESTARTER_EVOLVE_BEST
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 9

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

// Precision = 0.00081801

// Solution0 precision = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.60604620f;
    r1 = n += -1.90395033f;
    r2 = n *= -1.70595169f;
    r3 = n *= 0.35313961f;
    n *= r2;
    r2 = n += -2.71299839f;
    n += 1.59045219f;
    n *= -0.06657016f;
    n += 0.77377152f;
    n += 1.91746998f;
    r4 = n += -0.19259226f;
    r5 = n += -1.24375856f;
    r6 = n += 0.14831026f;
    n = r4 += n;
    n *= -0.01939020f;
    r7 = n *= 0.44928831f;
    n += r5;
    n += r4;
    n *= r7;
    n += -0.18539990f;
    n = r6 *= n;
    n *= r2;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= 0.24377820f;
    n *= 1.70228386f;
    r3 = n += -0.84350288f;
    n += r0;
    n += r3;
    n += -0.49057359f;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00081801
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.05627370f;
    r1 = n += 1.14648044f;
    r2 = n *= -1.45360792f;
    r3 = n *= -0.91827619f;
    n *= r2;
    r2 = n += 1.78935349f;
    n += 0.58576846f;
    n *= 1.21335781f;
    n += -0.61930239f;
    n += 0.87356472f;
    r4 = n += -1.68675029f;
    r5 = n += -0.04097313f;
    r6 = n += 2.64163208f;
    n = r4 += n;
    n *= 0.37580603f;
    r7 = n *= 1.63947141f;
    n += r5;
    n += r4;
    n *= r7;
    n += -9.53497314f;
    n = r6 *= n;
    n *= r2;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= -0.35389176f;
    n *= 0.01362851f;
    r3 = n += -0.46250939f;
    n += r0;
    n += r3;
    n += 0.76508486f;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00030613
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.18048979f;
    r1 = n += 0.00003859f;
    r2 = n *= -1.60507560f;
    r3 = n *= -0.26285306f;
    n *= r2;
    r2 = n += 1.48238719f;
    n += 0.98457235f;
    n *= -1.26922584f;
    n += -0.82104886f;
    n += -0.38322350f;
    r4 = n += 0.88689691f;
    r5 = n += 1.71798420f;
    r6 = n += 1.34234762f;
    n = r4 += n;
    n *= 0.71118134f;
    r7 = n *= -0.16149558f;
    n += r5;
    n += r4;
    n *= r7;
    n += -1.22456658f;
    n = r6 *= n;
    n *= r2;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= -10.33923721f;
    n *= 0.07095787f;
    r3 = n += 2.45241880f;
    n += r0;
    n += r3;
    n += -4.72864914f;
    n *= r1;
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
