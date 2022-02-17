#include <math.h>

// Run date: 02/16/22 20:10:21 Pacific Standard Time
// Run duration = 1.531970 seconds
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

// Precision = 0.058740
// Solution0 precision = 0.058740
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.56083983f;
    n += 0.26487353f;
    r0 = n;
    n += -0.00008841f;
    r1 = n;
    n *= r0;
    r0 = n;
    n *= 0.44702214f;
    r2 = n;
    n *= 0.77777576f;
    n *= -1.01560581f;
    r3 = n;
    n += r1;
    n *= -0.60479718f;
    r1 = n;
    n *= r3;
    n += r2;
    n *= 0.12681685f;
    r2 = n;
    n += 0.06302597f;
    n += fabsf(0.24132249f);
    n += 0.81497097f;
    r3 = n;
    n *= -0.42264768f;
    n += 0.62702197f;
    r4 = n;
    n += 0.86200064f;
    r5 = n;
    n += r5;
    n += fabsf(r2);
    n += -0.74566132f;
    n += -0.54375035f;
    n *= r1;
    n += r0;
    n *= r4;
    n += 0.04827267f;
    n += r3;
    r3 = n;
    n *= -0.60942483f;
    n += r3;
    r3 = n;
    n += r3;
    n *= 0.58991796f;
    n += 0.11478316f;
    return n;
} // Solution0

