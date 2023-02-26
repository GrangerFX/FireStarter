// Run date: 02/25/23 19:04:08 Pacific Standard Time
// Run duration = 28928.136395 seconds
// Run count = 19
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 999
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 19

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

// Precision = 0.00042748

// Solution0 precision = 0.00042748
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.39700806f;
    r1 = n += -2.10455704f;
    n *= 0.24702968f;
    n += -0.56818473f;
    r2 = n += -1.47019410f;
    r3 = n *= -1.56797469f;
    n += -2.08185673f;
    r4 = n += -1.01034522f;
    n = r0 += n;
    n += 0.50273889f;
    n += 0.03401946f;
    r5 = n *= 0.21115780f;
    n *= r1;
    n += -0.28687748f;
    n = r3 *= n;
    r1 = n *= -0.85462952f;
    n = r1 += n;
    n *= 0.44201204f;
    n = r0 += n;
    n += 0.95164120f;
    n += 0.91566414f;
    n *= r5;
    n += r1;
    n *= r2;
    n += -0.76523715f;
    n += 4.59666920f;
    n *= r4;
    r4 = n *= -0.01991988f;
    n += r3;
    n *= r4;
    n += r0;
    n += -2.29507136f;
    return n;
} // Solution0

// Solution1 precision = 0.00032103
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 1.56655526f;
    r1 = n += 2.04722166f;
    n *= 0.15782703f;
    n += -1.03178120f;
    r2 = n += -1.77437580f;
    r3 = n *= -0.21502870f;
    n += 0.91882259f;
    r4 = n += -1.29372549f;
    n = r0 += n;
    n += 2.51300740f;
    n += 0.47567451f;
    r5 = n *= 0.10738976f;
    n *= r1;
    n += -1.23485816f;
    n = r3 *= n;
    r1 = n *= -1.20884657f;
    n = r1 += n;
    n *= 1.02730036f;
    n = r0 += n;
    n += -0.65120101f;
    n += -0.58350527f;
    n *= r5;
    n += r1;
    n *= r2;
    n += 2.34141254f;
    n += -0.82344842f;
    n *= r4;
    r4 = n *= 2.01299524f;
    n += r3;
    n *= r4;
    n += r0;
    n += -0.81829834f;
    return n;
} // Solution1

// Solution2 precision = 0.00030529
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.76408291f;
    r1 = n += -1.26715219f;
    n *= -0.13671850f;
    n += -0.92128485f;
    r2 = n += 0.79251266f;
    r3 = n *= -1.26977932f;
    n += -0.29689136f;
    r4 = n += -0.63409990f;
    n = r0 += n;
    n += -1.81956685f;
    n += -1.56394875f;
    r5 = n *= -0.05398532f;
    n *= r1;
    n += 3.07680297f;
    n = r3 *= n;
    r1 = n *= -1.46948540f;
    n = r1 += n;
    n *= 0.52678967f;
    n = r0 += n;
    n += -0.42432600f;
    n += 1.69705451f;
    n *= r5;
    n += r1;
    n *= r2;
    n += -0.33431160f;
    n += -1.05714202f;
    n *= r4;
    r4 = n *= -0.96847808f;
    n += r3;
    n *= r4;
    n += r0;
    n += 0.04238758f;
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
