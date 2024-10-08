// Run date: 10/08/24 10:52:46 Pacific Daylight Time
// Run duration = 466.651863 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00000024
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

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

inline float SolutionTarget(float n, unsigned int variation = 0)
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
    float r0, r1, r2, r3;

    r0 = n += -0.75517035f;
    r1 = n *= -0.13594601f;
    n += 0.64884919f;
    n = r1 *= n;
    n *= 0.84295434f;
    n *= -3.91983151f;
    n += r1;
    n += 1.29108393f;
    n += 1.59635377f;
    n += -1.19642377f;
    n *= -0.53588378f;
    r1 = n *= -0.78250134f;
    n *= 1.80935693f;
    r2 = n += -1.31564808f;
    r3 = n += 0.16752888f;
    n += -3.61015558f;
    n += 3.31927967f;
    n += 3.71559238f;
    n *= -4.13433599f;
    n *= 2.33082056f;
    n *= r2;
    n *= 3.62262440f;
    n *= 0.00625886f;
    n += -2.45816898f;
    n = r1 *= n;
    n *= r1;
    n *= r3;
    r3 = n *= 1.70760429f;
    n *= -1.81173837f;
    n *= 0.23129018f;
    n *= r0;
    n += r3;
    return n;
} // Solution
