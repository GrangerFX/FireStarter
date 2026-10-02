// Run date: 09/18/24 19:26:34 Pacific Daylight Time
// Run duration = 216.784563 seconds
// Run generation = 118
// Run evolution = 0
// Run max result = 0.00002754
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
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
    float r0, r1, r2, r3, r4;

    n *= 0.55330747f;
    r0 = n *= -7.86459541f;
    n += r0;
    r0 = n *= 1.22629082f;
    r1 = n += 4.81467772f;
    r2 = n *= 1.96275926f;
    r3 = n *= 1.82673383f;
    n += 0.45711711f;
    n *= r0;
    n *= 0.16680400f;
    n *= 2.06857085f;
    r0 = n *= -0.51327139f;
    n += 1.88085818f;
    r4 = n *= 5.43639326f;
    n *= 1.79664111f;
    n *= -0.01005167f;
    n *= -2.17801046f;
    n *= 1.37035036f;
    n *= r4;
    n = r0 *= n;
    n += -3.93242240f;
    n *= -3.95774317f;
    n *= r1;
    n *= -1.20010638f;
    n += r2;
    n *= 1.74095547f;
    n *= -2.41426969f;
    n += r3;
    n *= r0;
    n *= 0.86428672f;
    n *= 1.43963933f;
    n += -0.19781862f;
    return n;
} // Solution
