#include <math.h>

// Run date: 02/19/22 11:50:32 Pacific Standard Time
// Run duration = 3.350676 seconds
// Run count = 2
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

// Precision = 0.008138
// Solution0 precision = 0.008138
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.20228852f;
    r0 = n;
    n += -0.95160401f;
    r1 = n;
    n += r0;
    n *= r1;
    r1 = n;
    n *= -0.47197953f;
    n += -0.99701196f;
    r0 = n;
    n += -0.68254161f;
    r2 = n;
    n += -0.85675025f;
    r3 = n;
    n += fabsf(0.64971226f);
    n *= -0.20651513f;
    n += 0.37915972f;
    r4 = n;
    n += -0.81203586f;
    r5 = n;
    n += -0.08080198f;
    n += r4;
    n += -0.81538367f;
    n += r1;
    r1 = n;
    n *= 0.96753067f;
    n += r0;
    r0 = n;
    n += -0.52445108f;
    n += 0.34754780f;
    r4 = n;
    n *= r5;
    r5 = n;
    n += -0.59811175f;
    n += -0.45209640f;
    n *= r3;
    n *= r0;
    n += 0.05445882f;
    n *= r4;
    n += r5;
    n += 0.16688764f;
    n *= r1;
    n += fabsf(0.75270820f);
    n += r2;
    return n;
} // Solution0

