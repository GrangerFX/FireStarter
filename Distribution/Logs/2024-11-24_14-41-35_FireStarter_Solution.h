// Run date: 11/24/24 14:41:35 Pacific Standard Time
// Run duration = 70.270854 seconds
// Run generation = 20
// Run evolution = 0
// Run max result = 0.00000095
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

    n *= -1.17069161f;
    r0 = n += 2.42325950f;
    n *= 0.40141633f;
    n += 0.20525664f;
    r1 = n += 0.29835090f;
    n = r1 *= n;
    r2 = n += 1.06194091f;
    n += -1.60976434f;
    r3 = n *= -0.01053045f;
    n *= -3.03980589f;
    r4 = n += -1.47268677f;
    n *= r2;
    n += 4.08117056f;
    n += -1.75277519f;
    r2 = n *= 0.06579078f;
    n = r4 += n;
    r5 = n += 1.82097280f;
    n = r3 += n;
    n *= r4;
    r4 = n += -0.68672204f;
    n = r5 *= n;
    n = r2 *= n;
    n += r3;
    n += r2;
    n *= 3.67274308f;
    n += -2.27460742f;
    n += r1;
    n = r4 += n;
    n *= r0;
    n *= 0.79708159f;
    n += r4;
    n *= r5;
    return n;
} // Solution
