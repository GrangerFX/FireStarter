// Run date: 01/06/24 10:37:36 Pacific Standard Time
// Run duration = 3637.905412 seconds
// Run generation = 58
// Run evolution = 4
// Run max result = 0.00000024
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
// Run tests = 1
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159179f;
    r1 = n += -0.00000112f;
    n = r0 *= n;
    n *= 0.18537974f;
    r2 = n += -1.26467168f;
    n += 1.63428271f;
    r3 = n += -0.93888795f;
    n *= 0.06346372f;
    r4 = n += -1.48801219f;
    n *= r4;
    r4 = n *= -1.68298757f;
    r5 = n *= -0.11383253f;
    r6 = n += 0.69054043f;
    r7 = n *= 0.00557577f;
    n *= 120890.07812500f;
    n += -13.83336639f;
    n *= r7;
    r7 = n += 1.11176717f;
    n *= r0;
    n *= 0.00000213f;
    n *= r7;
    n *= r3;
    n = r6 += n;
    n = r4 += n;
    n *= r5;
    n *= r2;
    n *= r6;
    n *= r4;
    n *= 0.16399305f;
    n += -0.19344559f;
    n *= r1;
    n += -0.00000028f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065795f;
    r1 = n += -0.00000078f;
    n = r0 *= n;
    n *= -0.13288806f;
    r2 = n += 1.13124299f;
    n += -0.21032791f;
    r3 = n += -0.34266767f;
    n *= -0.05342006f;
    r4 = n += -1.13471699f;
    n *= r4;
    r4 = n *= -1.43842947f;
    r5 = n *= -0.14833254f;
    r6 = n += 0.36288762f;
    r7 = n *= 0.06144318f;
    n *= -1268.80615234f;
    n += 3.65405846f;
    n *= r7;
    r7 = n += 7.65250969f;
    n *= r0;
    n *= -0.00000106f;
    n *= r7;
    n *= r3;
    n = r6 += n;
    n = r4 += n;
    n *= r5;
    n *= r2;
    n *= r6;
    n *= r4;
    n *= -2.01579738f;
    n += -0.36901939f;
    n *= r1;
    n += -0.11813203f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799431f;
    r1 = n += 0.00000069f;
    n = r0 *= n;
    n *= -0.16072360f;
    r2 = n += 0.98624855f;
    n += -0.71552235f;
    r3 = n += 1.81374466f;
    n *= -0.28798234f;
    r4 = n += -1.00794160f;
    n *= r4;
    r4 = n *= 0.23711719f;
    r5 = n *= 0.19452238f;
    r6 = n += 1.81366158f;
    r7 = n *= -0.00138845f;
    n *= 15430.94628906f;
    n += -2.88008523f;
    n *= r7;
    r7 = n += -2.32373071f;
    n *= r0;
    n *= 0.00021266f;
    n *= r7;
    n *= r3;
    n = r6 += n;
    n = r4 += n;
    n *= r5;
    n *= r2;
    n *= r6;
    n *= r4;
    n *= -0.76779544f;
    n += 0.13209864f;
    n *= r1;
    n += 0.52359903f;
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
