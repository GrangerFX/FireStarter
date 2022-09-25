// Run date: 09/25/22 14:05:12 Pacific Daylight Time
// Run duration = 1.803839 seconds
// Run count = 7
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10;
// Run seed = 1075946347;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 6

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

// Precision = 0.00001758

// Solution0 precision = 0.00000355
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.20301390f;
    n += 1.34888542f;
    n += -3.50924945f;
    r0 = n += 0.22177811f;
    r1 = n *= -0.00000694f;
    n = r0 += n;
    r2 = n *= -0.88243324f;
    n = r0 *= n;
    n += r1;
    n += 1.93146062f;
    r1 = n *= -1.02894199f;
    r3 = n *= -0.56355309f;
    n *= 0.01835168f;
    r4 = n += 0.80516785f;
    n *= r4;
    n += -0.48910987f;
    n += -3.05500245f;
    n += -0.09170878f;
    r4 = n += 3.52277923f;
    n *= 0.24998420f;
    n = r3 *= n;
    n = r3 += n;
    n *= -0.21327570f;
    r5 = n += -0.56975704f;
    n += r0;
    n += r1;
    n *= r5;
    n += r3;
    n *= r4;
    n *= r2;
    n += 0.18828550f;
    n += -0.18829234f;
    return n;
} // Solution0

// Solution1 precision = 0.00000799
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.49198914f;
    n += 0.41580576f;
    n += -0.55871356f;
    r0 = n += -1.45582533f;
    r1 = n *= -0.00002322f;
    n = r0 += n;
    r2 = n *= -0.39853901f;
    n = r0 *= n;
    n += r1;
    n += 0.69152117f;
    r1 = n *= -1.32259202f;
    r3 = n *= -0.00585767f;
    n *= -3.76863313f;
    r4 = n += -0.93852109f;
    n *= r4;
    n += -0.91340691f;
    n += 1.17137039f;
    n += 0.70603150f;
    r4 = n += 0.01194533f;
    n *= -3.34318399f;
    n = r3 *= n;
    n = r3 += n;
    n *= 0.69651777f;
    r5 = n += -0.81205243f;
    n += r0;
    n += r1;
    n *= r5;
    n += r3;
    n *= r4;
    n *= r2;
    n += 2.12734032f;
    n += -2.24554181f;
    return n;
} // Solution1

// Solution2 precision = 0.00001758
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.72550499f;
    n += 0.11563068f;
    n += 0.03859203f;
    r0 = n += -1.04670703f;
    r1 = n *= 0.00001563f;
    n = r0 += n;
    r2 = n *= -0.17285085f;
    n = r0 *= n;
    n += r1;
    n += 0.22367345f;
    r1 = n *= 1.00974846f;
    r3 = n *= 0.70590317f;
    n *= 0.15682033f;
    r4 = n += 1.18191433f;
    n *= r4;
    n += 3.19259667f;
    n += -0.59530324f;
    n += 0.61797214f;
    r4 = n += -2.44318151f;
    n *= -0.21222948f;
    n = r3 *= n;
    n = r3 += n;
    n *= -0.69141376f;
    r5 = n += 1.44389725f;
    n += r0;
    n += r1;
    n *= r5;
    n += r3;
    n *= r4;
    n *= r2;
    n += 2.38129425f;
    n += -1.85767531f;
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
