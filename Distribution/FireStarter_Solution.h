// Run date: 03/04/24 22:29:09 Pacific Standard Time
// Run duration = 9635.866094 seconds
// Run generation = 1004
// Run evolution = 26
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.87903190f;
    n += -0.02684009f;
    n += -0.12498652f;
    r0 = n += -0.11073416f;
    r1 = n *= -0.97429591f;
    n *= 0.51197994f;
    n = r1 *= n;
    n += -1.92116523f;
    r2 = n *= -1.55205691f;
    n += -1.46134758f;
    r3 = n *= 0.04536457f;
    r4 = n += 0.17273605f;
    n *= -7.48032665f;
    n += r2;
    n = r1 += n;
    n *= -0.00230051f;
    r2 = n *= -1.94060135f;
    n = r4 *= n;
    n += 0.04652609f;
    n = r1 *= n;
    n *= -182008.26562500f;
    n += -1.65912426f;
    n *= r4;
    n += -2.33539891f;
    n += -1.73612821f;
    n = r1 *= n;
    n *= r3;
    n += r2;
    n *= 0.76248485f;
    n += r1;
    n *= r0;
    n += -0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.49743733f;
    n += -2.00018716f;
    n += 0.14648622f;
    r0 = n += -0.73952043f;
    r1 = n *= -0.00333255f;
    n *= -68346.99218750f;
    n = r1 *= n;
    n += 1.29449594f;
    r2 = n *= -1.35477662f;
    n += 0.09343808f;
    r3 = n *= 0.23750237f;
    r4 = n += -0.54856509f;
    n *= -1.08229041f;
    n += r2;
    n = r1 += n;
    n *= 0.18900956f;
    r2 = n *= -0.20508625f;
    n = r4 *= n;
    n += -1.64960968f;
    n = r1 *= n;
    n *= 4.81294680f;
    n += 0.92224449f;
    n *= r4;
    n += -1.21530402f;
    n += 0.56440616f;
    n = r1 *= n;
    n *= r3;
    n += r2;
    n *= -0.17233284f;
    n += r1;
    n *= r0;
    n += -0.11813179f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.13980469f;
    n += 0.52394360f;
    n += -1.10636592f;
    r0 = n += -2.17537618f;
    r1 = n *= -0.40662444f;
    n *= 2.38239789f;
    n = r1 *= n;
    n += -0.41614026f;
    r2 = n *= -1.00938690f;
    n += 1.42730725f;
    r3 = n *= 1.77234149f;
    r4 = n += -1.91365099f;
    n *= 0.00011820f;
    n += r2;
    n = r1 += n;
    n *= -0.14580297f;
    r2 = n *= -0.33798897f;
    n = r4 *= n;
    n += 0.41739914f;
    n = r1 *= n;
    n *= -1.87483299f;
    n += -1.80602598f;
    n *= r4;
    n += -0.52749074f;
    n += -0.11692803f;
    n = r1 *= n;
    n *= r3;
    n += r2;
    n *= 2.10880589f;
    n += r1;
    n *= r0;
    n += 0.52359873f;
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
