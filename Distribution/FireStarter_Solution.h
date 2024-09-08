// Run date: 09/08/24 10:34:10 Pacific Daylight Time
// Run duration = 31.572579 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000054
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
    float r0, r1, r2, r3, r4, r5;

    n *= 1.49278438f;
    r0 = n += -4.44516563f;
    n += r0;
    r0 = n += -3.64659262f;
    r1 = n *= -5.15520811f;
    n = r0 *= n;
    n += -1.44071531f;
    n *= -2.95035338f;
    r2 = n *= 0.50033551f;
    n *= -0.33549115f;
    r3 = n *= 0.92013061f;
    n *= -6.74223471f;
    n += 1.24242687f;
    n += 5.03391123f;
    n = r3 += n;
    n *= -0.00457311f;
    n *= r2;
    n *= -1.19229615f;
    r2 = n *= 3.28850055f;
    r4 = n *= 1.90345716f;
    r5 = n += -1.80406392f;
    n += r4;
    r4 = n += 0.14159054f;
    n *= r2;
    n += r0;
    n += r4;
    n += r3;
    n += -0.46607438f;
    n *= r1;
    n *= -0.53237659f;
    n *= -0.71152240f;
    n *= r5;
    return n;
} // Solution
