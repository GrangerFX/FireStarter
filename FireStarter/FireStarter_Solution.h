#include <math.h>

// Run date: 03/05/22 15:43:16 Pacific Standard Time
// Run duration = 1.060847 seconds
// Run count = 146
// Run units = 1
// Run population = 17408
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

// Precision = 0.000780

// Solution0 precision = 0.000673
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.99412036f;
    r0 = n;
    n *= -0.59721655f;
    n += 0.12958048f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -1.43806362f;
    n += 0.51809502f;
    r2 = n;
    n *= 1.53849363f;
    r3 = n;
    n += -0.58793885f;
    n += 0.07667141f;
    r4 = n;
    n *= -0.57789469f;
    r5 = n;
    n += r2;
    n += 0.81789470f;
    r2 = n;
    n = fabsf(n);
    n += -0.74138421f;
    r6 = n;
    n += -0.07699716f;
    r7 = n;
    n *= r3;
    n *= -0.82931775f;
    n *= r6;
    n += 0.79996967f;
    r6 = n;
    n *= r6;
    n *= 3.26674867f;
    r6 = n;
    n = fabsf(n);
    n *= 0.62072325f;
    n += r2;
    n += r4;
    n *= -0.99482441f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution0

// Solution1 precision = 0.000281
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.29755685f;
    r0 = n;
    n *= 0.09017514f;
    n += 1.42072570f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -0.42506272f;
    n += -1.32986021f;
    r2 = n;
    n *= -1.38285780f;
    r3 = n;
    n += 0.66312629f;
    n += 0.20273805f;
    r4 = n;
    n *= 0.74448848f;
    r5 = n;
    n += r2;
    n += -0.03749239f;
    r2 = n;
    n = fabsf(n);
    n += 0.67363131f;
    r6 = n;
    n += -1.23721743f;
    r7 = n;
    n *= r3;
    n *= -9.55249691f;
    n *= r6;
    n += 0.95344681f;
    r6 = n;
    n *= r6;
    n *= 0.33635432f;
    r6 = n;
    n = fabsf(n);
    n *= 2.30539489f;
    n += r2;
    n += r4;
    n *= 1.14091253f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution1

// Solution2 precision = 0.000780
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.98582810f;
    r0 = n;
    n *= -0.72662413f;
    n += 0.72393042f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -1.25289428f;
    n += -0.61896503f;
    r2 = n;
    n *= -0.78804219f;
    r3 = n;
    n += 0.75302029f;
    n += -0.48620635f;
    r4 = n;
    n *= 0.96204740f;
    r5 = n;
    n += r2;
    n += 0.05946918f;
    r2 = n;
    n = fabsf(n);
    n += -0.19429272f;
    r6 = n;
    n += 1.22930336f;
    r7 = n;
    n *= r3;
    n *= 8.96137333f;
    n *= r6;
    n += 4.50102854f;
    r6 = n;
    n *= r6;
    n *= 0.05189751f;
    r6 = n;
    n = fabsf(n);
    n *= -0.65355760f;
    n += r2;
    n += r4;
    n *= -3.75715923f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution2

// Solution3 precision = 0.000000
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.60625416f;
    r0 = n;
    n *= 0.23927602f;
    n += 1.18016481f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -1.44514346f;
    n += -0.33283547f;
    r2 = n;
    n *= -1.27850521f;
    r3 = n;
    n += -0.98818582f;
    n += -0.30300707f;
    r4 = n;
    n *= -0.25889412f;
    r5 = n;
    n += r2;
    n += -1.10938978f;
    r2 = n;
    n = fabsf(n);
    n += -0.88242793f;
    r6 = n;
    n += -0.68836856f;
    r7 = n;
    n *= r3;
    n *= 0.07070474f;
    n *= r6;
    n += 1.40983677f;
    r6 = n;
    n *= r6;
    n *= -0.00000000f;
    r6 = n;
    n = fabsf(n);
    n *= 4.72057390f;
    n += r2;
    n += r4;
    n *= 1.95197129f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution3
