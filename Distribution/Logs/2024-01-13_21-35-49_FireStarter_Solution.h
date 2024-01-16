// Run date: 01/13/24 21:35:49 Pacific Standard Time
// Run duration = 3261.783748 seconds
// Run generation = 77
// Run evolution = 8
// Run max result = 0.00000022
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
// Run tests = 1
// Run states = 64
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
    float r0, r1, r2, r3, r4, r5;

    n *= 1.03817451f;
    n *= -0.89639366f;
    r0 = n += 2.92360711f;
    r1 = n *= 0.35638401f;
    n = r0 += n;
    n *= r1;
    r1 = n += -1.74619520f;
    r2 = n += 0.54221380f;
    n *= -0.26467073f;
    n *= -0.28991991f;
    r3 = n += -1.49232435f;
    n += 2.61395812f;
    n += -2.90581226f;
    r4 = n += -0.36326638f;
    r5 = n *= 0.00484062f;
    n *= 667.58294678f;
    n += -4.86450863f;
    n *= -0.00059693f;
    n *= r1;
    r1 = n += -0.68933314f;
    n = r4 *= n;
    n *= r4;
    n *= -0.08581076f;
    n = r1 *= n;
    n += r5;
    n *= 2.77522063f;
    n += r2;
    n *= r3;
    n += 4.01979780f;
    n *= r0;
    n *= r1;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.94551206f;
    n *= -0.50721741f;
    r0 = n += 1.48221862f;
    r1 = n *= 1.07766640f;
    n = r0 += n;
    n *= r1;
    r1 = n += -2.18365312f;
    r2 = n += 0.62460804f;
    n *= -0.00272737f;
    n *= -2.70156813f;
    r3 = n += -0.16669396f;
    n += 1.09206474f;
    n += -0.67916518f;
    r4 = n += -0.59010673f;
    r5 = n *= 1.53542221f;
    n *= -0.76356506f;
    n += 0.20571573f;
    n *= 0.00319103f;
    n *= r1;
    r1 = n += -0.32396454f;
    n = r4 *= n;
    n *= r4;
    n *= -199.67835999f;
    n = r1 *= n;
    n += r5;
    n *= -0.12325455f;
    n += r2;
    n *= r3;
    n += 0.95168102f;
    n *= r0;
    n *= r1;
    n += -0.11813185f;
    return n;
} // Solution1

// Solution2 result = 0.00000022
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.81746376f;
    n *= -0.17766406f;
    r0 = n += -0.84534490f;
    r1 = n *= -1.98874199f;
    n = r0 += n;
    n *= r1;
    r1 = n += -0.67729616f;
    r2 = n += 1.46339118f;
    n *= 0.05995691f;
    n *= -1.05538356f;
    r3 = n += 1.29630733f;
    n += -0.80537349f;
    n += 1.37269425f;
    r4 = n += 0.65483654f;
    r5 = n *= 0.00000124f;
    n *= 2.63090324f;
    n += 0.31559822f;
    n *= 0.16977033f;
    n *= r1;
    r1 = n += -0.52499950f;
    n = r4 *= n;
    n *= r4;
    n *= 1.77657497f;
    n = r1 *= n;
    n += r5;
    n *= 0.59209865f;
    n += r2;
    n *= r3;
    n += -1.20266342f;
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
