// Run date: 11/12/24 12:28:26 Pacific Standard Time
// Run duration = 180.332071 seconds
// Run generation = 56
// Run evolution = 0
// Run max result = 0.00000013
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
// Run passes = 256
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

    n += 1.38864255f;
    n += -4.53023529f;
    r0 = n *= -0.86753845f;
    r1 = n *= 2.90452051f;
    n *= -0.00919221f;
    n = r1 *= n;
    r2 = n += 0.15166397f;
    r3 = n *= -0.00407331f;
    n += r3;
    n *= -2.57160616f;
    n *= 5.91188192f;
    n += 3.02736545f;
    r3 = n += 1.27465439f;
    n *= -0.79333782f;
    n += 3.57655287f;
    r4 = n += -0.70892668f;
    n *= -0.66694725f;
    n *= r3;
    r3 = n += 1.82838774f;
    n *= r2;
    n += -0.58112270f;
    n += 4.06481123f;
    n += 4.68264389f;
    n += r3;
    n = r4 *= n;
    r3 = n *= -0.06321649f;
    n += r1;
    n *= r4;
    n *= r3;
    n *= -0.69066715f;
    n += 0.28621361f;
    n *= r0;
    return n;
} // Solution
