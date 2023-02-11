// Run date: 02/11/23 12:12:19 Pacific Standard Time
// Run duration = 83.009497 seconds
// Run count = 735
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 128
// Run seed = 4
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 735

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00003839

// Solution0 precision = 0.00002873
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.13641073f;
    n += 1.13354146f;
    r0 = n += 0.12053567f;
    r1 = n += -1.50297582f;
    r2 = n *= -1.41301095f;
    n += 2.60730743f;
    n += -3.26125073f;
    r3 = n += -2.50455666f;
    n *= r1;
    n += 2.00589395f;
    r1 = n += 0.10230935f;
    n = r3 += n;
    r4 = n += -1.39817488f;
    n = r2 += n;
    n += 0.57050890f;
    r5 = n *= 0.14892179f;
    n = r1 += n;
    n = r1 *= n;
    n += 1.44571686f;
    n += -3.73027015f;
    n *= r4;
    n *= 0.16018607f;
    r4 = n *= 0.53536332f;
    n += r1;
    n *= r2;
    n += -4.67350292f;
    n *= r5;
    n += -19.71805382f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= 0.12819120f;
    return n;
} // Solution0

// Solution1 precision = 0.00003839
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.27503130f;
    n += 1.19084489f;
    r0 = n += -0.37039450f;
    r1 = n += -0.32295030f;
    r2 = n *= 0.11174813f;
    n += -0.04058038f;
    n += -0.03590322f;
    r3 = n += 0.05970062f;
    n *= r1;
    n += -0.24290530f;
    r1 = n += -0.34576857f;
    n = r3 += n;
    r4 = n += 0.44166958f;
    n = r2 += n;
    n += 0.43491039f;
    r5 = n *= 0.59854150f;
    n = r1 += n;
    n = r1 *= n;
    n += -0.06546371f;
    n += 0.10687650f;
    n *= r4;
    n *= -0.05457959f;
    r4 = n *= -0.17236748f;
    n += r1;
    n *= r2;
    n += 16.07412529f;
    n *= r5;
    n += -26384.31250000f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= -0.59317386f;
    return n;
} // Solution1

// Solution2 precision = 0.00003660
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.20823373f;
    n += -0.90042770f;
    r0 = n += -0.00642576f;
    r1 = n += -0.22095795f;
    r2 = n *= 0.12050622f;
    n += -0.02570534f;
    n += -0.10321745f;
    r3 = n += -0.10867942f;
    n *= r1;
    n += -0.24172878f;
    r1 = n += -0.03158428f;
    n = r3 += n;
    r4 = n += -0.18770401f;
    n = r2 += n;
    n += -0.61140597f;
    r5 = n *= 0.00418216f;
    n = r1 += n;
    n = r1 *= n;
    n += -0.03892238f;
    n += 0.01845056f;
    n *= r4;
    n *= -0.16724122f;
    r4 = n *= -6789.71582031f;
    n += r1;
    n *= r2;
    n += 6.92466736f;
    n *= r5;
    n += 0.41045159f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= 1.27202332f;
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
