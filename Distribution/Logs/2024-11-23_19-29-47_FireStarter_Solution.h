// Run date: 11/23/24 19:29:47 Pacific Standard Time
// Run duration = 756.939389 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000017
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
// Run population = 49152
// Run passes = 256
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
    float r0, r1, r2, r3;

    n *= 0.41294894f;
    r0 = n += -1.29731739f;
    r1 = n *= -0.19730148f;
    n = r0 *= n;
    r2 = n *= 0.86419952f;
    r3 = n += 4.00375032f;
    n += r3;
    n += -2.19860864f;
    n = r0 *= n;
    r3 = n += 1.22799873f;
    n *= -1.18128526f;
    n += r2;
    n *= 2.63790107f;
    n = r3 += n;
    r2 = n *= 1.65479004f;
    n += -0.63738453f;
    n = r2 += n;
    n *= 0.11729643f;
    n += -5.33833742f;
    n *= -0.37808481f;
    n += 2.87041640f;
    n *= r3;
    n = r0 *= n;
    n = r2 += n;
    n += r2;
    n *= -1.64874732f;
    n *= -0.87870789f;
    n *= -0.23124288f;
    n *= 1.77213347f;
    n += r0;
    n *= 1.11897421f;
    n *= r1;
    return n;
} // Solution
