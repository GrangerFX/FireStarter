// Run date: 06/19/24 11:32:33 Pacific Daylight Time
// Run duration = 1310.453376 seconds
// Run generation = 80
// Run evolution = 6
// Run max result = 0.00001466
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
// Run units = 1
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

// Solution0 result = 0.00000328
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -2.06523323f;
    n += -2.15411854f;
    r1 = n *= -1.31699336f;
    n += -1.41847849f;
    r2 = n *= -2.00083733f;
    n *= -0.28669277f;
    r3 = n += -0.00089458f;
    n *= 0.08776455f;
    n *= r3;
    r3 = n *= -2.45864296f;
    n += 9.34306812f;
    n *= r1;
    n *= 0.00616800f;
    n *= -0.56430942f;
    n *= r0;
    r0 = n += -2.21501684f;
    n += -2.09891510f;
    r1 = n *= 0.09712169f;
    n += r3;
    n += 1.60291302f;
    r3 = n *= -0.54581308f;
    n += r0;
    n *= 1.45347774f;
    n += 1.63781416f;
    n += -3.05422425f;
    r0 = n *= 0.29488248f;
    n *= r3;
    n *= r1;
    n *= r2;
    n *= -0.50239313f;
    n += 0.00042269f;
    n *= r0;
    return n;
} // Solution0

// Solution1 result = 0.00001466
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -1.08439267f;
    n += -4.02603340f;
    r1 = n *= 0.31512535f;
    n += 0.62261242f;
    r2 = n *= 0.49771163f;
    n *= -0.25852129f;
    r3 = n += 0.00375454f;
    n *= -4.09446239f;
    n *= r3;
    r3 = n *= 1.79869521f;
    n += 6.11832571f;
    n *= r1;
    n *= -0.30814004f;
    n *= -0.23389135f;
    n *= r0;
    r0 = n += -0.07492836f;
    n += -2.53200626f;
    r1 = n *= 0.59498787f;
    n += r3;
    n += -0.00611604f;
    r3 = n *= -3.60775971f;
    n += r0;
    n *= 3.46668577f;
    n += 3.64850616f;
    n += 3.26455760f;
    r0 = n *= -0.12328921f;
    n *= r3;
    n *= r1;
    n *= r2;
    n *= 0.04451823f;
    n += 0.04761257f;
    n *= r0;
    return n;
} // Solution1

// Solution2 result = 0.00001397
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.97657871f;
    n += 2.67360616f;
    r1 = n *= 1.26466370f;
    n += -1.53605223f;
    r2 = n *= -0.74494362f;
    n *= 0.62959713f;
    r3 = n += 0.00188446f;
    n *= 0.02809975f;
    n *= r3;
    r3 = n *= -2.75445938f;
    n += 4.55063438f;
    n *= r1;
    n *= 1.78087032f;
    n *= 0.07850406f;
    n *= r0;
    r0 = n += -1.62427974f;
    n += -0.86947888f;
    r1 = n *= 0.12895510f;
    n += r3;
    n += -1.70194268f;
    r3 = n *= -0.58601153f;
    n += r0;
    n *= -0.25978279f;
    n += 8.68973827f;
    n += -0.49250534f;
    r0 = n *= -0.38340873f;
    n *= r3;
    n *= r1;
    n *= r2;
    n *= -0.14669414f;
    n += -0.18799305f;
    n *= r0;
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
