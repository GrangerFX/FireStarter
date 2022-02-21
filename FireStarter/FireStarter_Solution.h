#include <math.h>

// Run date: 02/21/22 14:32:08 Pacific Standard Time
// Run duration = 0.245017 seconds
// Run count = 18
// Run units = 1
// Run population = 8704
// Run iterations = 512
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

// Precision = 0.100187
// Solution0 precision = 0.000280
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.59147561f;
    n *= -0.18084435f;
    r0 = n;
    n += 0.14084060f;
    n += 0.75343078f;
    n += 0.55957234f;
    r1 = n;
    n *= 5.03733444f;
    r2 = n;
    n *= 0.01727691f;
    r3 = n;
    n += -0.62655109f;
    r4 = n;
    n += r3;
    r3 = n;
    n *= r1;
    r1 = n;
    n += r0;
    r0 = n;
    n += 0.22706757f;
    r5 = n;
    n += fabsf(0.06722178f);
    r6 = n;
    n *= r0;
    n += 0.04307096f;
    n += r3;
    n *= r6;
    n *= -7.04046154f;
    n *= -7.25205994f;
    r6 = n;
    n *= -0.02419199f;
    n += r4;
    r4 = n;
    n *= r1;
    r1 = n;
    n += 1.01974535f;
    n += -0.34645143f;
    r3 = n;
    n += 9.63494301f;
    n *= r2;
    n *= 0.01652642f;
    n *= r6;
    n += r4;
    n += r3;
    n += r5;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.000307
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.39914560f;
    n *= 0.48713642f;
    r0 = n;
    n += -0.15414906f;
    n += 0.17672487f;
    n += -0.30695426f;
    r1 = n;
    n *= 0.00721229f;
    r2 = n;
    n *= -2.24960256f;
    r3 = n;
    n += -0.53169489f;
    r4 = n;
    n += r3;
    r3 = n;
    n *= r1;
    r1 = n;
    n += r0;
    r0 = n;
    n += -0.37288043f;
    r5 = n;
    n += fabsf(-0.77625084f);
    r6 = n;
    n *= r0;
    n += -1.58050513f;
    n += r3;
    n *= r6;
    n *= 0.03641545f;
    n *= -6.35025406f;
    r6 = n;
    n *= -3.06124544f;
    n += r4;
    r4 = n;
    n *= r1;
    r1 = n;
    n += -0.55494171f;
    n += -0.78089952f;
    r3 = n;
    n += -19.02113533f;
    n *= r2;
    n *= -0.99923456f;
    n *= r6;
    n += r4;
    n += r3;
    n += r5;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.001793
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.06339318f;
    n *= 0.26789942f;
    r0 = n;
    n += -0.39103019f;
    n += -0.27256167f;
    n += -0.20897762f;
    r1 = n;
    n *= -2.33112693f;
    r2 = n;
    n *= 0.01962308f;
    r3 = n;
    n += -0.87845457f;
    r4 = n;
    n += r3;
    r3 = n;
    n *= r1;
    r1 = n;
    n += r0;
    r0 = n;
    n += -0.26794264f;
    r5 = n;
    n += fabsf(0.24196278f);
    r6 = n;
    n *= r0;
    n += 0.26738110f;
    n += r3;
    n *= r6;
    n *= -0.31071097f;
    n *= 3.90954113f;
    r6 = n;
    n *= 4.17069626f;
    n += r4;
    r4 = n;
    n *= r1;
    r1 = n;
    n += -0.00852226f;
    n += -1.33497703f;
    r3 = n;
    n += -1.96395302f;
    n *= r2;
    n *= -5.51895094f;
    n *= r6;
    n += r4;
    n += r3;
    n += r5;
    n *= r1;
    return n;
} // Solution2

// Solution3 precision = 0.100187
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.44272316f;
    n *= 0.80802602f;
    r0 = n;
    n += -0.99321854f;
    n += -0.14982331f;
    n += 0.72058904f;
    r1 = n;
    n *= 0.32866263f;
    r2 = n;
    n *= -0.50729567f;
    r3 = n;
    n += 0.81026983f;
    r4 = n;
    n += r3;
    r3 = n;
    n *= r1;
    r1 = n;
    n += r0;
    r0 = n;
    n += -0.22235391f;
    r5 = n;
    n += fabsf(4.02391577f);
    r6 = n;
    n *= r0;
    n += -4.37165022f;
    n += r3;
    n *= r6;
    n *= 0.01027701f;
    n *= 24.98484993f;
    r6 = n;
    n *= 0.03320261f;
    n += r4;
    r4 = n;
    n *= r1;
    r1 = n;
    n += -1.18549216f;
    n += 1.76477361f;
    r3 = n;
    n += 1.27641106f;
    n *= r2;
    n *= -0.09553944f;
    n *= r6;
    n += r4;
    n += r3;
    n += r5;
    n *= r1;
    return n;
} // Solution3

