// Run date: 11/12/24 12:47:27 Pacific Standard Time
// Run duration = 2705.410783 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000041
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 49152
// Run iterations = 64
// Run passes = 384
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.04583079f;
    n *= -1.29966044f;
    n = r0 *= n;
    n += 0.47240299f;
    r2 = n += -0.83684206f;
    n += -6.76955891f;
    r3 = n *= 2.67126274f;
    n += -5.13849735f;
    n *= -0.71015722f;
    n += 2.74695325f;
    r4 = n += -5.88925886f;
    r5 = n *= 0.00512257f;
    r6 = n += 1.57638109f;
    n = r5 *= n;
    n = r2 += n;
    r7 = n += -3.95800424f;
    n *= r0;
    r0 = n *= 0.50148487f;
    n *= r6;
    n += 0.44904181f;
    n *= r7;
    n *= -2.82338977f;
    n = r4 += n;
    n *= r5;
    n *= r3;
    n *= -0.20858292f;
    n += r0;
    n *= -1.09136522f;
    n *= r2;
    n += r4;
    n *= r1;
    return n;
} // Solution
