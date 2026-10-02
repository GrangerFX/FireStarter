// Run date: 02/25/24 19:00:29 Pacific Standard Time
// Run duration = 19579.180660 seconds
// Run generation = 89
// Run evolution = 12
// Run max result = 0.00002730
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
// Run optimizeSeed = 1
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

// Solution0 result = 0.00001866
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.35785934f;
    n += 1.12390876f;
    r1 = n *= -0.34058139f;
    r2 = n += -0.99961305f;
    n += 1.99943292f;
    n = r2 *= n;
    r3 = n *= 0.06623811f;
    r4 = n *= -0.29655728f;
    r5 = n *= -5.72396994f;
    r6 = n += -0.75312692f;
    n *= 2.97315669f;
    n *= 49.97248077f;
    n *= 1.16686475f;
    n *= -2.85558605f;
    r7 = n *= -0.45561206f;
    n *= r0;
    n *= 0.41920108f;
    r0 = n *= 1.05969441f;
    n *= r1;
    n *= r4;
    n *= r6;
    n += -0.00089557f;
    n = r3 *= n;
    n += r0;
    n = r7 += n;
    n += r7;
    n *= 3.41278815f;
    n *= r2;
    n *= r3;
    n *= r5;
    n += 0.63540429f;
    n += -0.63001192f;
    return n;
} // Solution0

// Solution1 result = 0.00002730
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.50925910f;
    n += -0.74784410f;
    r1 = n *= -0.13662483f;
    r2 = n += 0.94005972f;
    n += -1.85468447f;
    n = r2 *= n;
    r3 = n *= 1.22292233f;
    r4 = n *= -2.96459126f;
    r5 = n *= -0.04061268f;
    r6 = n += -1.61470366f;
    n *= 0.07538494f;
    n *= -0.16614835f;
    n *= -0.20698147f;
    n *= 1441.37036133f;
    r7 = n *= 0.29059750f;
    n *= r0;
    n *= -1.42237377f;
    r0 = n *= -0.48989451f;
    n *= r1;
    n *= r4;
    n *= r6;
    n += 1.18409526f;
    n = r3 *= n;
    n += r0;
    n = r7 += n;
    n += r7;
    n *= 1.12009561f;
    n *= r2;
    n *= r3;
    n *= r5;
    n += -1.66042578f;
    n += 1.60943282f;
    return n;
} // Solution1

// Solution2 result = 0.00002170
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.13690871f;
    n += -0.67133272f;
    r1 = n *= -0.48298493f;
    r2 = n += 0.36516178f;
    n += -1.02533257f;
    n = r2 *= n;
    r3 = n *= -1.22447538f;
    r4 = n *= 0.60519731f;
    r5 = n *= 1.70150387f;
    r6 = n += 0.43857560f;
    n *= 1.99323058f;
    n *= -3.52663517f;
    n *= -400.58120728f;
    n *= -1.27907634f;
    r7 = n *= -0.00736679f;
    n *= r0;
    n *= -1.12160170f;
    r0 = n *= 2.29562640f;
    n *= r1;
    n *= r4;
    n *= r6;
    n += 0.06426038f;
    n = r3 *= n;
    n += r0;
    n = r7 += n;
    n += r7;
    n *= 6.75540972f;
    n *= r2;
    n *= r3;
    n *= r5;
    n += 0.24905263f;
    n += 0.07398258f;
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
