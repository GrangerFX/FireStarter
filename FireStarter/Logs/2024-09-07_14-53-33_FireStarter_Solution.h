// Run date: 09/07/24 14:53:33 Pacific Daylight Time
// Run duration = 1200.215001 seconds
// Run generation = 14
// Run evolution = 0
// Run max result = 0.00000036
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
// Run passes = 100
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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

    n += -0.41246852f;
    n += 1.43372798f;
    r0 = n *= 1.83714902f;
    n *= -1.02810121f;
    r1 = n *= 7.52472878f;
    n *= 2.60825086f;
    n *= r1;
    n *= 0.11791158f;
    r1 = n *= -0.03189947f;
    r2 = n *= -0.17603940f;
    r3 = n *= -0.78726614f;
    r4 = n += -1.38180292f;
    n *= -0.37633589f;
    n += r1;
    n += r2;
    n *= r4;
    n += -2.89407277f;
    r4 = n *= -1.79850745f;
    n = r3 += n;
    r2 = n += -0.99374753f;
    n = r4 += n;
    n *= -4.53909206f;
    n *= -7.24649191f;
    n *= 0.54642457f;
    n *= r3;
    n += r4;
    r4 = n *= -1.58211052f;
    n *= r4;
    n += 0.16867058f;
    n += r2;
    n += 0.31371474f;
    n *= r0;
    return n;
} // Solution
