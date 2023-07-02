// Run date: 07/02/23 11:03:08 Pacific Daylight Time
// Run duration = 1674.827131 seconds
// Run generation = 114
// Run evolution = 0
// Run result = 0.00000060
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.34979352f;
    r0 = n += 1.09890878f;
    n = r0 += n;
    n *= 0.98843551f;
    r1 = n *= -0.20571089f;
    n = r0 *= n;
    r2 = n += 0.98217505f;
    r3 = n *= -0.03684308f;
    r4 = n *= -1.04049516f;
    r5 = n += 1.21474743f;
    n = r5 += n;
    n *= r5;
    r5 = n += -0.91251999f;
    r6 = n += -0.03341556f;
    n *= r4;
    n *= 0.32246947f;
    r4 = n += 0.88717979f;
    r7 = n += 5.44733858f;
    n += 0.81359732f;
    n *= 0.87919766f;
    n *= 0.00002094f;
    n *= r7;
    n = r0 *= n;
    n *= r0;
    n += r2;
    n += r5;
    n = r4 *= n;
    n *= r6;
    n *= r4;
    n *= r1;
    n *= r3;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.20319097f;
    r0 = n += 0.62799394f;
    n = r0 += n;
    n *= 0.32441908f;
    r1 = n *= -0.06730407f;
    n = r0 *= n;
    r2 = n += 0.08074346f;
    r3 = n *= 0.14093864f;
    r4 = n *= 0.25348619f;
    r5 = n += -0.02094663f;
    n = r5 += n;
    n *= r5;
    r5 = n += 0.31282887f;
    r6 = n += -7787.61523438f;
    n *= r4;
    n *= 0.07108596f;
    r4 = n += -1.39838707f;
    r7 = n += 2.30063772f;
    n += 1.56480646f;
    n *= 18.30585289f;
    n *= 0.04079857f;
    n *= r7;
    n = r0 *= n;
    n *= r0;
    n += r2;
    n += r5;
    n = r4 *= n;
    n *= r6;
    n *= r4;
    n *= r1;
    n *= r3;
    n += -0.11813191f;
    return n;
} // Solution1

// Solution2 result = 0.00000055
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.70271868f;
    r0 = n += 1.83971286f;
    n = r0 += n;
    n *= 0.09073932f;
    r1 = n *= 0.34085262f;
    n = r0 *= n;
    r2 = n += -0.30443719f;
    r3 = n *= -0.48524436f;
    r4 = n *= 0.25062573f;
    r5 = n += 1.94618726f;
    n = r5 += n;
    n *= r5;
    r5 = n += -0.00666580f;
    r6 = n += -3.34239984f;
    n *= r4;
    n *= -0.08405187f;
    r4 = n += -0.19141689f;
    r7 = n += 0.06623888f;
    n += -6.01168919f;
    n *= 6.38201904f;
    n *= -0.02036260f;
    n *= r7;
    n = r0 *= n;
    n *= r0;
    n += r2;
    n += r5;
    n = r4 *= n;
    n *= r6;
    n *= r4;
    n *= r1;
    n *= r3;
    n += 0.52359867f;
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
