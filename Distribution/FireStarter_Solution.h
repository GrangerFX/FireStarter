// Run date: 11/10/23 13:59:50 Pacific Standard Time
// Run duration = 2427.996608 seconds
// Run generation = 77
// Run evolution = 14
// Run result = 0.00000021
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
// Run units = 4
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.22782870f;
    r2 = n *= 0.00000000f;
    n *= 54.14855957f;
    r3 = n += -0.01366097f;
    r4 = n *= -229460.23437500f;
    n *= -0.00354451f;
    n = r1 *= n;
    n *= r0;
    r0 = n *= 0.09475150f;
    n += r2;
    r2 = n += -2.10277963f;
    n *= 0.00469511f;
    r5 = n *= -4.75825453f;
    n += -0.10580224f;
    n *= r0;
    n += r2;
    r2 = n *= 0.06146336f;
    n *= 0.30546114f;
    r0 = n += -0.09818031f;
    r6 = n += -0.03108545f;
    n *= r5;
    n += -0.34816900f;
    n *= -0.41807422f;
    n += r3;
    n *= r6;
    n *= r4;
    n *= r2;
    n *= 0.31044999f;
    n *= r0;
    n *= r1;
    n += -0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09067988f;
    r1 = n *= -0.19566627f;
    r2 = n *= -0.00000010f;
    n *= -6.04812050f;
    r3 = n += -0.15500093f;
    r4 = n *= 1.13655663f;
    n *= -0.00852119f;
    n = r1 *= n;
    n *= r0;
    r0 = n *= -2.85052848f;
    n += r2;
    r2 = n += -0.00591004f;
    n *= -0.39068618f;
    r5 = n *= -0.94368368f;
    n += -0.71366262f;
    n *= r0;
    n += r2;
    r2 = n *= 28189.62695312f;
    n *= 0.11930320f;
    r0 = n += -7.26080322f;
    r6 = n += 1.12045610f;
    n *= r5;
    n += 1.21409905f;
    n *= 0.53625214f;
    n += r3;
    n *= r6;
    n *= r4;
    n *= r2;
    n *= 0.34329700f;
    n *= r0;
    n *= r1;
    n += -0.11815532f;
    return n;
} // Solution1

// Solution2 result = 0.00000021
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -188092.92187500f;
    r2 = n *= 0.00000000f;
    n *= 5902.07812500f;
    r3 = n += 0.12652774f;
    r4 = n *= -0.14364949f;
    n *= -0.04622505f;
    n = r1 *= n;
    n *= r0;
    r0 = n *= -0.01127812f;
    n += r2;
    r2 = n += -10.68066597f;
    n *= 0.00920657f;
    r5 = n *= -0.77728349f;
    n += 0.18969254f;
    n *= r0;
    n += r2;
    r2 = n *= 0.07889241f;
    n *= -0.45241719f;
    r0 = n += 1.54543388f;
    r6 = n += 0.62554485f;
    n *= r5;
    n += -0.04074002f;
    n *= 0.01113627f;
    n += r3;
    n *= r6;
    n *= r4;
    n *= r2;
    n *= 0.65520161f;
    n *= r0;
    n *= r1;
    n += 0.52359873f;
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
