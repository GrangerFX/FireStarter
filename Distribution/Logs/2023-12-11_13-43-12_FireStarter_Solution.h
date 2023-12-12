// Run date: 12/11/23 13:43:12 Pacific Standard Time
// Run duration = 8478.658026 seconds
// Run generation = 115
// Run evolution = 12
// Run max result = 0.00000083
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

// Solution0 result = 0.00000077
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.84131634f;
    n *= 0.06099047f;
    r1 = n += -0.00000004f;
    n *= 1.30117953f;
    n = r0 *= n;
    r2 = n += -1.46885884f;
    n *= 0.02298437f;
    r3 = n *= -4.48000050f;
    r4 = n += 1.19054818f;
    r5 = n += -0.38256061f;
    n += r2;
    r2 = n *= 1.65039647f;
    n = r4 *= n;
    n += -3.44718957f;
    n += 0.35292464f;
    r6 = n += 0.44973496f;
    r7 = n *= 0.00087602f;
    n += -13.98177814f;
    n = r4 *= n;
    n += r3;
    n += r0;
    n += r2;
    n *= r7;
    n *= 2.73125410f;
    n = r6 += n;
    n += -2.43943310f;
    n *= r6;
    n *= r4;
    n *= r5;
    n += -4.51223660f;
    n *= 0.05249501f;
    n *= r1;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.19030306f;
    n *= -1.04829133f;
    r1 = n += 2.59415722f;
    n *= -1.34530032f;
    n = r0 *= n;
    r2 = n += -1.55221307f;
    n *= 0.00633940f;
    r3 = n *= 9.04621506f;
    r4 = n += -1.37415516f;
    r5 = n += 0.33753604f;
    n += r2;
    r2 = n *= 0.36250117f;
    n = r4 *= n;
    n += 2.55300951f;
    n += 1.21845281f;
    r6 = n += -1.54446340f;
    r7 = n *= -0.17780131f;
    n += -1.31382334f;
    n = r4 *= n;
    n += r3;
    n += r0;
    n += r2;
    n *= r7;
    n *= -0.84070259f;
    n = r6 += n;
    n += 0.41213572f;
    n *= r6;
    n *= r4;
    n *= r5;
    n += -0.89607239f;
    n *= 0.03799983f;
    n *= r1;
    return n;
} // Solution1

// Solution2 result = 0.00000083
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.50571519f;
    n *= 1.24088240f;
    r1 = n += 0.00000029f;
    n *= -0.13113247f;
    n = r0 *= n;
    r2 = n += 0.55434918f;
    n *= 0.56447083f;
    r3 = n *= -1.74802649f;
    r4 = n += -0.52474731f;
    r5 = n += 0.77578509f;
    n += r2;
    r2 = n *= -1.12297177f;
    n = r4 *= n;
    n += -0.02198277f;
    n += 2.34147930f;
    r6 = n += 2.86957145f;
    r7 = n *= 1.51276183f;
    n += -4.81631565f;
    n = r4 *= n;
    n += r3;
    n += r0;
    n += r2;
    n *= r7;
    n *= 0.36655623f;
    n = r6 += n;
    n += 0.98070008f;
    n *= r6;
    n *= r4;
    n *= r5;
    n += -2.02991986f;
    n *= 0.13364905f;
    n *= r1;
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
