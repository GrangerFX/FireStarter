// Run date: 06/16/24 23:21:28 Pacific Daylight Time
// Run duration = 5343.754932 seconds
// Run generation = 394
// Run evolution = 9
// Run max result = 0.00000040
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.74107474f;
    r0 = n += -2.32815504f;
    r1 = n *= -0.50000006f;
    r2 = n += 0.70076638f;
    n += r0;
    n = r2 *= n;
    r0 = n += 0.86400288f;
    n += -0.07476632f;
    n *= 0.05884010f;
    n += 1.33909047f;
    n *= -0.01627913f;
    n = r2 *= n;
    n *= -4.77857542f;
    r3 = n += 0.64373732f;
    n += 2.82273149f;
    n += -0.88657814f;
    r4 = n += 1.01012194f;
    r5 = n += 1.89031422f;
    n *= r4;
    n *= r2;
    n *= 1.05314326f;
    n *= -1.18792260f;
    n += 1.77543581f;
    n *= r3;
    n *= -0.19686630f;
    n *= r5;
    n *= r1;
    n *= r0;
    n += -0.11986331f;
    n += -0.07739918f;
    n *= -1.27125728f;
    n += -0.25077155f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.76189870f;
    r0 = n += 2.35477352f;
    r1 = n *= -0.50000364f;
    r2 = n += -0.57585341f;
    n += r0;
    n = r2 *= n;
    r0 = n += 3.29766655f;
    n += 2.97758627f;
    n *= 0.55684066f;
    n += 1.96135867f;
    n *= -1.23671174f;
    n = r2 *= n;
    n *= -0.00328664f;
    r3 = n += -1.64430726f;
    n += 1.02290809f;
    n += 1.41597795f;
    r4 = n += 0.87393081f;
    r5 = n += -1.01394856f;
    n *= r4;
    n *= r2;
    n *= -0.47310680f;
    n *= 0.07442170f;
    n += 0.52563423f;
    n *= r3;
    n *= 2.05219936f;
    n *= r5;
    n *= r1;
    n *= r0;
    n += -0.83520901f;
    n += 2.68759370f;
    n *= 0.58069646f;
    n += -1.19381225f;
    return n;
} // Solution1

// Solution2 result = 0.00000040
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.71473056f;
    r0 = n += 1.87115967f;
    r1 = n *= -0.50000024f;
    r2 = n += 1.14913642f;
    n += r0;
    n = r2 *= n;
    r0 = n += -0.68410414f;
    n += 3.97352719f;
    n *= -0.66293138f;
    n += -4.98575354f;
    n *= -0.04529060f;
    n = r2 *= n;
    n *= 0.30703947f;
    r3 = n += 0.29146302f;
    n += -2.03391314f;
    n += 3.46367192f;
    r4 = n += 2.34621167f;
    r5 = n += -0.22020862f;
    n *= r4;
    n *= r2;
    n *= 0.34512579f;
    n *= -0.38318476f;
    n += -1.53201091f;
    n *= r3;
    n *= -1.46626353f;
    n *= r5;
    n *= r1;
    n *= r0;
    n += 2.16382790f;
    n += 0.11338174f;
    n *= -0.65667588f;
    n += 2.01898837f;
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
