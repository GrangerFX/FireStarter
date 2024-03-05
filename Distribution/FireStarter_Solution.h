// Run date: 03/05/24 09:15:37 Pacific Standard Time
// Run duration = 6051.374112 seconds
// Run generation = 597
// Run evolution = 17
// Run max result = 0.00000021
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
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.18422879f;
    r2 = n *= -0.77001721f;
    n = r2 *= n;
    n += -0.73311722f;
    r3 = n += -0.46685171f;
    n += -0.30606323f;
    n = r3 *= n;
    n = r1 *= n;
    n *= r0;
    r0 = n += -0.09799703f;
    n += -0.92749345f;
    r4 = n *= -0.95153844f;
    n = r2 *= n;
    n *= -0.00663604f;
    r5 = n *= 0.00276824f;
    n *= -4229.09619141f;
    n += r4;
    n += r3;
    n = r1 *= n;
    n *= r5;
    n *= r2;
    n += -6.56493425f;
    n *= r0;
    n += 3.74740458f;
    n *= -0.00072422f;
    r0 = n += -1.00367332f;
    n += 1.15420961f;
    n += r0;
    n *= r1;
    n += -0.00000003f;
    n *= 1.25569367f;
    return n;
} // Solution0

// Solution1 result = 0.00000021
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= 0.11397897f;
    r2 = n *= 1.61885190f;
    n = r2 *= n;
    n += -0.96069336f;
    r3 = n += -1.81123900f;
    n += 1.91906035f;
    n = r3 *= n;
    n = r1 *= n;
    n *= r0;
    r0 = n += -0.38937742f;
    n += -0.83467275f;
    r4 = n *= 0.00261068f;
    n = r2 *= n;
    n *= 14734.18457031f;
    r5 = n *= -0.00033551f;
    n *= 6.72012281f;
    n += r4;
    n += r3;
    n = r1 *= n;
    n *= r5;
    n *= r2;
    n += 0.03855592f;
    n *= r0;
    n += -1.90467715f;
    n *= 1.59469652f;
    r0 = n += 0.40830511f;
    n += 1.06176400f;
    n += r0;
    n *= r1;
    n += -0.28996649f;
    n *= 0.40739796f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.18802613f;
    r2 = n *= -0.75539786f;
    n = r2 *= n;
    n += -0.34550488f;
    r3 = n += -0.82199562f;
    n += -0.76436555f;
    n = r3 *= n;
    n = r1 *= n;
    n *= r0;
    r0 = n += 0.19422540f;
    n += -3.79237914f;
    r4 = n *= -0.00038831f;
    n = r2 *= n;
    n *= 4.42715120f;
    r5 = n *= 0.00005778f;
    n *= -271751.34375000f;
    n += r4;
    n += r3;
    n = r1 *= n;
    n *= r5;
    n *= r2;
    n += -0.55205864f;
    n *= r0;
    n += 0.05677462f;
    n *= -1.46362400f;
    r0 = n += -1.62413514f;
    n += 0.14193150f;
    n += r0;
    n *= r1;
    n += 1.48268461f;
    n *= 0.35314238f;
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
