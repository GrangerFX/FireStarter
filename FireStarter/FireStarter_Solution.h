#include <math.h>

// Run date: 03/20/22 15:50:48 Pacific Daylight Time
// Run duration = 3.271952 seconds
// Run count = 7
// Run units = 1
// Run population = 17408
// Run iterations = 1024
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

// Precision = 0.000024

// Solution0 precision = 0.000013
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.53268951f;
    r0 = n += -0.63022131f;
    n += -0.09676145f;
    n += 1.44783986f;
    n += -1.28653407f;
    r1 = n *= -0.04537708f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.12899071f;
    r3 = n += 0.17821135f;
    r4 = n += 0.92564994f;
    n = r4 += n;
    n *= -0.18244298f;
    n *= r2;
    n *= -0.46508062f;
    r2 = n += -3.85870433f;
    n *= -0.79696268f;
    n *= r1;
    n *= r2;
    n *= 0.02196185f;
    r2 = n += -0.00797097f;
    n *= r4;
    r4 = n *= 1.63253725f;
    r1 = n += 0.94501823f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.12455523f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.000015
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.17514800f;
    r0 = n += -0.46293601f;
    n += -2.01637077f;
    n += 0.74243730f;
    n += -1.10914338f;
    r1 = n *= -0.00938681f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.07095316f;
    r3 = n += 0.11095092f;
    r4 = n += 0.50949758f;
    n = r4 += n;
    n *= -1.49029601f;
    n *= r2;
    n *= -0.04247589f;
    r2 = n += -1.41187227f;
    n *= 0.56972158f;
    n *= r1;
    n *= r2;
    n *= -0.63184202f;
    r2 = n += 0.00051682f;
    n *= r4;
    r4 = n *= 5.55558634f;
    r1 = n += 1.27695775f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.03458762f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.95709342f;
    r0 = n += -1.53474319f;
    n += -0.17708346f;
    n += 0.50330263f;
    n += -0.48300371f;
    r1 = n *= 0.02021004f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.18329020f;
    r3 = n += 0.65645313f;
    r4 = n += 0.73436594f;
    n = r4 += n;
    n *= 0.46707037f;
    n *= r2;
    n *= 0.03889836f;
    r2 = n += -1.22705281f;
    n *= 1.55148482f;
    n *= r1;
    n *= r2;
    n *= 1.02080739f;
    r2 = n += 0.00914612f;
    n *= r4;
    r4 = n *= 0.32867625f;
    r1 = n += 0.75639325f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.89038062f;
    n *= r4;
    n *= r0;
    n *= r3;
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
