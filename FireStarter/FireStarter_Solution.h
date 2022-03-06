#include <math.h>

// Run date: 03/06/22 11:45:58 Pacific Standard Time
// Run duration = 0.437464 seconds
// Run count = 16
// Run units = 1
// Run population = 17408
// Run iterations = 1024
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

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

// Precision = 0.000205

// Solution0 precision = 0.000081
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.26167935f;
    n += -0.88384378f;
    n *= -0.25483710f;
    n += -0.31665608f;
    n *= 1.67713583f;
    n += r1;
    n *= -0.76537567f;
    n += -0.54754150f;
    n *= r3;
    n += -1.57033551f;
    n *= -0.38696444f;
    n += -0.76614225f;
    n *= -1.50955069f;
    n += r2;
    n *= r1;
    n += 0.09865904f;
    n *= 1.20205343f;
    n += -0.25102255f;
    n *= r2;
    n += -1.60943604f;
    n *= r1;
    n = r0 += n;
    n *= 1.13742006f;
    n += r5;
    n *= -0.95358431f;
    n += r4;
    n = r0 *= n;
    n += 0.52973676f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.10355815f;
    return n;
} // Solution0

// Solution1 precision = 0.000035
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.24532759f;
    n += -0.88129687f;
    n *= -0.28457734f;
    n += -0.22836322f;
    n *= 0.72890711f;
    n += r1;
    n *= -1.11457074f;
    n += 0.06392578f;
    n *= r3;
    n += -0.87056583f;
    n *= -0.52823466f;
    n += -0.41083544f;
    n *= -1.04297030f;
    n += r2;
    n *= r1;
    n += 0.37171909f;
    n *= 0.09932540f;
    n += 0.32587203f;
    n *= r2;
    n += -1.53436279f;
    n *= r1;
    n = r0 += n;
    n *= -0.92308468f;
    n += r5;
    n *= 1.05066061f;
    n += r4;
    n = r0 *= n;
    n += 1.40846133f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.17469558f;
    return n;
} // Solution1

// Solution2 precision = 0.000205
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.70588136f;
    n += -0.22064500f;
    n *= -0.38647491f;
    n += -0.42300016f;
    n *= 0.36131537f;
    n += r1;
    n *= -0.36582658f;
    n += 0.41258284f;
    n *= r3;
    n += -1.26215959f;
    n *= 0.29057890f;
    n += -0.33882335f;
    n *= -0.37094155f;
    n += r2;
    n *= r1;
    n += 2.51760435f;
    n *= -0.07281455f;
    n += -0.64875948f;
    n *= r2;
    n += -0.54918355f;
    n *= r1;
    n = r0 += n;
    n *= -0.00528679f;
    n += r5;
    n *= -1.08710754f;
    n += r4;
    n = r0 *= n;
    n += 0.47457460f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.36301011f;
    return n;
} // Solution2
