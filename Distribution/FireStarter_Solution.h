// Run date: 11/13/22 11:48:02 Pacific Standard Time
// Run duration = 71.351816 seconds
// Run count = 79
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
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 79

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

// Precision = 0.00000596

// Solution0 precision = 0.00000113
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.41482845f;
    r0 = n += -2.72676420f;
    n += 0.00000007f;
    r1 = n *= -0.37118602f;
    n = r1 *= n;
    n *= 0.00304550f;
    n *= -61.57444382f;
    r2 = n += 0.08529995f;
    r3 = n *= -26.79778862f;
    n += 0.09905987f;
    n += r3;
    r3 = n *= -0.09284199f;
    r4 = n += 2.44362736f;
    n = r1 += n;
    r5 = n += -3.30939674f;
    r6 = n *= 0.32741365f;
    n *= r1;
    r1 = n *= 20.79253197f;
    n += r2;
    n *= r5;
    r5 = n *= -0.02239163f;
    n += r6;
    n *= r4;
    n += -2.77926540f;
    n *= r3;
    n += -2.61297464f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 0.16089523f;
    n *= r0;
    n += -0.00000012f;
    return n;
} // Solution0

// Solution1 precision = 0.00000238
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.34844160f;
    r0 = n += -0.74221379f;
    n += -0.00000555f;
    r1 = n *= -0.48207158f;
    n = r1 *= n;
    n *= -0.45620966f;
    n *= -0.03214672f;
    r2 = n += -0.01544904f;
    r3 = n *= -77.38996887f;
    n += 0.82342452f;
    n += r3;
    r3 = n *= 0.45573768f;
    r4 = n += -2.10036349f;
    n = r1 += n;
    r5 = n += 0.96750402f;
    r6 = n *= -1.26216841f;
    n *= r1;
    r1 = n *= -0.85529584f;
    n += r2;
    n *= r5;
    r5 = n *= 0.55420041f;
    n += r6;
    n *= r4;
    n += -6.63750505f;
    n *= r3;
    n += -24.24911308f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 1.60721564f;
    n *= r0;
    n += -0.11812826f;
    return n;
} // Solution1

// Solution2 precision = 0.00000596
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.31472051f;
    r0 = n += -2.30326462f;
    n += -0.00001469f;
    r1 = n *= -0.03907572f;
    n = r1 *= n;
    n *= 1.26180172f;
    n *= -70.24837494f;
    r2 = n += 1.20737827f;
    r3 = n *= -0.08376545f;
    n += -0.94214296f;
    n += r3;
    r3 = n *= 0.94486994f;
    r4 = n += -0.88576311f;
    n = r1 += n;
    r5 = n += 0.80415982f;
    r6 = n *= 0.79596728f;
    n *= r1;
    r1 = n *= -0.34464300f;
    n += r2;
    n *= r5;
    r5 = n *= 0.07141133f;
    n += r6;
    n *= r4;
    n += 2.76164865f;
    n *= r3;
    n += 0.13668443f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 3.36240673f;
    n *= r0;
    n += 0.52360791f;
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
