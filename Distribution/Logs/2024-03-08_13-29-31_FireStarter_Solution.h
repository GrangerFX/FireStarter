// Run date: 03/08/24 13:29:31 Pacific Standard Time
// Run duration = 70670.169375 seconds
// Run generation = 287
// Run evolution = 24
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
// Run tests = 100
// Run streams = 4
// Run units = 4
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159250f;
    r1 = n *= -0.11553647f;
    n = r1 *= n;
    n = r1 += n;
    n *= -0.35098535f;
    r2 = n *= -0.05051542f;
    r3 = n *= 434.47854614f;
    n += -0.39247468f;
    r4 = n *= -1.05102205f;
    n = r3 += n;
    r5 = n += 1.16196430f;
    n *= r4;
    n += 1.63423502f;
    n *= 0.00508661f;
    n = r5 += n;
    n = r5 *= n;
    n *= 11.75030041f;
    n *= r1;
    n *= 0.11453277f;
    n += -0.76245588f;
    n = r0 *= n;
    n *= -0.96007395f;
    n = r2 *= n;
    n *= r2;
    n = r5 += n;
    n += 2.84905267f;
    n *= r0;
    n *= r3;
    n *= 0.41838646f;
    n *= 0.56310356f;
    n *= r5;
    n += 0.00000008f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065819f;
    r1 = n *= 0.02161865f;
    n = r1 *= n;
    n = r1 += n;
    n *= -0.75165999f;
    r2 = n *= 22.16385269f;
    r3 = n *= 13.68389893f;
    n += 1.08823884f;
    r4 = n *= -1.12045634f;
    n = r3 += n;
    r5 = n += 0.58031541f;
    n *= r4;
    n += -4.98638678f;
    n *= 0.00231694f;
    n = r5 += n;
    n = r5 *= n;
    n *= 1.11369729f;
    n *= r1;
    n *= 0.00008594f;
    n += 0.30397555f;
    n = r0 *= n;
    n *= 0.10200726f;
    n = r2 *= n;
    n *= r2;
    n = r5 += n;
    n += 2.40605068f;
    n *= r0;
    n *= r3;
    n *= 1.90646589f;
    n *= 1.30835652f;
    n *= r5;
    n += -0.11813152f;
    return n;
} // Solution1

// Solution2 result = 0.00000019
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.03097816f;
    n = r1 *= n;
    n = r1 += n;
    n *= -0.31997254f;
    r2 = n *= 4.44275808f;
    r3 = n *= -3.74837136f;
    n += -0.08967096f;
    r4 = n *= -1.30311084f;
    n = r3 += n;
    r5 = n += 2.57466650f;
    n *= r4;
    n += -0.03821127f;
    n *= 0.70759016f;
    n = r5 += n;
    n = r5 *= n;
    n *= 0.45132801f;
    n *= r1;
    n *= 1.34967875f;
    n += -0.04388504f;
    n = r0 *= n;
    n *= -6.85763550f;
    n = r2 *= n;
    n *= r2;
    n = r5 += n;
    n += 0.16762151f;
    n *= r0;
    n *= r3;
    n *= -594.57427979f;
    n *= -0.00462804f;
    n *= r5;
    n += 0.52359879f;
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
