// Run date: 01/09/24 18:18:05 Pacific Standard Time
// Run duration = 16393.315617 seconds
// Run generation = 125
// Run evolution = 10
// Run max result = 0.00000060
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
// Run tests = 4
// Run states = 64
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

// Solution0 result = 0.00000060
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 1.14228034f;
    r1 = n *= -0.42727053f;
    n += 1.53293562f;
    r2 = n *= 1.88010836f;
    n += 2.88002133f;
    n *= 0.01200945f;
    n = r0 *= n;
    n *= 0.05531603f;
    r3 = n *= -1.85695577f;
    r4 = n *= -3.10892367f;
    n *= -1.26318836f;
    n += -0.89072782f;
    n = r0 *= n;
    n *= 6.82484961f;
    n += 4.05070448f;
    n *= r4;
    n *= -1.05285680f;
    n = r3 *= n;
    n += r1;
    n += 1.53493464f;
    r1 = n *= -2.33301210f;
    n += 2.23188853f;
    n *= r3;
    n += r1;
    n *= 1.43964410f;
    n *= r0;
    n += r2;
    r2 = n *= -0.47699118f;
    r0 = n += -0.00000017f;
    n *= r0;
    n += -1.88988101f;
    n *= r2;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.93219382f;
    r1 = n *= -0.48333347f;
    n += -1.33611310f;
    r2 = n *= 0.54251403f;
    n += -0.78632087f;
    n *= -0.01459496f;
    n = r0 *= n;
    n *= -3.25653195f;
    r3 = n *= -0.76406854f;
    r4 = n *= -0.54173779f;
    n *= 2.59670115f;
    n += 3.08308387f;
    n = r0 *= n;
    n *= 2.52407050f;
    n += 5.04012775f;
    n *= r4;
    n *= -0.10950642f;
    n = r3 *= n;
    n += r1;
    n += -1.39208949f;
    r1 = n *= 0.49172190f;
    n += -0.49174210f;
    n *= r3;
    n += r1;
    n *= -1.80287361f;
    n *= r0;
    n += r2;
    r2 = n *= 1.65223706f;
    r0 = n += -0.07595188f;
    n *= r0;
    n += -2.33366561f;
    n *= r2;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.30633628f;
    r1 = n *= 1.52117646f;
    n += -1.54126048f;
    r2 = n *= 0.90126842f;
    n += -0.81074411f;
    n *= 0.66577899f;
    n = r0 *= n;
    n *= -0.44627592f;
    r3 = n *= 0.02380778f;
    r4 = n *= 6.54039383f;
    n *= 1.32879794f;
    n += 0.85326940f;
    n = r0 *= n;
    n *= -6.97002602f;
    n += 8.06410789f;
    n *= r4;
    n *= 0.20796981f;
    n = r3 *= n;
    n += r1;
    n += -1.21916318f;
    r1 = n *= 0.89687312f;
    n += -0.83842242f;
    n *= r3;
    n += r1;
    n *= -0.38243395f;
    n *= r0;
    n += r2;
    r2 = n *= 1.26628006f;
    r0 = n += 0.54973334f;
    n *= r0;
    n += -1.46226788f;
    n *= r2;
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
