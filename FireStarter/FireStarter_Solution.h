// Run date: 05/07/22 21:20:58 Pacific Daylight Time
// Run duration = 2.089313 seconds
// Run count = 2
// Run units = 1
// Run population = 34816
// Run iterations = 128
// Run generations = 50
// Run samples = 15
// State Generation = 50

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

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

// Precision = 0.000342

// Solution0 precision = 0.000342
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.74904680f;
    r0 = n += 0.73542231f;
    n += -0.59856611f;
    n += -0.56295323f;
    n += -0.04398106f;
    r1 = n *= 0.29896179f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.07854703f;
    r3 = n += 0.52215111f;
    r4 = n += 0.27648446f;
    n *= 0.44211891f;
    n *= 0.05283295f;
    n = r2 *= n;
    n *= 1.15250254f;
    r5 = n += -0.47941428f;
    n *= 0.70402128f;
    n *= r1;
    n *= r5;
    n += r2;
    n += -0.09081037f;
    n *= r4;
    r4 = n *= 0.77546316f;
    r2 = n += 0.65051806f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.84791094f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.28726622f;
    return n;
} // Solution0

// Solution1 precision = 0.000214
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.62840909f;
    r0 = n += -2.34799671f;
    n += -0.33772048f;
    n += -0.89468861f;
    n += -0.04101059f;
    r1 = n *= -0.76277345f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.25710878f;
    r3 = n += -0.48779109f;
    r4 = n += -0.44608113f;
    n *= 0.35610047f;
    n *= 0.27682316f;
    n = r2 *= n;
    n *= 0.55695456f;
    r5 = n += -0.61344641f;
    n *= 0.79991269f;
    n *= r1;
    n *= r5;
    n += r2;
    n += -0.70739073f;
    n *= r4;
    r4 = n *= 0.51154745f;
    r2 = n += 1.19566154f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.27352476f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.11184242f;
    return n;
} // Solution1

// Solution2 precision = 0.000331
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.71558201f;
    r0 = n += 0.33795783f;
    n += 1.38117254f;
    n += -0.62590551f;
    n += -1.23987854f;
    r1 = n *= -0.72820204f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.35972673f;
    r3 = n += -0.58171070f;
    r4 = n += -0.46862870f;
    n *= 0.13626593f;
    n *= -1.02842855f;
    n = r2 *= n;
    n *= -0.79796076f;
    r5 = n += -1.04481006f;
    n *= -0.37915799f;
    n *= r1;
    n *= r5;
    n += r2;
    n += 0.43832946f;
    n *= r4;
    r4 = n *= -0.35373276f;
    r2 = n += 1.12716353f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.70154232f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.11087225f;
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
