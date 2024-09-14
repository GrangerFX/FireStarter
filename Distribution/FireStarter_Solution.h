// Run date: 09/14/24 16:11:19 Pacific Daylight Time
// Run duration = 251.808900 seconds
// Run generation = 121
// Run evolution = 0
// Run max result = 0.00000066
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.75440687f;
    n *= -0.31294069f;
    n += -0.88310689f;
    n *= 0.86268848f;
    n *= 1.42636168f;
    r0 = n *= 1.45241857f;
    n += 1.45931852f;
    r1 = n *= -0.42559212f;
    n *= r0;
    r0 = n *= 0.66128612f;
    r2 = n += -0.00000004f;
    n += -1.61264265f;
    n += 2.90489149f;
    n *= -7.23539734f;
    n = r0 += n;
    r3 = n += -0.22089010f;
    n *= -0.44454607f;
    n += -2.48048854f;
    r4 = n *= 0.85637993f;
    n *= -3.04415870f;
    r5 = n *= -3.23912144f;
    n *= 0.23067337f;
    n *= -0.21368192f;
    r6 = n *= 0.63518941f;
    n *= r3;
    n += r5;
    n *= r0;
    n += r2;
    n *= r4;
    n = r1 *= n;
    n += r1;
    n *= r6;
    return n;
} // Solution
