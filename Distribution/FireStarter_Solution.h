// Run date: 06/24/24 16:44:48 Pacific Daylight Time
// Run duration = 25.496645 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00111445
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

// Solution0 result = 0.00111035
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 1.89938045f;
    r1 = n *= -0.18251027f;
    r2 = n *= -1.01161695f;
    r3 = n *= 1.00462234f;
    r4 = n += -1.24080169f;
    r5 = n += -1.41471863f;
    n = r5 *= n;
    n *= r2;
    n = r5 *= n;
    r2 = n *= 1.10110617f;
    n *= 0.25457114f;
    n += -1.55485237f;
    r6 = n *= -0.67213410f;
    n *= -1.98667419f;
    n *= 2.34429383f;
    n *= -1.25282490f;
    n += r5;
    r5 = n *= 0.22544464f;
    r7 = n *= 0.66912460f;
    n *= r4;
    n *= r0;
    n *= r6;
    r6 = n *= 0.21992193f;
    n *= r1;
    n *= 12.44119835f;
    n *= r2;
    n += 15.18252563f;
    n += r3;
    n *= r5;
    n *= -0.05674236f;
    n *= r7;
    n += r6;
    return n;
} // Solution0

// Solution1 result = 0.00043511
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.10926867f;
    r1 = n *= -2.33276653f;
    r2 = n *= 0.16804580f;
    r3 = n *= 0.07347438f;
    r4 = n += -0.13297203f;
    r5 = n += -1.02649164f;
    n = r5 *= n;
    n *= r2;
    n = r5 *= n;
    r2 = n *= -0.09741217f;
    n *= 11.27634621f;
    n += -5.11514330f;
    r6 = n *= -0.26457313f;
    n *= 7.82400179f;
    n *= 1.49534571f;
    n *= -0.49882567f;
    n += r5;
    r5 = n *= 0.07558694f;
    r7 = n *= -1.47085977f;
    n *= r4;
    n *= r0;
    n *= r6;
    r6 = n *= 6.73491621f;
    n *= r1;
    n *= 0.18641375f;
    n *= r2;
    n += -0.07467055f;
    n += r3;
    n *= r5;
    n *= -3.52958441f;
    n *= r7;
    n += r6;
    return n;
} // Solution1

// Solution2 result = 0.00111445
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.41439414f;
    r1 = n *= -0.11752874f;
    r2 = n *= 0.80725855f;
    r3 = n *= 0.39771432f;
    r4 = n += 0.11010559f;
    r5 = n += 0.82344693f;
    n = r5 *= n;
    n *= r2;
    n = r5 *= n;
    r2 = n *= -3.10927320f;
    n *= 0.98323965f;
    n += 0.72780442f;
    r6 = n *= -3.36193013f;
    n *= 0.97318941f;
    n *= 0.19717935f;
    n *= -1.15883124f;
    n += r5;
    r5 = n *= -2.92805409f;
    r7 = n *= -0.43960056f;
    n *= r4;
    n *= r0;
    n *= r6;
    r6 = n *= 6.38026762f;
    n *= r1;
    n *= 7.73974562f;
    n *= r2;
    n += 2.86736774f;
    n += r3;
    n *= r5;
    n *= -0.22683148f;
    n *= r7;
    n += r6;
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
