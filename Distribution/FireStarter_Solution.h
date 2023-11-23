// Run date: 11/22/23 14:19:24 Pacific Standard Time
// Run duration = 48830.455506 seconds
// Run generation = 46
// Run evolution = 10
// Run result = 0.00000048
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.03653464f;
    r0 = n += -0.11477699f;
    n *= 0.21414535f;
    n *= 142120.92187500f;
    r1 = n += 0.00087759f;
    n *= r0;
    r0 = n *= 0.00598957f;
    r2 = n += -0.61622483f;
    n += -1.12204921f;
    r3 = n *= 0.00441949f;
    n += -0.01810171f;
    r4 = n += -0.03318803f;
    n *= r0;
    r0 = n += 0.13021989f;
    n = r3 += n;
    r5 = n += 3.59542656f;
    n *= r2;
    r2 = n *= -0.03024217f;
    n += r5;
    n += r2;
    n = r0 += n;
    n *= -0.05728862f;
    n *= r0;
    r0 = n *= 0.16304827f;
    n *= r4;
    n *= -3.59707165f;
    n += r3;
    n *= 0.14421971f;
    n *= 0.46134582f;
    n *= r0;
    n *= r1;
    n += 0.00000027f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.08803212f;
    r0 = n += -0.27207619f;
    n *= 17465.88085938f;
    n *= -0.06739283f;
    r1 = n += 0.00174139f;
    n *= r0;
    r0 = n *= 0.01932599f;
    r2 = n += 1.15436983f;
    n += 0.20356902f;
    r3 = n *= -0.00591596f;
    n += -0.39219081f;
    r4 = n += 0.33481902f;
    n *= r0;
    r0 = n += -1.45192993f;
    n = r3 += n;
    r5 = n += 2.32524848f;
    n *= r2;
    r2 = n *= -0.02918996f;
    n += r5;
    n += r2;
    n = r0 += n;
    n *= -1.76990438f;
    n *= r0;
    r0 = n *= -0.16180597f;
    n *= r4;
    n *= 3.76985407f;
    n += r3;
    n *= -0.40809098f;
    n *= 0.14661898f;
    n *= r0;
    n *= r1;
    n += -0.11813735f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.05474628f;
    r0 = n += 0.14332530f;
    n *= 0.16835573f;
    n *= -12048.39648438f;
    r1 = n += -0.00033514f;
    n *= r0;
    r0 = n *= 0.09168068f;
    r2 = n += 4.98104286f;
    n += -1.46896553f;
    r3 = n *= 0.00199354f;
    n += -0.04627845f;
    r4 = n += 0.16465782f;
    n *= r0;
    r0 = n += 0.16927327f;
    n = r3 += n;
    r5 = n += 3.89966011f;
    n *= r2;
    r2 = n *= 0.00365889f;
    n += r5;
    n += r2;
    n = r0 += n;
    n *= 0.27745351f;
    n *= r0;
    r0 = n *= 0.09711207f;
    n *= r4;
    n *= 3.80160809f;
    n += r3;
    n *= 0.06708925f;
    n *= -0.60829598f;
    n *= r0;
    n *= r1;
    n += 0.52359796f;
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
