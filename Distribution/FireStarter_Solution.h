// Run date: 11/16/23 11:16:44 Pacific Standard Time
// Run duration = 3184.611863 seconds
// Run generation = 34
// Run evolution = 5
// Run result = 0.00000966
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
// Run tests = 1
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
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

// Solution0 result = 0.00000125
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.08671689f;
    r1 = n *= -0.11950299f;
    r2 = n += -0.01748878f;
    n += 0.67024654f;
    r3 = n *= 0.61403859f;
    n = r2 *= n;
    r4 = n += -0.66701376f;
    r5 = n *= -0.86232334f;
    n *= r0;
    r0 = n *= -0.95055538f;
    r6 = n += 1.21591234f;
    n += 0.20701876f;
    n += 0.91949928f;
    n *= 1.19624209f;
    n += r3;
    n = r5 *= n;
    n *= r6;
    r6 = n *= 0.94174522f;
    n *= r1;
    n *= -11.66956425f;
    n *= r2;
    n *= r5;
    n *= -12.91454124f;
    r5 = n *= 0.00024694f;
    n *= 2.56877279f;
    n += r6;
    n += -1.76272857f;
    n += 0.71605778f;
    n *= r0;
    n += -1.31316686f;
    n *= r4;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00000966
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.39737797f;
    r1 = n *= -0.31387076f;
    r2 = n += 0.71506435f;
    n += -0.86152256f;
    r3 = n *= -0.07217469f;
    n = r2 *= n;
    r4 = n += 0.73793375f;
    r5 = n *= -0.66633970f;
    n *= r0;
    r0 = n *= 1.13127160f;
    r6 = n += 0.55089444f;
    n += -0.56386679f;
    n += 0.58790112f;
    n *= 0.74750602f;
    n += r3;
    n = r5 *= n;
    n *= r6;
    r6 = n *= 2.06157947f;
    n *= r1;
    n *= -0.10209975f;
    n *= r2;
    n *= r5;
    n *= 0.00242328f;
    r5 = n *= 13.63540268f;
    n *= -1.69439340f;
    n += r6;
    n += 0.76059270f;
    n += 1.73371661f;
    n *= r0;
    n += 0.81122684f;
    n *= r4;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00000584
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 1.09760988f;
    r1 = n *= -0.27201760f;
    r2 = n += 1.02986062f;
    n += 0.45498291f;
    r3 = n *= 0.46165517f;
    n = r2 *= n;
    r4 = n += -1.64344561f;
    r5 = n *= 1.98190355f;
    n *= r0;
    r0 = n *= 0.07496349f;
    r6 = n += 0.86509418f;
    n += 0.78145653f;
    n += 0.33823368f;
    n *= 0.62171137f;
    n += r3;
    n = r5 *= n;
    n *= r6;
    r6 = n *= -1.59374523f;
    n *= r1;
    n *= -1.37177229f;
    n *= r2;
    n *= r5;
    n *= 10.44563007f;
    r5 = n *= -0.00028976f;
    n *= -2.59428763f;
    n += r6;
    n += 2.20342112f;
    n += -0.26580846f;
    n *= r0;
    n += 1.26787007f;
    n *= r4;
    n += r5;
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
