#include <math.h>

// Run date: 01/18/22 13:02:34 Pacific Standard Time
// Run duration = 0.586333 seconds
// Run count = 1
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

// Solution0 precision = 0.000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.62998599f;
    n += -0.68105876f;
    r0 = n;
    n *= 0.18806954f;
    n += -0.86048585f;
    n *= r0;
    n += 0.25354388f;
    r0 = n;
    n *= 0.95132905f;
    r1 = n;
    n += 0.97093838f;
    n *= 0.00148888f;
    r2 = n;
    n += r0;
    n *= -0.34544134f;
    n += 1.77638209f;
    n = fabsf(n);
    r0 = n;
    n *= r1;
    r1 = n;
    n += 0.25699803f;
    r3 = n;
    n *= -0.68277240f;
    r4 = n;
    n += r1;
    n *= r4;
    n += 0.25669786f;
    r4 = n;
    n *= 0.12841815f;
    n += r4;
    r4 = n;
    n *= r2;
    n += 1.74866867f;
    n *= r0;
    n += 0.05081128f;
    n = fabsf(n);
    n *= r4;
    r4 = n;
    n += 0.31830159f;
    r0 = n;
    n *= -1.07027781f;
    n += r0;
    n *= r3;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.000002
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.12955871f;
    n += 0.63991553f;
    r0 = n;
    n *= 0.00000544f;
    n += 2.01172304f;
    n *= r0;
    n += -0.57588112f;
    r0 = n;
    n *= 0.00000213f;
    r1 = n;
    n += -0.19412003f;
    n *= -0.28011256f;
    r2 = n;
    n += r0;
    n *= 1.20170331f;
    n += -0.42831278f;
    n = fabsf(n);
    r0 = n;
    n *= r1;
    r1 = n;
    n += 2.03271341f;
    r3 = n;
    n *= 0.74555188f;
    r4 = n;
    n += r1;
    n *= r4;
    n += 0.37889528f;
    r4 = n;
    n *= -0.36506641f;
    n += r4;
    r4 = n;
    n *= r2;
    n += 0.34239495f;
    n *= r0;
    n += -0.42780113f;
    n = fabsf(n);
    n *= r4;
    r4 = n;
    n += -0.47274527f;
    r0 = n;
    n *= 0.63461947f;
    n += r0;
    n *= r3;
    n += r4;
    return n;
} // Solution1
