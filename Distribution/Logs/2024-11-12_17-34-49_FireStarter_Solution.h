// Run date: 11/12/24 17:34:49 Pacific Standard Time
// Run duration = 2340.525366 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000037
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
// Run passes = 512
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
    r1 = n *= -0.04581991f;
    n *= -1.30047190f;
    n = r0 *= n;
    n += 0.47160983f;
    r2 = n += -0.83730143f;
    n += -6.77034950f;
    r3 = n *= 2.67193508f;
    n += -4.32673979f;
    n *= -0.71039253f;
    n += 3.28921390f;
    r4 = n += -5.87237406f;
    r5 = n *= 0.00510328f;
    r6 = n += 1.57869446f;
    n = r5 *= n;
    n = r2 += n;
    r7 = n += -3.95240831f;
    n *= r0;
    r0 = n *= 0.50153196f;
    n *= r6;
    n += 0.44934729f;
    n *= r7;
    n *= -2.82353544f;
    n = r4 += n;
    n *= r5;
    n *= r3;
    n *= -0.20874806f;
    n += r0;
    n *= -1.09117472f;
    n *= r2;
    n += r4;
    n *= r1;
    return n;
} // Solution
