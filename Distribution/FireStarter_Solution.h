// Run date: 09/14/24 17:27:15 Pacific Daylight Time
// Run duration = 115.735748 seconds
// Run generation = 44
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

    n *= -1.58267045f;
    n += -0.14320181f;
    n *= -2.78807592f;
    r0 = n *= -1.56199276f;
    r1 = n *= 0.28426790f;
    n = r0 *= n;
    r2 = n += 0.29654455f;
    n += -0.04608006f;
    n += 1.47034550f;
    r3 = n *= 1.08602393f;
    r4 = n += 2.08462477f;
    n += r0;
    n += r4;
    r4 = n *= -0.12341227f;
    n = r2 += n;
    r0 = n *= 1.98652899f;
    n = r2 *= n;
    n = r2 += n;
    n *= -0.77939719f;
    n *= r4;
    n *= r0;
    n *= -3.90333033f;
    n *= 1.96026683f;
    r0 = n *= -13.41519356f;
    n += r3;
    n *= r0;
    n *= r2;
    n *= -3.33140087f;
    n *= 0.97423869f;
    n += 0.49719775f;
    n *= r1;
    n *= 4.36020851f;
    return n;
} // Solution
