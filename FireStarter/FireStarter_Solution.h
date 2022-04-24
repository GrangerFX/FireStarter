// Run date: 04/24/22 16:00:01 Pacific Daylight Time
// Run duration = 2.035283 seconds
// Run count = 2
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 1

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

// Precision = 0.000137

// Solution0 precision = 0.000068
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.71857667f;
    r0 = n += 0.11620233f;
    n += -0.72614372f;
    n += -0.23782045f;
    n += 0.43194264f;
    r1 = n *= -0.33412668f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.11250249f;
    r3 = n += -0.37019533f;
    r4 = n += -0.53090155f;
    n *= -0.24348339f;
    n *= 0.80780542f;
    n *= r2;
    n *= 0.75428432f;
    r2 = n += 1.30683112f;
    n *= 0.47972590f;
    n *= r1;
    n *= r2;
    n *= -0.43239424f;
    n += 0.01247565f;
    n *= r4;
    r4 = n *= -0.63690960f;
    r2 = n += 0.86787546f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.96251041f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.32913849f;
    return n;
} // Solution0

// Solution1 precision = 0.000137
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.33211473f;
    r0 = n += -1.02109599f;
    n += -0.06775641f;
    n += 0.23799102f;
    n += -1.06241465f;
    r1 = n *= -1.09957457f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.55526894f;
    r3 = n += 0.82937723f;
    r4 = n += 0.31825000f;
    n *= 0.12895204f;
    n *= -0.70946234f;
    n *= r2;
    n *= 0.46913126f;
    r2 = n += 0.68405432f;
    n *= -0.61198246f;
    n *= r1;
    n *= r2;
    n *= 1.57843697f;
    n += -0.94843102f;
    n *= r4;
    r4 = n *= 0.37748784f;
    r2 = n += -1.55257082f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.30863321f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.06340084f;
    return n;
} // Solution1

// Solution2 precision = 0.000040
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.20385267f;
    r0 = n += -0.66987389f;
    n += -0.46944726f;
    n += 0.24854600f;
    n += -0.26042479f;
    r1 = n *= 0.47326857f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.05676508f;
    r3 = n += 0.74247599f;
    r4 = n += -0.18804710f;
    n *= 1.31603575f;
    n *= -0.28069055f;
    n *= r2;
    n *= -0.63739586f;
    r2 = n += -1.54442263f;
    n *= 0.99502212f;
    n *= r1;
    n *= r2;
    n *= -0.26742911f;
    n += -0.16610266f;
    n *= r4;
    r4 = n *= -0.27647239f;
    r2 = n += 0.76611316f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.75881225f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.80194330f;
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
