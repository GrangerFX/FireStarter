// Run date: 05/30/22 12:00:09 Pacific Daylight Time
// Run duration = 1.782975 seconds
// Run count = 2
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 1

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

// Precision = 0.000093

// Solution0 precision = 0.000093
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.28634167f;
    r0 = n += -0.07642314f;
    n += -0.49050555f;
    n += -0.86993015f;
    n += 0.78345764f;
    r1 = n *= -0.60092825f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.29502025f;
    r3 = n += -0.50710666f;
    r4 = n += -0.77879763f;
    n *= 0.15048389f;
    n *= -0.69472265f;
    n *= r2;
    n *= 0.49197388f;
    r2 = n += 1.15763187f;
    n *= 0.16546251f;
    n *= r1;
    n *= r2;
    n *= 0.43236563f;
    n += -0.02914818f;
    n *= r4;
    r4 = n *= 0.74304414f;
    r2 = n += 0.80002636f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.42942202f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.47411224f;
    return n;
} // Solution0

// Solution1 precision = 0.000065
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.54835957f;
    r0 = n += -0.34670287f;
    n += -0.02703853f;
    n += 0.10525192f;
    n += -1.00700021f;
    r1 = n *= -0.70740807f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.24680130f;
    r3 = n += -0.62698346f;
    r4 = n += -0.52426720f;
    n *= 0.18270604f;
    n *= -0.92545676f;
    n *= r2;
    n *= 0.42179087f;
    r2 = n += 1.21812630f;
    n *= 0.47344154f;
    n *= r1;
    n *= r2;
    n *= 0.48494631f;
    n += -0.16557479f;
    n *= r4;
    r4 = n *= 0.34452200f;
    r2 = n += 0.97572148f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.19056308f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.00836332f;
    return n;
} // Solution1

// Solution2 precision = 0.000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.09052937f;
    r0 = n += -0.03568711f;
    n += -0.10519908f;
    n += -0.54483241f;
    n += -0.80179977f;
    r1 = n *= 0.26513806f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.10551084f;
    r3 = n += 0.68055165f;
    r4 = n += 0.52329850f;
    n *= -1.48785388f;
    n *= 1.67281938f;
    n *= r2;
    n *= 0.02324519f;
    r2 = n += 1.00501359f;
    n *= -0.21659739f;
    n *= r1;
    n *= r2;
    n *= -0.50262451f;
    n += 0.00764476f;
    n *= r4;
    r4 = n *= 1.37302971f;
    r2 = n += 0.60972500f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.62347466f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.34473160f;
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
