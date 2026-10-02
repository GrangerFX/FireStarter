// Run date: 12/15/23 09:51:18 Pacific Standard Time
// Run duration = 19871.887371 seconds
// Run generation = 40
// Run evolution = 17
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.38559592f;
    r1 = n += 1.21138537f;
    n *= r1;
    n *= -1.72741079f;
    r1 = n += 0.80430585f;
    n *= 0.19735572f;
    r2 = n += 0.34154201f;
    r3 = n += 1.90918016f;
    r4 = n *= 0.87121904f;
    n *= r1;
    r1 = n *= 0.00078143f;
    r5 = n += 0.85120386f;
    n += 0.86100668f;
    n *= r1;
    n *= -0.00009081f;
    n *= 5.16862345f;
    r1 = n += -0.64249563f;
    n += r5;
    n = r3 *= n;
    r5 = n += 0.25073925f;
    n += 0.75291204f;
    n *= r4;
    n *= -2.54414606f;
    n += r1;
    n *= r2;
    r2 = n *= -1.88362753f;
    n *= r0;
    n *= 0.82550120f;
    n += r2;
    n *= r3;
    n *= r5;
    n += 0.00000012f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.56266570f;
    r1 = n += -1.73900616f;
    n *= r1;
    n *= 0.98041481f;
    r1 = n += -1.84164727f;
    n *= -0.15182479f;
    r2 = n += 0.93091309f;
    r3 = n += 0.86828732f;
    r4 = n *= -0.00399413f;
    n *= r1;
    r1 = n *= 1.78336835f;
    r5 = n += -0.47216389f;
    n += 0.29316175f;
    n *= r1;
    n *= -4.03670406f;
    n *= 0.05366733f;
    r1 = n += 1.65697360f;
    n += r5;
    n = r3 *= n;
    r5 = n += -0.98189962f;
    n += -8.45471096f;
    n *= r4;
    n *= 0.00002715f;
    n += r1;
    n *= r2;
    r2 = n *= 0.43634892f;
    n *= r0;
    n *= -0.57503998f;
    n += r2;
    n *= r3;
    n *= r5;
    n += -0.11813582f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.53607702f;
    r1 = n += -1.40344656f;
    n *= r1;
    n *= 1.57968998f;
    r1 = n += -1.28224027f;
    n *= 0.03964716f;
    r2 = n += -0.90235692f;
    r3 = n += -0.86346453f;
    r4 = n *= 0.09051496f;
    n *= r1;
    r1 = n *= -0.99107134f;
    r5 = n += -1.01473081f;
    n += 1.14778328f;
    n *= r1;
    n *= -0.00005844f;
    n *= -9.99679947f;
    r1 = n += -0.73087931f;
    n += r5;
    n = r3 *= n;
    r5 = n += -2.75237560f;
    n += 1.23169637f;
    n *= r4;
    n *= 0.07719678f;
    n += r1;
    n *= r2;
    r2 = n *= 1.28042972f;
    n *= r0;
    n *= -0.71253192f;
    n += r2;
    n *= r3;
    n *= r5;
    n += 0.52359951f;
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
