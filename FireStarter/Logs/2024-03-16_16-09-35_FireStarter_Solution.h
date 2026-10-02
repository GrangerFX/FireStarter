// Run date: 03/16/24 16:09:35 Pacific Daylight Time
// Run duration = 19943.922098 seconds
// Run generation = 1453
// Run evolution = 18
// Run max result = 0.00000018
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.84846210f;
    r1 = n *= 0.10310958f;
    n *= 1.13013792f;
    r2 = n += -0.15068597f;
    r3 = n *= -1.49423611f;
    r4 = n *= -0.84568208f;
    n *= 0.32861298f;
    r5 = n *= -1.68837571f;
    n += 0.10564596f;
    n *= -0.14507575f;
    n *= r0;
    r0 = n *= 0.57140297f;
    n += -2.77945018f;
    n *= r0;
    n += 1.43446827f;
    r0 = n += 0.45670256f;
    r6 = n *= -0.76139724f;
    n *= 2.86476660f;
    n = r0 *= n;
    n += 2.95650864f;
    n *= r5;
    n = r6 *= n;
    n *= r2;
    n *= r4;
    n *= r0;
    n += -0.01900235f;
    n += -0.02138253f;
    n += r6;
    n *= 1.52068985f;
    n += r1;
    n += r3;
    n += -0.07192130f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.41729665f;
    r1 = n *= -0.45536274f;
    n *= 0.45253047f;
    r2 = n += 0.13875668f;
    r3 = n *= -0.54613972f;
    r4 = n *= -0.66084778f;
    n *= -0.07279132f;
    r5 = n *= 5.94726706f;
    n += -0.02167989f;
    n *= 0.03840152f;
    n *= r0;
    r0 = n *= -4.40521288f;
    n += 3.01347136f;
    n *= r0;
    n += 0.90471786f;
    r0 = n += 1.05306315f;
    r6 = n *= 1.07440579f;
    n *= -2.03922105f;
    n = r0 *= n;
    n += 2.14658308f;
    n *= r5;
    n = r6 *= n;
    n *= r2;
    n *= r4;
    n *= r0;
    n += 0.09055173f;
    n += -0.00413226f;
    n += r6;
    n *= 1.76370311f;
    n += r1;
    n += r3;
    n += 0.03607387f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.28613973f;
    r1 = n *= 0.61725420f;
    n *= -0.28247151f;
    r2 = n += 0.23221774f;
    r3 = n *= 1.03168249f;
    r4 = n *= 2.04297972f;
    n *= 1.59726965f;
    r5 = n *= 0.60416949f;
    n += 0.47232586f;
    n *= -0.08372993f;
    n *= r0;
    r0 = n *= -0.30329770f;
    n += 2.15743542f;
    n *= r0;
    n += 0.75901598f;
    r0 = n += 0.75520241f;
    r6 = n *= -1.74905288f;
    n *= 0.43499008f;
    n = r0 *= n;
    n += 1.16779268f;
    n *= r5;
    n = r6 *= n;
    n *= r2;
    n *= r4;
    n *= r0;
    n += 0.00127170f;
    n += -0.12023174f;
    n += r6;
    n *= 2.27509165f;
    n += r1;
    n += r3;
    n += -0.02784921f;
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
