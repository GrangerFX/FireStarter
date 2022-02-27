#include <math.h>

// Run date: 02/27/22 15:57:46 Pacific Standard Time
// Run duration = 0.279194 seconds
// Run count = 2
// Run units = 1
// Run population = 4352
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

// Precision = 0.013639
// Solution0 precision = 0.000107
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 5.96569443f;
    r0 = n;
    n += -2.13954496f;
    n += -1.00204706f;
    n += -3.87097549f;
    n *= -1.33900046f;
    r1 = n;
    n += r0;
    n += -0.16010664f;
    n *= -0.53129464f;
    r0 = n;
    n *= 0.00205119f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= -2.24361348f;
    n += 1.85913634f;
    n += 1.26878047f;
    n *= -3.04486227f;
    r3 = n;
    n *= -0.66061479f;
    r4 = n;
    n += -1.30722249f;
    r5 = n;
    n += 0.24352217f;
    r6 = n;
    n *= -0.68903613f;
    n += 4.14434528f;
    n += r4;
    r4 = n;
    n *= r6;
    r6 = n;
    n *= 1.81038618f;
    n += 3.74807930f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= -0.20402390f;
    n *= -0.00000018f;
    n += r0;
    n *= r3;
    n *= r6;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.000313
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 6.54232216f;
    r0 = n;
    n += -2.17627668f;
    n += -0.91441941f;
    n += -1.49732971f;
    n *= -2.20532727f;
    r1 = n;
    n += r0;
    n += -0.13656965f;
    n *= -0.68707281f;
    r0 = n;
    n *= -0.00224946f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= -2.22372437f;
    n += -0.34667826f;
    n += 1.35659778f;
    n *= -2.89651179f;
    r3 = n;
    n *= -0.47101536f;
    r4 = n;
    n += -1.56018567f;
    r5 = n;
    n += 0.29503930f;
    r6 = n;
    n *= -0.90279567f;
    n += 4.87877798f;
    n += r4;
    r4 = n;
    n *= r6;
    r6 = n;
    n *= 2.70328975f;
    n += 3.85396004f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= -0.05722636f;
    n *= -0.11815207f;
    n += r0;
    n *= r3;
    n *= r6;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.000593
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 6.75932693f;
    r0 = n;
    n += -2.18345499f;
    n += -0.43455139f;
    n += -2.55476975f;
    n *= -0.79563773f;
    r1 = n;
    n += r0;
    n += -0.25567728f;
    n *= -0.52730799f;
    r0 = n;
    n *= -0.00892525f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= -2.40148926f;
    n += -1.71824217f;
    n += 1.13404906f;
    n *= -3.28546405f;
    r3 = n;
    n *= -0.19138569f;
    r4 = n;
    n += -3.11715078f;
    r5 = n;
    n += 0.13104907f;
    r6 = n;
    n *= -0.89172387f;
    n += 6.02737665f;
    n += r4;
    r4 = n;
    n *= r6;
    r6 = n;
    n *= 2.20707917f;
    n += 3.82127786f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= -0.07804552f;
    n *= 0.52360052f;
    n += r0;
    n *= r3;
    n *= r6;
    n *= r4;
    return n;
} // Solution2

// Solution3 precision = 0.013639
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 6.59713745f;
    r0 = n;
    n += -2.53135204f;
    n += -0.61027044f;
    n += -4.17089462f;
    n *= -1.58402085f;
    r1 = n;
    n += r0;
    n += -0.13568290f;
    n *= -2.82931423f;
    r0 = n;
    n *= -0.71852821f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= -3.26373601f;
    n += -4.94184589f;
    n += 1.06229508f;
    n *= -3.38795376f;
    r3 = n;
    n *= 0.36883488f;
    r4 = n;
    n += -0.68556076f;
    r5 = n;
    n += 0.08368973f;
    r6 = n;
    n *= -0.65281874f;
    n += 3.86933374f;
    n += r4;
    r4 = n;
    n *= r6;
    r6 = n;
    n *= 1.33977807f;
    n += 3.66160464f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= -0.14659536f;
    n *= 0.00003060f;
    n += r0;
    n *= r3;
    n *= r6;
    n *= r4;
    return n;
} // Solution3

