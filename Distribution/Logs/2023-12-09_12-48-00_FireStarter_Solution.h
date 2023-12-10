// Run date: 12/09/23 12:48:00 Pacific Standard Time
// Run duration = 10515.284217 seconds
// Run generation = 25
// Run evolution = 9
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 16
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.14159250f;
    r0 = n *= -1.18242443f;
    r1 = n *= 0.04169616f;
    r2 = n *= -0.30407640f;
    n = r0 += n;
    r3 = n *= -1.38961244f;
    n *= r2;
    r2 = n += -1.28840840f;
    n *= r2;
    r2 = n *= 0.91666108f;
    r4 = n += -1.40947843f;
    n *= 1.06798792f;
    r5 = n += 1.52252781f;
    r6 = n += -1.17859042f;
    n *= -0.01074639f;
    n += -0.21409972f;
    n = r3 *= n;
    r7 = n *= 0.13550472f;
    n *= r2;
    n += r0;
    n *= r4;
    n *= 0.00161547f;
    n *= 37.44068909f;
    n += r3;
    n *= r6;
    n = r5 *= n;
    n *= 2.25708508f;
    n += r7;
    n += 0.02893179f;
    n += -0.02893169f;
    n += r5;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.09065843f;
    r0 = n *= -0.41387606f;
    r1 = n *= 1.28335452f;
    r2 = n *= -0.72365791f;
    n = r0 += n;
    r3 = n *= -1.61710703f;
    n *= r2;
    r2 = n += -1.04452777f;
    n *= r2;
    r2 = n *= 1.86405528f;
    r4 = n += -1.54911518f;
    n *= -0.04853358f;
    r5 = n += -1.33509088f;
    r6 = n += -0.10035865f;
    n *= -0.70503718f;
    n += -0.36360878f;
    n = r3 *= n;
    r7 = n *= -2.44635773f;
    n *= r2;
    n += r0;
    n *= r4;
    n *= -1.34097874f;
    n *= -1.00427902f;
    n += r3;
    n *= r6;
    n = r5 *= n;
    n *= 1.73645878f;
    n += r7;
    n += -0.93441510f;
    n += 0.81628358f;
    n += r5;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.61799383f;
    r0 = n *= 1.13069952f;
    r1 = n *= -0.24827331f;
    r2 = n *= 0.79499924f;
    n = r0 += n;
    r3 = n *= -0.16032805f;
    n *= r2;
    r2 = n += -1.22215629f;
    n *= r2;
    r2 = n *= 0.80480146f;
    r4 = n += -1.14183235f;
    n *= -0.44193020f;
    r5 = n += -1.27911365f;
    r6 = n += 0.66929364f;
    n *= -2.20834494f;
    n += 0.48124921f;
    n = r3 *= n;
    r7 = n *= -0.05291787f;
    n *= r2;
    n += r0;
    n *= r4;
    n *= 0.69091684f;
    n *= -2.85458517f;
    n += r3;
    n *= r6;
    n = r5 *= n;
    n *= 1.29654026f;
    n += r7;
    n += 0.09339949f;
    n += 0.43019933f;
    n += r5;
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
