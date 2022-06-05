// Run date: 06/04/22 18:28:13 Pacific Daylight Time
// Run duration = 4.619384 seconds
// Run count = 16
// Run units = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 15

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

// Precision = 0.000149

// Solution0 precision = 0.000105
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.57780474f;
    r0 = n += -0.66322726f;
    n *= -2.74539137f;
    r1 = n *= 0.33374429f;
    r2 = n += 0.79188734f;
    n = r0 += n;
    n += 0.08979814f;
    n += r2;
    n += -0.00873430f;
    r2 = n *= -1.43443775f;
    n = r1 += n;
    r3 = n += -0.65308720f;
    r4 = n *= 0.43042770f;
    n *= -0.07080708f;
    n += r4;
    n = r0 *= n;
    n *= r2;
    n = r0 += n;
    n *= 0.34443158f;
    r2 = n *= 0.39129955f;
    n *= r0;
    n = r1 += n;
    n += -0.23730594f;
    n *= r3;
    n += 0.27469227f;
    n *= -0.62623709f;
    n = r2 += n;
    n *= r1;
    n *= 0.55650812f;
    n += r2;
    n += 0.52161890f;
    n += -0.45912433f;
    return n;
} // Solution0

// Solution1 precision = 0.000038
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.81634426f;
    r0 = n += 0.15694343f;
    n *= 0.24686790f;
    r1 = n *= 0.07426334f;
    r2 = n += -0.09231607f;
    n = r0 += n;
    n += -0.46483538f;
    n += r2;
    n += -0.05030333f;
    r2 = n *= 0.07992592f;
    n = r1 += n;
    r3 = n += -0.90041447f;
    r4 = n *= 0.65746242f;
    n *= 0.23366070f;
    n += r4;
    n = r0 *= n;
    n *= r2;
    n = r0 += n;
    n *= -1.03252077f;
    r2 = n *= -1.36162746f;
    n *= r0;
    n = r1 += n;
    n += 0.74338877f;
    n *= r3;
    n += 1.40272176f;
    n *= 0.19456977f;
    n = r2 += n;
    n *= r1;
    n *= -0.10159639f;
    n += r2;
    n += 0.78889191f;
    n += -0.68239880f;
    return n;
} // Solution1

// Solution2 precision = 0.000149
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.77738708f;
    r0 = n += -0.57289410f;
    n *= -1.28707600f;
    r1 = n *= 0.54511333f;
    r2 = n += -0.27858502f;
    n = r0 += n;
    n += -1.33177733f;
    n += r2;
    n += -0.40070567f;
    r2 = n *= -0.97709727f;
    n = r1 += n;
    r3 = n += 0.35612503f;
    r4 = n *= -1.23113990f;
    n *= -0.74298286f;
    n += r4;
    n = r0 *= n;
    n *= r2;
    n = r0 += n;
    n *= 0.71455854f;
    r2 = n *= -0.45788833f;
    n *= r0;
    n = r1 += n;
    n += -0.20714267f;
    n *= r3;
    n += 0.46320212f;
    n *= -1.01345575f;
    n = r2 += n;
    n *= r1;
    n *= -0.55604285f;
    n += r2;
    n += -0.66130006f;
    n += 1.12534726f;
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
