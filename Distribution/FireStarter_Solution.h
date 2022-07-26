// Run date: 07/25/22 18:29:21 Pacific Daylight Time
// Run duration = 1.968621 seconds
// Run count = 17
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
// Solution Generation = 1600

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

// Precision = 0.00147238

// Solution0 precision = 0.00009382
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.01570488f;
    n *= -0.38470775f;
    r0 = n += -0.59734845f;
    r1 = n += -9.27166462f;
    n *= -1.00000036f;
    n = r1 += n;
    n = r0 += n;
    r2 = n += 1.97769797f;
    n += -1.13122642f;
    n *= -1.28935909f;
    r3 = n += -0.54147995f;
    r4 = n += -0.70341235f;
    n *= r0;
    n += r3;
    n *= -0.95517337f;
    n = r2 += n;
    n *= -1.66005039f;
    n += 1.53717959f;
    n *= 9.15678883f;
    n *= 0.00156074f;
    n += 0.45113179f;
    n += r1;
    n += -0.22459468f;
    n = r2 *= n;
    r1 = n += -0.42240113f;
    n += r1;
    n = r2 += n;
    n *= r4;
    r4 = n += -0.00000427f;
    n *= -0.50379276f;
    n *= r2;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00004280
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.22209144f;
    n *= -0.35146314f;
    r0 = n += 0.32683158f;
    r1 = n += 0.97312158f;
    n *= -0.99603593f;
    n = r1 += n;
    n = r0 += n;
    r2 = n += -0.73165745f;
    n += 0.25136256f;
    n *= -0.60263455f;
    r3 = n += 0.56726056f;
    r4 = n += -0.96692336f;
    n *= r0;
    n += r3;
    n *= 1.23519909f;
    n = r2 += n;
    n *= -5.23698378f;
    n += -1.32451296f;
    n *= -0.00209148f;
    n *= -4.20827246f;
    n += 0.23603427f;
    n += r1;
    n += -0.51978785f;
    n = r2 *= n;
    r1 = n += -0.54797238f;
    n += r1;
    n = r2 += n;
    n *= r4;
    r4 = n += -0.20791596f;
    n *= -1.90370059f;
    n *= r2;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00147238
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.27169746f;
    n *= -1.36769962f;
    r0 = n += -0.29147166f;
    r1 = n += 16.41119385f;
    n *= -0.99875665f;
    n = r1 += n;
    n = r0 += n;
    r2 = n += 0.97019196f;
    n += 0.54204124f;
    n *= -0.46835217f;
    r3 = n += -0.27864066f;
    r4 = n += -0.32225594f;
    n *= r0;
    n += r3;
    n *= -0.59262544f;
    n = r2 += n;
    n *= 1.73565435f;
    n += -2.58575916f;
    n *= -0.00198871f;
    n *= 1.64500570f;
    n += 0.63983959f;
    n += r1;
    n += -0.53337801f;
    n = r2 *= n;
    r1 = n += -0.06460899f;
    n += r1;
    n = r2 += n;
    n *= r4;
    r4 = n += 0.72670245f;
    n *= -0.36356360f;
    n *= r2;
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
