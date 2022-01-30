#include <math.h>

// Run date: 01/30/22 13:18:48 Pacific Standard Time
// Run duration = 2.046413 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 15
// Run generations = 100

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 2

inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    case 2:
        return sinf(n * 1.2f) + n * 0.2f;
    case 3:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    }
} // Target

// Solution0 precision = 0.000321
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n = fabsf(n);
    n += 0.72949731f;
    r0 = n;
    n += 0.36454302f;
    r1 = n;
    n = fabsf(n);
    n += 0.79463202f;
    n *= -0.43370402f;
    r2 = n;
    n *= -0.41724992f;
    r3 = n;
    n = fabsf(n);
    n += -0.06430940f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += -0.78493965f;
    r0 = n;
    n += 0.69882464f;
    r4 = n;
    n *= r3;
    r3 = n;
    n *= -0.10132128f;
    r5 = n;
    n *= -1.14492500f;
    n = fabsf(n);
    n += r5;
    n += -0.62663114f;
    n *= r3;
    n += 0.06415515f;
    r3 = n;
    n += r3;
    n *= 1.44716728f;
    n *= 0.96289432f;
    r3 = n;
    n *= r0;
    n = fabsf(n);
    n += -1.24666059f;
    r0 = n;
    n *= r2;
    n += r3;
    n *= 0.31766772f;
    n *= r1;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n = fabsf(n);
    n += -0.78428066f;
    r0 = n;
    n += -0.78651571f;
    r1 = n;
    n = fabsf(n);
    n += -1.02628756f;
    n *= -0.71737432f;
    r2 = n;
    n *= 0.00000000f;
    r3 = n;
    n = fabsf(n);
    n += -1.09195602f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += 0.32509768f;
    r0 = n;
    n += 0.29736817f;
    r4 = n;
    n *= r3;
    r3 = n;
    n *= -1.09365904f;
    r5 = n;
    n *= -1.38569105f;
    n = fabsf(n);
    n += r5;
    n += 0.92516601f;
    n *= r3;
    n += 0.70000446f;
    r3 = n;
    n += r3;
    n *= -1.40233493f;
    n *= 0.71002167f;
    r3 = n;
    n *= r0;
    n = fabsf(n);
    n += -1.57079637f;
    r0 = n;
    n *= r2;
    n += r3;
    n *= 0.00000000f;
    n *= r1;
    n += r0;
    return n;
} // Solution1

