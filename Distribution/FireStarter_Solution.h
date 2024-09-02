// Run date: 09/01/24 18:00:20 Pacific Daylight Time
// Run duration = 145.055712 seconds
// Run generation = 95
// Run evolution = 0
// Run max result = 0.00000022
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8704
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

inline float SolutionTarget(float n, unsigned int variation)
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

    n += -2.44823813f;
    n += -0.03931748f;
    n += -0.26706231f;
    r0 = n += -0.38697478f;
    r1 = n *= -0.70376062f;
    n = r0 *= n;
    r2 = n += 2.86494780f;
    r3 = n *= -0.00566251f;
    r4 = n *= 4.34714222f;
    n = r2 += n;
    r5 = n *= 0.01620913f;
    n += 1.06148922f;
    n += r3;
    n += 1.68250442f;
    n += r5;
    n *= -0.43267584f;
    n *= r4;
    r4 = n += 0.53721589f;
    r5 = n += 0.54271889f;
    n += 0.93596351f;
    r3 = n += -0.53319526f;
    n *= r2;
    n *= -5.15659332f;
    n += r0;
    n += r5;
    n *= 0.01165149f;
    n *= -2.86516523f;
    n += 0.73774642f;
    n *= r1;
    n += -0.00000003f;
    n *= r4;
    n *= r3;
    return n;
} // Solution
