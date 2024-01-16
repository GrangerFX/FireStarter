// Run date: 01/14/24 10:27:38 Pacific Standard Time
// Run duration = 5669.031381 seconds
// Run generation = 30
// Run evolution = 10
// Run max result = 0.00000024
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

// Solution0 result = 0.00000011
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.28874573f;
    r0 = n += 0.90712148f;
    r1 = n *= 0.49214798f;
    n *= 0.75509101f;
    r2 = n *= 0.23636298f;
    r3 = n *= 417.13732910f;
    n += r3;
    n *= r0;
    r0 = n *= -0.07281042f;
    n += 1.80540979f;
    r3 = n *= -1.04675066f;
    n += r0;
    r0 = n *= 0.62451285f;
    n += -1.53051281f;
    r4 = n += 1.36450386f;
    n *= -0.28643921f;
    n = r0 *= n;
    r5 = n *= -0.20380206f;
    r6 = n += 3.40570951f;
    r7 = n += 1.58296788f;
    n = r5 *= n;
    n = r6 += n;
    n *= r2;
    n *= r5;
    n *= r3;
    n *= r6;
    n *= r0;
    n += r1;
    n *= r4;
    n *= r7;
    n += 0.00000003f;
    n *= -0.48067650f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.29368946f;
    r0 = n += -0.90769386f;
    r1 = n *= 0.45707983f;
    n *= 1652.63952637f;
    r2 = n *= 0.00269219f;
    r3 = n *= 1.71320736f;
    n += r3;
    n *= r0;
    r0 = n *= 0.87716943f;
    n += -2.57717109f;
    r3 = n *= -1.05654454f;
    n += r0;
    r0 = n *= -0.33743665f;
    n += 0.87611443f;
    r4 = n += -1.53986907f;
    n *= 0.19771439f;
    n = r0 *= n;
    r5 = n *= 0.19852823f;
    r6 = n += 1.08809006f;
    r7 = n += 1.12849319f;
    n = r5 *= n;
    n = r6 += n;
    n *= r2;
    n *= r5;
    n *= r3;
    n *= r6;
    n *= r0;
    n += r1;
    n *= r4;
    n *= r7;
    n += -0.08998122f;
    n *= 1.31284904f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.13590476f;
    r0 = n += 0.35579780f;
    r1 = n *= -0.29786065f;
    n *= 2.21098208f;
    r2 = n *= 2.74870348f;
    r3 = n *= 142.61566162f;
    n += r3;
    n *= r0;
    r0 = n *= -0.01661332f;
    n += -0.74204326f;
    r3 = n *= -1.10030127f;
    n += r0;
    r0 = n *= 1.03848910f;
    n += -0.47372076f;
    r4 = n += 3.86799598f;
    n *= 1.56793272f;
    n = r0 *= n;
    r5 = n *= -0.06213198f;
    r6 = n += 2.45726323f;
    r7 = n += -2.54167128f;
    n = r5 *= n;
    n = r6 += n;
    n *= r2;
    n *= r5;
    n *= r3;
    n *= r6;
    n *= r0;
    n += r1;
    n *= r4;
    n *= r7;
    n += 0.88993537f;
    n *= 0.58835578f;
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
