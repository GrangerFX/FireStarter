// Run date: 11/08/23 09:54:06 Pacific Standard Time
// Run duration = 6752.678916 seconds
// Run generation = 33
// Run evolution = 34
// Run result = 0.00000334
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

// Solution0 result = 0.00000097
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.30056292f;
    r0 = n += -1.56510031f;
    r1 = n *= 1.61639380f;
    n += 1.13252831f;
    r2 = n *= 0.53349948f;
    r3 = n += -0.06456640f;
    n += 0.06889559f;
    r4 = n += -0.06783651f;
    n *= r4;
    n += -0.63669175f;
    n *= 1.91387880f;
    r4 = n *= -0.21257170f;
    n *= r3;
    n += r1;
    r1 = n += 1.24358571f;
    n = r0 += n;
    n += -0.21771473f;
    n *= -0.76485252f;
    n = r1 *= n;
    n *= -0.00219188f;
    n *= -5.47146034f;
    n *= 2.27403045f;
    n += r4;
    r4 = n += 1.81169891f;
    n *= r1;
    n += 1.68348086f;
    n *= r2;
    n += r0;
    n += 0.24814326f;
    n *= r4;
    n *= -1.15630758f;
    n *= 0.30604118f;
    return n;
} // Solution0

// Solution1 result = 0.00000262
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.51004046f;
    r0 = n += 0.57802325f;
    r1 = n *= 1.07651055f;
    n += 1.56595838f;
    r2 = n *= 0.66309822f;
    r3 = n += -0.00484529f;
    n += -1.06473243f;
    r4 = n += 0.64983922f;
    n *= r4;
    n += -0.86503530f;
    n *= -0.19893193f;
    r4 = n *= 1.03227222f;
    n *= r3;
    n += r1;
    r1 = n += 1.46704590f;
    n = r0 += n;
    n += -1.21275997f;
    n *= -0.20648333f;
    n = r1 *= n;
    n *= -0.11536437f;
    n *= 0.06086310f;
    n *= -6.07855701f;
    n += r4;
    r4 = n += 2.72358680f;
    n *= r1;
    n += 0.77536213f;
    n *= r2;
    n += r0;
    n += -0.03974348f;
    n *= r4;
    n *= -0.61793017f;
    n *= -0.36105821f;
    return n;
} // Solution1

// Solution2 result = 0.00000334
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.93338901f;
    r0 = n += -0.75138050f;
    r1 = n *= -1.74469554f;
    n += -0.34180152f;
    r2 = n *= -0.21468920f;
    r3 = n += -0.85301846f;
    n += 1.04636896f;
    r4 = n += -0.87942821f;
    n *= r4;
    n += -1.80462122f;
    n *= 0.58996308f;
    r4 = n *= 0.57367367f;
    n *= r3;
    n += r1;
    r1 = n += 1.36115909f;
    n = r0 += n;
    n += 2.25185871f;
    n *= -0.53282803f;
    n = r1 *= n;
    n *= -7.19031620f;
    n *= 0.00560284f;
    n *= 0.60760325f;
    n += r4;
    r4 = n += -1.28999496f;
    n *= r1;
    n += 4.51795101f;
    n *= r2;
    n += r0;
    n += 0.86996645f;
    n *= r4;
    n *= -1.63040245f;
    n *= 0.10553124f;
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
