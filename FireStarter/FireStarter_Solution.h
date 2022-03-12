#include <math.h>

// Run date: 03/12/22 15:31:13 Pacific Standard Time
// Run duration = 3.249471 seconds
// Run count = 15
// Run units = 1
// Run population = 139264
// Run iterations = 1024
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

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

// Precision = 0.000063

// Solution0 precision = 0.000042
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.18861564f;
    r0 = n += -0.48394793f;
    r1 = n *= 0.56991071f;
    r2 = n += 0.29151717f;
    n *= 6.50174856f;
    n += r1;
    r1 = n *= -0.21843718f;
    r3 = n += 0.73047209f;
    n *= r3;
    r3 = n += -2.69895530f;
    r4 = n *= -0.33666608f;
    r5 = n += -1.07576156f;
    n *= 1.76220942f;
    n += r2;
    n *= r1;
    r1 = n += 0.38259405f;
    n *= 0.37430176f;
    r2 = n += -0.25870794f;
    n *= r2;
    n += -0.51755470f;
    n *= r1;
    n = r0 += n;
    n *= 2.49999332f;
    n += r5;
    n *= -0.65979737f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.22919966f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.17388847f;
    return n;
} // Solution0

// Solution1 precision = 0.000040
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.35275242f;
    r0 = n += 1.71578050f;
    r1 = n *= 0.10414140f;
    r2 = n += -0.14982371f;
    n *= 1.27369380f;
    n += r1;
    r1 = n *= -1.81026959f;
    r3 = n += 0.10509083f;
    n *= r3;
    r3 = n += -0.97368050f;
    r4 = n *= 0.60134393f;
    r5 = n += 0.54821390f;
    n *= 0.31227505f;
    n += r2;
    n *= r1;
    r1 = n += 0.00148198f;
    n *= 0.18310457f;
    r2 = n += -0.37523675f;
    n *= r2;
    n += 3.77840590f;
    n *= r1;
    n = r0 += n;
    n *= 0.85804206f;
    n += r5;
    n *= -0.58064628f;
    n += r4;
    n = r0 *= n;
    r4 = n += 1.21451485f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.14753951f;
    return n;
} // Solution1

// Solution2 precision = 0.000063
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.36319509f;
    r0 = n += 1.09311092f;
    r1 = n *= -0.25429788f;
    r2 = n += -0.29067746f;
    n *= -0.26838303f;
    n += r1;
    r1 = n *= -2.91294551f;
    r3 = n += -0.56308705f;
    n *= r3;
    r3 = n += -0.07951304f;
    r4 = n *= 0.20792902f;
    r5 = n += -0.28333837f;
    n *= -0.92596710f;
    n += r2;
    n *= r1;
    r1 = n += 0.74539655f;
    n *= 0.82164413f;
    r2 = n += 0.39257357f;
    n *= r2;
    n += 0.47073197f;
    n *= r1;
    n = r0 += n;
    n *= -0.96465385f;
    n += r5;
    n *= 1.25745881f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.80721354f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.57574219f;
    return n;
} // Solution2
