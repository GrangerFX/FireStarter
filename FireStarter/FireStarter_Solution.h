// Run date: 05/15/22 16:21:52 Pacific Daylight Time
// Run duration = 1.867150 seconds
// Run count = 9
// Run units = 1
// Run population = 4352
// Run iterations = 512
// Run generations = 10
// Run samples = 15
// State Generation = 80

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

// Precision = 0.015062

// Solution0 precision = 0.015062
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.53430510f;
    r1 = n += -0.12690660f;
    r2 = n += -1.89537466f;
    r3 = n += 0.04419238f;
    r4 = n += -0.98669541f;
    r5 = n *= 0.06715052f;
    r6 = n += -0.45780841f;
    n = r2 += n;
    n += 1.07425809f;
    n += r5;
    n *= -0.57305396f;
    n += r3;
    r3 = n += -1.11306643f;
    n *= -0.79832667f;
    n += r6;
    n *= 0.42302549f;
    n *= r3;
    n *= r0;
    r0 = n += -1.05039275f;
    n *= 0.29720765f;
    n *= r2;
    n += 0.01040621f;
    n *= r0;
    n += -0.69187999f;
    n += 0.35848278f;
    n *= r1;
    n += -0.49692303f;
    r1 = n += -0.12143680f;
    n *= 0.87628639f;
    n += 0.24456505f;
    n *= r4;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.007274
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.24696039f;
    r1 = n += -0.77010208f;
    r2 = n += 0.25297514f;
    r3 = n += -0.54842186f;
    r4 = n += -0.01803676f;
    r5 = n *= -0.43411490f;
    r6 = n += -1.14691782f;
    n = r2 += n;
    n += 0.71780777f;
    n += r5;
    n *= -3.19608641f;
    n += r3;
    r3 = n += 0.26604500f;
    n *= 0.33228308f;
    n += r6;
    n *= 1.21426356f;
    n *= r3;
    n *= r0;
    r0 = n += 0.84030735f;
    n *= 4.29764843f;
    n *= r2;
    n += -0.79247957f;
    n *= r0;
    n += -0.55472600f;
    n += -0.03602979f;
    n *= r1;
    n += -1.37222433f;
    r1 = n += 1.44850361f;
    n *= 0.54775923f;
    n += 0.65816712f;
    n *= r4;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.011977
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.44898722f;
    r1 = n += 0.87425882f;
    r2 = n += 0.26781231f;
    r3 = n += 0.81038982f;
    r4 = n += -0.32060111f;
    r5 = n *= -0.54363751f;
    r6 = n += -0.38380441f;
    n = r2 += n;
    n += 0.08966909f;
    n += r5;
    n *= 0.25261801f;
    n += r3;
    r3 = n += 1.27126789f;
    n *= 0.86895823f;
    n += r6;
    n *= 0.96653759f;
    n *= r3;
    n *= r0;
    r0 = n += 0.37655815f;
    n *= -0.87427092f;
    n *= r2;
    n += -0.61843020f;
    n *= r0;
    n += -0.34209099f;
    n += -1.09034359f;
    n *= r1;
    n += -0.61217189f;
    r1 = n += 1.19361830f;
    n *= 0.12488424f;
    n += 0.62743425f;
    n *= r4;
    n += r1;
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
