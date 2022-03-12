#include <math.h>

// Run date: 03/12/22 14:46:59 Pacific Standard Time
// Run duration = 0.208039 seconds
// Run count = 149
// Run units = 1
// Run population = 4352
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

// Precision = 0.000023

// Solution0 precision = 0.000016
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.27941346f;
    r0 = n += -0.96056813f;
    r1 = n *= -0.38235617f;
    r2 = n += -0.34204379f;
    n *= 11.88128853f;
    n += r1;
    r1 = n *= -0.09934604f;
    r3 = n += -0.56041110f;
    n *= r3;
    r3 = n += -0.91979486f;
    r4 = n *= -0.43434936f;
    r5 = n += -0.63976842f;
    n *= -1.41160381f;
    n += r2;
    n *= r1;
    r1 = n += 0.14464088f;
    n *= -0.64256656f;
    r2 = n += 0.48004004f;
    n *= r2;
    n += -1.02184010f;
    n *= r1;
    n = r0 += n;
    n *= 0.74011797f;
    n += r5;
    n *= -1.90153396f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.91899258f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.13220769f;
    return n;
} // Solution0

// Solution1 precision = 0.000020
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.28484750f;
    r0 = n += -0.81737173f;
    r1 = n *= -0.01888940f;
    r2 = n += 0.01323429f;
    n *= 2.96622133f;
    n += r1;
    r1 = n *= -7.27060795f;
    r3 = n += 0.47556385f;
    n *= r3;
    r3 = n += -0.84145737f;
    r4 = n *= -0.88888729f;
    r5 = n += -0.61614931f;
    n *= -0.48069379f;
    n += r2;
    n *= r1;
    r1 = n += 0.53118777f;
    n *= 0.40482965f;
    r2 = n += 0.26579264f;
    n *= r2;
    n += -1.56489503f;
    n *= r1;
    n = r0 += n;
    n *= -1.55151665f;
    n += r5;
    n *= 0.43080565f;
    n += r4;
    n = r0 *= n;
    r4 = n += 1.55083907f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.24499720f;
    return n;
} // Solution1

// Solution2 precision = 0.000023
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.73180884f;
    r0 = n += -0.20406313f;
    r1 = n *= -0.54761600f;
    r2 = n += -1.49255276f;
    n *= 1.19883978f;
    n += r1;
    r1 = n *= -0.22165817f;
    r3 = n += -0.39975151f;
    n *= r3;
    r3 = n += -0.93493289f;
    r4 = n *= -0.36385828f;
    r5 = n += 1.05045962f;
    n *= -0.80644315f;
    n += r2;
    n *= r1;
    r1 = n += 0.29860997f;
    n *= -0.13690794f;
    r2 = n += 0.86415291f;
    n *= r2;
    n += -0.82545364f;
    n *= r1;
    n = r0 += n;
    n *= -0.30499649f;
    n += r5;
    n *= 0.43407166f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.96641690f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.28949904f;
    return n;
} // Solution2
