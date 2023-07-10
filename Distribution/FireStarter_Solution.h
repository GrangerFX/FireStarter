// Run date: 07/10/23 10:26:34 Pacific Daylight Time
// Run duration = 1000.384546 seconds
// Run generation = 157
// Run evolution = 0
// Run result = 0.00000045
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.06769709f;
    r2 = n *= -1.46366513f;
    n = r2 *= n;
    r3 = n *= -0.47998679f;
    n = r2 *= n;
    n *= r3;
    r3 = n *= 5.48518801f;
    n *= 23.58202934f;
    n += -0.04443747f;
    n *= r3;
    r3 = n += 1.88388968f;
    n += r2;
    n *= 2.71297741f;
    n = r1 *= n;
    n *= r0;
    r0 = n += 0.76189435f;
    r2 = n *= -0.07493408f;
    r4 = n += -1.06073284f;
    r5 = n *= -0.28110322f;
    n *= r5;
    r5 = n += 0.67457652f;
    n *= -1.21296406f;
    n = r4 *= n;
    n = r5 *= n;
    n += r0;
    n += r3;
    n += r2;
    n *= r4;
    n *= r1;
    n *= r5;
    n += -0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.16730811f;
    r2 = n *= 0.35643408f;
    n = r2 *= n;
    r3 = n *= 0.90612185f;
    n = r2 *= n;
    n *= r3;
    r3 = n *= -5.78834677f;
    n *= 14.20257473f;
    n += 6.27342606f;
    n *= r3;
    r3 = n += -3.41317391f;
    n += r2;
    n *= 0.42426983f;
    n = r1 *= n;
    n *= r0;
    r0 = n += -6.34110403f;
    r2 = n *= 0.06577823f;
    r4 = n += 0.00241559f;
    r5 = n *= 0.47095323f;
    n *= r5;
    r5 = n += 0.88178235f;
    n *= -1.88853836f;
    n = r4 *= n;
    n = r5 *= n;
    n += r0;
    n += r3;
    n += r2;
    n *= r4;
    n *= r1;
    n *= r5;
    n += -0.11813182f;
    return n;
} // Solution1

// Solution2 result = 0.00000045
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.17285241f;
    r2 = n *= 0.07474664f;
    n = r2 *= n;
    r3 = n *= -5.35207987f;
    n = r2 *= n;
    n *= r3;
    r3 = n *= -19027.33203125f;
    n *= 7.74062157f;
    n += -0.01973722f;
    n *= r3;
    r3 = n += -0.93810046f;
    n += r2;
    n *= 1.06406236f;
    n = r1 *= n;
    n *= r0;
    r0 = n += 0.47806194f;
    r2 = n *= 0.09206218f;
    r4 = n += 2.61548615f;
    r5 = n *= -0.45085147f;
    n *= r5;
    r5 = n += -0.69555265f;
    n *= 1.21346498f;
    n = r4 *= n;
    n = r5 *= n;
    n += r0;
    n += r3;
    n += r2;
    n *= r4;
    n *= r1;
    n *= r5;
    n += 0.52359897f;
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
