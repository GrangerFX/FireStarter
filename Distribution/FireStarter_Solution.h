// Run date: 03/01/24 18:39:08 Pacific Standard Time
// Run duration = 16.408414 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00033659
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 8
// Run units = 1
// Run states = 11000
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 0

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

// Solution0 result = 0.00009197
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.17433868f;
    r1 = n *= 2.11450839f;
    r2 = n += -1.26945364f;
    r3 = n *= -0.29510856f;
    r4 = n += -0.03284629f;
    n *= 0.99730045f;
    n += -0.00038073f;
    n *= r0;
    r0 = n += 1.59804213f;
    n *= -1.06172502f;
    r5 = n *= 0.62837327f;
    r6 = n *= 1.15360034f;
    n *= r0;
    n = r5 *= n;
    n += r6;
    r6 = n *= 1.05589855f;
    n += r2;
    n = r3 *= n;
    n *= r3;
    n *= 8.47725201f;
    r3 = n *= -0.00582714f;
    n += 0.23388757f;
    n += r5;
    n = r6 *= n;
    n *= -3.11234379f;
    n *= r3;
    n += 3.73108149f;
    n *= r1;
    n *= r6;
    n *= r4;
    n += -3.05858946f;
    n += 3.05849767f;
    return n;
} // Solution0

// Solution1 result = 0.00033659
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.28228006f;
    r1 = n *= -1.17972553f;
    r2 = n += 0.67252249f;
    r3 = n *= 0.17482257f;
    r4 = n += 0.00513150f;
    n *= 0.98987645f;
    n += 0.06349882f;
    n *= r0;
    r0 = n += 1.18105459f;
    n *= 1.74867857f;
    r5 = n *= 1.34598780f;
    r6 = n *= -1.15650129f;
    n *= r0;
    n = r5 *= n;
    n += r6;
    r6 = n *= -0.05979088f;
    n += r2;
    n = r3 *= n;
    n *= r3;
    n *= -0.31953639f;
    r3 = n *= 2.41750193f;
    n += -1.82877505f;
    n += r5;
    n = r6 *= n;
    n *= -0.14326029f;
    n *= r3;
    n += 1.57492554f;
    n *= r1;
    n *= r6;
    n *= r4;
    n += 0.32605624f;
    n += 0.52588135f;
    return n;
} // Solution1

// Solution2 result = 0.00031656
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.22592659f;
    r1 = n *= -1.91489029f;
    r2 = n += 1.41060209f;
    r3 = n *= 0.39002177f;
    r4 = n += 0.97909367f;
    n *= -1.45349228f;
    n += 0.37169108f;
    n *= r0;
    r0 = n += -1.75936520f;
    n *= 0.11292835f;
    r5 = n *= 2.65716839f;
    r6 = n *= 1.36851799f;
    n *= r0;
    n = r5 *= n;
    n += r6;
    r6 = n *= 0.25278977f;
    n += r2;
    n = r3 *= n;
    n *= r3;
    n *= 0.00118249f;
    r3 = n *= -5.95425892f;
    n += 1.99534035f;
    n += r5;
    n = r6 *= n;
    n *= 9.93020821f;
    n *= r3;
    n += 4.53889608f;
    n *= r1;
    n *= r6;
    n *= r4;
    n += 0.94638973f;
    n += -0.94607317f;
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
