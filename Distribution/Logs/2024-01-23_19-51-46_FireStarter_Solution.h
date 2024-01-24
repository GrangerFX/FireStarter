// Run date: 01/23/24 19:51:46 Pacific Standard Time
// Run duration = 23688.915692 seconds
// Run generation = 224
// Run evolution = 16
// Run max result = 0.00001350
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
// Run states = 1
// Run units = 1
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

// Solution0 result = 0.00001350
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    n *= 0.49519616f;
    r0 = n += -1.15356219f;
    r1 = n += 0.47679865f;
    r2 = n += -2.21975899f;
    n = r2 += n;
    r3 = n *= 0.21129183f;
    r4 = n += 0.39551073f;
    r5 = n += 0.23308112f;
    n *= r5;
    r5 = n += -1.37703323f;
    r6 = n += -1.18669617f;
    r7 = n *= -0.30274102f;
    r8 = n *= -0.60355532f;
    n += -6.41146135f;
    r9 = n += 6.02072048f;
    n = r9 *= n;
    n *= 3.12382984f;
    n *= r4;
    n += r1;
    n *= r6;
    n += r5;
    n += r7;
    n *= -0.88612658f;
    n *= r0;
    n += r2;
    n *= -0.22578149f;
    n *= r3;
    n += 0.25918660f;
    n *= r9;
    n *= -0.07822287f;
    n *= -84.50436401f;
    n *= r8;
    return n;
} // Solution0

// Solution1 result = 0.00001162
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    n *= 0.16839145f;
    r0 = n += 1.84086180f;
    r1 = n += -0.30966675f;
    r2 = n += -2.02634716f;
    n = r2 += n;
    r3 = n *= 0.55047041f;
    r4 = n += -0.52669728f;
    r5 = n += -2.22274709f;
    n *= r5;
    r5 = n += -1.33927953f;
    r6 = n += -1.73216236f;
    r7 = n *= 0.16601539f;
    r8 = n *= 1.25298131f;
    n += 1.81071556f;
    r9 = n += -3.86489081f;
    n = r9 *= n;
    n *= -1.51922357f;
    n *= r4;
    n += r1;
    n *= r6;
    n += r5;
    n += r7;
    n *= -0.65805370f;
    n *= r0;
    n += r2;
    n *= -66.99305725f;
    n *= r3;
    n += -16.66972542f;
    n *= r9;
    n *= -0.09519881f;
    n *= 0.02507130f;
    n *= r8;
    return n;
} // Solution1

// Solution2 result = 0.00001109
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    n *= -0.63965791f;
    r0 = n += 0.33249772f;
    r1 = n += 1.47796988f;
    r2 = n += -0.01463406f;
    n = r2 += n;
    r3 = n *= -0.11754584f;
    r4 = n += 0.02402834f;
    r5 = n += -0.02318533f;
    n *= r5;
    r5 = n += -1.29672253f;
    r6 = n += 0.09368378f;
    r7 = n *= 1.76743805f;
    r8 = n *= 0.36098459f;
    n += 1.75874496f;
    r9 = n += -1.90667009f;
    n = r9 *= n;
    n *= -5.99038649f;
    n *= r4;
    n += r1;
    n *= r6;
    n += r5;
    n += r7;
    n *= 2.36339021f;
    n *= r0;
    n += r2;
    n *= -0.40998861f;
    n *= r3;
    n += 0.24372141f;
    n *= r9;
    n *= -0.20261818f;
    n *= 10.57838726f;
    n *= r8;
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
