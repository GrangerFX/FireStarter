// Run date: 09/04/23 10:46:49 Pacific Daylight Time
// Run duration = 491.293991 seconds
// Run generation = 9
// Run evolution = 7
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 2
// Run processes = 2
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -1.55725753f;
    r1 = n *= 0.72721028f;
    n *= r1;
    n *= -1.25850368f;
    r1 = n *= -0.57632369f;
    n += -1.67569435f;
    n *= -0.00830954f;
    n += 1.68714726f;
    n *= 0.76039034f;
    r2 = n *= 1.18446839f;
    n *= 0.33581534f;
    n = r2 *= n;
    n *= -0.22502123f;
    r3 = n *= 5.41193771f;
    n *= -2.19685817f;
    n += -2.21187234f;
    r4 = n *= 0.98686641f;
    r5 = n += 0.92487097f;
    n *= 0.35032684f;
    n *= r0;
    r0 = n *= 0.39353052f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += -8.98229885f;
    n += r4;
    n *= r5;
    n *= r3;
    n += -0.14447932f;
    n += 0.14447930f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= 0.32789803f;
    r1 = n *= 1.68844998f;
    n *= r1;
    n *= 0.46511948f;
    r1 = n *= -1.78363478f;
    n += 0.76040459f;
    n *= 0.03385749f;
    n += 1.55837488f;
    n *= 0.30445796f;
    r2 = n *= -1.16495442f;
    n *= -0.52913314f;
    n = r2 *= n;
    n *= -1.71533966f;
    r3 = n *= -1.44902575f;
    n *= 0.79746312f;
    n += -1.86476696f;
    r4 = n *= 1.42661071f;
    r5 = n += -1.03454661f;
    n *= -0.45351508f;
    n *= r0;
    r0 = n *= -1.50086486f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += -0.95978820f;
    n += r4;
    n *= r5;
    n *= r3;
    n += -0.62545431f;
    n += 0.50732267f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= -0.45424646f;
    r1 = n *= -1.18017125f;
    n *= r1;
    n *= 0.87159508f;
    r1 = n *= -0.73264050f;
    n += 1.99812341f;
    n *= -0.06696139f;
    n += -0.52841669f;
    n *= -1.95620239f;
    r2 = n *= 1.89420176f;
    n *= -0.79409969f;
    n = r2 *= n;
    n *= -0.21170820f;
    r3 = n *= -1.20698750f;
    n *= 2.35106230f;
    n += 2.35787511f;
    r4 = n *= -0.00958760f;
    r5 = n += 1.23923683f;
    n *= 0.65006495f;
    n *= r0;
    r0 = n *= 0.30591592f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += 1.21924818f;
    n += r4;
    n *= r5;
    n *= r3;
    n += 0.74188608f;
    n += -0.21828732f;
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
