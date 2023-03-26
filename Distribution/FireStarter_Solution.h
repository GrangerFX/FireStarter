// Run date: 03/25/23 16:21:22 Pacific Daylight Time
// Run duration = 1822.130119 seconds
// Run count = 255
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 8
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 255

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

// Precision = 0.00014353

// Solution0 precision = 0.00005245
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.80438322f;
    n += -0.55360013f;
    r1 = n += -2.06046510f;
    n *= -1.34905970f;
    n += -0.77847213f;
    r2 = n += -0.45390043f;
    n *= r1;
    n += 4.44090033f;
    n = r0 += n;
    r1 = n *= -0.00374627f;
    r3 = n += -0.29993236f;
    r4 = n += 0.22064652f;
    n = r0 *= n;
    n += r3;
    n += -2.57246208f;
    n *= r1;
    n += -1.16397452f;
    n = r0 += n;
    n = r0 *= n;
    n += -27.12097740f;
    n += -3.11511970f;
    n *= -0.00061711f;
    n += 1.09656429f;
    n = r2 += n;
    n = r0 *= n;
    n += 1.10127354f;
    n += -1.13292372f;
    n *= r4;
    n = r0 += n;
    n += r2;
    n *= -0.51290864f;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.00011927
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.72887391f;
    n += -0.38119093f;
    r1 = n += -1.72443986f;
    n *= -1.22909558f;
    n += -0.71578258f;
    r2 = n += 0.05674349f;
    n *= r1;
    n += 0.81399053f;
    n = r0 += n;
    r1 = n *= 0.00152780f;
    r3 = n += -0.81859344f;
    r4 = n += 0.89504993f;
    n = r0 *= n;
    n += r3;
    n += 2.80784154f;
    n *= r1;
    n += 0.82705462f;
    n = r0 += n;
    n = r0 *= n;
    n += 3.10626245f;
    n += 0.35483032f;
    n *= 0.00117465f;
    n += 0.86773193f;
    n = r2 += n;
    n = r0 *= n;
    n += 0.00180950f;
    n += -1.98691916f;
    n *= r4;
    n = r0 += n;
    n += r2;
    n *= -0.01001866f;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.00014353
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.47145161f;
    n += -0.80358827f;
    r1 = n += 0.15209457f;
    n *= -0.42443970f;
    n += 0.44064716f;
    r2 = n += -0.42196408f;
    n *= r1;
    n += 2.12945414f;
    n = r0 += n;
    r1 = n *= -0.43604028f;
    r3 = n += -0.10478219f;
    r4 = n += -0.26872638f;
    n = r0 *= n;
    n += r3;
    n += -0.71337706f;
    n *= r1;
    n += -3.26303768f;
    n = r0 += n;
    n = r0 *= n;
    n += 0.05745709f;
    n += -2.43858528f;
    n *= 0.20209670f;
    n += -0.81533182f;
    n = r2 += n;
    n = r0 *= n;
    n += 0.49033949f;
    n += 0.84049457f;
    n *= r4;
    n = r0 += n;
    n += r2;
    n *= -0.99959761f;
    n += r0;
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
