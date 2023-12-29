// Run date: 12/29/23 08:42:50 Pacific Standard Time
// Run duration = 8658.434096 seconds
// Run generation = 38
// Run evolution = 2
// Run max result = 0.00000012
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n *= 0.31414568f;
    n *= 0.40661907f;
    r1 = n *= -0.85665494f;
    n = r1 *= n;
    r2 = n *= -0.10490453f;
    r3 = n *= -3.42786241f;
    n *= 1.02249324f;
    n *= -4.01006413f;
    n *= r2;
    r2 = n += 1.91388690f;
    n += -12.28878689f;
    n *= -10.58592319f;
    n *= -0.15725724f;
    r4 = n *= 0.00004205f;
    n += 1.10091293f;
    n = r2 *= n;
    r5 = n *= -0.86346751f;
    n += r4;
    n = r1 += n;
    r4 = n *= 2.25837731f;
    n *= r3;
    n *= r4;
    n += -0.62843138f;
    r4 = n *= -2.09441137f;
    n += r2;
    n *= r5;
    n *= r1;
    n *= r4;
    n *= r0;
    n += -0.00000004f;
    n *= -0.06714153f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    n *= -3.95329428f;
    n *= -1.76353717f;
    r1 = n *= 0.00941149f;
    n = r1 *= n;
    r2 = n *= 2.70302010f;
    r3 = n *= -0.52061921f;
    n *= -0.54295260f;
    n *= 12.41578102f;
    n *= r2;
    r2 = n += 3.38045979f;
    n += -2.82363772f;
    n *= 0.08400313f;
    n *= -2.14786768f;
    r4 = n *= -0.07011104f;
    n += -0.05304911f;
    n = r2 *= n;
    r5 = n *= 5.13843822f;
    n += r4;
    n = r1 += n;
    r4 = n *= -3.71997809f;
    n *= r3;
    n *= r4;
    n += 1.06092095f;
    r4 = n *= 1.38750672f;
    n += r2;
    n *= r5;
    n *= r1;
    n *= r4;
    n *= r0;
    n += 0.13173567f;
    n *= -0.89673352f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    n *= 0.47775006f;
    n *= 0.23374930f;
    r1 = n *= -0.90458173f;
    n = r1 *= n;
    r2 = n *= -1.52079332f;
    r3 = n *= -0.93016356f;
    n *= -0.08025712f;
    n *= 1.26933968f;
    n *= r2;
    r2 = n += 1.00222349f;
    n += 3.61536717f;
    n *= -0.00000002f;
    n *= 2.59563255f;
    r4 = n *= -0.67091829f;
    n += -1.95946968f;
    n = r2 *= n;
    r5 = n *= 0.53939658f;
    n += r4;
    n = r1 += n;
    r4 = n *= 2.39680409f;
    n *= r3;
    n *= r4;
    n += -1.61649966f;
    r4 = n *= -1.64325035f;
    n += r2;
    n *= r5;
    n *= r1;
    n *= r4;
    n *= r0;
    n += -1.08071756f;
    n *= -0.48449168f;
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
