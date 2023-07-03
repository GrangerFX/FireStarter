// Run date: 07/02/23 16:56:02 Pacific Daylight Time
// Run duration = 1952.309826 seconds
// Run generation = 121
// Run evolution = 0
// Run result = 0.00000083
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.08702946f;
    r0 = n += -1.05456305f;
    n *= 0.90288657f;
    r1 = n *= -0.86553097f;
    n *= -1.80489850f;
    n *= r1;
    r1 = n += 2.32669711f;
    n *= -0.01066361f;
    r2 = n *= 1.54438174f;
    r3 = n += -0.98451835f;
    r4 = n *= -0.19860767f;
    n = r1 *= n;
    n *= -0.01900183f;
    r5 = n *= 1.85987556f;
    n *= r5;
    r5 = n *= 2.53472042f;
    n += r2;
    r2 = n *= -0.32603410f;
    r6 = n += 2.00823212f;
    r7 = n *= -0.51594037f;
    n *= r3;
    n = r5 += n;
    n *= r4;
    n = r6 *= n;
    n *= r5;
    n += r1;
    n += 1.23826730f;
    n += r2;
    n *= r6;
    n *= r0;
    n *= r7;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.65795326f;
    r0 = n += -1.43270576f;
    n *= 0.26742893f;
    r1 = n *= -1.40142727f;
    n *= -1.74441075f;
    n *= r1;
    r1 = n += 1.72861350f;
    n *= 0.21321656f;
    r2 = n *= -0.75017703f;
    r3 = n += -0.72653055f;
    r4 = n *= -0.05220494f;
    n = r1 *= n;
    n *= -1.96857691f;
    r5 = n *= 0.06086580f;
    n *= r5;
    r5 = n *= -5.21032667f;
    n += r2;
    r2 = n *= -0.17822568f;
    r6 = n += 0.63657051f;
    r7 = n *= -1.87378263f;
    n *= r3;
    n = r5 += n;
    n *= r4;
    n = r6 *= n;
    n *= r5;
    n += r1;
    n += 18.29044342f;
    n += r2;
    n *= r6;
    n *= r0;
    n *= r7;
    n += -0.11813197f;
    return n;
} // Solution1

// Solution2 result = 0.00000016
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.84305429f;
    r0 = n += -0.77493954f;
    n *= -0.92501545f;
    r1 = n *= -0.47325560f;
    n *= 1.35747313f;
    n *= r1;
    r1 = n += -0.99120706f;
    n *= 0.29314274f;
    r2 = n *= 0.11122268f;
    r3 = n += -1.01098478f;
    r4 = n *= -0.78685808f;
    n = r1 *= n;
    n *= 0.00000000f;
    r5 = n *= -234193.12500000f;
    n *= r5;
    r5 = n *= -1.10999250f;
    n += r2;
    r2 = n *= 2.81414413f;
    r6 = n += -1.13232076f;
    r7 = n *= -0.66817284f;
    n *= r3;
    n = r5 += n;
    n *= r4;
    n = r6 *= n;
    n *= r5;
    n += r1;
    n += 0.20619708f;
    n += r2;
    n *= r6;
    n *= r0;
    n *= r7;
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
