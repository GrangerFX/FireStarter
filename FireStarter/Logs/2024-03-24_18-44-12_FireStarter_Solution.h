// Run date: 03/24/24 18:44:12 Pacific Daylight Time
// Run duration = 1760.917043 seconds
// Run generation = 1880
// Run evolution = 12
// Run max result = 0.00000019
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
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 0.10901078f;
    n *= -2.15880990f;
    r0 = n += 0.73932213f;
    r1 = n *= 0.37338749f;
    n *= r0;
    r0 = n += -0.93857396f;
    n *= 1.23835623f;
    r2 = n *= 0.80137074f;
    n = r2 *= n;
    n += 2.41118765f;
    r3 = n *= -1.66580212f;
    n *= 0.68167347f;
    n += 0.65490121f;
    n = r0 *= n;
    n += -0.66615701f;
    n += -0.92586172f;
    n *= -0.44382143f;
    n *= r3;
    r3 = n += -2.80205870f;
    n += r0;
    n *= -1.58113098f;
    n *= r1;
    n = r2 *= n;
    n = r2 += n;
    r1 = n *= -0.00003759f;
    n += r3;
    n *= r1;
    n *= 262.13439941f;
    n *= 0.10128558f;
    n += r2;
    n += -0.00000003f;
    n *= -1.29706681f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -1.92445493f;
    n *= -0.28857481f;
    r0 = n += -1.71639490f;
    r1 = n *= 0.10930022f;
    n *= r0;
    r0 = n += -0.87256521f;
    n *= 0.52849919f;
    r2 = n *= 1.41976285f;
    n = r2 *= n;
    n += 0.63852042f;
    r3 = n *= -1.34674132f;
    n *= 0.99458110f;
    n += -2.44448018f;
    n = r0 *= n;
    n += -3.65787339f;
    n += -5.90852070f;
    n *= 0.02036776f;
    n *= r3;
    r3 = n += 1.55975163f;
    n += r0;
    n *= 2.07547498f;
    n *= r1;
    n = r2 *= n;
    n = r2 += n;
    r1 = n *= -0.00000000f;
    n += r3;
    n *= r1;
    n *= 9.28850174f;
    n *= -19.08137894f;
    n += r2;
    n += 0.05940004f;
    n *= -1.98875058f;
    return n;
} // Solution1

// Solution2 result = 0.00000019
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 1.24186885f;
    n *= 0.16989557f;
    r0 = n += -0.55236530f;
    r1 = n *= 0.89209872f;
    n *= r0;
    r0 = n += -1.78428817f;
    n *= 2.07159948f;
    r2 = n *= 0.36289874f;
    n = r2 *= n;
    n += 0.41303241f;
    r3 = n *= -0.94748861f;
    n *= 0.18223506f;
    n += -1.02502477f;
    n = r0 *= n;
    n += -1.47296774f;
    n += 0.15524645f;
    n *= 2.57703733f;
    n *= r3;
    r3 = n += 1.50609291f;
    n += r0;
    n *= -0.82490748f;
    n *= r1;
    n = r2 *= n;
    n = r2 += n;
    r1 = n *= -0.00040800f;
    n += r3;
    n *= r1;
    n *= 0.07763387f;
    n *= 60.05622482f;
    n += r2;
    n += -0.71669573f;
    n *= -0.73057365f;
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
