// Run date: 07/25/22 18:19:41 Pacific Daylight Time
// Run duration = 2.065602 seconds
// Run count = 213
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 21200

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.00057292

// Solution0 precision = 0.00057292
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 1.08852804f;
    r0 = n *= -0.14084899f;
    n += -0.56725264f;
    r1 = n += 1.09688151f;
    n = r1 *= n;
    n += -0.54869086f;
    r2 = n += 0.11341105f;
    n += r0;
    r0 = n += -0.94104671f;
    n = r1 += n;
    r3 = n += 0.28510544f;
    n += -0.85778821f;
    n *= 0.94095123f;
    n += -0.55759978f;
    r4 = n *= 2.10982585f;
    n *= r2;
    n += -0.77691454f;
    n *= r1;
    n += -2.32929921f;
    n *= 0.16092829f;
    n += 0.76620466f;
    n += -1.54655433f;
    n += 0.80323404f;
    n = r0 += n;
    n *= r0;
    n = r4 += n;
    n *= r3;
    n += -1.28106439f;
    n += 15.34976101f;
    n += -13.15117836f;
    n += -0.02579047f;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00006163
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -1.87726665f;
    r0 = n *= 0.16178343f;
    n += 0.40279767f;
    r1 = n += 1.07056069f;
    n = r1 *= n;
    n += 0.15346140f;
    r2 = n += -0.60790175f;
    n += r0;
    r0 = n += -0.27751046f;
    n = r1 += n;
    r3 = n += 0.05537478f;
    n += 94.10785675f;
    n *= 0.00338850f;
    n += -1.09989452f;
    r4 = n *= 0.03888014f;
    n *= r2;
    n += 1.04252505f;
    n *= r1;
    n += -0.28245133f;
    n *= -0.72536272f;
    n += 1.33391190f;
    n += -0.62610602f;
    n += 0.72052407f;
    n = r0 += n;
    n *= r0;
    n = r4 += n;
    n *= r3;
    n += 1.17470801f;
    n += -0.90331328f;
    n += -1.57432640f;
    n += 1.23444617f;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00014472
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.08926812f;
    r0 = n *= -1.56000185f;
    n += -0.04680873f;
    r1 = n += 0.42417967f;
    n = r1 *= n;
    n += -0.84040135f;
    r2 = n += 0.45407590f;
    n += r0;
    r0 = n += -0.97871095f;
    n = r1 += n;
    r3 = n += 0.33498979f;
    n += -0.14766318f;
    n *= 0.47099033f;
    n += -0.50581270f;
    r4 = n *= 4.49311209f;
    n *= r2;
    n += 0.38428578f;
    n *= r1;
    n += 0.20701514f;
    n *= 0.53188676f;
    n += -0.20873211f;
    n += 0.35620466f;
    n += 1.20481455f;
    n = r0 += n;
    n *= r0;
    n = r4 += n;
    n *= r3;
    n += 4.32154703f;
    n += 13.58042812f;
    n += -12.60998344f;
    n += -4.31281471f;
    n += r4;
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
