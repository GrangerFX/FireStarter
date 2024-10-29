// Run date: 10/29/24 10:12:16 Pacific Daylight Time
// Run duration = 96.880036 seconds
// Run generation = 12
// Run evolution = 0
// Run max result = 0.00000048
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
// Run candidates = 32
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

    n += -1.18228936f;
    r0 = n += -1.95930302f;
    r1 = n *= -0.13429908f;
    r2 = n *= 1.42752719f;
    n = r0 *= n;
    r3 = n *= -0.31707636f;
    n *= 0.35075516f;
    r4 = n *= -4.05854034f;
    n *= -0.43295148f;
    r5 = n += -1.32275987f;
    r6 = n += 10.48671627f;
    n += -17.00038910f;
    r7 = n *= 0.00582884f;
    n *= r6;
    n *= 6.03765392f;
    n *= r7;
    n = r0 *= n;
    n += 0.65745515f;
    n += -1.35402977f;
    n += 0.54699022f;
    n += 2.33553624f;
    n *= r5;
    n *= 0.95699823f;
    n += r0;
    r0 = n += -0.11053123f;
    n = r4 *= n;
    n += -1.81258965f;
    n += r1;
    n *= r2;
    n += r3;
    n *= r0;
    n += r4;
    return n;
} // Solution
