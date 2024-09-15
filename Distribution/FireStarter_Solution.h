// Run date: 09/14/24 18:09:34 Pacific Daylight Time
// Run duration = 1342.259760 seconds
// Run generation = 565
// Run evolution = 0
// Run max result = 0.00001013
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
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
    float r0, r1, r2, r3, r4;

    n += -1.26261234f;
    r0 = n *= 5.43576527f;
    n *= 8.34136677f;
    r1 = n *= -1.02807379f;
    n *= r0;
    n += r1;
    r1 = n *= 2.01265645f;
    n += 0.74932331f;
    n += r1;
    n *= 1.69455040f;
    r1 = n += -0.26032302f;
    n *= 0.96816802f;
    n *= 0.34989420f;
    r0 = n += -1.31371307f;
    n *= 0.54292166f;
    n = r0 += n;
    r2 = n *= 0.89200097f;
    n = r0 += n;
    r3 = n += 1.42322171f;
    n *= -5.22096443f;
    r4 = n += 0.60176498f;
    n *= -1.70651114f;
    n *= 0.00617763f;
    n += r3;
    n = r1 *= n;
    n *= r2;
    n *= -0.17129283f;
    n += r4;
    r4 = n *= -0.82177222f;
    n *= r0;
    n *= r1;
    n *= r4;
    return n;
} // Solution
