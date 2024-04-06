// Run date: 04/06/24 10:08:16 Pacific Daylight Time
// Run duration = 18423.467945 seconds
// Run generation = 622
// Run evolution = 9
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.67457950f;
    r0 = n *= 0.06687833f;
    n += -0.19622277f;
    n = r0 += n;
    r1 = n *= 1.74486017f;
    n = r1 *= n;
    r2 = n *= 0.84214377f;
    r3 = n += -0.30176139f;
    n += 1.63134539f;
    r4 = n += -1.54752898f;
    r5 = n *= 0.00035169f;
    n *= 17.65871239f;
    n *= r4;
    r4 = n += -0.31329140f;
    n += r4;
    n = r1 *= n;
    n *= -7.18915987f;
    n += -53.78727341f;
    n = r5 *= n;
    n += -8.48488140f;
    n *= r5;
    n *= r1;
    n += -3.70378494f;
    n = r2 += n;
    r1 = n += 1.81548584f;
    n = r0 *= n;
    n *= -1.40217686f;
    n *= r3;
    n *= r1;
    n *= r2;
    n += -0.00000002f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.09673393f;
    r0 = n *= 0.25450665f;
    n += -2.13143849f;
    n = r0 += n;
    r1 = n *= -0.26517308f;
    n = r1 *= n;
    r2 = n *= 1.28134274f;
    r3 = n += -0.09515198f;
    n += 2.49613667f;
    r4 = n += -2.52361727f;
    r5 = n *= 0.00076999f;
    n *= -38.57186127f;
    n *= r4;
    r4 = n += 0.14025870f;
    n += r4;
    n = r1 *= n;
    n *= 1.82091606f;
    n += -1.13090420f;
    n = r5 *= n;
    n += 780.38287354f;
    n *= r5;
    n *= r1;
    n += -1.45344222f;
    n = r2 += n;
    r1 = n += 0.02125608f;
    n = r0 *= n;
    n *= -2.56937981f;
    n *= r3;
    n *= r1;
    n *= r2;
    n += -0.11813182f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000017
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -5.02692175f;
    r0 = n *= 0.31058210f;
    n += 1.49633992f;
    n = r0 += n;
    r1 = n *= -0.36608768f;
    n = r1 *= n;
    r2 = n *= -0.94572341f;
    r3 = n += 1.12825048f;
    n += 0.58132774f;
    r4 = n += 4.09407663f;
    r5 = n *= 0.00010022f;
    n *= 3.30935836f;
    n *= r4;
    r4 = n += -3.37228227f;
    n += r4;
    n = r1 *= n;
    n *= -0.40054250f;
    n += -0.79245603f;
    n = r5 *= n;
    n += -10.93472767f;
    n *= r5;
    n *= r1;
    n += 0.93152928f;
    n = r2 += n;
    r1 = n += 0.58176625f;
    n = r0 *= n;
    n *= -1.29761839f;
    n *= r3;
    n *= r1;
    n *= r2;
    n += 0.52359885f;
    n += r0;
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
