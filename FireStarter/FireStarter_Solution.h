#include <math.h>

// Run date: 02/12/22 13:51:15 Pacific Standard Time
// Run duration = 13.031401 seconds
// Run count = 1
// Run units = 1
// Run population = 4352
// Run iterations = 512
// Run generations = 50
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_VARIATIONS 4

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

// Solution0 precision = 0.999999
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.55313742f;
    r0 = n;
    n += -0.05264875f;
    n += 0.34429836f;
    r1 = n;
    n *= -1.13937426f;
    n *= 0.59495682f;
    r2 = n;
    n += 0.75705099f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.44221497f;
    r2 = n;
    n *= -0.71077353f;
    n += r0;
    r0 = n;
    n *= -0.26818940f;
    n *= -0.15108754f;
    r4 = n;
    n += -0.94620782f;
    n *= r2;
    n += -0.00598921f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.38379973f;
    r4 = n;
    n *= -0.81551158f;
    r2 = n;
    n *= -0.11913602f;
    n += -0.48975235f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 0.22951981f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -1.17534876f;
    n += r5;
    n += r3;
    n += -1.00888789f;
    return n;
} // Solution0

// Solution1 precision = 1.491992
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.55313742f;
    r0 = n;
    n += -0.05264875f;
    n += 0.34429836f;
    r1 = n;
    n *= -1.13937426f;
    n *= 0.59495682f;
    r2 = n;
    n += 0.75705099f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.44221497f;
    r2 = n;
    n *= -0.71077353f;
    n += r0;
    r0 = n;
    n *= -0.26818940f;
    n *= -0.15108754f;
    r4 = n;
    n += -0.94620782f;
    n *= r2;
    n += -0.00598921f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.38379973f;
    r4 = n;
    n *= -0.81551158f;
    r2 = n;
    n *= -0.11913602f;
    n += -0.48975235f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 0.22951981f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -1.17534876f;
    n += r5;
    n += r3;
    n += -1.00888789f;
    return n;
} // Solution1

// Solution2 precision = 2.207694
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.55313742f;
    r0 = n;
    n += -0.05264875f;
    n += 0.34429836f;
    r1 = n;
    n *= -1.13937426f;
    n *= 0.59495682f;
    r2 = n;
    n += 0.75705099f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.44221497f;
    r2 = n;
    n *= -0.71077353f;
    n += r0;
    r0 = n;
    n *= -0.26818940f;
    n *= -0.15108754f;
    r4 = n;
    n += -0.94620782f;
    n *= r2;
    n += -0.00598921f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.38379973f;
    r4 = n;
    n *= -0.81551158f;
    r2 = n;
    n *= -0.11913602f;
    n += -0.48975235f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 0.22951981f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -1.17534876f;
    n += r5;
    n += r3;
    n += -1.00888789f;
    return n;
} // Solution2

// Solution3 precision = 1.569261
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.55313742f;
    r0 = n;
    n += -0.05264875f;
    n += 0.34429836f;
    r1 = n;
    n *= -1.13937426f;
    n *= 0.59495682f;
    r2 = n;
    n += 0.75705099f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.44221497f;
    r2 = n;
    n *= -0.71077353f;
    n += r0;
    r0 = n;
    n *= -0.26818940f;
    n *= -0.15108754f;
    r4 = n;
    n += -0.94620782f;
    n *= r2;
    n += -0.00598921f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.38379973f;
    r4 = n;
    n *= -0.81551158f;
    r2 = n;
    n *= -0.11913602f;
    n += -0.48975235f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 0.22951981f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -1.17534876f;
    n += r5;
    n += r3;
    n += -1.00888789f;
    return n;
} // Solution3

