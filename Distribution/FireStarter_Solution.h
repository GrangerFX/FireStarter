// Run date: 09/01/24 17:41:54 Pacific Daylight Time
// Run duration = 32.964497 seconds
// Run generation = 21
// Run evolution = 0
// Run max result = 0.00000009
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8704
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1

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

inline float Solution(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.42975447f;
    n += -1.65970826f;
    n += 0.55287635f;
    r0 = n += -0.24328156f;
    r1 = n *= 0.82284832f;
    n = r0 *= n;
    r2 = n += -0.45023462f;
    r3 = n *= 1.77156997f;
    r4 = n *= -2.72554779f;
    n = r2 += n;
    r5 = n *= -0.00699403f;
    n *= 4.93269253f;
    n += -1.02886283f;
    n += -1.20807815f;
    n = r5 += n;
    n *= 0.14817250f;
    n *= r4;
    r4 = n += -1.55467284f;
    n *= -1.95641792f;
    n *= 0.19799696f;
    r6 = n += 3.38648796f;
    n *= r3;
    n += r0;
    n += r2;
    n += 6.38998890f;
    n *= 0.00478035f;
    n += r5;
    n += 1.37279439f;
    n *= r1;
    n *= -0.31505099f;
    n *= r4;
    n *= r6;
    return n;
} // Solution
