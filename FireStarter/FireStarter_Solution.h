#include <math.h>

// Run date: 01/22/22 18:37:07 Pacific Standard Time
// Run duration = 1.782886 seconds
// Run count = 1
// Run units = 1
// Run population = 4352
// Run iterations = 15
// Run generations = 500

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

// Solution0 precision = 0.000014
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n = fabsf(n);
    n += -1.30346715f;
    r0 = n;
    n += -1.83812535f;
    r1 = n;
    n = fabsf(n);
    n += -3.14158177f;
    n *= -0.51086348f;
    r2 = n;
    n *= -0.55900168f;
    r3 = n;
    n = fabsf(n);
    n += -1.11043012f;
    r0 = n;
    n *= -1.00000024f;
    r4 = n;
    n *= 1.16822398f;
    r5 = n;
    n += 0.49557999f;
    r6 = n;
    n += -1.29923689f;
    r7 = n;
    n *= -0.42174560f;
    n += 0.62273562f;
    n *= r6;
    r6 = n;
    n *= -0.55365497f;
    n += -2.22625422f;
    n *= r5;
    n *= r3;
    r3 = n;
    n = fabsf(n);
    n += -0.88016140f;
    n *= -0.79890662f;
    n += r3;
    n *= r6;
    n = fabsf(n);
    n += 0.19102430f;
    n *= r2;
    n *= -0.87333298f;
    n *= r1;
    n += r0;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n = fabsf(n);
    n += -0.45156983f;
    r0 = n;
    n += -1.11922657f;
    r1 = n;
    n = fabsf(n);
    n += -3.14159274f;
    n *= 0.56626207f;
    r2 = n;
    n *= 0.85857910f;
    r3 = n;
    n = fabsf(n);
    n += -0.76369095f;
    r0 = n;
    n *= 1.05684805f;
    r4 = n;
    n *= -3.84591460f;
    r5 = n;
    n += -3.35779452f;
    r6 = n;
    n += -0.73841107f;
    r7 = n;
    n *= 2.97214055f;
    n += 0.65322828f;
    n *= r6;
    r6 = n;
    n *= 0.71884507f;
    n += 1.45502782f;
    n *= r5;
    n *= r3;
    r3 = n;
    n = fabsf(n);
    n += 3.08765388f;
    n *= -0.35367787f;
    n += r3;
    n *= r6;
    n = fabsf(n);
    n += 2.85776949f;
    n *= r2;
    n *= 0.00000000f;
    n *= r1;
    n += r0;
    n += r4;
    return n;
} // Solution1
