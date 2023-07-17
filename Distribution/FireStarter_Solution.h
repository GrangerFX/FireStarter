// Run date: 07/17/23 11:03:17 Pacific Daylight Time
// Run duration = 40.796657 seconds
// Run generation = 1
// Run evolution = 0
// Run result = 0.00003362
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000602
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.33395156f;
    n += 1.04913962f;
    r0 = n *= -1.18928576f;
    r1 = n *= 0.20784089f;
    n = r0 *= n;
    r2 = n *= 2.73647475f;
    n *= -0.13529654f;
    r3 = n *= 0.08014852f;
    n *= -1.61458838f;
    n *= r0;
    n *= 1.57169712f;
    r0 = n += 1.93857932f;
    r4 = n *= -1.04912281f;
    n *= -0.21192572f;
    n += 1.71691966f;
    n *= 1.77224946f;
    n *= -2.57552767f;
    n *= r3;
    n += 1.04356921f;
    r3 = n += -1.66331482f;
    n *= -0.76855844f;
    r5 = n += -1.65815890f;
    n += r4;
    n += r2;
    r2 = n += 0.27984643f;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r2;
    n *= r0;
    n += -0.00000030f;
    return n;
} // Solution0

// Solution1 result = 0.00000489
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.24451002f;
    n += -0.75569701f;
    r0 = n *= 0.20167157f;
    r1 = n *= 0.86321819f;
    n = r0 *= n;
    r2 = n *= -1.57604170f;
    n *= 1.42269611f;
    r3 = n *= 3.26735377f;
    n *= -2.71829700f;
    n *= r0;
    n *= 0.48881227f;
    r0 = n += 0.51890397f;
    r4 = n *= 0.12290500f;
    n *= -0.28410557f;
    n += -1.58775866f;
    n *= 2.02793384f;
    n *= 1.17454219f;
    n *= r3;
    n += -0.65577459f;
    r3 = n += -0.91112918f;
    n *= 0.56865519f;
    r5 = n += 0.03976675f;
    n += r4;
    n += r2;
    r2 = n += -1.98209703f;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r2;
    n *= r0;
    n += -0.11813135f;
    return n;
} // Solution1

// Solution2 result = 0.00003362
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.57133567f;
    n += 1.49576020f;
    r0 = n *= -1.69330001f;
    r1 = n *= -0.21844581f;
    n = r0 *= n;
    r2 = n *= 0.29395461f;
    n *= 0.92955339f;
    r3 = n *= 0.88498324f;
    n *= 3.51276636f;
    n *= r0;
    n *= 0.00184742f;
    r0 = n += 1.72049475f;
    r4 = n *= 1.67432904f;
    n *= -1.36017621f;
    n += 0.99379236f;
    n *= -0.87854475f;
    n *= 0.27512610f;
    n *= r3;
    n += 1.51882827f;
    r3 = n += -0.33746010f;
    n *= -0.23621596f;
    r5 = n += -1.61457503f;
    n += r4;
    n += r2;
    r2 = n += 0.62012601f;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r2;
    n *= r0;
    n += 0.52362019f;
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
