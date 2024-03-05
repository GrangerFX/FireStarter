// Run date: 03/05/24 08:06:10 Pacific Standard Time
// Run duration = 1779.087937 seconds
// Run generation = 147
// Run evolution = 21
// Run max result = 0.00000017
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 0
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

// Solution0 result = 0.00000017
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.90783882f;
    r1 = n += -1.23375380f;
    r2 = n *= -0.16682355f;
    r3 = n *= -0.22724646f;
    r4 = n *= -2.60537887f;
    n *= r4;
    r4 = n += -1.53187430f;
    n = r3 *= n;
    n = r2 *= n;
    r5 = n += -1.06807482f;
    n *= -0.73314345f;
    r6 = n += 3.62804866f;
    r7 = n *= -0.49793124f;
    n += 2.11391282f;
    n *= r4;
    n = r1 *= n;
    r4 = n *= 2.15933037f;
    n *= r2;
    n *= r6;
    n += r1;
    n *= -0.55146182f;
    n *= r5;
    n += r3;
    n *= r7;
    n += 0.00012262f;
    n += r4;
    n *= 338.13058472f;
    n += -4.01513052f;
    n *= -0.01248033f;
    r4 = n += -0.66646963f;
    n += r0;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -0.24955079f;
    r1 = n += -2.84110761f;
    r2 = n *= -2.55261421f;
    r3 = n *= -0.17673288f;
    r4 = n *= -0.07053141f;
    n *= r4;
    r4 = n += -0.38980719f;
    n = r3 *= n;
    n = r2 *= n;
    r5 = n += -1.28804481f;
    n *= 0.00179915f;
    r6 = n += -0.18120515f;
    r7 = n *= -59.31459808f;
    n += -8.84606171f;
    n *= r4;
    n = r1 *= n;
    r4 = n *= 0.20050049f;
    n *= r2;
    n *= r6;
    n += r1;
    n *= -0.02721290f;
    n *= r5;
    n += r3;
    n *= r7;
    n += 0.13358237f;
    n += r4;
    n *= 0.81302971f;
    n += -0.02055616f;
    n *= 0.54331464f;
    r4 = n += -1.52745867f;
    n += r0;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.45073247f;
    r1 = n += -0.16726127f;
    r2 = n *= -0.28925127f;
    r3 = n *= 1.58768165f;
    r4 = n *= 0.31533992f;
    n *= r4;
    r4 = n += -2.00558162f;
    n = r3 *= n;
    n = r2 *= n;
    r5 = n += 1.86603069f;
    n *= -0.01458104f;
    r6 = n += -0.38649839f;
    r7 = n *= -0.50032538f;
    n += -1.04823363f;
    n *= r4;
    n = r1 *= n;
    r4 = n *= -0.64941871f;
    n *= r2;
    n *= r6;
    n += r1;
    n *= -2.18580604f;
    n *= r5;
    n += r3;
    n *= r7;
    n += -0.02983811f;
    n += r4;
    n *= -0.72448540f;
    n += 0.32000375f;
    n *= -0.59253401f;
    r4 = n += 0.38059083f;
    n += r0;
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
