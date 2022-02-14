#include <math.h>

// Run date: 02/13/22 11:51:18 Pacific Standard Time
// Run duration = 17.434383 seconds
// Run count = 1
// Run units = 1
// Run population = 8704
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

// Solution0 precision = 0.000249
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.64691776f;
    r0 = n;
    n += -0.89195406f;
    n += 0.37703770f;
    r1 = n;
    n += -0.88684362f;
    n *= -0.02386759f;
    r2 = n;
    n *= 1.63723075f;
    r3 = n;
    n += r1;
    r1 = n;
    n += r2;
    n *= 0.02829002f;
    r2 = n;
    n += 1.46905839f;
    n += r0;
    r0 = n;
    n *= 0.47022045f;
    n += 0.15264452f;
    r4 = n;
    n *= -0.36570808f;
    n += r2;
    n *= -1.02243745f;
    n += fabsf(r3);
    r3 = n;
    n *= r4;
    n *= 0.44551077f;
    r4 = n;
    n *= -0.34769487f;
    r2 = n;
    n *= 1.49803281f;
    n += 0.08180191f;
    r5 = n;
    n *= r2;
    n *= r0;
    n *= 0.80533284f;
    r0 = n;
    n *= r0;
    n += r4;
    n += r1;
    n *= -0.59270197f;
    n += r5;
    n += r3;
    n *= 0.39836550f;
    return n;
} // Solution0

// Solution1 precision = 0.005118
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.13829875f;
    r0 = n;
    n += -0.13249059f;
    n += -1.12142694f;
    r1 = n;
    n += -0.98066527f;
    n *= -0.17051944f;
    r2 = n;
    n *= 0.52994114f;
    r3 = n;
    n += r1;
    r1 = n;
    n += r2;
    n *= 0.67715704f;
    r2 = n;
    n += -0.33459345f;
    n += r0;
    r0 = n;
    n *= 0.58099282f;
    n += -0.74566031f;
    r4 = n;
    n *= -0.41700983f;
    n += r2;
    n *= 0.21044344f;
    n += fabsf(r3);
    r3 = n;
    n *= r4;
    n *= 0.03013882f;
    r4 = n;
    n *= -0.03808455f;
    r2 = n;
    n *= 0.57274568f;
    n += -0.81497198f;
    r5 = n;
    n *= r2;
    n *= r0;
    n *= -0.19987014f;
    r0 = n;
    n *= r0;
    n += r4;
    n += r1;
    n *= 0.57684678f;
    n += r5;
    n += r3;
    n *= -0.75693208f;
    return n;
} // Solution1

// Solution2 precision = 0.013353
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.20384328f;
    r0 = n;
    n += 0.11019489f;
    n += -0.32483223f;
    r1 = n;
    n += -0.05165256f;
    n *= -0.25184786f;
    r2 = n;
    n *= -0.13990901f;
    r3 = n;
    n += r1;
    r1 = n;
    n += r2;
    n *= -0.71786028f;
    r2 = n;
    n += -1.02093816f;
    n += r0;
    r0 = n;
    n *= 1.05211699f;
    n += -0.16978632f;
    r4 = n;
    n *= 1.15374565f;
    n += r2;
    n *= 0.75529510f;
    n += fabsf(r3);
    r3 = n;
    n *= r4;
    n *= 0.88522607f;
    r4 = n;
    n *= 0.90853012f;
    r2 = n;
    n *= 0.28839636f;
    n += -1.15543950f;
    r5 = n;
    n *= r2;
    n *= r0;
    n *= 0.37534815f;
    r0 = n;
    n *= r0;
    n += r4;
    n += r1;
    n *= -0.25825003f;
    n += r5;
    n += r3;
    n *= 0.33653545f;
    return n;
} // Solution2

// Solution3 precision = 0.000250
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.11474522f;
    r0 = n;
    n += -0.18614298f;
    n += -0.61175919f;
    r1 = n;
    n += -1.04764938f;
    n *= 0.90115529f;
    r2 = n;
    n *= -1.42247486f;
    r3 = n;
    n += r1;
    r1 = n;
    n += r2;
    n *= 0.51080388f;
    r2 = n;
    n += -1.03265059f;
    n += r0;
    r0 = n;
    n *= -0.94094568f;
    n += -0.36721492f;
    r4 = n;
    n *= -1.32683957f;
    n += r2;
    n *= -0.46959069f;
    n += fabsf(r3);
    r3 = n;
    n *= r4;
    n *= -0.71534121f;
    r4 = n;
    n *= 0.68643636f;
    r2 = n;
    n *= 0.84005266f;
    n += 0.32184291f;
    r5 = n;
    n *= r2;
    n *= r0;
    n *= -0.45959991f;
    r0 = n;
    n *= r0;
    n += r4;
    n += r1;
    n *= -0.94147748f;
    n += r5;
    n += r3;
    n *= -1.00705576f;
    return n;
} // Solution3

