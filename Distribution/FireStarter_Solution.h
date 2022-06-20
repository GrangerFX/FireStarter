// Run date: 06/19/22 21:03:17 Pacific Daylight Time
// Run duration = 13.452163 seconds
// Run count = 1
// Run units = 4
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 0

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

// Precision = 0.000204

// Solution0 precision = 0.000197
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.23601395f;
    r1 = n *= -1.16146362f;
    n *= -0.76922834f;
    n += r0;
    r0 = n += 1.02245176f;
    r2 = n += -0.14979899f;
    n = r1 += n;
    r3 = n += 0.92115718f;
    n += -3.17267704f;
    r4 = n += -0.00968419f;
    n += -0.19719411f;
    r5 = n *= 0.16966224f;
    r6 = n += 0.81191218f;
    n += r2;
    n *= r4;
    n = r3 *= n;
    n = r1 *= n;
    r4 = n += 1.88451624f;
    r2 = n *= 0.03678126f;
    n *= 0.81758040f;
    n = r6 += n;
    n = r0 *= n;
    n = r3 += n;
    n *= 0.08732735f;
    n += r2;
    n *= r1;
    n += r5;
    n += r4;
    n += r0;
    n *= r6;
    n *= r3;
    n *= -1.52582073f;
    return n;
} // Solution0

// Solution1 precision = 0.000204
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.16941516f;
    r1 = n *= -0.94316632f;
    n *= 0.46112072f;
    n += r0;
    r0 = n += -0.77024770f;
    r2 = n += -1.02090728f;
    n = r1 += n;
    r3 = n += -0.25069392f;
    n += 1.98790872f;
    r4 = n += 0.53250021f;
    n += -0.86073500f;
    r5 = n *= -0.83972484f;
    r6 = n += 1.07574832f;
    n += r2;
    n *= r4;
    n = r3 *= n;
    n = r1 *= n;
    r4 = n += 0.17363362f;
    r2 = n *= 0.94164419f;
    n *= 0.55214781f;
    n = r6 += n;
    n = r0 *= n;
    n = r3 += n;
    n *= -1.42912185f;
    n += r2;
    n *= r1;
    n += r5;
    n += r4;
    n += r0;
    n *= r6;
    n *= r3;
    n *= 1.29686904f;
    return n;
} // Solution1

// Solution2 precision = 0.000202
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.16817673f;
    r1 = n *= 0.10400359f;
    n *= 0.34785691f;
    n += r0;
    r0 = n += -0.55415475f;
    r2 = n += -0.25698200f;
    n = r1 += n;
    r3 = n += 1.08966267f;
    n += 1.55155027f;
    r4 = n += -0.36332488f;
    n += 0.17548156f;
    r5 = n *= -0.16996081f;
    r6 = n += -0.61818397f;
    n += r2;
    n *= r4;
    n = r3 *= n;
    n = r1 *= n;
    r4 = n += 0.62056786f;
    r2 = n *= -0.29350802f;
    n *= 1.04018641f;
    n = r6 += n;
    n = r0 *= n;
    n = r3 += n;
    n *= 0.50985408f;
    n += r2;
    n *= r1;
    n += r5;
    n += r4;
    n += r0;
    n *= r6;
    n *= r3;
    n *= 1.18324995f;
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
