// Run date: 10/06/24 15:56:50 Pacific Daylight Time
// Run duration = 452.882070 seconds
// Run generation = 4
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

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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
    float r0, r1, r2, r3, r4, r5;

    n *= -0.84385568f;
    n += 2.65105081f;
    r0 = n *= 1.06183290f;
    n += -0.00000002f;
    n *= 1.02941322f;
    r1 = n *= 0.19128901f;
    n *= r1;
    r1 = n += -0.30726141f;
    r2 = n *= 0.66059631f;
    r3 = n *= -0.24274258f;
    n *= r3;
    n += -0.92177022f;
    n = r1 *= n;
    r3 = n *= 0.43641084f;
    r4 = n += -0.25194573f;
    n += r2;
    r2 = n *= 3.67099190f;
    r5 = n += -1.34442830f;
    n *= r2;
    r2 = n *= -1.01244605f;
    n += r1;
    n = r2 *= n;
    n += r4;
    n *= -1.16082895f;
    n += -1.23335826f;
    n *= r5;
    n += -7.02981234f;
    n += -6.50452328f;
    n *= -0.00165302f;
    n += r2;
    n *= r0;
    n *= r3;
    return n;
} // Solution
