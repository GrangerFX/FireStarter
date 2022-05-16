// Run date: 05/15/22 20:56:10 Pacific Daylight Time
// Run duration = 5.715964 seconds
// Run count = 4
// Run units = 4
// Run population = 34816
// Run iterations = 128
// Run generations = 100
// Run samples = 15
// State Generation = 3

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

// Precision = 0.000053

// Solution0 precision = 0.000031
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.21988034f;
    r0 = n += -0.69083142f;
    r1 = n *= -0.75824702f;
    r2 = n += -0.00005847f;
    n *= r1;
    n += 0.52753347f;
    r1 = n += -1.99709880f;
    r3 = n += -0.11700045f;
    r4 = n += -0.91304570f;
    n += r3;
    n += -0.53603703f;
    r3 = n *= -1.63713515f;
    n *= -0.45731634f;
    n = r2 *= n;
    r5 = n *= -0.58046460f;
    n *= 0.23771909f;
    n = r0 *= n;
    n *= 1.79966092f;
    n *= 0.05148632f;
    n += r0;
    r0 = n += 0.16637239f;
    n *= 0.59383124f;
    r6 = n *= -0.64845002f;
    n += 0.34129211f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.00010372f;
    return n;
} // Solution0

// Solution1 precision = 0.000039
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.24370977f;
    r0 = n += 0.75323325f;
    r1 = n *= 0.92700946f;
    r2 = n += -0.00001392f;
    n *= r1;
    n += -0.82459730f;
    r1 = n += -0.33047301f;
    r3 = n += -0.55949825f;
    r4 = n += -0.17011045f;
    n += r3;
    n += -1.89215779f;
    r3 = n *= -0.48041326f;
    n *= 0.07036358f;
    n = r2 *= n;
    r5 = n *= 0.69132215f;
    n *= -0.09705008f;
    n = r0 *= n;
    n *= 0.78161240f;
    n *= 0.34639487f;
    n += r0;
    r0 = n += 0.96551991f;
    n *= 1.54350185f;
    r6 = n *= 1.27104652f;
    n += 0.21951911f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += -0.11811086f;
    return n;
} // Solution1

// Solution2 precision = 0.000053
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.42012668f;
    r0 = n += -1.10013032f;
    r1 = n *= 0.54220867f;
    r2 = n += 0.00018044f;
    n *= r1;
    n += -3.36061954f;
    r1 = n += -0.74238199f;
    r3 = n += 0.48915935f;
    r4 = n += 1.01577961f;
    n += r3;
    n += -0.23476174f;
    r3 = n *= 1.05378950f;
    n *= 0.96151263f;
    n = r2 *= n;
    r5 = n *= 0.33863443f;
    n *= -0.11955087f;
    n = r0 *= n;
    n *= -0.99005443f;
    n *= 0.06255614f;
    n += r0;
    r0 = n += -0.10881132f;
    n *= -0.42554754f;
    r6 = n *= -0.19591679f;
    n += -0.61452401f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= r6;
    n *= r4;
    n *= r1;
    n += 0.52381873f;
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
