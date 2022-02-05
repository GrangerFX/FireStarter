#include <math.h>

// Run date: 02/05/22 12:07:51 Pacific Standard Time
// Run duration = 6.224311 seconds
// Run count = 2
// Run units = 16
// Run population = 4352
// Run iterations = 1024
// Run generations = 50
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 4

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

// Solution0 precision = 0.006103
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.77474177f;
    r0 = n;
    n += -1.65354884f;
    r1 = n;
    n += -0.21866837f;
    r2 = n;
    n *= r1;
    r1 = n;
    n *= 0.00230775f;
    r3 = n;
    n += fabsf(r1);
    r1 = n;
    n *= 0.00764376f;
    r4 = n;
    n += -0.25773728f;
    r5 = n;
    n *= r1;
    n *= -0.47779322f;
    n += -0.86285341f;
    r1 = n;
    n *= -1.12500203f;
    r6 = n;
    n += r2;
    n *= r6;
    r6 = n;
    n *= r1;
    n *= 0.31327283f;
    n *= 0.83118540f;
    n *= -0.31438059f;
    n *= r0;
    r0 = n;
    n += fabsf(-0.30451876f);
    n += -0.76732290f;
    n += r6;
    r6 = n;
    n *= 0.05535505f;
    n += 0.94730091f;
    n += r5;
    n *= r0;
    n += r4;
    n *= r3;
    n *= -0.51798904f;
    r3 = n;
    n += -0.80511826f;
    n += r3;
    n *= r6;
    return n;
} // Solution0

// Solution1 precision = 0.004371
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.32193553f;
    r0 = n;
    n += -2.00417829f;
    r1 = n;
    n += -0.14876652f;
    r2 = n;
    n *= r1;
    r1 = n;
    n *= -0.30571836f;
    r3 = n;
    n += fabsf(r1);
    r1 = n;
    n *= -0.02121445f;
    r4 = n;
    n += 0.40343037f;
    r5 = n;
    n *= r1;
    n *= -0.15746063f;
    n += 0.47116885f;
    r1 = n;
    n *= 1.54899549f;
    r6 = n;
    n += r2;
    n *= r6;
    r6 = n;
    n *= r1;
    n *= -1.18438649f;
    n *= -0.05882472f;
    n *= 0.63428354f;
    n *= r0;
    r0 = n;
    n += fabsf(0.00152834f);
    n += -0.16673751f;
    n += r6;
    r6 = n;
    n *= -1.16119337f;
    n += 1.21352589f;
    n += r5;
    n *= r0;
    n += r4;
    n *= r3;
    n *= 0.51794136f;
    r3 = n;
    n += -1.36356843f;
    n += r3;
    n *= r6;
    return n;
} // Solution1

// Solution2 precision = 0.008043
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.16877764f;
    r0 = n;
    n += -2.80244184f;
    r1 = n;
    n += 0.19782737f;
    r2 = n;
    n *= r1;
    r1 = n;
    n *= -0.17186053f;
    r3 = n;
    n += fabsf(r1);
    r1 = n;
    n *= 0.03931595f;
    r4 = n;
    n += -0.66386110f;
    r5 = n;
    n *= r1;
    n *= 0.44597226f;
    n += 0.91279435f;
    r1 = n;
    n *= 0.47592765f;
    r6 = n;
    n += r2;
    n *= r6;
    r6 = n;
    n *= r1;
    n *= -0.85365653f;
    n *= -0.12458423f;
    n *= 0.50489813f;
    n *= r0;
    r0 = n;
    n += fabsf(0.33808011f);
    n += -0.74486238f;
    n += r6;
    r6 = n;
    n *= 0.09054919f;
    n += -1.23001111f;
    n += r5;
    n *= r0;
    n += r4;
    n *= r3;
    n *= 0.57465225f;
    r3 = n;
    n += -1.90422189f;
    n += r3;
    n *= r6;
    return n;
} // Solution2

// Solution3 precision = 0.086500
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.02280199f;
    r0 = n;
    n += -2.67637897f;
    r1 = n;
    n += -0.28532037f;
    r2 = n;
    n *= r1;
    r1 = n;
    n *= -0.94045597f;
    r3 = n;
    n += fabsf(r1);
    r1 = n;
    n *= 0.39644408f;
    r4 = n;
    n += -0.81175321f;
    r5 = n;
    n *= r1;
    n *= 0.76804435f;
    n += 0.25120574f;
    r1 = n;
    n *= -1.63733220f;
    r6 = n;
    n += r2;
    n *= r6;
    r6 = n;
    n *= r1;
    n *= -1.42611694f;
    n *= -4.02929974f;
    n *= 0.21350065f;
    n *= r0;
    r0 = n;
    n += fabsf(-0.19021957f);
    n += -0.32869157f;
    n += r6;
    r6 = n;
    n *= 3.56104183f;
    n += 2.57878661f;
    n += r5;
    n *= r0;
    n += r4;
    n *= r3;
    n *= -0.46027896f;
    r3 = n;
    n += 1.22034180f;
    n += r3;
    n *= r6;
    return n;
} // Solution3

