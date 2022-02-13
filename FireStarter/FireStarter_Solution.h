#include <math.h>

// Run date: 02/13/22 10:32:29 Pacific Standard Time
// Run duration = 11.316387 seconds
// Run count = 1
// Run units = 1
// Run population = 13056
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

// Solution0 precision = 0.001161
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.62366122f;
    r0 = n;
    n += 0.79240185f;
    n += -0.57852292f;
    r1 = n;
    n *= 0.22918186f;
    n *= 1.46404600f;
    r2 = n;
    n += -2.32160449f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += 0.97703117f;
    r2 = n;
    n *= -0.31134877f;
    n += r0;
    r0 = n;
    n *= -0.02347144f;
    n *= -0.76064944f;
    r4 = n;
    n += 1.17512977f;
    n *= r2;
    n += -1.32531369f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.42215148f;
    r4 = n;
    n *= 0.43726131f;
    r2 = n;
    n *= -0.83271861f;
    n += 0.17227143f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 2.03775740f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 0.30944937f;
    n += r5;
    n += r3;
    n += 0.21177174f;
    return n;
} // Solution0

// Solution1 precision = 0.000992
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.77166384f;
    r0 = n;
    n += -0.67057288f;
    n += -0.37970623f;
    r1 = n;
    n *= -0.75417602f;
    n *= 0.16256920f;
    r2 = n;
    n += 1.04232514f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += 0.15306877f;
    r2 = n;
    n *= 1.03559268f;
    n += r0;
    r0 = n;
    n *= 0.28876042f;
    n *= -0.70290715f;
    r4 = n;
    n += -1.99403155f;
    n *= r2;
    n += -0.72089589f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -1.06309295f;
    r4 = n;
    n *= 0.96662033f;
    r2 = n;
    n *= -0.81595695f;
    n += -0.22644761f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.81939042f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.60891849f;
    n += r5;
    n += r3;
    n += 0.35597748f;
    return n;
} // Solution1

// Solution2 precision = 0.002032
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.54482538f;
    r0 = n;
    n += -1.02119970f;
    n += -0.00426468f;
    r1 = n;
    n *= 0.43154940f;
    n *= 1.47084785f;
    r2 = n;
    n += -0.31869158f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -1.33996844f;
    r2 = n;
    n *= -1.00701904f;
    n += r0;
    r0 = n;
    n *= 0.23260032f;
    n *= 0.49332044f;
    r4 = n;
    n += 0.37658826f;
    n *= r2;
    n += -1.37459135f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.25035951f;
    r4 = n;
    n *= -0.00518837f;
    r2 = n;
    n *= 1.61076474f;
    n += -0.66524392f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.45342800f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 0.65317482f;
    n += r5;
    n += r3;
    n += 0.61272734f;
    return n;
} // Solution2

// Solution3 precision = 0.093697
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.30409166f;
    r0 = n;
    n += 0.16236690f;
    n += -1.19018483f;
    r1 = n;
    n *= 0.71784687f;
    n *= 1.55193019f;
    r2 = n;
    n += 0.05810299f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.87008727f;
    r2 = n;
    n *= -0.91835493f;
    n += r0;
    r0 = n;
    n *= 0.56317759f;
    n *= 1.34169328f;
    r4 = n;
    n += 2.25871277f;
    n *= r2;
    n += -0.93028015f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.19862825f;
    r4 = n;
    n *= 0.22269730f;
    r2 = n;
    n *= 0.30749819f;
    n += -0.34288707f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 1.01030171f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.48431566f;
    n += r5;
    n += r3;
    n += 0.47423613f;
    return n;
} // Solution3

