// Run date: 03/15/24 00:51:14 Pacific Daylight Time
// Run duration = 20600.930663 seconds
// Run generation = 326
// Run evolution = 9
// Run max result = 0.00001502
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
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000751
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.28879821f;
    n *= 1.34019732f;
    r1 = n += -2.21408820f;
    r2 = n += 0.13777642f;
    r3 = n += 1.76767814f;
    r4 = n += -1.83872306f;
    n *= -30.02476311f;
    r5 = n *= -0.00228340f;
    n *= r5;
    n += -1.75396979f;
    n = r3 *= n;
    r5 = n *= -1.44863617f;
    n *= 1.04054070f;
    n *= r0;
    r0 = n *= 0.08988388f;
    r6 = n += -1.98552501f;
    n *= 0.18224716f;
    r7 = n += -0.63437414f;
    n *= r1;
    n = r3 *= n;
    n *= 0.00869245f;
    n *= -3.95909548f;
    n += r2;
    n += r3;
    n *= r7;
    n += r0;
    n *= r6;
    r6 = n *= 0.60844320f;
    n += r5;
    n *= r6;
    n += r4;
    n *= 0.26626676f;
    return n;
} // Solution0

// Solution1 result = 0.00000870
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 1.21395350f;
    n *= -0.20785682f;
    r1 = n += 1.19959879f;
    r2 = n += 0.75399047f;
    r3 = n += -1.67888904f;
    r4 = n += -0.76115602f;
    n *= -11.77991676f;
    r5 = n *= 0.00001697f;
    n *= r5;
    n += 1.03829944f;
    n = r3 *= n;
    r5 = n *= -0.97645432f;
    n *= -0.05133070f;
    n *= r0;
    r0 = n *= -0.74965137f;
    r6 = n += -1.32081807f;
    n *= 0.94240898f;
    r7 = n += -0.83251119f;
    n *= r1;
    n = r3 *= n;
    n *= -6.63686800f;
    n *= -0.00312693f;
    n += r2;
    n += r3;
    n *= r7;
    n += r0;
    n *= r6;
    r6 = n *= -0.33727086f;
    n += r5;
    n *= r6;
    n += r4;
    n *= 0.75990176f;
    return n;
} // Solution1

// Solution2 result = 0.00001502
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.13048784f;
    n *= 1.22201729f;
    r1 = n += -0.58550179f;
    r2 = n += -0.87880409f;
    r3 = n += 1.28242850f;
    r4 = n += -0.24629721f;
    n *= 0.00370104f;
    r5 = n *= -5.76512003f;
    n *= r5;
    n += 1.45678806f;
    n = r3 *= n;
    r5 = n *= -1.89617777f;
    n *= -0.53712916f;
    n *= r0;
    r0 = n *= 0.66389149f;
    r6 = n += -1.14860559f;
    n *= 2.03943110f;
    r7 = n += -2.57074761f;
    n *= r1;
    n = r3 *= n;
    n *= 0.76006818f;
    n *= -2.88979912f;
    n += r2;
    n += r3;
    n *= r7;
    n += r0;
    n *= r6;
    r6 = n *= -0.14427377f;
    n += r5;
    n *= r6;
    n += r4;
    n *= 1.43111324f;
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
