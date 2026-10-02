// Run date: 12/26/23 23:13:47 Pacific Standard Time
// Run duration = 4418.501251 seconds
// Run generation = 29
// Run evolution = 11
// Run max result = 0.00000012
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
// Run states = 64
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
// Run startResult = 9.999999f

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

// Solution0 result = 0.00000007
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.29289126f;
    n += -0.64998090f;
    r0 = n += -1.19872057f;
    n *= 0.10254125f;
    r1 = n *= 1.27787900f;
    n = r0 *= n;
    n *= 0.13519377f;
    n += 0.26554722f;
    n += -1.07171822f;
    r2 = n *= 1.69980896f;
    n = r2 *= n;
    r3 = n *= 0.00548091f;
    n = r0 += n;
    r4 = n += -0.48669475f;
    n += 0.43814665f;
    r5 = n += -1.25103068f;
    n *= -1.10439682f;
    n += 5.41556883f;
    n += 0.36628422f;
    n += 4.07255220f;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= 0.03229194f;
    n = r2 += n;
    n *= 0.81191170f;
    n += 1.62757623f;
    n *= r2;
    n *= r1;
    n *= r5;
    n += 0.10308320f;
    n += -0.10308322f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.94148487f;
    n += -0.30581164f;
    r0 = n += -1.84336209f;
    n *= 0.24635229f;
    r1 = n *= 0.28560728f;
    n = r0 *= n;
    n *= -1.78003180f;
    n += 1.66420054f;
    n += 1.56409061f;
    r2 = n *= -0.18071993f;
    n = r2 *= n;
    r3 = n *= -1.91024244f;
    n = r0 += n;
    r4 = n += -0.46960753f;
    n += -1.73596132f;
    r5 = n += -0.90268254f;
    n *= 0.60752380f;
    n += 5.68386507f;
    n += 7.93426800f;
    n += -4.34385824f;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= -0.00101921f;
    n = r2 += n;
    n *= -0.90199327f;
    n += 12.41096306f;
    n *= r2;
    n *= r1;
    n *= r5;
    n += 0.38785586f;
    n += -0.50598764f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.73110145f;
    n += 2.46033645f;
    r0 = n += -4.34722853f;
    n *= -0.03707616f;
    r1 = n *= -1.96697819f;
    n = r0 *= n;
    n *= -0.43149477f;
    n += -0.19161640f;
    n += 1.59448779f;
    r2 = n *= 1.15478611f;
    n = r2 *= n;
    r3 = n *= -0.76651311f;
    n = r0 += n;
    r4 = n += 1.50396740f;
    n += -1.61338305f;
    r5 = n += 1.33307946f;
    n *= -0.87947071f;
    n += -7.46813011f;
    n += 0.05929651f;
    n += -6.06237793f;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= 0.00027391f;
    n = r2 += n;
    n *= 1.91436732f;
    n += 1.57424986f;
    n *= r2;
    n *= r1;
    n *= r5;
    n += 0.40297383f;
    n += 0.12062487f;
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
