#include <math.h>

// Run date: 01/29/22 11:47:13 Pacific Standard Time
// Run duration = 6.143287 seconds
// Run count = 6
// Run units = 16
// Run population = 139264
// Run iterations = 15
// Run generations = 50

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

// Solution0 precision = 0.000840
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += 0.57095200f;
    r0 = n;
    n += -0.34526241f;
    n = fabsf(n);
    n += -0.48584586f;
    n *= 0.81556749f;
    r1 = n;
    n *= -0.27140993f;
    r2 = n;
    n = fabsf(n);
    r0 = n;
    n += -0.97042483f;
    r3 = n;
    n *= r3;
    n *= 0.48629311f;
    n += -0.45439160f;
    r3 = n;
    n += -0.90087724f;
    n *= r2;
    r2 = n;
    n += -1.46857393f;
    n *= -1.30328023f;
    r4 = n;
    n *= 0.50424927f;
    n += 0.27035195f;
    n += r4;
    n *= r2;
    n += 1.21108186f;
    r2 = n;
    n += r2;
    n *= -0.90480191f;
    n *= 0.57543504f;
    r2 = n;
    n *= r3;
    n = fabsf(n);
    n += -0.36570171f;
    n *= r1;
    n += r2;
    n *= 1.02046347f;
    n = fabsf(n);
    n += -1.03036737f;
    return n;
} // Solution0

// Solution1 precision = 0.000001
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -0.55136192f;
    r0 = n;
    n += -1.01943445f;
    n = fabsf(n);
    n += -1.36162269f;
    n *= -1.19676995f;
    r1 = n;
    n *= -0.00000002f;
    r2 = n;
    n = fabsf(n);
    r0 = n;
    n += 0.30636606f;
    r3 = n;
    n *= r3;
    n *= 0.13078268f;
    n += 0.25807512f;
    r3 = n;
    n += 0.59013659f;
    n *= r2;
    r2 = n;
    n += -0.26766238f;
    n *= 0.61967081f;
    r4 = n;
    n *= 0.29497516f;
    n += -0.57282728f;
    n += r4;
    n *= r2;
    n += 1.43174303f;
    r2 = n;
    n += r2;
    n *= -0.93425012f;
    n *= -0.57753795f;
    r2 = n;
    n *= r3;
    n = fabsf(n);
    n += 0.30759504f;
    n *= r1;
    n += r2;
    n *= 1.15205646f;
    n = fabsf(n);
    n += -1.57079577f;
    return n;
} // Solution1
