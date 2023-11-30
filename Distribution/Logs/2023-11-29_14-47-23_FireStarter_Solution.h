// Run date: 11/29/23 14:47:23 Pacific Standard Time
// Run duration = 5766.829630 seconds
// Run generation = 99
// Run evolution = 12
// Run max result = 0.00000513
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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

// Solution0 result = 0.00000149
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.29123950f;
    n += -0.64811224f;
    n *= 0.26385331f;
    r0 = n += -0.40118784f;
    r1 = n *= 2.30536556f;
    n += r0;
    r0 = n += -0.22690196f;
    n *= 0.07533092f;
    r2 = n += 0.92972934f;
    r3 = n += -1.08980989f;
    r4 = n *= -0.43274114f;
    n *= r0;
    r0 = n += 0.88872355f;
    n *= 5.94251251f;
    n *= r4;
    n = r2 *= n;
    n *= r3;
    n = r1 += n;
    r3 = n *= -0.77886331f;
    n += -2.17449546f;
    n = r2 += n;
    n *= -0.25308642f;
    r4 = n += -0.86627901f;
    r5 = n += -0.46016735f;
    n += r1;
    n *= r0;
    n += -1.15090966f;
    n *= r3;
    n *= -0.70126659f;
    n *= r2;
    n *= r5;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000513
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.09789466f;
    n += 1.03161073f;
    n *= -0.87015617f;
    r0 = n += 5.08538818f;
    r1 = n *= -0.71047574f;
    n += r0;
    r0 = n += 0.45514548f;
    n *= 1.73199284f;
    r2 = n += -0.24211226f;
    r3 = n += -1.60877264f;
    r4 = n *= -0.09441910f;
    n *= r0;
    r0 = n += 6.73862219f;
    n *= -0.15082611f;
    n *= r4;
    n = r2 *= n;
    n *= r3;
    n = r1 += n;
    r3 = n *= -1.07400942f;
    n += -0.34666079f;
    n = r2 += n;
    n *= 0.88186473f;
    r4 = n += -1.04793406f;
    r5 = n += -1.13110435f;
    n += r1;
    n *= r0;
    n += 5.01940012f;
    n *= r3;
    n *= 0.02395410f;
    n *= r2;
    n *= r5;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000209
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.45133242f;
    n += -3.14187574f;
    n *= 0.53719705f;
    r0 = n += 1.61442316f;
    r1 = n *= -1.59572482f;
    n += r0;
    r0 = n += 1.32354212f;
    n *= 1.44384611f;
    r2 = n += -0.17463137f;
    r3 = n += -1.89790761f;
    r4 = n *= -0.11792824f;
    n *= r0;
    r0 = n += 2.14583993f;
    n *= 0.90074003f;
    n *= r4;
    n = r2 *= n;
    n *= r3;
    n = r1 += n;
    r3 = n *= 0.18300483f;
    n += 0.78165650f;
    n = r2 += n;
    n *= 0.03906431f;
    r4 = n += 0.72023779f;
    r5 = n += 0.63889223f;
    n += r1;
    n *= r0;
    n += 0.83284456f;
    n *= r3;
    n *= -1.48496473f;
    n *= r2;
    n *= r5;
    n += r4;
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
