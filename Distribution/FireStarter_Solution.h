// Run date: 08/05/23 10:49:00 Pacific Daylight Time
// Run duration = 496.402394 seconds
// Run generation = 29
// Run evolution = 0
// Run result = 0.00000190
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
// Run seeds = 64
// Run tests = 0
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

// Solution0 result = 0.00000143
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159250f;
    r1 = n *= -0.19051959f;
    r2 = n *= -1.20014322f;
    n *= r2;
    r2 = n *= -1.30019081f;
    r3 = n *= 1.04676473f;
    n += 0.04952020f;
    n *= 0.26430625f;
    n *= -0.05146594f;
    r4 = n += -1.19071245f;
    r5 = n *= -0.97131079f;
    r6 = n *= -1.85624266f;
    n = r5 *= n;
    n *= -0.39143723f;
    r7 = n *= 1.39412844f;
    n *= 0.22532888f;
    n *= r2;
    n = r4 *= n;
    r2 = n += -2.02619958f;
    n *= 0.28274211f;
    n *= r1;
    n *= 0.62428254f;
    n *= r5;
    n = r2 *= n;
    n *= r0;
    n += r3;
    n += r6;
    n += r4;
    n *= r2;
    n *= r7;
    n += 1.26494455f;
    n += -1.26494455f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065890f;
    r1 = n *= -0.09512894f;
    r2 = n *= -0.75968510f;
    n *= r2;
    r2 = n *= -1.35621250f;
    r3 = n *= 22.80692673f;
    n += 0.28473431f;
    n *= -2.40445852f;
    n *= 0.01579441f;
    r4 = n += -0.95381349f;
    r5 = n *= 1.63311982f;
    r6 = n *= 1.45442712f;
    n = r5 *= n;
    n *= 2.10125709f;
    r7 = n *= 0.18596648f;
    n *= -0.02712646f;
    n *= r2;
    n = r4 *= n;
    r2 = n += 0.72928613f;
    n *= 2.35586333f;
    n *= r1;
    n *= -0.79114723f;
    n *= r5;
    n = r2 *= n;
    n *= r0;
    n += r3;
    n += r6;
    n += r4;
    n *= r2;
    n *= r7;
    n += 0.02954078f;
    n += -0.14767271f;
    return n;
} // Solution1

// Solution2 result = 0.00000190
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799431f;
    r1 = n *= 0.34848097f;
    r2 = n *= 0.70752245f;
    n *= r2;
    r2 = n *= -0.94067127f;
    r3 = n *= -3.10111952f;
    n += -1.12181854f;
    n *= 0.07664648f;
    n *= 1.41299093f;
    r4 = n += -0.91924894f;
    r5 = n *= -1.54889226f;
    r6 = n *= -0.90297049f;
    n = r5 *= n;
    n *= 2.12351942f;
    r7 = n *= -1.29399371f;
    n *= 0.00072831f;
    n *= r2;
    n = r4 *= n;
    r2 = n += -1.09023380f;
    n *= 0.27236533f;
    n *= r1;
    n *= -0.40253052f;
    n *= r5;
    n = r2 *= n;
    n *= r0;
    n += r3;
    n += r6;
    n += r4;
    n *= r2;
    n *= r7;
    n += -0.17561202f;
    n += 0.69921124f;
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
