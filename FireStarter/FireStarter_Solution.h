#include <math.h>

// Run date: 01/17/22 18:35:45 Pacific Standard Time
// Run duration = 0.464482 seconds
// Run count = 182
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

// Solution0 precision = 0.000041
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.59182250f;
    n += -1.52808964f;
    n *= 0.13585277f;
    n += 0.33273566f;
    r0 = n;
    n *= -0.18358031f;
    r1 = n;
    n += 0.85438204f;
    n *= -2.05243397f;
    r2 = n;
    n += 1.67767107f;
    r3 = n;
    n *= -52.07387924f;
    n += 18.58846664f;
    r4 = n;
    n *= r1;
    r1 = n;
    n += r0;
    n = fabsf(n);
    r0 = n;
    n *= 8.44959450f;
    n += r0;
    r0 = n;
    n *= r1;
    n += r2;
    r2 = n;
    n *= 0.01870996f;
    n += -0.43625596f;
    n *= r0;
    n += 1.85728228f;
    r0 = n;
    n *= r3;
    n += 0.20413738f;
    n *= r0;
    n += 0.27807692f;
    n = fabsf(n);
    n *= r4;
    n += -9.66618443f;
    r4 = n;
    n *= -3.87510490f;
    n += r2;
    n *= 0.35686961f;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.78907889f;
    n += -1.21661234f;
    n *= -0.13664566f;
    n += 0.34186482f;
    r0 = n;
    n *= -0.00000001f;
    r1 = n;
    n += 0.86124039f;
    n *= -2.11193562f;
    r2 = n;
    n += 1.81888425f;
    r3 = n;
    n *= -55.62006378f;
    n += 18.78183746f;
    r4 = n;
    n *= r1;
    r1 = n;
    n += r0;
    n = fabsf(n);
    r0 = n;
    n *= 8.63609505f;
    n += r0;
    r0 = n;
    n *= r1;
    n += r2;
    r2 = n;
    n *= 0.16563061f;
    n += -0.25351852f;
    n *= r0;
    n += 1.76166701f;
    r0 = n;
    n *= r3;
    n += 0.40958220f;
    n *= r0;
    n += 0.02015585f;
    n = fabsf(n);
    n *= r4;
    n += -9.69984055f;
    r4 = n;
    n *= -3.61455631f;
    n += r2;
    n *= 0.33905080f;
    n += r4;
    return n;
} // Solution1
