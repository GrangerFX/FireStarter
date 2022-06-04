// Run date: 06/04/22 11:56:58 Pacific Daylight Time
// Run duration = 0.634366 seconds
// Run count = 17
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 16

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

// Precision = 0.000167

// Solution0 precision = 0.000162
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.00512159f;
    r1 = n += -0.59939802f;
    r2 = n *= 0.54992217f;
    r3 = n *= -0.10672218f;
    n *= -0.79027587f;
    n += -0.03809122f;
    n = r2 += n;
    n *= 0.24390638f;
    n += 1.04186857f;
    n += -0.73555678f;
    r4 = n += 0.85853386f;
    n *= r1;
    n += -0.83234626f;
    n *= r0;
    r0 = n += -1.37436891f;
    n *= r3;
    r3 = n += -0.56389672f;
    n += r0;
    n = r3 += n;
    n += -0.04562570f;
    n += r2;
    n *= -0.25445738f;
    n += r4;
    n *= -1.07482910f;
    n *= -0.37984115f;
    r4 = n += 1.26779091f;
    n += -1.37350440f;
    n *= -0.36827642f;
    n *= 0.05719712f;
    n += -0.14718826f;
    n *= r3;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.000099
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 0.03409138f;
    r1 = n += 0.24100921f;
    r2 = n *= -0.40264040f;
    r3 = n *= 0.08599244f;
    n *= 0.37147608f;
    n += 1.39702213f;
    n = r2 += n;
    n *= -0.07301407f;
    n += 0.79259497f;
    n += -0.33555344f;
    r4 = n += -0.04745087f;
    n *= r1;
    n += -0.72788393f;
    n *= r0;
    r0 = n += -0.22906111f;
    n *= r3;
    r3 = n += -0.60805404f;
    n += r0;
    n = r3 += n;
    n += -0.89093143f;
    n += r2;
    n *= -0.08352581f;
    n += r4;
    n *= 0.87923086f;
    n *= 1.38941765f;
    r4 = n += 0.29707238f;
    n += -0.27686033f;
    n *= -0.80171943f;
    n *= 1.08040893f;
    n += -0.28920338f;
    n *= r3;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.000167
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -4.12967062f;
    r1 = n += 0.81207800f;
    r2 = n *= 0.16129246f;
    r3 = n *= -0.39567184f;
    n *= -1.51642776f;
    n += -0.09007006f;
    n = r2 += n;
    n *= -0.55385381f;
    n += -0.63100922f;
    n += -0.38739881f;
    r4 = n += 0.05043433f;
    n *= r1;
    n += 0.12641890f;
    n *= r0;
    r0 = n += 0.22073980f;
    n *= r3;
    r3 = n += -0.00006544f;
    n += r0;
    n = r3 += n;
    n += 0.61109853f;
    n += r2;
    n *= -0.41530544f;
    n += r4;
    n *= -0.18951498f;
    n *= 0.71339869f;
    r4 = n += 0.46898979f;
    n += -1.09398270f;
    n *= 0.68327492f;
    n *= -0.72054851f;
    n += -1.31924081f;
    n *= r3;
    n *= r4;
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
