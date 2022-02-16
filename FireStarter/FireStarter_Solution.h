#include <math.h>

// Run date: 02/15/22 20:32:41 Pacific Standard Time
// Run duration = 1.391917 seconds
// Run count = 1
// Run units = 1
// Run population = 8704
// Run iterations = 512
// Run generations = 1
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

// Precision = 0.000000
// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.35174555f;
    r0 = n;
    n += -0.57845104f;
    n *= 0.97742188f;
    r1 = n;
    n *= -0.49098909f;
    r2 = n;
    n += 0.17677724f;
    r3 = n;
    n += fabsf(r0);
    r0 = n;
    n *= 0.75705099f;
    r4 = n;
    n += -0.44221497f;
    r5 = n;
    n += 0.08929685f;
    r6 = n;
    n += -0.95173174f;
    r7 = n;
    n += r7;
    r7 = n;
    n += r2;
    n += -0.15108754f;
    n *= r3;
    n *= 0.96077985f;
    n *= r5;
    n *= r6;
    n *= -0.86091077f;
    r6 = n;
    n *= r6;
    n += r0;
    r0 = n;
    n *= r0;
    n *= 0.38379973f;
    n += r4;
    n += -0.81551158f;
    n *= r1;
    n *= r7;
    n += fabsf(-0.94839287f);
    r7 = n;
    n *= -0.77010202f;
    n *= -0.28068700f;
    n += r7;
    n *= -0.81222838f;
    n *= -0.36814511f;
    return n;
} // Solution0

