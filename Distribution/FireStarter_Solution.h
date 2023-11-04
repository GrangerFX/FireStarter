// Run date: 11/04/23 10:51:36 Pacific Daylight Time
// Run duration = 6480.149836 seconds
// Run generation = 242
// Run evolution = 32
// Run result = 0.00000691
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
// Run seeds = 64
// Run tests = 16
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

// Solution0 result = 0.00000104
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159298f;
    n *= 0.11240276f;
    r1 = n += -0.04670579f;
    n *= -0.13175191f;
    n *= 0.88972336f;
    r2 = n += -0.00547499f;
    n *= r0;
    r0 = n += 1.09480894f;
    r3 = n *= 0.94930923f;
    n = r0 *= n;
    n += 0.94977039f;
    n = r3 *= n;
    n += -2.53038239f;
    n = r3 += n;
    r4 = n *= 1.53798306f;
    n *= 5.02906752f;
    n *= r3;
    n += 0.06108836f;
    n = r4 += n;
    r3 = n += -5.98861647f;
    r5 = n += 2.99909878f;
    n += -1.25852656f;
    n += r4;
    n *= -0.00029980f;
    n += r3;
    n *= 2.20722532f;
    n *= r0;
    n += r5;
    n += 3.63066435f;
    n *= r2;
    n += 0.04670599f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000167
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09063625f;
    n *= 0.18788336f;
    r1 = n += -0.37731820f;
    n *= -0.08663359f;
    n *= -0.60089332f;
    r2 = n += 0.01964194f;
    n *= r0;
    r0 = n += -1.13723028f;
    r3 = n *= -1.84176373f;
    n = r0 *= n;
    n += 1.02205157f;
    n = r3 *= n;
    n += 1.23644924f;
    n = r3 += n;
    r4 = n *= -1.98292577f;
    n *= 1.91794705f;
    n *= r3;
    n += -0.24145764f;
    n = r4 += n;
    r3 = n += -7.66634035f;
    r5 = n += 3.05125737f;
    n += -13.85504246f;
    n += r4;
    n *= 0.00391471f;
    n += r3;
    n *= -0.26864654f;
    n *= r0;
    n += r5;
    n += -11.81144714f;
    n *= r2;
    n += 0.25916901f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000691
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799669f;
    n *= -0.07633525f;
    r1 = n += 1.72854340f;
    n *= -0.51991975f;
    n *= 0.47693336f;
    r2 = n += 0.42862195f;
    n *= r0;
    r0 = n += -1.36272919f;
    r3 = n *= -2.23691797f;
    n = r0 *= n;
    n += -0.60857129f;
    n = r3 *= n;
    n += 23.57786369f;
    n = r3 += n;
    r4 = n *= -6.31437349f;
    n *= -0.03346069f;
    n *= r3;
    n += 18.07417488f;
    n = r4 += n;
    r3 = n += -2.77502203f;
    r5 = n += -10.31875992f;
    n += 4.56172705f;
    n += r4;
    n *= -21.19844818f;
    n += r3;
    n *= -0.01301934f;
    n *= r0;
    n += r5;
    n += 27.54966545f;
    n *= r2;
    n += -1.20494342f;
    n += r1;
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
