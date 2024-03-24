// Run date: 03/23/24 16:24:03 Pacific Daylight Time
// Run duration = 19986.815804 seconds
// Run generation = 120
// Run evolution = 6
// Run max result = 0.00000044
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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

// Solution0 result = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.16081344f;
    n *= r1;
    r1 = n += -0.25523749f;
    n += 0.71065253f;
    r2 = n += -1.44356143f;
    r3 = n *= 2.09725261f;
    r4 = n *= -0.01971117f;
    n = r4 += n;
    r5 = n *= 16.22268295f;
    n += 0.28123647f;
    r6 = n *= -1.23952889f;
    n = r6 += n;
    n = r5 *= n;
    n *= 0.55095738f;
    r7 = n += -1.02916694f;
    n += 2.24841356f;
    n *= 3.86958694f;
    n *= r3;
    n += r4;
    n += r5;
    r5 = n += -6.18198633f;
    n *= r6;
    n += r5;
    n *= 0.00106306f;
    n += r2;
    n *= r7;
    n *= r1;
    n *= r0;
    n += 2.48893666f;
    n += -1.83924699f;
    n += -0.64968973f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= -0.31121373f;
    n *= r1;
    r1 = n += -2.55394101f;
    n += 1.98207796f;
    r2 = n += 0.25764284f;
    r3 = n *= 3.98374534f;
    r4 = n *= -0.00458975f;
    n = r4 += n;
    r5 = n *= -3.63961697f;
    n += -0.68729818f;
    r6 = n *= -0.32189664f;
    n = r6 += n;
    n = r5 *= n;
    n *= -0.58084387f;
    r7 = n += 0.55287826f;
    n += 1.60446858f;
    n *= -0.11716632f;
    n *= r3;
    n += r4;
    n += r5;
    r5 = n += 0.42109519f;
    n *= r6;
    n += r5;
    n *= 1.00309026f;
    n += r2;
    n *= r7;
    n *= r1;
    n *= r0;
    n += -0.01217420f;
    n += 0.17725575f;
    n += -0.28321335f;
    return n;
} // Solution1

// Solution2 result = 0.00000044
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= -0.56549734f;
    n *= r1;
    r1 = n += -1.59357953f;
    n += -0.74055922f;
    r2 = n += 1.55093658f;
    r3 = n *= -0.58804429f;
    r4 = n *= 0.53090745f;
    n = r4 += n;
    r5 = n *= -0.03180214f;
    n += -0.38640520f;
    r6 = n *= -1.68753099f;
    n = r6 += n;
    n = r5 *= n;
    n *= -0.26109001f;
    r7 = n += 0.09684623f;
    n += -0.31918147f;
    n *= 1.45451689f;
    n *= r3;
    n += r4;
    n += r5;
    r5 = n += 1.08680487f;
    n *= r6;
    n += r5;
    n *= 2.08150649f;
    n += r2;
    n *= r7;
    n *= r1;
    n *= r0;
    n += -3.68133807f;
    n += 4.28109455f;
    n += -0.07615765f;
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
