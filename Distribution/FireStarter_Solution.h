// Run date: 11/08/23 15:22:38 Pacific Standard Time
// Run duration = 53041.594265 seconds
// Run generation = 75
// Run evolution = 11
// Run result = 0.00000048
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
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.35895103f;
    r1 = n += -1.12767792f;
    n = r1 += n;
    r2 = n *= -0.56204170f;
    n += 0.66957974f;
    n += r0;
    n += -1.79725766f;
    n *= r1;
    r1 = n += 2.29800153f;
    n = r2 *= n;
    n *= 0.92940688f;
    n *= -0.12653959f;
    r0 = n *= -2.07003570f;
    n = r0 *= n;
    n += -0.74852818f;
    n += r0;
    r0 = n *= 0.07565726f;
    r3 = n += -2.71360683f;
    n += -7.42908525f;
    n *= 0.00000910f;
    n += r3;
    n *= -1.17411005f;
    n *= 0.85576355f;
    n += r1;
    r1 = n += -0.29722238f;
    n *= r1;
    n *= r0;
    n *= r2;
    r2 = n *= 2.03720164f;
    n += -0.00000021f;
    n += r2;
    n *= -0.20420040f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.19029889f;
    r1 = n += -0.58814883f;
    n = r1 += n;
    r2 = n *= -0.54470384f;
    n += -0.52603477f;
    n += r0;
    n += -0.06211411f;
    n *= r1;
    r1 = n += 0.49109215f;
    n = r2 *= n;
    n *= 2.23748493f;
    n *= 2.16322923f;
    r0 = n *= -0.73413748f;
    n = r0 *= n;
    n += -2.95060778f;
    n += r0;
    r0 = n *= 1.60958695f;
    r3 = n += 3.25014758f;
    n += 5.12960005f;
    n *= 0.00000776f;
    n += r3;
    n *= -13.57661438f;
    n *= 0.00056430f;
    n += r1;
    r1 = n += 1.76468968f;
    n *= r1;
    n *= r0;
    n *= r2;
    r2 = n *= 0.10648499f;
    n += 0.05684763f;
    n += r2;
    n *= -2.07803988f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.27780539f;
    r1 = n += -0.72729272f;
    n = r1 += n;
    r2 = n *= -0.65563005f;
    n += -0.64448351f;
    n += r0;
    n += -0.08280922f;
    n *= r1;
    r1 = n += 3.05984378f;
    n = r2 *= n;
    n *= -1.63930619f;
    n *= 0.78544998f;
    r0 = n *= 0.45545816f;
    n = r0 *= n;
    n += -3.61814976f;
    n += r0;
    r0 = n *= 0.08180057f;
    r3 = n += 0.75790775f;
    n += -12.52889919f;
    n *= -0.00001327f;
    n += r3;
    n *= -0.06416693f;
    n *= 2.12294316f;
    n += r1;
    r1 = n += 0.19152224f;
    n *= r1;
    n *= r0;
    n *= r2;
    r2 = n *= 0.10784715f;
    n += -0.37875631f;
    n += r2;
    n *= -1.38241589f;
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
