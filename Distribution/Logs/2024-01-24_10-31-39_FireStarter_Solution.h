// Run date: 01/24/24 10:31:39 Pacific Standard Time
// Run duration = 27562.306132 seconds
// Run generation = 63
// Run evolution = 11
// Run max result = 0.00004208
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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

// Solution0 result = 0.00002664
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.01918815f;
    n *= 2.61333680f;
    n *= 0.22646281f;
    n += 0.13768379f;
    r1 = n *= 1.73641229f;
    r2 = n += -1.95968223f;
    n = r1 *= n;
    r3 = n += 0.30406854f;
    n *= 0.22473185f;
    n += r1;
    r1 = n *= -1.78690112f;
    r4 = n *= 1.22311735f;
    n = r1 += n;
    n = r2 += n;
    r5 = n += 1.09298277f;
    n += 1.91292894f;
    n *= -1.75692010f;
    n *= r3;
    n = r0 += n;
    r3 = n += -1.60202050f;
    n *= r3;
    n *= r4;
    r4 = n *= 3.96217823f;
    n = r1 *= n;
    n *= r4;
    n += r1;
    n *= -0.28121212f;
    n *= r2;
    n *= r0;
    n *= r5;
    n += 1.37648296f;
    n += -1.31920362f;
    return n;
} // Solution0

// Solution1 result = 0.00000978
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.13908011f;
    n *= 1.08722949f;
    n *= 1.18594706f;
    n += 0.53420264f;
    r1 = n *= -0.36179650f;
    r2 = n += -0.01619761f;
    n = r1 *= n;
    r3 = n += -1.48946393f;
    n *= 0.07748446f;
    n += r1;
    r1 = n *= 0.59691077f;
    r4 = n *= -1.13520038f;
    n = r1 += n;
    n = r2 += n;
    r5 = n += 8.38355160f;
    n += 6.26667929f;
    n *= -1.20668185f;
    n *= r3;
    n = r0 += n;
    r3 = n += -7.16094208f;
    n *= r3;
    n *= r4;
    r4 = n *= 0.02875015f;
    n = r1 *= n;
    n *= r4;
    n += r1;
    n *= -5.91998625f;
    n *= r2;
    n *= r0;
    n *= r5;
    n += -0.57164103f;
    n += 0.45984811f;
    return n;
} // Solution1

// Solution2 result = 0.00004208
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.77894533f;
    n *= 1.10533679f;
    n *= 0.05923225f;
    n += 0.99186224f;
    r1 = n *= -1.22412884f;
    r2 = n += 0.14995156f;
    n = r1 *= n;
    r3 = n += -0.62249798f;
    n *= 0.75423849f;
    n += r1;
    r1 = n *= -1.84495020f;
    r4 = n *= -0.64286339f;
    n = r1 += n;
    n = r2 += n;
    r5 = n += 1.18403864f;
    n += 1.66044939f;
    n *= 1.58478367f;
    n *= r3;
    n = r0 += n;
    r3 = n += -2.51896286f;
    n *= r3;
    n *= r4;
    r4 = n *= -0.05364643f;
    n = r1 *= n;
    n *= r4;
    n += r1;
    n *= -2.42308378f;
    n *= r2;
    n *= r0;
    n *= r5;
    n += 2.95502877f;
    n += -1.90668702f;
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
