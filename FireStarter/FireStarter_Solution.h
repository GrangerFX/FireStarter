#include <math.h>

// Run date: 02/27/22 19:39:30 Pacific Standard Time
// Run duration = 0.398057 seconds
// Run count = 5
// Run units = 1
// Run population = 4352
// Run iterations = 1024
// Run generations = 100
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

// Precision = 0.089281
// Solution0 precision = 0.000614
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.56323594f;
    r0 = n;
    n += 0.57653260f;
    n += -2.24006033f;
    n += -0.10603405f;
    n *= 0.72376859f;
    r1 = n;
    n += r0;
    n += -1.76938677f;
    n *= 0.14697325f;
    r0 = n;
    n *= 0.94014257f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= -0.50099647f;
    n += 1.43764508f;
    n += -0.81778556f;
    n *= -0.55741692f;
    r3 = n;
    n *= 3.92832565f;
    r4 = n;
    n += 2.14554358f;
    n += -0.99543339f;
    r5 = n;
    n *= 2.44018269f;
    n += -2.22844172f;
    n += r4;
    r4 = n;
    n *= r5;
    r5 = n;
    n += 5.71335459f;
    n *= 0.89170921f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= 0.02584772f;
    n *= -13.55009079f;
    n += r0;
    n *= r3;
    n *= r5;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.000251
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.56567931f;
    r0 = n;
    n += 0.73422486f;
    n += -3.10731483f;
    n += 1.03481770f;
    n *= 0.14186886f;
    r1 = n;
    n += r0;
    n += -2.38270807f;
    n *= 0.16709393f;
    r0 = n;
    n *= 1.23969328f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= -0.82805884f;
    n += 1.28644693f;
    n += -0.74939799f;
    n *= -0.88550073f;
    r3 = n;
    n *= 3.22676849f;
    r4 = n;
    n += 1.83976853f;
    n += -1.28341734f;
    r5 = n;
    n *= 1.49077690f;
    n += -3.72451282f;
    n += r4;
    r4 = n;
    n *= r5;
    r5 = n;
    n += 5.49551296f;
    n *= 0.05730657f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= 0.04104363f;
    n *= -13.14484119f;
    n += r0;
    n *= r3;
    n *= r5;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.002436
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.65183127f;
    r0 = n;
    n += 0.78501356f;
    n += -2.96867251f;
    n += 0.10954889f;
    n *= 0.34537917f;
    r1 = n;
    n += r0;
    n += -1.19227827f;
    n *= 0.10844837f;
    r0 = n;
    n *= 1.44210279f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= -0.61726820f;
    n += 1.50155234f;
    n += -1.18229568f;
    n *= -0.72085607f;
    r3 = n;
    n *= 4.43772650f;
    r4 = n;
    n += 2.41744924f;
    n += -1.51828718f;
    r5 = n;
    n *= 2.46042275f;
    n += -4.33727932f;
    n += r4;
    r4 = n;
    n *= r5;
    r5 = n;
    n += 4.51561737f;
    n *= 0.26326820f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= 0.22618310f;
    n *= -14.87904930f;
    n += r0;
    n *= r3;
    n *= r5;
    n *= r4;
    return n;
} // Solution2

// Solution3 precision = 0.089281
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.67399228f;
    r0 = n;
    n += 0.38727632f;
    n += -3.47316265f;
    n += 0.96741599f;
    n *= 0.09258142f;
    r1 = n;
    n += r0;
    n += -2.11761665f;
    n *= -0.21136233f;
    r0 = n;
    n *= 1.03930163f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= -0.90784609f;
    n += 0.97296917f;
    n += -0.74524480f;
    n *= -1.72277975f;
    r3 = n;
    n *= 2.83506656f;
    r4 = n;
    n += 2.13230205f;
    n += -0.92319351f;
    r5 = n;
    n *= 2.81394887f;
    n += -6.28609705f;
    n += r4;
    r4 = n;
    n *= r5;
    r5 = n;
    n += 4.54940462f;
    n *= 0.65600592f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= -0.18088783f;
    n *= -13.76141739f;
    n += r0;
    n *= r3;
    n *= r5;
    n *= r4;
    return n;
} // Solution3

