// Run date: 01/13/24 23:26:02 Pacific Standard Time
// Run duration = 10151.514917 seconds
// Run generation = 53
// Run evolution = 17
// Run max result = 0.00000131
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
// Run tests = 4
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.24322502f;
    r1 = n += 1.50944078f;
    r2 = n += -0.74501806f;
    n = r2 += n;
    n *= 0.49549839f;
    r3 = n += -0.36410239f;
    r4 = n += 0.36358678f;
    n = r0 += n;
    n *= -0.92129087f;
    n += 0.28847298f;
    n = r3 += n;
    n = r3 += n;
    r5 = n *= -0.55946559f;
    n += 1.06587362f;
    n *= r0;
    r0 = n *= 0.13141987f;
    r6 = n += -1.12587786f;
    n += 0.43525240f;
    r7 = n *= 0.17357303f;
    n = r7 *= n;
    r8 = n += 0.09235782f;
    n *= r3;
    n *= -4918.79296875f;
    n *= r1;
    n += r0;
    n *= r2;
    n = r6 *= n;
    n += r6;
    n += r5;
    n *= r7;
    n += r4;
    n *= r8;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.67324042f;
    r1 = n += 0.84386176f;
    r2 = n += 1.52737641f;
    n = r2 += n;
    n *= 0.96622485f;
    r3 = n += -0.50643677f;
    r4 = n += -0.38314712f;
    n = r0 += n;
    n *= -0.25236687f;
    n += 0.41820163f;
    n = r3 += n;
    n = r3 += n;
    r5 = n *= -0.02140210f;
    n += 0.00386324f;
    n *= r0;
    r0 = n *= -0.15338154f;
    r6 = n += -0.89450753f;
    n += -0.38055030f;
    r7 = n *= 0.47574788f;
    n = r7 *= n;
    r8 = n += 0.27085686f;
    n *= r3;
    n *= 0.22738539f;
    n *= r1;
    n += r0;
    n *= r2;
    n = r6 *= n;
    n += r6;
    n += r5;
    n *= r7;
    n += r4;
    n *= r8;
    return n;
} // Solution1

// Solution2 result = 0.00000131
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.36581334f;
    r1 = n += 1.84393525f;
    r2 = n += -0.76783371f;
    n = r2 += n;
    n *= -0.40862721f;
    r3 = n += -0.03237699f;
    r4 = n += 1.05245090f;
    n = r0 += n;
    n *= 0.06752042f;
    n += 0.99442881f;
    n = r3 += n;
    n = r3 += n;
    r5 = n *= -0.98556793f;
    n += 2.01660204f;
    n *= r0;
    r0 = n *= -1.15725052f;
    r6 = n += 1.30638742f;
    n += 1.40744698f;
    r7 = n *= -0.24078718f;
    n = r7 *= n;
    r8 = n += 0.57534856f;
    n *= r3;
    n *= 0.78840888f;
    n *= r1;
    n += r0;
    n *= r2;
    n = r6 *= n;
    n += r6;
    n += r5;
    n *= r7;
    n += r4;
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
