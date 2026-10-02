// Run date: 06/18/24 21:12:00 Pacific Daylight Time
// Run duration = 1118.431465 seconds
// Run generation = 138
// Run evolution = 6
// Run max result = 0.00000930
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00000852
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.14159274f;
    r0 = n *= 0.22914204f;
    r1 = n *= 0.40542746f;
    n = r1 *= n;
    n += 1.91180646f;
    r2 = n += -0.81189376f;
    r3 = n += -1.47165096f;
    r4 = n += 0.28655919f;
    n += -2.16324854f;
    r5 = n *= 0.63751864f;
    n = r1 += n;
    n = r0 *= n;
    n *= -0.00000001f;
    n *= -1.53056908f;
    r6 = n += -0.80366182f;
    r7 = n += 0.80366176f;
    n *= r2;
    n *= 4.95542288f;
    n += 0.73747313f;
    n = r4 *= n;
    n += r6;
    n *= r5;
    r5 = n *= -5.11066341f;
    n *= r0;
    n *= 8.66782761f;
    n *= r5;
    n *= 0.20943856f;
    n *= r1;
    n *= -1.24348736f;
    n *= r3;
    n *= r4;
    n += r7;
    return n;
} // Solution0

// Solution1 result = 0.00000489
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.09068322f;
    r0 = n *= 0.37666109f;
    r1 = n *= -0.30248564f;
    n = r1 *= n;
    n += -1.86638618f;
    r2 = n += -1.54720938f;
    r3 = n += -0.92503476f;
    r4 = n += 2.34707713f;
    n += -1.13172102f;
    r5 = n *= 0.11830749f;
    n = r1 += n;
    n = r0 *= n;
    n *= -0.00007948f;
    n *= -20.36501312f;
    r6 = n += -0.16052571f;
    r7 = n += 0.04236784f;
    n *= r2;
    n *= -0.09682907f;
    n += -1.50504839f;
    n = r4 *= n;
    n += r6;
    n *= r5;
    r5 = n *= 0.29133874f;
    n *= r0;
    n *= 1.18394816f;
    n *= r5;
    n *= -4.25314713f;
    n *= r1;
    n *= -3.23316216f;
    n *= r3;
    n *= r4;
    n += r7;
    return n;
} // Solution1

// Solution2 result = 0.00000930
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.61799240f;
    r0 = n *= -0.10806479f;
    r1 = n *= 1.15064013f;
    n = r1 *= n;
    n += 0.86233443f;
    r2 = n += -0.98260391f;
    r3 = n += 0.04322153f;
    r4 = n += -2.66387820f;
    n += -0.30669233f;
    r5 = n *= 0.30279207f;
    n = r1 += n;
    n = r0 *= n;
    n *= 0.00002547f;
    n *= 1.65641892f;
    r6 = n += -0.88100314f;
    r7 = n += 1.40460277f;
    n *= r2;
    n *= 1.06163168f;
    n += -1.94690335f;
    n = r4 *= n;
    n += r6;
    n *= r5;
    r5 = n *= 0.94916177f;
    n *= r0;
    n *= -0.39801461f;
    n *= r5;
    n *= 2.46021867f;
    n *= r1;
    n *= 1.58088398f;
    n *= r3;
    n *= r4;
    n += r7;
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
