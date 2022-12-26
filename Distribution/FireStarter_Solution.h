// Run date: 12/25/22 21:33:06 Pacific Standard Time
// Run duration = 805.336797 seconds
// Run count = 64
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 64

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00001013

// Solution0 precision = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.35516238f;
    r0 = n += -0.78643042f;
    n += 0.00000028f;
    r1 = n *= -0.15445827f;
    n = r1 *= n;
    n *= 5.10079432f;
    n *= 1.29427016f;
    r2 = n += -1.81910515f;
    r3 = n *= 10.45261002f;
    n += 24.78083992f;
    n += r3;
    r3 = n *= -0.00279378f;
    r4 = n += -1.05413878f;
    n = r1 += n;
    r5 = n += 0.28381601f;
    r6 = n *= 0.54874760f;
    n *= r1;
    r1 = n *= 0.93901175f;
    n += r2;
    n *= r5;
    r5 = n *= -0.64812958f;
    n += r6;
    n *= r4;
    n += 5.14306068f;
    n *= r3;
    n += 4.93143654f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 0.36953905f;
    n *= r0;
    n += -0.00000015f;
    return n;
} // Solution0

// Solution1 precision = 0.00000143
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.30199361f;
    r0 = n += -0.78869200f;
    n += 0.00004616f;
    r1 = n *= -0.15057296f;
    n = r1 *= n;
    n *= 1.54457593f;
    n *= 2.33521652f;
    r2 = n += -1.84917843f;
    r3 = n *= 17.23578262f;
    n += 45.38369370f;
    n += r3;
    r3 = n *= -0.00027799f;
    r4 = n += -1.29847217f;
    n = r1 += n;
    r5 = n += 0.43719754f;
    r6 = n *= -1.98724794f;
    n *= r1;
    r1 = n *= 0.06381613f;
    n += r2;
    n *= r5;
    r5 = n *= -1.26363492f;
    n += r6;
    n *= r4;
    n += -3.71498513f;
    n *= r3;
    n += 1.05224299f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -1.75582266f;
    n *= r0;
    n += -0.11816248f;
    return n;
} // Solution1

// Solution2 precision = 0.00001013
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.99124646f;
    r0 = n += -1.62674201f;
    n += -0.00000823f;
    r1 = n *= -0.18272391f;
    n = r1 *= n;
    n *= -0.44747221f;
    n *= -2.95146656f;
    r2 = n += 0.29392588f;
    r3 = n *= -34.75798035f;
    n += 27.98644829f;
    n += r3;
    r3 = n *= 0.00459767f;
    r4 = n += -1.07557428f;
    n = r1 += n;
    r5 = n += 0.13522109f;
    r6 = n *= -1.11571324f;
    n *= r1;
    r1 = n *= 0.60204852f;
    n += r2;
    n *= r5;
    r5 = n *= 0.46069318f;
    n += r6;
    n *= r4;
    n += -2.04514313f;
    n *= r3;
    n += -1.98496938f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -2.65975738f;
    n *= r0;
    n += 0.52360380f;
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
