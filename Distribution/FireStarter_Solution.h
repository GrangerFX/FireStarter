// Run date: 07/16/22 11:06:04 Pacific Daylight Time
// Run duration = 0.868206 seconds
// Run count = 9
// Run mode = 2
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 8337
// Solution Generation = 8

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

// Precision = 0.00000727

// Solution0 precision = 0.00000052
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.25233254f;
    n *= 1.04178500f;
    r1 = n *= 0.53868109f;
    n = r0 *= n;
    r2 = n += -0.09925447f;
    n *= 0.53891027f;
    r3 = n += -1.30587196f;
    r4 = n *= 0.27344307f;
    n *= r0;
    n *= -0.16840795f;
    r0 = n += 1.05417955f;
    n *= -1.04534900f;
    n += -0.24114984f;
    r5 = n *= 0.58703429f;
    n = r3 += n;
    n += -1.23449123f;
    n *= r2;
    n += 0.81189084f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n += r1;
    n *= 1.14654160f;
    n = r3 *= n;
    n *= r0;
    n *= r4;
    n += 0.60548031f;
    n *= -0.00000005f;
    n += r3;
    n += r5;
    n *= 2.06670213f;
    return n;
} // Solution0

// Solution1 precision = 0.00000727
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065866f;
    r0 = n *= 0.58455735f;
    n *= -0.71801889f;
    r1 = n *= 0.67328995f;
    n = r0 *= n;
    r2 = n += 0.33822426f;
    n *= 0.02557388f;
    r3 = n += 0.90092975f;
    r4 = n *= 0.45691594f;
    n *= r0;
    n *= 0.30196097f;
    r0 = n += -0.05663780f;
    n *= 1.55449891f;
    n += 1.84520674f;
    r5 = n *= 0.00213513f;
    n = r3 += n;
    n += -0.37919417f;
    n *= r2;
    n += 1.64679945f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n += r1;
    n *= -1.97069013f;
    n = r3 *= n;
    n *= r0;
    n *= r4;
    n += 0.51417816f;
    n *= 0.32241949f;
    n += r3;
    n += r5;
    n *= -0.71257585f;
    return n;
} // Solution1

// Solution2 precision = 0.00000477
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799121f;
    r0 = n *= -0.76309210f;
    n *= -0.77618450f;
    r1 = n *= 1.14917469f;
    n = r0 *= n;
    r2 = n += 1.28267765f;
    n *= 0.02048297f;
    r3 = n += 1.60534894f;
    r4 = n *= 0.14719790f;
    n *= r0;
    n *= 0.78072864f;
    r0 = n += 0.99928772f;
    n *= -0.00370567f;
    n += -0.64148813f;
    r5 = n *= 0.57089770f;
    n = r3 += n;
    n += 0.03756206f;
    n *= r2;
    n += 1.63051033f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n += r1;
    n *= -0.05338440f;
    n = r3 *= n;
    n *= r0;
    n *= r4;
    n += 1.23163915f;
    n *= 0.63971037f;
    n += r3;
    n += r5;
    n *= 0.66455513f;
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
