// Run date: 12/13/23 23:43:58 Pacific Standard Time
// Run duration = 9855.133097 seconds
// Run generation = 24
// Run evolution = 23
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.17471153f;
    r0 = n += -3.31630421f;
    n *= -0.17521761f;
    r1 = n *= -0.41107398f;
    n *= 0.57691652f;
    n *= -2.44149065f;
    n *= -4.51843071f;
    n = r0 *= n;
    r2 = n += -2.08072686f;
    r3 = n *= -0.00017249f;
    r4 = n += 0.81599063f;
    r5 = n *= 0.72690392f;
    n = r2 += n;
    n *= r5;
    r5 = n *= -9.52035618f;
    n *= 0.91932106f;
    n *= 0.20334551f;
    n += r0;
    r0 = n *= -0.86488336f;
    n = r4 *= n;
    n += r3;
    n = r4 *= n;
    n += -7.53510714f;
    n *= r2;
    n *= -0.51930666f;
    n += 0.34662211f;
    n += r5;
    n *= r4;
    n += 5.45018482f;
    n *= r0;
    n *= r1;
    n += -0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.82487762f;
    r0 = n += -1.26578093f;
    n *= 0.40547955f;
    r1 = n *= 0.06690530f;
    n *= 1.15172017f;
    n *= 5.05878448f;
    n *= 3.07242298f;
    n = r0 *= n;
    r2 = n += -1.33032250f;
    r3 = n *= -0.00004833f;
    r4 = n += 0.38133636f;
    r5 = n *= -1.50378513f;
    n = r2 += n;
    n *= r5;
    r5 = n *= 1.24229407f;
    n *= 1.52147067f;
    n *= 0.95218772f;
    n += r0;
    r0 = n *= -1.45057380f;
    n = r4 *= n;
    n += r3;
    n = r4 *= n;
    n += -0.66971993f;
    n *= r2;
    n *= -2.63788033f;
    n += 4.32188463f;
    n += r5;
    n *= r4;
    n += 4.46959877f;
    n *= r0;
    n *= r1;
    n += -0.11813173f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.20492721f;
    r0 = n += -0.41306642f;
    n *= 0.62127167f;
    r1 = n *= -3.46520996f;
    n *= 11.85562229f;
    n *= -0.05081819f;
    n *= -0.12183780f;
    n = r0 *= n;
    r2 = n += 1.81106603f;
    r3 = n *= 0.00604770f;
    r4 = n += 0.92029530f;
    r5 = n *= -0.81322718f;
    n = r2 += n;
    n *= r5;
    r5 = n *= 1.53765213f;
    n *= 1.60147512f;
    n *= 0.65480733f;
    n += r0;
    r0 = n *= 0.49416569f;
    n = r4 *= n;
    n += r3;
    n = r4 *= n;
    n += 3.46080303f;
    n *= r2;
    n *= -0.41377413f;
    n += 0.86844808f;
    n += r5;
    n *= r4;
    n += -0.03605261f;
    n *= r0;
    n *= r1;
    n += 0.52359879f;
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
