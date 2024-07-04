// Run date: 07/03/24 18:38:33 Pacific Daylight Time
// Run duration = 13390.196717 seconds
// Run generation = 305
// Run evolution = 9
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= 0.02626079f;
    n *= -1.47970319f;
    n = r0 *= n;
    n *= 0.03245305f;
    r2 = n *= -3.75067639f;
    n *= 6.80188036f;
    r3 = n += -3.67082906f;
    n *= r1;
    r1 = n *= 1.60933256f;
    r4 = n *= 0.00000027f;
    n += r3;
    n = r0 *= n;
    r3 = n += -0.83548284f;
    n += r0;
    n *= 2.03636503f;
    r0 = n *= -0.00055539f;
    n += -14.31928158f;
    n *= r0;
    n += r4;
    r4 = n += -1.07402599f;
    n *= -1.17040968f;
    n *= r3;
    r3 = n += -1.47675216f;
    n += 0.06830604f;
    n += r4;
    n *= r3;
    n *= 0.89166617f;
    n += r2;
    n += -1.61645126f;
    n *= r1;
    n += -0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065843f;
    r1 = n *= -0.01946615f;
    n *= 1.47727096f;
    n = r0 *= n;
    n *= -0.04803680f;
    r2 = n *= -2.43666601f;
    n *= 8.64359951f;
    r3 = n += 4.26096106f;
    n *= r1;
    r1 = n *= -0.14782946f;
    r4 = n *= 0.00000225f;
    n += r3;
    n = r0 *= n;
    r3 = n += 0.75932616f;
    n += r0;
    n *= -2.76144218f;
    r0 = n *= 0.00092473f;
    n += -12.81732655f;
    n *= r0;
    n += r4;
    r4 = n += 2.19661427f;
    n *= 1.21106434f;
    n *= r3;
    r3 = n += 3.26161337f;
    n += 0.31415412f;
    n += r4;
    n *= r3;
    n *= -2.07925248f;
    n += r2;
    n += -3.23987842f;
    n *= r1;
    n += -0.11813168f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= 0.11015156f;
    n *= -1.51545167f;
    n = r0 *= n;
    n *= 3.12789035f;
    r2 = n *= -0.82937914f;
    n *= -0.02170422f;
    r3 = n += 1.19949603f;
    n *= r1;
    r1 = n *= 1.06100905f;
    r4 = n *= 0.00000043f;
    n += r3;
    n = r0 *= n;
    r3 = n += 2.21673441f;
    n += r0;
    n *= 6.41698742f;
    r0 = n *= -0.00142340f;
    n += -13.41776085f;
    n *= r0;
    n += r4;
    r4 = n += 4.14369631f;
    n *= -0.58316827f;
    n *= r3;
    r3 = n += -0.80527258f;
    n += 0.03094566f;
    n += r4;
    n *= r3;
    n *= -0.33667472f;
    n += r2;
    n += -2.60050797f;
    n *= r1;
    n += 0.52359873f;
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
