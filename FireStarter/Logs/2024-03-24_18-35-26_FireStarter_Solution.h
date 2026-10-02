// Run date: 03/24/24 18:35:26 Pacific Daylight Time
// Run duration = 377.509483 seconds
// Run generation = 36
// Run evolution = 8
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.67348373f;
    n = r1 *= n;
    r2 = n += -1.79644132f;
    n *= -0.00056839f;
    n = r1 *= n;
    r3 = n *= -0.18927979f;
    n *= r3;
    n *= 18.91661644f;
    r3 = n += -1.38773584f;
    n *= 0.28409493f;
    n += -1.13641179f;
    r4 = n += -0.39307660f;
    n = r1 += n;
    n += 1.73557365f;
    n = r2 += n;
    n += 0.99397600f;
    n *= 0.08054370f;
    n = r4 += n;
    n *= -1.33329892f;
    r5 = n *= 0.06985926f;
    n = r4 *= n;
    n += r3;
    n *= r5;
    n *= r1;
    n *= r2;
    n += -1.20400095f;
    n *= r4;
    n *= r0;
    n *= 1.04163587f;
    n += 0.00000000f;
    n *= -1.04415739f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.38297284f;
    n = r1 *= n;
    r2 = n += -1.36876750f;
    n *= 0.02387236f;
    n = r1 *= n;
    r3 = n *= -0.31534746f;
    n *= r3;
    n *= -21.56532097f;
    r3 = n += 2.00213480f;
    n *= -0.37990931f;
    n += 1.83189476f;
    r4 = n += 1.48392403f;
    n = r1 += n;
    n += -1.01698399f;
    n = r2 += n;
    n += -0.61239392f;
    n *= -0.32925454f;
    n = r4 += n;
    n *= 0.11261390f;
    r5 = n *= 0.53825992f;
    n = r4 *= n;
    n += r3;
    n *= r5;
    n *= r1;
    n *= r2;
    n += -2.02750897f;
    n *= r4;
    n *= r0;
    n *= -1.38180745f;
    n += 0.12168375f;
    n *= -0.97081041f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= -0.43711749f;
    n = r1 *= n;
    r2 = n += -2.00270963f;
    n *= -0.00214093f;
    n = r1 *= n;
    r3 = n *= 0.02660900f;
    n *= r3;
    n *= 914.12872314f;
    r3 = n += -0.09952009f;
    n *= 0.01010902f;
    n += -1.96779573f;
    r4 = n += 1.25646162f;
    n = r1 += n;
    n += 2.02916813f;
    n = r2 += n;
    n += -0.47111949f;
    n *= 0.07036238f;
    n = r4 += n;
    n *= 3.57294941f;
    r5 = n *= -1.05532014f;
    n = r4 *= n;
    n += r3;
    n *= r5;
    n *= r1;
    n *= r2;
    n += -1.09166622f;
    n *= r4;
    n *= r0;
    n *= -0.08559359f;
    n += 0.50157195f;
    n *= 1.04391563f;
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
