// Run date: 11/11/23 14:25:03 Pacific Standard Time
// Run duration = 58184.722636 seconds
// Run generation = 193
// Run evolution = 7
// Run result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.24247123f;
    r1 = n += -0.76174593f;
    n *= -0.89518261f;
    n = r1 *= n;
    n += 0.47294277f;
    r2 = n *= -0.21883450f;
    r3 = n *= 6.01066065f;
    r4 = n += 0.00743739f;
    n *= r4;
    n *= r1;
    n = r3 += n;
    n += 22.09696388f;
    n *= r3;
    n *= -0.00002753f;
    n += -2.92996359f;
    n = r2 += n;
    n *= 0.88944793f;
    r3 = n += 1.53035951f;
    r1 = n *= 1.68672478f;
    r4 = n *= 0.96641886f;
    n *= -1.31277382f;
    n *= r0;
    n = r4 += n;
    n = r1 *= n;
    n *= -1.73501742f;
    n *= r1;
    n += 16.97995377f;
    n *= r3;
    n *= r2;
    n *= r4;
    n += -0.00000145f;
    n *= -0.02745777f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.47079682f;
    r1 = n += 1.45506847f;
    n *= -0.13961974f;
    n = r1 *= n;
    n += 0.95614737f;
    r2 = n *= 1.42243671f;
    r3 = n *= 1.33650172f;
    r4 = n += -6.58291578f;
    n *= r4;
    n *= r1;
    n = r3 += n;
    n += -12.91170216f;
    n *= r3;
    n *= -0.00009744f;
    n += 1.21959126f;
    n = r2 += n;
    n *= -0.17787139f;
    r3 = n += -0.89123207f;
    r1 = n *= 1.31840134f;
    r4 = n *= 0.32252756f;
    n *= 0.68725103f;
    n *= r0;
    n = r4 += n;
    n = r1 *= n;
    n *= 1.30610931f;
    n *= r1;
    n += -1.75655913f;
    n *= r3;
    n *= r2;
    n *= r4;
    n += 0.12219004f;
    n *= -0.96679205f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.68739742f;
    r1 = n += -1.79960239f;
    n *= 1.56151760f;
    n = r1 *= n;
    n += -3.43443561f;
    r2 = n *= 0.61295724f;
    r3 = n *= 0.00067648f;
    r4 = n += -0.30229342f;
    n *= r4;
    n *= r1;
    n = r3 += n;
    n += -1.64440393f;
    n *= r3;
    n *= -1.38001001f;
    n += -0.75509888f;
    n = r2 += n;
    n *= 0.05028356f;
    r3 = n += -0.66329479f;
    r1 = n *= 0.14011781f;
    r4 = n *= -1.41544342f;
    n *= -0.55567849f;
    n *= r0;
    n = r4 += n;
    n = r1 *= n;
    n *= 9.23293400f;
    n *= r1;
    n += -5.13241386f;
    n *= r3;
    n *= r2;
    n *= r4;
    n += -0.37991276f;
    n *= -1.37820911f;
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
