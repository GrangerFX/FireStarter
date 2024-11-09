// Run date: 11/09/24 13:35:42 Pacific Standard Time
// Run duration = 32.134030 seconds
// Run generation = 22
// Run evolution = 0
// Run max result = 0.00000017
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= -1.18944061f;
    r1 = n *= -0.09640459f;
    n *= -0.93801069f;
    n *= 0.90308303f;
    n *= r1;
    r1 = n += 0.43178135f;
    r2 = n *= 1.78552723f;
    r3 = n *= 1.61574554f;
    n *= -8.16275024f;
    n *= 0.00402698f;
    r4 = n += 0.80989593f;
    r5 = n *= -0.39240825f;
    n *= -1.32262635f;
    r6 = n += 0.52538651f;
    n += r1;
    n *= r2;
    n *= r6;
    r6 = n *= -1.16514182f;
    n = r4 += n;
    r2 = n *= -1.74760413f;
    n = r5 *= n;
    n *= r4;
    n += -1.04295874f;
    n = r3 += n;
    n += r2;
    n += r3;
    n += 4.53506660f;
    n *= r6;
    n *= 0.69502944f;
    n *= r5;
    n *= r0;
    return n;
} // Solution
