// Run date: 10/08/24 14:55:42 Pacific Daylight Time
// Run duration = 706.239953 seconds
// Run generation = 45
// Run evolution = 0
// Run max result = 0.00000006
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

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
    float r0, r1, r2, r3, r4;

    n += -2.51414657f;
    n += 0.24508466f;
    n += -0.87253070f;
    r0 = n *= -1.94813144f;
    n *= -2.27235150f;
    r1 = n *= 0.35573661f;
    n *= r0;
    n += 2.86325693f;
    n *= 0.50397044f;
    r0 = n += 3.99469829f;
    n += -1.84838974f;
    n *= 1.68081295f;
    r2 = n *= -0.77549785f;
    n *= 0.00355061f;
    r3 = n += -0.71612710f;
    n *= -1.58169591f;
    r4 = n += -0.60239989f;
    n *= r2;
    n *= r3;
    n = r0 += n;
    n *= -0.06148372f;
    n += -0.87938273f;
    n *= r1;
    n *= r4;
    r4 = n *= 0.76209491f;
    n *= -0.00290626f;
    n *= 2.39423251f;
    r1 = n *= -1.14272332f;
    n = r0 *= n;
    n += r1;
    n += r4;
    n += r0;
    return n;
} // Solution
