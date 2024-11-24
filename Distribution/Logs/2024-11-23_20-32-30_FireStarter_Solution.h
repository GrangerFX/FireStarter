// Run date: 11/23/24 20:32:30 Pacific Standard Time
// Run duration = 743.421318 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000016
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 1
// Run optimizeSeed = 1
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
    float r0, r1, r2, r3;

    n *= 0.34695441f;
    r0 = n += -1.08998942f;
    r1 = n *= 0.24086191f;
    n = r0 *= n;
    r2 = n *= -2.48934746f;
    r3 = n += 3.34950566f;
    n += r3;
    n += 7.22090912f;
    n = r0 *= n;
    r3 = n += -2.38036537f;
    n *= 1.42435920f;
    n += r2;
    n *= -1.52415442f;
    n = r3 += n;
    r2 = n *= 8.93646717f;
    n += 3.39978743f;
    n = r2 += n;
    n *= -0.03811339f;
    n += 0.53937775f;
    n *= 0.63107008f;
    n += -17.39470482f;
    n *= r3;
    n = r0 *= n;
    n = r2 += n;
    n += r2;
    n *= 0.13192005f;
    n *= -9.43427467f;
    n *= -0.14475863f;
    n *= -3.13885021f;
    n += r0;
    n *= 0.19881472f;
    n *= r1;
    return n;
} // Solution
