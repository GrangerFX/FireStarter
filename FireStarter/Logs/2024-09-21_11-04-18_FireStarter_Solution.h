// Run date: 09/21/24 11:04:18 Pacific Daylight Time
// Run duration = 152.769681 seconds
// Run generation = 51
// Run evolution = 0
// Run max result = 0.00006223
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

    r0 = n *= 0.24350117f;
    r1 = n *= 1.88345504f;
    r2 = n *= 1.57298458f;
    n *= -1.59928441f;
    r3 = n += 0.04470626f;
    n = r0 += n;
    n += 0.15731247f;
    n *= -0.92490381f;
    r4 = n *= -3.23100448f;
    n += -4.89606571f;
    n += r1;
    n += -0.57722843f;
    n = r3 += n;
    n += r2;
    n = r0 += n;
    r2 = n *= 0.21020246f;
    n *= r2;
    n = r4 *= n;
    n *= -0.20454156f;
    n *= -1.16248810f;
    n *= -1.69998312f;
    n *= r3;
    n += r4;
    r4 = n += -1.62672102f;
    r3 = n += -0.54367810f;
    n *= r4;
    n *= 6.34598207f;
    n += r3;
    n *= 2.03158283f;
    n *= 2.16252542f;
    n *= r0;
    n *= 1.91605031f;
    return n;
} // Solution
