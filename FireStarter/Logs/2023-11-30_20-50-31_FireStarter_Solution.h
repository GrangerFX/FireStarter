// Run date: 11/30/23 20:50:31 Pacific Standard Time
// Run duration = 36264.163012 seconds
// Run generation = 38
// Run evolution = 10
// Run max result = 0.00000012
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
// Run seeds = 64
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= -0.47104159f;
    r1 = n *= 1.85746348f;
    r2 = n *= -0.14529514f;
    n = r2 *= n;
    r3 = n += -0.11885660f;
    n *= 0.48731729f;
    r4 = n += -6.26738405f;
    r5 = n *= 0.01405089f;
    n *= -12.07895088f;
    n = r2 *= n;
    n += 0.44235632f;
    r6 = n += -1.46072865f;
    n = r4 += n;
    n += 4.07599211f;
    n = r5 += n;
    n *= -1.86249352f;
    n *= r4;
    n *= -1.41433477f;
    n *= 0.09142033f;
    n += r2;
    n = r6 *= n;
    n *= r3;
    n *= r0;
    n = r6 *= n;
    n *= r5;
    n += -0.00000003f;
    n += r6;
    n += r1;
    n *= 0.09776384f;
    n *= 0.56239879f;
    n *= 3.19288754f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065843f;
    r0 = n *= 0.06144524f;
    r1 = n *= -4.44302320f;
    r2 = n *= -0.63476729f;
    n = r2 *= n;
    r3 = n += -0.23245695f;
    n *= -0.12359890f;
    r4 = n += 2.67221189f;
    r5 = n *= 0.00606345f;
    n *= -5.96429586f;
    n = r2 *= n;
    n += -0.89877653f;
    r6 = n += 1.21151841f;
    n = r4 += n;
    n += -2.37322879f;
    n = r5 += n;
    n *= -0.16125301f;
    n *= r4;
    n *= -4.45998716f;
    n *= 9.82079220f;
    n += r2;
    n = r6 *= n;
    n *= r3;
    n *= r0;
    n = r6 *= n;
    n *= r5;
    n += -0.07790740f;
    n += r6;
    n += r1;
    n *= -2.35644388f;
    n *= -0.44915944f;
    n *= 1.43261695f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= 0.80358613f;
    r1 = n *= -1.19971240f;
    r2 = n *= -0.63355589f;
    n = r2 *= n;
    r3 = n += -1.88509452f;
    n *= 0.11220589f;
    r4 = n += -0.30250546f;
    r5 = n *= 0.00032495f;
    n *= -13.56086826f;
    n = r2 *= n;
    n += -2.28873730f;
    r6 = n += 0.19974171f;
    n = r4 += n;
    n += -0.18619546f;
    n = r5 += n;
    n *= 1.98184931f;
    n *= r4;
    n *= 0.50488001f;
    n *= 0.41957983f;
    n += r2;
    n = r6 *= n;
    n *= r3;
    n *= r0;
    n = r6 *= n;
    n *= r5;
    n += -57.04717636f;
    n += r6;
    n += r1;
    n *= 0.94259083f;
    n *= 0.18198366f;
    n *= -0.05350678f;
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
