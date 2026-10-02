// Run date: 06/15/24 17:54:57 Pacific Daylight Time
// Run duration = 108.476103 seconds
// Run generation = 17
// Run evolution = 1
// Run max result = 0.00002551
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

// Solution0 result = 0.00001836
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.83038783f;
    r0 = n *= 0.75005132f;
    r1 = n *= -1.20095479f;
    r2 = n += -1.20781958f;
    r3 = n += 4.38499546f;
    n *= 0.62843257f;
    n += r1;
    n *= -1.49947083f;
    r1 = n += 0.11998855f;
    n *= 1.00536692f;
    n *= 0.06778491f;
    n = r3 += n;
    n *= r2;
    n *= 0.59493738f;
    r2 = n *= 0.02119794f;
    r4 = n *= -0.62362427f;
    n *= -2.96324873f;
    n *= 4.29077435f;
    r5 = n += -2.37914681f;
    n += -3.98250222f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= -0.62090689f;
    n *= r5;
    n *= -1.55527639f;
    n += -0.25400686f;
    n *= r1;
    n += 0.01459659f;
    n *= 0.31480256f;
    return n;
} // Solution0

// Solution1 result = 0.00002277
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.53455758f;
    r0 = n *= 0.13341454f;
    r1 = n *= -0.90807766f;
    r2 = n += -0.75708878f;
    r3 = n += 1.43750238f;
    n *= 0.56076407f;
    n += r1;
    n *= -0.27504075f;
    r1 = n += 0.12794073f;
    n *= -9.32146263f;
    n *= 0.01047284f;
    n = r3 += n;
    n *= r2;
    n *= 1.52825356f;
    r2 = n *= 0.91420138f;
    r4 = n *= 0.38539273f;
    n *= 2.70355034f;
    n *= -2.71739316f;
    r5 = n += 6.65156794f;
    n += 6.63931513f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= -0.59259599f;
    n *= r5;
    n *= -0.83736026f;
    n += 2.71805525f;
    n *= r1;
    n += -0.71874070f;
    n *= 0.16692539f;
    return n;
} // Solution1

// Solution2 result = 0.00002551
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.85826492f;
    r0 = n *= -0.56910211f;
    r1 = n *= -1.44585598f;
    r2 = n += 1.47695696f;
    r3 = n += -3.55057263f;
    n *= 1.15061283f;
    n += r1;
    n *= -0.26700145f;
    r1 = n += -0.27634358f;
    n *= -0.59238029f;
    n *= -0.90983003f;
    n = r3 += n;
    n *= r2;
    n *= 0.08624133f;
    r2 = n *= 0.24507354f;
    r4 = n *= 4.14258671f;
    n *= -2.97978139f;
    n *= 0.56791353f;
    r5 = n += 1.46339428f;
    n += 4.12133312f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= -1.64107215f;
    n *= r5;
    n *= -2.15145516f;
    n += 1.33649850f;
    n *= r1;
    n += -1.94723785f;
    n *= -0.26699960f;
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
