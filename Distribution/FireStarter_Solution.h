// Run date: 09/09/24 12:09:40 Pacific Daylight Time
// Run duration = 125.203666 seconds
// Run generation = 40
// Run evolution = 0
// Run max result = 0.00002024
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
// Run tests = 0
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

    n += -1.31150234f;
    r0 = n += -0.14051373f;
    n *= 0.61835217f;
    n += -5.74530029f;
    n += -1.60377848f;
    r1 = n += 0.69325054f;
    r2 = n *= 0.03919441f;
    n *= -3.26098633f;
    n = r2 *= n;
    r3 = n += 0.76751798f;
    n *= 1.51554716f;
    r4 = n *= 2.62217569f;
    n *= r3;
    n *= 0.72399086f;
    n += r2;
    n += 0.34881493f;
    r2 = n *= -2.78410196f;
    n *= -0.67798311f;
    n += 1.40990770f;
    n *= 0.95701665f;
    n *= r4;
    n = r1 *= n;
    n *= r2;
    n *= -1.04425859f;
    r2 = n += 0.43764839f;
    n += -0.60752445f;
    n += r0;
    n += r2;
    n *= 7.02216578f;
    r2 = n *= 9.95510864f;
    n += r2;
    n += r1;
    return n;
} // Solution
