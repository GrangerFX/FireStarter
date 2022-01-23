#include <math.h>

// Run date: 01/23/22 12:26:47 Pacific Standard Time
// Run duration = 1.737151 seconds
// Run count = 1
// Run units = 1
// Run population = 4352
// Run iterations = 15
// Run generations = 500

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf(n * 1.2f) + n * 0.2f;
    case 2:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // Target

// Solution0 precision = 0.000001
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n = fabsf(n);
    n += -1.76713169f;
    r0 = n;
    n += -1.37446094f;
    r1 = n;
    n = fabsf(n);
    n += -3.14159155f;
    n *= -1.85930276f;
    r2 = n;
    n *= -0.60499382f;
    n = fabsf(n);
    n *= 2.21602106f;
    r0 = n;
    n = fabsf(n);
    n *= 0.04294534f;
    r3 = n;
    n += -0.31840533f;
    n += 0.36116248f;
    n += -0.37906656f;
    r4 = n;
    n *= 0.00000010f;
    r5 = n;
    n += 0.02151717f;
    r6 = n;
    n *= r0;
    n += r3;
    n *= r4;
    n += -0.43086168f;
    r4 = n;
    n += r6;
    r6 = n;
    n += r6;
    n *= -1.49411452f;
    n *= 0.69491208f;
    n *= r4;
    n = fabsf(n);
    r4 = n;
    n += 1.18453789f;
    n *= r2;
    n *= r4;
    n *= -0.30142754f;
    n *= r1;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n = fabsf(n);
    n += -0.12225246f;
    r0 = n;
    n += -1.44854391f;
    r1 = n;
    n = fabsf(n);
    n += -3.14159274f;
    n *= 1.18236816f;
    r2 = n;
    n *= 0.94089091f;
    n = fabsf(n);
    n *= 1.93014729f;
    r0 = n;
    n = fabsf(n);
    n *= 0.76385844f;
    r3 = n;
    n += -1.55241895f;
    n += -1.26749945f;
    n += 0.24350694f;
    r4 = n;
    n *= 0.60968387f;
    r5 = n;
    n += -2.13543367f;
    r6 = n;
    n *= r0;
    n += r3;
    n *= r4;
    n += -0.81856436f;
    r4 = n;
    n += r6;
    r6 = n;
    n += r6;
    n *= -0.16810624f;
    n *= -2.91550589f;
    n *= r4;
    n = fabsf(n);
    r4 = n;
    n += -5.99695921f;
    n *= r2;
    n *= r4;
    n *= -0.00000000f;
    n *= r1;
    n += r5;
    return n;
} // Solution1
