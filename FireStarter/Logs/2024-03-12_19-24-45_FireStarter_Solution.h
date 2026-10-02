// Run date: 03/12/24 19:24:45 Pacific Daylight Time
// Run duration = 21644.014669 seconds
// Run generation = 89
// Run evolution = 14
// Run max result = 0.00000028
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.12998676f;
    n *= 0.53004754f;
    n += -1.73409259f;
    r0 = n *= 0.29850778f;
    r1 = n *= -3.61955357f;
    n *= r0;
    n *= -0.00939493f;
    n *= -296.47671509f;
    n += 1.73556328f;
    r0 = n *= -4.26721668f;
    n += 4.56927061f;
    r2 = n *= -0.01165050f;
    n += 0.34391752f;
    n *= 0.55951697f;
    n += 0.22140075f;
    r3 = n *= -1.03338504f;
    n += -0.77799904f;
    n *= -2.18170667f;
    n = r3 *= n;
    r4 = n += 0.02756751f;
    r5 = n *= -0.31448418f;
    n *= 0.59403288f;
    r6 = n += 0.39347440f;
    n *= r4;
    n *= r0;
    n *= r6;
    n *= r3;
    n += r2;
    n *= -0.36108154f;
    n += r5;
    n *= r1;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 1.06007695f;
    n *= 0.51162642f;
    n += -2.12362599f;
    r0 = n *= -2.08872032f;
    r1 = n *= -0.28841716f;
    n *= r0;
    n *= -0.29856914f;
    n *= 2.13631630f;
    n += -1.68351352f;
    r0 = n *= -1.75834930f;
    n += -1.74513459f;
    r2 = n *= -0.01638750f;
    n += -0.47920933f;
    n *= -1.07194424f;
    n += -0.08648274f;
    r3 = n *= -0.86495537f;
    n += -1.11186969f;
    n *= -0.63181168f;
    n = r3 *= n;
    r4 = n += -0.59948510f;
    r5 = n *= 1.38243246f;
    n *= 1.96814215f;
    r6 = n += 1.08742869f;
    n *= r4;
    n *= r0;
    n *= r6;
    n *= r3;
    n += r2;
    n *= -0.89663142f;
    n += r5;
    n *= r1;
    n += -0.11813184f;
    return n;
} // Solution1

// Solution2 result = 0.00000028
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.45605087f;
    n *= -0.93234640f;
    n += 0.15098682f;
    r0 = n *= -0.74116015f;
    r1 = n *= 0.79764211f;
    n *= r0;
    n *= -0.02244039f;
    n *= -64.24001312f;
    n += -1.29851043f;
    r0 = n *= 1.11352813f;
    n += -4.45465803f;
    r2 = n *= 0.11622562f;
    n += 0.37137842f;
    n *= 0.39268470f;
    n += -1.42722940f;
    r3 = n *= 0.88299233f;
    n += -0.45495659f;
    n *= -0.65677875f;
    n = r3 *= n;
    r4 = n += 0.16809851f;
    r5 = n *= 0.55853164f;
    n *= -0.87657565f;
    r6 = n += 2.15858269f;
    n *= r4;
    n *= r0;
    n *= r6;
    n *= r3;
    n += r2;
    n *= 0.03345943f;
    n += r5;
    n *= r1;
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
