// Run date: 04/23/22 11:41:25 Pacific Daylight Time
// Run duration = 1.785961 seconds
// Run count = 5
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15

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

// Precision = 0.000059

// Solution0 precision = 0.000038
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.28428456f;
    r0 = n += -0.74841976f;
    n += -2.21071744f;
    n *= 0.65411139f;
    n += 0.23586726f;
    r1 = n *= -0.14089294f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.21938922f;
    r3 = n += -1.03129590f;
    r4 = n += -1.15101635f;
    n *= -0.13016143f;
    n *= -1.50507045f;
    n *= r2;
    n *= 0.04326766f;
    r2 = n += -0.55423182f;
    n *= 0.51806438f;
    n *= r1;
    n *= r2;
    n *= 0.90279210f;
    n += -0.00973816f;
    n *= r4;
    r4 = n *= 1.03235567f;
    r2 = n += 0.43150401f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.17555070f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.27278301f;
    return n;
} // Solution0

// Solution1 precision = 0.000059
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.10368109f;
    r0 = n += -1.56638610f;
    n += 0.00731730f;
    n *= 0.99411744f;
    n += -0.75344521f;
    r1 = n *= -1.11486697f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.55179149f;
    r3 = n += 0.73759490f;
    r4 = n += 0.21235210f;
    n *= 0.54946584f;
    n *= -0.71386087f;
    n *= r2;
    n *= 0.09880751f;
    r2 = n += 0.71623904f;
    n *= -0.64889359f;
    n *= r1;
    n *= r2;
    n *= 0.91291076f;
    n += -0.22021724f;
    n *= r4;
    r4 = n *= 0.49430871f;
    r2 = n += -1.60665894f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.33937740f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.01172802f;
    return n;
} // Solution1

// Solution2 precision = 0.000034
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.05818649f;
    r0 = n += -0.83612984f;
    n += -0.37456542f;
    n *= 0.45684299f;
    n += -0.02722970f;
    r1 = n *= 0.64672357f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.07172303f;
    r3 = n += 0.80959994f;
    r4 = n += -0.29992563f;
    n *= 1.24809468f;
    n *= -0.21515524f;
    n *= r2;
    n *= -0.52495414f;
    r2 = n += -1.15878022f;
    n *= 1.30867147f;
    n *= r1;
    n *= r2;
    n *= -0.32572177f;
    n += -0.12092368f;
    n *= r4;
    r4 = n *= -0.43322900f;
    r2 = n += 0.76231003f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.96303630f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 1.04400885f;
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
