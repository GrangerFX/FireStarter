// Run date: 06/09/24 15:42:47 Pacific Daylight Time
// Run duration = 2905.169532 seconds
// Run generation = 365
// Run evolution = 9
// Run max result = 0.00000079
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

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

// Solution0 result = 0.00000048
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.14159155f;
    r1 = n *= -0.19662005f;
    n += 0.00000076f;
    n = r0 *= n;
    n += 1.43117869f;
    r2 = n *= -0.01769947f;
    r3 = n += -1.27638912f;
    n *= r3;
    n += -2.15697002f;
    n *= -2.94371033f;
    r3 = n += -2.68466854f;
    n *= r0;
    n += -2.06371927f;
    r0 = n *= 0.08520174f;
    n += 1.17807865f;
    n *= -0.10171200f;
    n += -3.02818394f;
    n = r0 *= n;
    n += 4.21796179f;
    n *= 1.61745405f;
    n += r2;
    n *= r3;
    n += 1.05858111f;
    n *= 0.70685351f;
    n += 1.08419776f;
    n *= 0.77993059f;
    n += -0.46628276f;
    n = r1 *= n;
    n += r1;
    n *= r0;
    n += -0.00000116f;
    n *= -0.99474400f;
    return n;
} // Solution0

// Solution1 result = 0.00000066
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.09066653f;
    r1 = n *= -0.13243596f;
    n += -0.00000357f;
    n = r0 *= n;
    n += 0.82592279f;
    r2 = n *= 2.09258413f;
    r3 = n += 4.11567974f;
    n *= r3;
    n += -14.87371731f;
    n *= -0.00015871f;
    r3 = n += -0.40556756f;
    n *= r0;
    n += -1.42849100f;
    r0 = n *= 2.65538573f;
    n += 1.72655165f;
    n *= 0.45787978f;
    n += -0.66449773f;
    n = r0 *= n;
    n += 2.31410813f;
    n *= 0.43582508f;
    n += r2;
    n *= r3;
    n += -4.48469496f;
    n *= -1.51003075f;
    n += -0.92027378f;
    n *= 0.74991906f;
    n += 0.31208909f;
    n = r1 *= n;
    n += r1;
    n *= r0;
    n += -1.25128531f;
    n *= 0.09441549f;
    return n;
} // Solution1

// Solution2 result = 0.00000079
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -2.61798978f;
    r1 = n *= -0.49815404f;
    n += 0.00000776f;
    n = r0 *= n;
    n += 3.34674048f;
    r2 = n *= 0.00366771f;
    r3 = n += 0.81084752f;
    n *= r3;
    n += -0.61181432f;
    n *= 2.30780435f;
    r3 = n += 0.94288725f;
    n *= r0;
    n += 2.63173652f;
    r0 = n *= 1.72462761f;
    n += -1.67158830f;
    n *= -0.00655062f;
    n += -0.43079332f;
    n = r0 *= n;
    n += 0.91262382f;
    n *= -0.30805489f;
    n += r2;
    n *= r3;
    n += 2.09072948f;
    n *= 0.28793690f;
    n += 0.15422490f;
    n *= -0.54679549f;
    n += 0.10841970f;
    n = r1 *= n;
    n += r1;
    n *= r0;
    n += 0.39073879f;
    n *= 1.34003413f;
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
