// Run date: 09/25/24 09:50:26 Pacific Daylight Time
// Run duration = 2783.227234 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000024
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
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 32
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
    float r0, r1, r2, r3, r4, r5;

    n += 2.08103776f;
    r0 = n += -0.32462263f;
    r1 = n *= 9.57026291f;
    n *= 1.53694689f;
    n *= 1.36149693f;
    n *= r0;
    r0 = n += 6.26929283f;
    r2 = n *= -0.57376391f;
    r3 = n *= 0.70762646f;
    n += r2;
    r2 = n *= -11.01515102f;
    r4 = n += -1.61283612f;
    n *= -1.76890266f;
    n += 0.04320341f;
    n += -0.96909517f;
    n *= r4;
    n += 0.89156032f;
    r4 = n *= 1.97867787f;
    n = r2 += n;
    r5 = n += -0.26413405f;
    n = r4 += n;
    n *= -1.22912240f;
    n *= 6.01075411f;
    n *= 0.00748745f;
    n *= r2;
    n += r4;
    n += 3.43461847f;
    n *= r3;
    n += 0.94535381f;
    n += r5;
    n += r0;
    n *= r1;
    return n;
} // Solution
