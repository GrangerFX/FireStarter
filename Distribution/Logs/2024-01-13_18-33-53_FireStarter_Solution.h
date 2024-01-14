// Run date: 01/13/24 18:33:53 Pacific Standard Time
// Run duration = 10820.074496 seconds
// Run generation = 61
// Run evolution = 5
// Run max result = 0.00000048
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.12390253f;
    n = r1 *= n;
    n += -1.54712749f;
    n = r1 *= n;
    n = r1 += n;
    n *= 0.45708489f;
    r2 = n += 0.17631818f;
    n += -0.10976073f;
    n *= r2;
    r2 = n *= 0.01442667f;
    n *= 0.00482037f;
    n *= -8.26217937f;
    n *= -48.80265808f;
    r3 = n += -1.34238851f;
    r4 = n *= -0.30618784f;
    n = r1 += n;
    n += -0.80643886f;
    n += 18.23514557f;
    r5 = n *= -0.40314695f;
    n *= r5;
    n = r4 *= n;
    n += r3;
    n *= r2;
    n *= r4;
    n += r1;
    n *= r0;
    r0 = n += -0.22167273f;
    n *= -0.17104159f;
    n += r0;
    n *= -2.49976873f;
    n += -0.45935118f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065819f;
    r1 = n *= 0.07523657f;
    n = r1 *= n;
    n += -2.51239562f;
    n = r1 *= n;
    n = r1 += n;
    n *= 1.30786860f;
    r2 = n += 0.34154749f;
    n += 1.97901213f;
    n *= r2;
    r2 = n *= -2.40347147f;
    n *= -0.76779568f;
    n *= 24.16368675f;
    n *= -0.00184748f;
    r3 = n += -1.15828967f;
    r4 = n *= 1.78533196f;
    n = r1 += n;
    n += -0.79429424f;
    n += 5.50317001f;
    r5 = n *= 0.29735133f;
    n *= r5;
    n = r4 *= n;
    n += r3;
    n *= r2;
    n *= r4;
    n += r1;
    n *= r0;
    r0 = n += 1.42211640f;
    n *= -1.19262516f;
    n += r0;
    n *= -0.71927744f;
    n += -0.31516704f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= 0.10469310f;
    n = r1 *= n;
    n += -1.68154323f;
    n = r1 *= n;
    n = r1 += n;
    n *= 3.12257242f;
    r2 = n += 0.11421859f;
    n += 1.38859320f;
    n *= r2;
    r2 = n *= 0.90267360f;
    n *= 0.00002266f;
    n *= -28.29087257f;
    n *= 1.77692258f;
    r3 = n += 0.88915026f;
    r4 = n *= 0.34827396f;
    n = r1 += n;
    n += 0.72996378f;
    n += 1.93629026f;
    r5 = n *= -0.34903884f;
    n *= r5;
    n = r4 *= n;
    n += r3;
    n *= r2;
    n *= r4;
    n += r1;
    n *= r0;
    r0 = n += -0.04442393f;
    n *= 0.87459660f;
    n += r0;
    n *= -1.43052554f;
    n += 0.40446898f;
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
