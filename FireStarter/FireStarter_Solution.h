// Run date: 05/08/22 14:05:50 Pacific Daylight Time
// Run duration = 4.511023 seconds
// Run count = 5
// Run units = 4
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 400

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

// Precision = 0.000055

// Solution0 precision = 0.000045
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.84125715f;
    r0 = n += -0.33084467f;
    n += -0.51690531f;
    n += -1.06660879f;
    n += -1.71579289f;
    r1 = n *= 0.20752257f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.06348449f;
    r3 = n += 0.46429905f;
    r4 = n += 0.36531305f;
    n *= -0.16501284f;
    n *= -2.49433422f;
    n *= r2;
    n *= 0.17222768f;
    r2 = n += -0.69780672f;
    n *= -0.63808078f;
    n *= r1;
    n *= r2;
    n *= -1.08884025f;
    n += 0.06856898f;
    n *= r4;
    r4 = n *= 0.87715065f;
    r2 = n += 0.75032687f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.69418442f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.05659612f;
    return n;
} // Solution0

// Solution1 precision = 0.000055
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.47551134f;
    r0 = n += 0.21327852f;
    n += -0.43573645f;
    n += -0.04087346f;
    n += -0.41117132f;
    r1 = n *= -0.52942371f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.21577869f;
    r3 = n += -0.68917841f;
    r4 = n += -0.90038466f;
    n *= 0.40611389f;
    n *= 0.02894247f;
    n *= r2;
    n *= -1.75631177f;
    r2 = n += 0.70203459f;
    n *= -0.65742534f;
    n *= r1;
    n *= r2;
    n *= -0.69347256f;
    n += -0.06634819f;
    n *= r4;
    r4 = n *= 0.33155861f;
    r2 = n += 0.64695776f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.31295788f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.34896567f;
    return n;
} // Solution1

// Solution2 precision = 0.000033
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.41715109f;
    r0 = n += 0.35141775f;
    n += -0.42620900f;
    n += 0.04975881f;
    n += -0.67996597f;
    r1 = n *= 0.21546087f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.12123291f;
    r3 = n += -0.74874181f;
    r4 = n += -0.61722571f;
    n *= -1.06088459f;
    n *= 0.54435635f;
    n *= r2;
    n *= 0.07914440f;
    r2 = n += 0.97002071f;
    n *= -0.92565817f;
    n *= r1;
    n *= r2;
    n *= 1.44875669f;
    n += -0.02933148f;
    n *= r4;
    r4 = n *= 0.12559968f;
    r2 = n += 0.57056284f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.65519363f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.34952915f;
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
