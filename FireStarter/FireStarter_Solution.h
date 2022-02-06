#include <math.h>

// Run date: 02/06/22 15:33:24 Pacific Standard Time
// Run duration = 10.729653 seconds
// Run count = 9
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

// Solution0 precision = 0.002186
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.38168538f;
    r0 = n;
    n += -0.36677516f;
    n += 0.95694518f;
    r1 = n;
    n *= 0.04900549f;
    n *= 0.74347627f;
    r2 = n;
    n += -0.68061191f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.17543022f;
    r2 = n;
    n *= -1.85788488f;
    n += r0;
    r0 = n;
    n *= -0.54420441f;
    n *= -0.41463524f;
    r4 = n;
    n += 2.42910171f;
    n *= r2;
    n += -0.42960507f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.63058400f;
    r4 = n;
    n *= -1.16095054f;
    r2 = n;
    n *= -0.00173998f;
    n += -0.42375398f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.42140523f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.56807077f;
    n *= r5;
    n += r3;
    n += -0.71959454f;
    return n;
} // Solution0

// Solution1 precision = 0.002357
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.81765825f;
    r0 = n;
    n += 0.25947919f;
    n += 0.05625180f;
    r1 = n;
    n *= -0.08128344f;
    n *= -0.95652068f;
    r2 = n;
    n += -1.01423621f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.66064566f;
    r2 = n;
    n *= 0.16375192f;
    n += r0;
    r0 = n;
    n *= 0.08589651f;
    n *= -0.06025358f;
    r4 = n;
    n += 1.94029844f;
    n *= r2;
    n += 0.38327709f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.26233399f;
    r4 = n;
    n *= 0.42995587f;
    r2 = n;
    n *= 0.24635971f;
    n += 0.37807170f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -2.22572970f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.36660248f;
    n *= r5;
    n += r3;
    n += -0.08222038f;
    return n;
} // Solution1

// Solution2 precision = 0.003818
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.38324231f;
    r0 = n;
    n += -0.34142983f;
    n += -0.60343087f;
    r1 = n;
    n *= 0.38762876f;
    n *= -0.78255731f;
    r2 = n;
    n += 0.87734425f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += 0.13737133f;
    r2 = n;
    n *= 0.17326491f;
    n += r0;
    r0 = n;
    n *= -0.76008224f;
    n *= 0.51918244f;
    r4 = n;
    n += -1.77574635f;
    n *= r2;
    n += 0.34421849f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.85560715f;
    r4 = n;
    n *= -0.87278587f;
    r2 = n;
    n *= -1.97898412f;
    n += -1.00167656f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -1.21265936f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 0.55104667f;
    n *= r5;
    n += r3;
    n += 0.14118914f;
    return n;
} // Solution2

// Solution3 precision = 0.098583
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.54234713f;
    r0 = n;
    n += 0.10621148f;
    n += 0.36439598f;
    r1 = n;
    n *= 0.58074826f;
    n *= 0.88689947f;
    r2 = n;
    n += 1.38330960f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.73443526f;
    r2 = n;
    n *= 1.20048034f;
    n += r0;
    r0 = n;
    n *= 0.16828670f;
    n *= 0.62640780f;
    r4 = n;
    n += -0.90391576f;
    n *= r2;
    n += 0.03591583f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.81287616f;
    r4 = n;
    n *= 1.07118726f;
    r2 = n;
    n *= 1.47235084f;
    n += 0.54516733f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 1.57226622f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.06431691f;
    n *= r5;
    n += r3;
    n += -0.38618866f;
    return n;
} // Solution3

