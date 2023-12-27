// Run date: 12/26/23 14:45:57 Pacific Standard Time
// Run duration = 30266.228828 seconds
// Run generation = 41
// Run evolution = 7
// Run max result = 0.00000006
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
// Run startResult = 9.999999f

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

    n *= -0.35402787f;
    r0 = n += 1.11221135f;
    r1 = n *= -1.09928870f;
    n *= 1.56425261f;
    n *= r1;
    r1 = n *= 0.42923975f;
    r2 = n += 0.20166431f;
    n += -1.12911546f;
    r3 = n *= -0.00489048f;
    r4 = n *= 3.73447204f;
    r5 = n += 1.32251430f;
    n = r3 += n;
    n *= r4;
    n *= r3;
    n *= r2;
    n += r1;
    n *= 0.73866379f;
    r1 = n += -0.73923582f;
    r2 = n *= -0.16056348f;
    n += 1.99618065f;
    n = r2 *= n;
    n += r5;
    n = r2 += n;
    n *= r2;
    n *= r1;
    n = r0 *= n;
    n += r0;
    n += -0.06202821f;
    n *= 1.14204645f;
    n += 0.00035839f;
    n *= -0.49813995f;
    n += -0.03510927f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.48968980f;
    r0 = n += -1.51346385f;
    r1 = n *= -1.52968645f;
    n *= -0.65485221f;
    n *= r1;
    r1 = n *= -0.42790887f;
    r2 = n += 1.40061510f;
    n += -2.45991421f;
    r3 = n *= -0.32872874f;
    r4 = n *= -0.00977194f;
    r5 = n += -1.21127892f;
    n = r3 += n;
    n *= r4;
    n *= r3;
    n *= r2;
    n += r1;
    n *= -0.09049086f;
    r1 = n += 0.72540349f;
    r2 = n *= -1.49477255f;
    n += -0.70996183f;
    n = r2 *= n;
    n += r5;
    n = r2 += n;
    n *= r2;
    n *= r1;
    n = r0 *= n;
    n += r0;
    n += -0.58148158f;
    n *= -0.13435759f;
    n += -0.16121495f;
    n *= 1.60468566f;
    n += 0.01519934f;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.48579109f;
    r0 = n += -1.27179801f;
    r1 = n *= -1.61185718f;
    n *= 0.81962335f;
    n *= r1;
    r1 = n *= -0.71475518f;
    r2 = n += 0.41182655f;
    n += 3.17164135f;
    r3 = n *= 0.00468973f;
    r4 = n *= 0.96351308f;
    r5 = n += 1.39313352f;
    n = r3 += n;
    n *= r4;
    n *= r3;
    n *= r2;
    n += r1;
    n *= -1.00941801f;
    r1 = n += -1.82919097f;
    r2 = n *= 0.05202025f;
    n += -1.63681245f;
    n = r2 *= n;
    n += r5;
    n = r2 += n;
    n *= r2;
    n *= r1;
    n = r0 *= n;
    n += r0;
    n += -0.14666820f;
    n *= 0.08238449f;
    n += 0.09725203f;
    n *= 2.23517156f;
    n += 0.33323178f;
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
