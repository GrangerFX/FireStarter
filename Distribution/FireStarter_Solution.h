// Run date: 09/09/23 21:22:02 Pacific Daylight Time
// Run duration = 19715.727694 seconds
// Run generation = 46
// Run evolution = 5
// Run result = 0.00000729
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
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 300
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

// Solution0 result = 0.00000125
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -0.44516569f;
    r1 = n += -4.02495718f;
    r2 = n += -1.10431564f;
    r3 = n += -0.70874566f;
    n += 2.93070793f;
    n *= -0.00029015f;
    n *= 7.60546017f;
    n *= -0.02414863f;
    n *= 0.99075854f;
    n *= r0;
    r0 = n *= -43.18761444f;
    n = r1 *= n;
    n *= 8.77539825f;
    n *= 0.05026863f;
    n += -0.60367507f;
    n *= r0;
    n += 1.80577266f;
    n = r1 += n;
    n = r2 += n;
    n = r1 += n;
    r0 = n *= -1.14771855f;
    n *= 0.90216261f;
    n += r1;
    n *= r0;
    n += 6.53409481f;
    n *= 0.22110422f;
    n += -1.78099000f;
    n = r2 *= n;
    n += -1.33999574f;
    n *= r2;
    n += 0.23166317f;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.40701032f;
    r1 = n += 1.20565188f;
    r2 = n += 0.98860180f;
    r3 = n += -1.77037227f;
    n += 2.35778952f;
    n *= 1.23779881f;
    n *= -0.88705665f;
    n *= 3.28337240f;
    n *= 0.64991146f;
    n *= r0;
    r0 = n *= 0.00089057f;
    n = r1 *= n;
    n *= 0.00435014f;
    n *= 7.74695587f;
    n += -3.21804214f;
    n *= r0;
    n += -1.13278842f;
    n = r1 += n;
    n = r2 += n;
    n = r1 += n;
    r0 = n *= 0.06886288f;
    n *= -15.91392517f;
    n += r1;
    n *= r0;
    n += 0.14116646f;
    n *= -0.90350020f;
    n += -0.21420349f;
    n = r2 *= n;
    n += 0.54278076f;
    n *= r2;
    n += -1.02529490f;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00000729
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -0.51662856f;
    r1 = n += -0.86650538f;
    r2 = n += -2.58878756f;
    r3 = n += -0.38305256f;
    n += -1.79120767f;
    n *= 4.81131935f;
    n *= -8.98734665f;
    n *= -0.00380125f;
    n *= 0.00427105f;
    n *= r0;
    r0 = n *= -5.26828766f;
    n = r1 *= n;
    n *= 0.02429031f;
    n *= -6.76285887f;
    n += 0.54520619f;
    n *= r0;
    n += 0.96397871f;
    n = r1 += n;
    n = r2 += n;
    n = r1 += n;
    r0 = n *= 0.02240825f;
    n *= 0.15935038f;
    n += r1;
    n *= r0;
    n += -0.24614705f;
    n *= -0.65761918f;
    n += 0.31550676f;
    n = r2 *= n;
    n += 1.13335967f;
    n *= r2;
    n += -0.14517440f;
    n *= r3;
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
