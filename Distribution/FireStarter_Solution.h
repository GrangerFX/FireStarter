// Run date: 06/23/24 11:49:46 Pacific Daylight Time
// Run duration = 765.725196 seconds
// Run generation = 330
// Run evolution = 9
// Run max result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.42920905f;
    n += 1.34840000f;
    r0 = n *= -0.47013330f;
    r1 = n *= 0.57707757f;
    n *= r1;
    r1 = n += -1.15594459f;
    n = r1 *= n;
    r2 = n += -0.41037968f;
    r3 = n *= -0.38202661f;
    n = r3 += n;
    n *= 10.22448635f;
    r4 = n += 4.95551348f;
    n += 1.33373153f;
    n *= 0.11629447f;
    n = r1 += n;
    n += -2.02330709f;
    n = r1 += n;
    n = r1 *= n;
    n += 9.24121284f;
    n *= -1.37748730f;
    n += r2;
    r2 = n *= -0.09130230f;
    n += -4.88483000f;
    n *= r0;
    n *= r2;
    n = r4 *= n;
    n += r4;
    n *= r1;
    n = r3 *= n;
    n += 0.29744136f;
    n += r3;
    n += -0.29744130f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.46718815f;
    n += -1.44391906f;
    r0 = n *= -0.39941168f;
    r1 = n *= -0.44280028f;
    n *= r1;
    r1 = n += -0.33913904f;
    n = r1 *= n;
    r2 = n += 1.94671428f;
    r3 = n *= -0.01893101f;
    n = r3 += n;
    n *= -2.78683019f;
    r4 = n += -1.51070261f;
    n += -1.25260174f;
    n *= -0.10732818f;
    n = r1 += n;
    n += -0.60233670f;
    n = r1 += n;
    n = r1 *= n;
    n += 2.44397974f;
    n *= 0.83798093f;
    n += r2;
    r2 = n *= -5.15889359f;
    n += -1.23029709f;
    n *= r0;
    n *= r2;
    n = r4 *= n;
    n += r4;
    n *= r1;
    n = r3 *= n;
    n += 2.63304114f;
    n += r3;
    n += -2.75117278f;
    return n;
} // Solution1

// Solution2 result = 0.00000067
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.04521304f;
    n += 0.11836746f;
    r0 = n *= 1.80042326f;
    r1 = n *= -1.48208237f;
    n *= r1;
    r1 = n += -1.00372410f;
    n = r1 *= n;
    r2 = n += -0.86711740f;
    r3 = n *= 1.44841480f;
    n = r3 += n;
    n *= -0.51805621f;
    r4 = n += -1.01380265f;
    n += -0.51332045f;
    n *= 1.04245663f;
    n = r1 += n;
    n += 0.16790217f;
    n = r1 += n;
    n = r1 *= n;
    n += 4.68664503f;
    n *= -0.21660727f;
    n += r2;
    r2 = n *= 1.10741663f;
    n += 3.49479246f;
    n *= r0;
    n *= r2;
    n = r4 *= n;
    n += r4;
    n *= r1;
    n = r3 *= n;
    n += 1.77263463f;
    n += r3;
    n += -1.24903595f;
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
