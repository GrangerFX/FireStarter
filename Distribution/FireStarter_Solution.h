// Run date: 09/30/23 14:46:04 Pacific Daylight Time
// Run duration = 696.633227 seconds
// Run generation = 10
// Run evolution = 8
// Run result = 0.00000012
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.26626605f;
    r1 = n += 0.83649945f;
    r2 = n *= -0.37350824f;
    r3 = n *= 0.04364120f;
    r4 = n *= 4.06595993f;
    n += r1;
    n *= -1.63809359f;
    n = r3 += n;
    n *= -0.67562884f;
    n *= -1.69907558f;
    n *= -0.98476261f;
    n *= -0.16173743f;
    n = r3 *= n;
    n *= 0.93160731f;
    n += -1.26812041f;
    r1 = n += -1.95275342f;
    n *= 0.43221909f;
    n = r1 *= n;
    r5 = n += -0.15498409f;
    n *= r1;
    r1 = n += -1.01161921f;
    n *= 1.39383781f;
    n *= -0.01155819f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r4;
    n += 0.32442263f;
    r4 = n += 0.09382710f;
    n += r2;
    n += r4;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.34583771f;
    r1 = n += 1.06886625f;
    r2 = n *= 0.23058504f;
    r3 = n *= 0.02141443f;
    r4 = n *= 0.90123940f;
    n += r1;
    n *= 0.15992352f;
    n = r3 += n;
    n *= -1.69705617f;
    n *= 2.28386664f;
    n *= 0.78806210f;
    n *= 1.27023399f;
    n = r3 *= n;
    n *= -1.82317984f;
    n += -3.58828783f;
    r1 = n += 0.52982503f;
    n *= 1.28978908f;
    n = r1 *= n;
    r5 = n += 0.20078349f;
    n *= r1;
    r1 = n += -1.06711018f;
    n *= 0.00292040f;
    n *= 0.28337586f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r4;
    n += 0.68808752f;
    r4 = n += -0.21272027f;
    n += r2;
    n += r4;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.89723212f;
    r1 = n += -2.34894800f;
    r2 = n *= -0.62431741f;
    r3 = n *= -0.45875481f;
    r4 = n *= 1.64610422f;
    n += r1;
    n *= 0.33827028f;
    n = r3 += n;
    n *= -1.01181591f;
    n *= 0.50614756f;
    n *= 0.03620548f;
    n *= 2.34063482f;
    n = r3 *= n;
    n *= 0.50882846f;
    n += -0.01060082f;
    r1 = n += 0.96977067f;
    n *= -2.04915214f;
    n = r1 *= n;
    r5 = n += 0.11959422f;
    n *= r1;
    r1 = n += -1.01249969f;
    n *= -0.17833671f;
    n *= -0.93562824f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r4;
    n += -0.85828573f;
    r4 = n += -0.05438897f;
    n += r2;
    n += r4;
    n += r0;
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
