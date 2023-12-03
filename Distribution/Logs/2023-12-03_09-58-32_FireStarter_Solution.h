// Run date: 12/03/23 09:58:32 Pacific Standard Time
// Run duration = 2030.886725 seconds
// Run generation = 38
// Run evolution = 10
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159250f;
    r1 = n *= -0.76898897f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.14229852f;
    n *= 0.28120977f;
    n *= r1;
    n += 7.56337023f;
    n += 4.79702473f;
    r1 = n *= 0.30236000f;
    n = r2 *= n;
    n *= 3.14068723f;
    n *= 2.70268846f;
    n = r2 *= n;
    r3 = n += -3.67431831f;
    n += r2;
    n *= 0.00666602f;
    r2 = n += -0.42309186f;
    r4 = n += -0.30636737f;
    r5 = n *= -1.75546312f;
    n += r2;
    n *= r4;
    n *= r3;
    r3 = n += 0.72150213f;
    n += r5;
    n += r1;
    n *= r0;
    n *= 0.06596833f;
    n *= r3;
    n *= -1.26959264f;
    n += 0.00873714f;
    n += -0.00873707f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065843f;
    r1 = n *= -1.04357719f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.12111897f;
    n *= -2.89296889f;
    n *= r1;
    n += -1.94517434f;
    n += -0.41840389f;
    r1 = n *= -3.18056989f;
    n = r2 *= n;
    n *= 6.35873985f;
    n *= -4.64259338f;
    n = r2 *= n;
    r3 = n += 1.14749432f;
    n += r2;
    n *= -0.00029961f;
    r2 = n += 1.06764913f;
    r4 = n += -0.75929189f;
    r5 = n *= 1.06465364f;
    n += r2;
    n *= r4;
    n *= r3;
    r3 = n += 0.39422029f;
    n += r5;
    n += r1;
    n *= r0;
    n *= -0.82877415f;
    n *= r3;
    n *= -1.96523607f;
    n += 0.11971907f;
    n += -0.23785070f;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= -0.01762381f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.05190683f;
    n *= -2.28031349f;
    n *= r1;
    n += -0.00941651f;
    n += -2.50080919f;
    r1 = n *= 2.48202848f;
    n = r2 *= n;
    n *= 0.97445416f;
    n *= 0.25920415f;
    n = r2 *= n;
    r3 = n += -0.27739266f;
    n += r2;
    n *= -0.12236776f;
    r2 = n += 2.41176414f;
    r4 = n += -0.05954063f;
    r5 = n *= -0.12908733f;
    n += r2;
    n *= r4;
    n *= r3;
    r3 = n += -1.02332163f;
    n += r5;
    n += r1;
    n *= r0;
    n *= -0.26402268f;
    n *= r3;
    n *= 0.08807469f;
    n += 0.59009969f;
    n += -0.06650103f;
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
