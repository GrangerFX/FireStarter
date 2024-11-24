// Run date: 11/24/24 14:47:57 Pacific Standard Time
// Run duration = 49.300645 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000092
// Run variations = 1
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
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
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

    n *= -0.21999341f;
    r0 = n += 1.03669453f;
    n = r0 *= n;
    n = r0 += n;
    n *= -0.50683492f;
    n += 0.45759135f;
    r1 = n *= -0.05002607f;
    n *= 29.71939468f;
    n *= 0.04060657f;
    n *= 3.15364575f;
    r2 = n += -2.74208927f;
    n *= r0;
    n *= -3.06140065f;
    n *= -1.89667666f;
    n += 5.16262770f;
    n *= -0.26263097f;
    n += -2.23048329f;
    n *= 2.07798004f;
    r0 = n *= -0.03791792f;
    r3 = n += 0.69158125f;
    n *= -0.37398446f;
    r4 = n += -0.87425148f;
    r5 = n += 0.00608475f;
    n += r2;
    n += r1;
    n *= -0.75963682f;
    n = r3 *= n;
    n *= r0;
    n += -0.91622841f;
    n *= r4;
    n *= r3;
    n += r5;
    return n;
} // Solution
