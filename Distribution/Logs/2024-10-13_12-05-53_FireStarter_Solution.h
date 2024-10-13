// Run date: 10/13/24 12:05:53 Pacific Daylight Time
// Run duration = 1471.042522 seconds
// Run generation = 58
// Run evolution = 0
// Run max result = 0.00000012
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

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

    n *= 0.18278143f;
    r0 = n += -1.31348193f;
    r1 = n *= 0.58742827f;
    n *= -0.26512051f;
    n = r0 *= n;
    n += r0;
    n *= -0.74896902f;
    n *= -4.88280630f;
    n *= -0.21735066f;
    n += -3.27457404f;
    r0 = n *= 0.29790795f;
    r2 = n += 1.29003096f;
    n *= 5.50258493f;
    r3 = n += -0.41062960f;
    r4 = n += 1.75631046f;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r2;
    n += -2.30627942f;
    n *= -3.75619817f;
    r2 = n *= -0.78229874f;
    r4 = n *= -5.84376144f;
    n += 5.03469610f;
    n += r4;
    n += 2.97950602f;
    n *= 1.09903288f;
    n *= r2;
    n *= r1;
    n *= 0.03368856f;
    n *= -2.39590454f;
    n *= r0;
    return n;
} // Solution
