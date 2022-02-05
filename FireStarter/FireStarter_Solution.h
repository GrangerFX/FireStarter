#include <math.h>

// Run date: 02/05/22 12:40:04 Pacific Standard Time
// Run duration = 1.396806 seconds
// Run count = 7
// Run units = 1
// Run population = 4352
// Run iterations = 128
// Run generations = 50
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

// Solution0 precision = 0.003297
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.08128154f;
    r0 = n;
    n += 0.24782221f;
    r1 = n;
    n += -0.79726833f;
    r2 = n;
    n *= 0.19261903f;
    n *= 1.17847419f;
    r3 = n;
    n += 0.26383424f;
    r4 = n;
    n += r2;
    r2 = n;
    n *= r3;
    n += -2.06696963f;
    r3 = n;
    n *= 0.13283530f;
    n += r0;
    r0 = n;
    n *= 0.15925530f;
    n += -0.46069553f;
    r5 = n;
    n += -0.82562131f;
    n *= r3;
    n += 0.64592040f;
    n *= r4;
    r4 = n;
    n += fabsf(-0.18105428f);
    n *= r1;
    n *= r5;
    r5 = n;
    n *= -0.28131527f;
    n += -0.07009128f;
    r1 = n;
    n += r5;
    n *= r0;
    n *= 0.63562244f;
    r0 = n;
    n += r0;
    n *= 0.49871701f;
    n += r2;
    n *= 0.04317072f;
    n += r1;
    n += r4;
    n += -0.39545348f;
    return n;
} // Solution0

