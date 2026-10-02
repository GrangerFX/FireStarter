// Run date: 06/22/24 11:43:17 Pacific Daylight Time
// Run duration = 16676.824437 seconds
// Run generation = 50
// Run evolution = 3
// Run max result = 0.00000030
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.14159274f;
    r1 = n *= 0.18320708f;
    n = r0 *= n;
    n += -1.63157153f;
    n *= 4.66229773f;
    n *= 0.01926830f;
    r2 = n += -1.40746176f;
    r3 = n += -1.00102365f;
    r4 = n += 0.46236268f;
    r5 = n *= 0.29293591f;
    r6 = n *= 0.21227852f;
    r7 = n *= 1.21056724f;
    n = r7 *= n;
    n *= -6.22933769f;
    n += r5;
    n = r4 *= n;
    r5 = n *= 0.23664682f;
    n *= r7;
    n += 0.44754133f;
    r7 = n *= -4.67074156f;
    r8 = n *= 6.72709608f;
    n += r3;
    n *= r7;
    n += -0.23328686f;
    n *= r4;
    n *= r6;
    n *= r2;
    n *= r0;
    n += r8;
    n *= r5;
    n *= r1;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.09065843f;
    r1 = n *= 0.43547589f;
    n = r0 *= n;
    n += -3.17234731f;
    n *= 0.01248284f;
    n *= -4.69043159f;
    r2 = n += 2.33418345f;
    r3 = n += 0.54112583f;
    r4 = n += 2.03143907f;
    r5 = n *= -0.04793832f;
    r6 = n *= 0.13074574f;
    r7 = n *= 6.82832098f;
    n = r7 *= n;
    n *= -0.47475424f;
    n += r5;
    n = r4 *= n;
    r5 = n *= 1.36743975f;
    n *= r7;
    n += -1.48506999f;
    r7 = n *= 0.48883164f;
    r8 = n *= -1.76863718f;
    n += r3;
    n *= r7;
    n += 0.57299191f;
    n *= r4;
    n *= r6;
    n *= r2;
    n *= r0;
    n += r8;
    n *= r5;
    n *= r1;
    n += -0.11813170f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -2.61799383f;
    r1 = n *= -0.39804405f;
    n = r0 *= n;
    n += 4.31328583f;
    n *= -0.03478383f;
    n *= 2.50844288f;
    r2 = n += -1.50664890f;
    r3 = n += 1.74471533f;
    r4 = n += -2.54536438f;
    r5 = n *= -0.32794297f;
    r6 = n *= -0.06056494f;
    r7 = n *= -0.90904063f;
    n = r7 *= n;
    n *= 6.62933826f;
    n += r5;
    n = r4 *= n;
    r5 = n *= -4.53972292f;
    n *= r7;
    n += 0.00489728f;
    r7 = n *= 1.23475409f;
    r8 = n *= 6.11050844f;
    n += r3;
    n *= r7;
    n += -0.52674460f;
    n *= r4;
    n *= r6;
    n *= r2;
    n *= r0;
    n += r8;
    n *= r5;
    n *= r1;
    n += 0.52359885f;
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
