// Run date: 07/24/22 16:53:49 Pacific Daylight Time
// Run duration = 1.236341 seconds
// Run count = 13
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
// Solution Generation = 1200

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

// Precision = 0.00027838

// Solution0 precision = 0.00027838
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.94561088f;
    n += 0.54844254f;
    r1 = n += -0.83066994f;
    n *= -0.43377921f;
    n += -0.56326216f;
    r2 = n *= 0.49820948f;
    r3 = n += 0.83653975f;
    r4 = n += 0.87234390f;
    r5 = n += -0.47805503f;
    n *= 1.26952684f;
    r6 = n *= -1.35604668f;
    n += r1;
    n *= -0.04900909f;
    n += -0.77340889f;
    n = r3 *= n;
    n *= -1.23829591f;
    r1 = n *= -0.92888939f;
    n *= r1;
    n += 0.32823911f;
    n += 0.21521617f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += 0.95432121f;
    n *= r5;
    n *= -1.08152080f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += -0.97315437f;
    n *= 0.62913293f;
    return n;
} // Solution0

// Solution1 precision = 0.00003374
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.18427324f;
    n += -1.68901443f;
    r1 = n += -2.06999254f;
    n *= -0.92639631f;
    n += 1.23570681f;
    r2 = n *= -0.24412119f;
    r3 = n += -0.45181647f;
    r4 = n += -0.08899532f;
    r5 = n += -0.02557230f;
    n *= -1.27632976f;
    r6 = n *= 0.26590422f;
    n += r1;
    n *= -0.17358911f;
    n += -0.25130051f;
    n = r3 *= n;
    n *= 1.13247168f;
    r1 = n *= 0.41066596f;
    n *= r1;
    n += 0.86848110f;
    n += 1.84248304f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += -2.56204724f;
    n *= r5;
    n *= -1.35426116f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += -1.23019719f;
    n *= 0.06521341f;
    return n;
} // Solution1

// Solution2 precision = 0.00023937
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.06998140f;
    n += -0.91524732f;
    r1 = n += -1.26195753f;
    n *= 0.30342668f;
    n += 0.44347551f;
    r2 = n *= -0.09169969f;
    r3 = n += -0.87599784f;
    r4 = n += 1.08140159f;
    r5 = n += -0.32898694f;
    n *= 0.09603485f;
    r6 = n *= -1.62201071f;
    n += r1;
    n *= 1.44970047f;
    n += -3.26920915f;
    n = r3 *= n;
    n *= 0.18511644f;
    r1 = n *= -1.09839535f;
    n *= r1;
    n += -0.79129678f;
    n += -0.52189195f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += -4.43527126f;
    n *= r5;
    n *= -1.91532636f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += -0.07770787f;
    n *= -1.23777187f;
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
