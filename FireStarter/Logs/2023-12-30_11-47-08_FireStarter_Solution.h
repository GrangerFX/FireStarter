// Run date: 12/30/23 11:47:08 Pacific Standard Time
// Run duration = 433.763073 seconds
// Run generation = 7
// Run evolution = 4
// Run max result = 0.00000520
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
// Run tests = 1
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

// Solution0 result = 0.00000387
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.11435168f;
    r0 = n += -0.35924605f;
    r1 = n *= -0.02797455f;
    n *= -0.05206753f;
    r2 = n *= 0.00432435f;
    r3 = n += -1.17517459f;
    n = r0 *= n;
    n *= r0;
    r0 = n += -0.72570735f;
    n += -1.15518236f;
    r4 = n *= 1.78997195f;
    r5 = n += -2.03312492f;
    r6 = n += -3.17411470f;
    n *= 1.59332812f;
    n *= -2.70093584f;
    r7 = n *= 2.22421908f;
    n *= r5;
    n *= r6;
    r6 = n += -3.12403488f;
    n *= r0;
    r0 = n *= 1.82656789f;
    n += r6;
    n *= r2;
    n *= r0;
    n *= r4;
    n *= r7;
    n += r1;
    n += 1.17672694f;
    n += r3;
    n *= -0.07697667f;
    n *= -0.04220331f;
    n *= 0.24866377f;
    return n;
} // Solution0

// Solution1 result = 0.00000203
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.15732144f;
    r0 = n += 0.48622775f;
    r1 = n *= 0.51251370f;
    n *= 0.00021688f;
    r2 = n *= 0.04100386f;
    r3 = n += -0.52549928f;
    n = r0 *= n;
    n *= r0;
    r0 = n += -0.58608162f;
    n += -1.22741091f;
    r4 = n *= 1.21128953f;
    r5 = n += -0.92476547f;
    r6 = n += 1.57314324f;
    n *= 3.63279796f;
    n *= 2.06661820f;
    r7 = n *= 2.71661162f;
    n *= r5;
    n *= r6;
    r6 = n += -0.88307512f;
    n *= r0;
    r0 = n *= 1.86193228f;
    n += r6;
    n *= r2;
    n *= r0;
    n *= r4;
    n *= r7;
    n += r1;
    n += 0.50430858f;
    n += r3;
    n *= -3.23991084f;
    n *= -1.28784251f;
    n *= 1.33612263f;
    return n;
} // Solution1

// Solution2 result = 0.00000520
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.14800318f;
    r0 = n += -0.38747194f;
    r1 = n *= 0.29103243f;
    n *= 0.03184641f;
    r2 = n *= -0.00093305f;
    r3 = n += -1.10139108f;
    n = r0 *= n;
    n *= r0;
    r0 = n += -0.14680025f;
    n += -1.69244277f;
    r4 = n *= 1.23596799f;
    r5 = n += -2.36253119f;
    r6 = n += -0.65154803f;
    n *= 0.87411040f;
    n *= 1.58649802f;
    r7 = n *= 1.65283871f;
    n *= r5;
    n *= r6;
    r6 = n += 2.86873364f;
    n *= r0;
    r0 = n *= -1.30760098f;
    n += r6;
    n *= r2;
    n *= r0;
    n *= r4;
    n *= r7;
    n += r1;
    n += 1.44442880f;
    n += r3;
    n *= 2.24150920f;
    n *= 3.76262093f;
    n *= 0.18097711f;
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
