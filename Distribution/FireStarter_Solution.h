// Run date: 09/14/24 17:00:28 Pacific Daylight Time
// Run duration = 29.188902 seconds
// Run generation = 13
// Run evolution = 0
// Run max result = 0.00000048
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

    r0 = n += -1.29960787f;
    r1 = n += -0.34494722f;
    r2 = n *= -0.02931023f;
    n += 1.12802875f;
    n *= -0.57387292f;
    n *= r1;
    n += r0;
    r0 = n *= 0.63831878f;
    n += -6.88468742f;
    n *= 3.53241372f;
    r1 = n *= -2.35591793f;
    n = r1 *= n;
    r3 = n *= 3.76967859f;
    n = r3 += n;
    r4 = n += -0.88650221f;
    n *= r1;
    n += 4.73080397f;
    n = r4 += n;
    r1 = n *= -1.34355903f;
    n *= r1;
    n = r0 *= n;
    n *= r4;
    n = r0 += n;
    n += r3;
    n *= -0.69825822f;
    n += 1.13154685f;
    n += r0;
    n += 1.62806785f;
    n *= -0.97198015f;
    n *= r2;
    r2 = n *= -1.79803371f;
    n += r2;
    return n;
} // Solution
