#include <math.h>

// Run date: 02/19/22 09:29:43 Pacific Standard Time
// Run duration = 7.090989 seconds
// Run count = 8
// Run units = 1
// Run population = 8704
// Run iterations = 512
// Run generations = 10
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_VARIATIONS 1

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
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
} // Target

// Precision = 0.003318
// Solution0 precision = 0.003318
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.74083775f;
    n += -0.75101900f;
    r0 = n;
    n *= 0.69793332f;
    r1 = n;
    n *= 0.59382123f;
    n += 0.67202985f;
    r2 = n;
    n *= -0.53489369f;
    n += -0.57802296f;
    r3 = n;
    n += 0.30592906f;
    n += fabsf(0.12954481f);
    r4 = n;
    n *= 0.32633653f;
    r5 = n;
    n += -0.53781307f;
    r6 = n;
    n += r0;
    n += -0.35433304f;
    r0 = n;
    n *= r6;
    r6 = n;
    n += -0.53261340f;
    n *= r4;
    n += 0.04916125f;
    r4 = n;
    n *= r4;
    r4 = n;
    n *= r4;
    n *= 0.08980789f;
    n += r6;
    n *= 0.32254133f;
    n += r2;
    r2 = n;
    n += r3;
    n += r2;
    n += 0.83546895f;
    n += r0;
    r0 = n;
    n += 0.78352648f;
    n *= r5;
    n *= r1;
    r1 = n;
    n += r0;
    n *= r1;
    return n;
} // Solution0

