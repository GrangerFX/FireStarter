#include <math.h>

// Run date: 02/19/22 11:06:06 Pacific Standard Time
// Run duration = 1.697313 seconds
// Run count = 3
// Run units = 1
// Run population = 4352
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

// Precision = 0.009996
// Solution0 precision = 0.009996
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -0.74731946f;
    n += -0.75101900f;
    r0 = n;
    n *= 0.70294678f;
    r1 = n;
    n *= 0.55014187f;
    n += 0.67202985f;
    r2 = n;
    n *= -0.53334075f;
    n += -0.59638011f;
    r3 = n;
    n += 0.31009808f;
    n += fabsf(0.12688379f);
    r4 = n;
    n *= 0.34067088f;
    r5 = n;
    n += -0.47004917f;
    r6 = n;
    n += r0;
    n += -0.34901050f;
    r0 = n;
    n *= r6;
    r6 = n;
    n += fabsf(-0.55162668f);
    r7 = n;
    n *= 0.06678218f;
    n += fabsf(r4);
    n += 0.08138736f;
    n *= r7;
    n *= 0.30898085f;
    n += r6;
    n *= 0.82828623f;
    n += r2;
    r2 = n;
    n += r3;
    n += r2;
    n += 0.77715766f;
    n += r0;
    r0 = n;
    n += 0.42526713f;
    n *= r5;
    n *= r1;
    r1 = n;
    n += r0;
    n *= r1;
    return n;
} // Solution0

