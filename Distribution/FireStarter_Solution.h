// Run date: 08/26/23 09:34:42 Pacific Daylight Time
// Run duration = 3.267313 seconds
// Run generation = 1
// Run evolution = 1
// Run result = 0.43964040
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_CODE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 17408
// Run iterations = 256
// Run generations = 1
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

// Solution0 result = 0.43964040
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.93724567f;
    r0 = n += 0.77831829f;
    r1 = n *= -0.36974385f;
    r2 = n *= 0.21742722f;
    n *= 0.72517705f;
    r3 = n *= 0.22646280f;
    r4 = n += 1.00408661f;
    r5 = n += 0.98201931f;
    r6 = n *= 0.24362496f;
    r7 = n += 0.65865529f;
    n = r4 *= n;
    n *= r0;
    n += 0.65448421f;
    n *= r2;
    n = r6 += n;
    n *= r7;
    n *= -0.11988723f;
    n += r6;
    n = r5 *= n;
    n = r4 *= n;
    n = r4 += n;
    n *= 0.03764578f;
    n += -0.22080711f;
    n *= 0.68674499f;
    n += r1;
    n *= 1.14769924f;
    n = r3 += n;
    n *= r3;
    n += r5;
    n *= 0.36853611f;
    n *= r4;
    n += -0.05057272f;
    return n;
} // Solution0

// Solution1 result = 0.24304360
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.57364976f;
    r0 = n += -0.10090772f;
    r1 = n *= 1.07760286f;
    r2 = n *= 0.29567495f;
    n *= 0.87100708f;
    r3 = n *= 0.66127914f;
    r4 = n += -0.90123963f;
    r5 = n += -0.92182851f;
    r6 = n *= 0.32139844f;
    r7 = n += -0.87686127f;
    n = r4 *= n;
    n *= r0;
    n += -0.91797274f;
    n *= r2;
    n = r6 += n;
    n *= r7;
    n *= -0.13115782f;
    n += r6;
    n = r5 *= n;
    n = r4 *= n;
    n = r4 += n;
    n *= -0.19084123f;
    n += 0.87911493f;
    n *= 0.21529569f;
    n += r1;
    n *= 0.65200198f;
    n = r3 += n;
    n *= r3;
    n += r5;
    n *= 0.65929800f;
    n *= r4;
    n += -1.61970115f;
    return n;
} // Solution1

// Solution2 result = 0.43588528
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.87896192f;
    r0 = n += 0.41912907f;
    r1 = n *= -0.33731538f;
    r2 = n *= -0.73979425f;
    n *= -0.82921672f;
    r3 = n *= -0.55048418f;
    r4 = n += 1.76460934f;
    r5 = n += -0.95054519f;
    r6 = n *= -0.79605865f;
    r7 = n += -0.21943356f;
    n = r4 *= n;
    n *= r0;
    n += -0.01405686f;
    n *= r2;
    n = r6 += n;
    n *= r7;
    n *= -0.21441820f;
    n += r6;
    n = r5 *= n;
    n = r4 *= n;
    n = r4 += n;
    n *= -0.95062333f;
    n += 4.10749578f;
    n *= -0.19596887f;
    n += r1;
    n *= -0.20130019f;
    n = r3 += n;
    n *= r3;
    n += r5;
    n *= 0.90632331f;
    n *= r4;
    n += 2.03442168f;
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
