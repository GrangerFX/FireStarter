// Run date: 03/18/24 16:33:57 Pacific Daylight Time
// Run duration = 16190.148042 seconds
// Run generation = 1157
// Run evolution = 9
// Run max result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.56993586f;
    r0 = n += -2.57165694f;
    r1 = n *= -0.54549873f;
    n *= 1.02448165f;
    n = r1 += n;
    n = r0 += n;
    n *= r0;
    n *= 1.19653094f;
    r0 = n += -0.55282545f;
    r2 = n += 0.42422971f;
    n = r2 += n;
    r3 = n *= 0.64749092f;
    r4 = n += -4.53002787f;
    n *= 0.66286701f;
    r5 = n += -2.69103980f;
    n *= -0.74408048f;
    n = r4 += n;
    n *= r4;
    n = r2 *= n;
    n = r0 += n;
    n *= r2;
    n += r5;
    n += 0.69549870f;
    n *= 0.77010876f;
    n = r0 *= n;
    n *= r3;
    n *= r1;
    n *= r0;
    n += 0.08344907f;
    n += -0.08344908f;
    r0 = n *= -0.50971144f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.61922586f;
    r0 = n += -1.47143269f;
    r1 = n *= 0.31649470f;
    n *= 2.69829988f;
    n = r1 += n;
    n = r0 += n;
    n *= r0;
    n *= 0.00707038f;
    r0 = n += -0.69992894f;
    r2 = n += -0.83645564f;
    n = r2 += n;
    r3 = n *= 0.00190215f;
    r4 = n += 1.29653347f;
    n *= -0.17768419f;
    r5 = n += 0.98072875f;
    n *= -1.26904893f;
    n = r4 += n;
    n *= r4;
    n = r2 *= n;
    n = r0 += n;
    n *= r2;
    n += r5;
    n += 2.68550611f;
    n *= 1.59824598f;
    n = r0 *= n;
    n *= r3;
    n *= r1;
    n *= r0;
    n += -0.10006772f;
    n += 0.07018448f;
    r0 = n *= 1.97655666f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.91654342f;
    r0 = n += -1.70145035f;
    r1 = n *= 1.52690268f;
    n *= -1.51251292f;
    n = r1 += n;
    n = r0 += n;
    n *= r0;
    n *= -0.77428734f;
    r0 = n += 1.98568165f;
    r2 = n += -1.80324841f;
    n = r2 += n;
    r3 = n *= -0.19884188f;
    r4 = n += -0.80670249f;
    n *= -1.90288699f;
    r5 = n += 0.34733707f;
    n *= 0.55893683f;
    n = r4 += n;
    n *= r4;
    n = r2 *= n;
    n = r0 += n;
    n *= r2;
    n += r5;
    n += -0.41147476f;
    n *= -0.49863443f;
    n = r0 *= n;
    n *= r3;
    n *= r1;
    n *= r0;
    n += 0.70463729f;
    n += -0.78628719f;
    r0 = n *= -3.20636392f;
    n += r0;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
