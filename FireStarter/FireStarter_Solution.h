#include <math.h>

// Run date: 01/17/22 11:54:18 Pacific Standard Time
// Run duration = 0.454922 seconds
// Run count = 35
// Run units = 1
// Run population = 4352
// Run iterations = 15
// Run generations = 100

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f

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

// Solution0 precision = 0.000071
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 3.53367543f;
    r0 = n;
    n += -11.50419807f;
    r1 = n;
    n *= -0.04010984f;
    r2 = n;
    n += 0.92744476f;
    r3 = n;
    n *= -3.18237066f;
    n += r2;
    r2 = n;
    n *= -2.47350287f;
    r4 = n;
    n += -13.36925507f;
    n *= r4;
    n += 4.34537506f;
    r4 = n;
    n *= 1.30471635f;
    n += r0;
    n = fabsf(n);
    r0 = n;
    n *= r3;
    r3 = n;
    n += r4;
    r4 = n;
    n *= r1;
    n += r0;
    n *= -0.00504394f;
    r0 = n;
    n += -4.77918053f;
    n *= r0;
    r0 = n;
    n += 6.83633566f;
    n *= r4;
    n += r0;
    n *= 0.06079813f;
    n += 9.49944782f;
    r0 = n;
    n = fabsf(n);
    n *= -0.05510167f;
    r0 = n;
    n += r3;
    n *= 0.02909261f;
    n += -7.15991497f;
    n *= r0;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.000023
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 3.63545036f;
    r0 = n;
    n += -12.61905384f;
    r1 = n;
    n *= -0.00001998f;
    r2 = n;
    n += 1.11209631f;
    r3 = n;
    n *= -1.41253531f;
    n += r2;
    r2 = n;
    n *= -1.63461733f;
    r4 = n;
    n += -13.89904594f;
    n *= r4;
    n += 3.13824844f;
    r4 = n;
    n *= 0.21999227f;
    n += r0;
    n = fabsf(n);
    r0 = n;
    n *= r3;
    r3 = n;
    n += r4;
    r4 = n;
    n *= r1;
    n += r0;
    n *= -0.00000012f;
    r0 = n;
    n += -4.11413383f;
    n *= r0;
    r0 = n;
    n += 6.68750191f;
    n *= r4;
    n += r0;
    n *= 0.08774725f;
    n += 7.77924061f;
    r0 = n;
    n = fabsf(n);
    n *= -0.06764909f;
    r0 = n;
    n += r3;
    n *= -0.00011180f;
    n += -6.23059368f;
    n *= r0;
    n += r2;
    return n;
} // Solution1
