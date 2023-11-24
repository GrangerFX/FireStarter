// Run date: 11/24/23 10:21:14 Pacific Standard Time
// Run duration = 2308.194296 seconds
// Run generation = 7
// Run evolution = 5
// Run result = 0.00001943
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00001732
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.05142282f;
    n += 0.01353277f;
    r1 = n += -0.17507313f;
    r2 = n *= -0.07137036f;
    n += 0.01153055f;
    n = r0 *= n;
    r3 = n += 0.00000013f;
    n *= -10.22777748f;
    r4 = n *= -0.00944203f;
    n *= 1.54765916f;
    r5 = n += 0.00618024f;
    n += r0;
    n *= r1;
    r1 = n *= -0.02190522f;
    r0 = n *= -0.00087624f;
    n = r5 += n;
    r6 = n *= -328634.03125000f;
    n *= r6;
    n *= r5;
    r5 = n *= -0.09370948f;
    n += -5.85877752f;
    n = r0 += n;
    n *= r5;
    n += -6.64276505f;
    n *= -0.11400508f;
    n *= -2.63841486f;
    n *= r1;
    n *= r3;
    n *= r0;
    n += r2;
    n *= -0.00935198f;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00001943
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.46900657f;
    n += 0.21886282f;
    r1 = n += -1.63943398f;
    r2 = n *= -0.00040968f;
    n += 0.14793505f;
    n = r0 *= n;
    r3 = n += 0.09778457f;
    n *= 4.63383675f;
    r4 = n *= -0.03518471f;
    n *= 0.09827401f;
    r5 = n += 0.16506128f;
    n += r0;
    n *= r1;
    r1 = n *= 0.18429556f;
    r0 = n *= -0.11398136f;
    n = r5 += n;
    r6 = n *= 0.10797635f;
    n *= r6;
    n *= r5;
    r5 = n *= 123229.92968750f;
    n += -2.39378023f;
    n = r0 += n;
    n *= r5;
    n += 0.32615578f;
    n *= -4.09270144f;
    n *= -2.09623909f;
    n *= r1;
    n *= r3;
    n *= r0;
    n += r2;
    n *= -0.17468995f;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00001800
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.19127640f;
    n += 0.25218961f;
    r1 = n += -0.23710209f;
    r2 = n *= 0.25706503f;
    n += -0.00455963f;
    n = r0 *= n;
    r3 = n += -0.07661691f;
    n *= 1.28563106f;
    r4 = n *= -1.12060606f;
    n *= -0.09777017f;
    r5 = n += -0.22408773f;
    n += r0;
    n *= r1;
    r1 = n *= -0.75176960f;
    r0 = n *= -0.00234254f;
    n = r5 += n;
    r6 = n *= 0.07337569f;
    n *= r6;
    n *= r5;
    r5 = n *= -211220.00000000f;
    n += -1.81631553f;
    n = r0 += n;
    n *= r5;
    n += 2.51034427f;
    n *= 0.23519146f;
    n *= -0.38912600f;
    n *= r1;
    n *= r3;
    n *= r0;
    n += r2;
    n *= -2.18786860f;
    n += r4;
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
