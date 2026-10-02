#pragma once
#include <math.h>

// Run date: 10/01/26 12:32:40 Pacific Daylight Time
// Run duration = 8.120537 seconds
// Run test = 0
// Run generation = 0
// Run evolution = 0
// Run precision  = 0.00023638
// Run max result = 0.00026629

// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run units = 8
// Run states = 16
// Run population = 348160
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f


#define SOLUTION_VARIATIONS 3
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.90457511f;
    r1 = n += -5.81716251f;
    r2 = n *= 0.12911642f;
    n = r2 *= n;
    r3 = n += -2.06349516f;
    r4 = n *= 0.03920108f;
    n *= -1.00522721f;
    n = r2 *= n;
    r5 = n *= 4.83806372f;
    r6 = n *= 2.67963958f;
    n = r3 += n;
    n *= r3;
    n *= -0.92602062f;
    n = r6 *= n;
    n += -2.24954939f;
    n *= -3.96810603f;
    n = r0 *= n;
    n *= -1.30575418f;
    n += r6;
    n += r1;
    n += r5;
    n = r2 *= n;
    n *= -0.20408981f;
    n += -4.19403458f;
    r5 = n += 3.27407980f;
    n *= -1.21163774f;
    n *= r4;
    n *= r0;
    n *= 1.63565671f;
    n *= r2;
    n += r5;
    n *= -1.07588196f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 2.15661693f;
    r1 = n += -7.24161053f;
    r2 = n *= -0.07427651f;
    n = r2 *= n;
    r3 = n += -0.63000315f;
    r4 = n *= 1.02309275f;
    n *= 2.04511762f;
    n = r2 *= n;
    r5 = n *= -0.49049360f;
    r6 = n *= -0.76254082f;
    n = r3 += n;
    n *= r3;
    n *= -6.72238016f;
    n = r6 *= n;
    n += -1.73601043f;
    n *= -0.53580189f;
    n = r0 *= n;
    n *= -0.43914825f;
    n += r6;
    n += r1;
    n += r5;
    n = r2 *= n;
    n *= 0.56824833f;
    n += 0.85453939f;
    r5 = n += -1.82938886f;
    n *= 1.67976093f;
    n *= r4;
    n *= r0;
    n *= 1.60644889f;
    n *= r2;
    n += r5;
    n *= 1.53045750f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.32405460f;
    r1 = n += -8.37019444f;
    r2 = n *= 0.06184743f;
    n = r2 *= n;
    r3 = n += -2.58082271f;
    r4 = n *= 0.72161311f;
    n *= -0.41288602f;
    n = r2 *= n;
    r5 = n *= -0.30069047f;
    r6 = n *= -2.90444446f;
    n = r3 += n;
    n *= r3;
    n *= -3.11251545f;
    n = r6 *= n;
    n += 1.65130651f;
    n *= 0.81724602f;
    n = r0 *= n;
    n *= 0.91594410f;
    n += r6;
    n += r1;
    n += r5;
    n = r2 *= n;
    n *= 0.40224847f;
    n += -1.10041606f;
    r5 = n += 2.42851830f;
    n *= -1.24581277f;
    n *= r4;
    n *= r0;
    n *= 1.11404181f;
    n *= r2;
    n += r5;
    n *= 0.83791643f;
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
