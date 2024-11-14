// Run date: 11/13/24 20:10:50 Pacific Standard Time
// Run duration = 861.490789 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000005
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
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 512
// Run candidates = 16
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

    n += -1.81740081f;
    r0 = n += -1.32419181f;
    r1 = n *= 0.25570124f;
    n = r0 *= n;
    n += -0.24040565f;
    r2 = n *= -1.01027679f;
    r3 = n += 0.61746061f;
    n += r0;
    r0 = n *= 0.96690655f;
    n *= -0.16066228f;
    n *= -1.79056466f;
    n = r3 *= n;
    n *= 14.04555702f;
    n += -0.71309006f;
    r4 = n *= 0.00450107f;
    n += r0;
    r0 = n *= 0.98827147f;
    n = r4 *= n;
    r5 = n += 0.24970439f;
    n = r3 += n;
    n += r3;
    n *= 0.34409317f;
    r3 = n *= 3.03634405f;
    n *= 5.29689264f;
    n *= r5;
    n *= r0;
    n *= r3;
    n += 2.17843437f;
    n += r2;
    n *= -1.12350714f;
    n += r4;
    n *= r1;
    return n;
} // Solution
