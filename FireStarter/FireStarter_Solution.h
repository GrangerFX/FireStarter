#include <math.h>

// Run date: 01/30/22 12:18:48 Pacific Standard Time
// Run duration = 4.922907 seconds
// Run count = 2
// Run units = 1
// Run population = 69632
// Run iterations = 15
// Run generations = 100

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 4

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

// Solution0 precision = 0.000576
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -1.40481663f;
    r0 = n;
    n += -1.73677707f;
    r1 = n;
    n = fabsf(n);
    n += -1.80652094f;
    n *= -0.97923082f;
    r2 = n;
    n *= -0.00156841f;
    r3 = n;
    n = fabsf(n);
    n += -2.00246501f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += -1.43773329f;
    r0 = n;
    n += -0.32934642f;
    n *= r3;
    r3 = n;
    n *= 4.61950064f;
    n += 0.28946945f;
    r4 = n;
    n *= -3.33364630f;
    n += -2.06810522f;
    n *= -2.78315949f;
    n *= r3;
    n += 0.42762950f;
    r3 = n;
    n += r3;
    n *= r4;
    n *= -2.56083202f;
    r4 = n;
    n *= r0;
    n = fabsf(n);
    n += -0.60060412f;
    n *= r2;
    n += r4;
    n *= -0.15402740f;
    n *= r1;
    n += 0.00000045f;
    return n;
} // Solution0

// Solution1 precision = 0.001469
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -1.00228930f;
    r0 = n;
    n += -1.61568069f;
    r1 = n;
    n = fabsf(n);
    n += -1.62976885f;
    n *= -0.96087694f;
    r2 = n;
    n *= -0.00319298f;
    r3 = n;
    n = fabsf(n);
    n += -1.86024010f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += -1.43889189f;
    r0 = n;
    n += -0.44815311f;
    n *= r3;
    r3 = n;
    n *= 2.96946239f;
    n += 0.27535227f;
    r4 = n;
    n *= -0.02531049f;
    n += -2.05126190f;
    n *= -2.66133142f;
    n *= r3;
    n += 0.42613894f;
    r3 = n;
    n += r3;
    n *= r4;
    n *= -2.34128904f;
    r4 = n;
    n *= r0;
    n = fabsf(n);
    n += -0.62428659f;
    n *= r2;
    n += r4;
    n *= -0.32580182f;
    n *= r1;
    n += 0.52359843f;
    return n;
} // Solution1

// Solution2 precision = 0.000515
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -1.88354313f;
    r0 = n;
    n += -1.20713496f;
    r1 = n;
    n = fabsf(n);
    n += -1.81745243f;
    n *= -1.62118506f;
    r2 = n;
    n *= -0.00131395f;
    r3 = n;
    n = fabsf(n);
    n += -2.19874358f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += 0.00549016f;
    r0 = n;
    n += 0.36004546f;
    n *= r3;
    r3 = n;
    n *= 3.62316108f;
    n += 0.37947589f;
    r4 = n;
    n *= -1.86114371f;
    n += -1.91949201f;
    n *= -1.50943947f;
    n *= r3;
    n += 0.47126830f;
    r3 = n;
    n += r3;
    n *= r4;
    n *= -1.98490357f;
    r4 = n;
    n *= r0;
    n = fabsf(n);
    n += 1.65380096f;
    n *= r2;
    n += r4;
    n *= -0.03135711f;
    n *= r1;
    n += -0.11814830f;
    return n;
} // Solution2

// Solution3 precision = 0.001440
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -2.50550246f;
    r0 = n;
    n += -0.63608897f;
    r1 = n;
    n = fabsf(n);
    n += -1.56953764f;
    n *= -0.37199041f;
    r2 = n;
    n *= 0.61606765f;
    r3 = n;
    n = fabsf(n);
    n += -1.33654261f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += 0.32399970f;
    r0 = n;
    n += 0.62215644f;
    n *= r3;
    r3 = n;
    n *= -0.28682542f;
    n += -0.56211483f;
    r4 = n;
    n *= 0.22673950f;
    n += 0.43749133f;
    n *= -0.41391137f;
    n *= r3;
    n += -0.54394025f;
    r3 = n;
    n += r3;
    n *= r4;
    n *= -1.09470141f;
    r4 = n;
    n *= r0;
    n = fabsf(n);
    n += 0.89693964f;
    n *= r2;
    n += r4;
    n *= -0.28947425f;
    n *= r1;
    n += -0.00000156f;
    return n;
} // Solution3

