#include <math.h>

// Run date: 03/12/22 15:43:30 Pacific Standard Time
// Run duration = 0.389266 seconds
// Run count = 6
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

// Precision = 0.000118

// Solution0 precision = 0.000040
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.21770592f;
    r0 = n += -0.76338589f;
    r1 = n *= -0.49284008f;
    r2 = n += -0.36970863f;
    n *= 0.83961058f;
    n += r1;
    r1 = n *= -0.84827626f;
    r3 = n += -0.45133692f;
    n *= r3;
    r3 = n += -1.44053304f;
    r4 = n *= -0.36372247f;
    r5 = n += -0.53205043f;
    n *= -1.28993702f;
    n += r2;
    n *= r1;
    r1 = n += 0.43474603f;
    n *= -0.30009502f;
    r2 = n += 0.39996013f;
    n *= r2;
    n += -0.59643531f;
    n *= r1;
    n = r0 += n;
    n *= 0.90516591f;
    n += r5;
    n *= -1.82554340f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.71039909f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.11721970f;
    return n;
} // Solution0

// Solution1 precision = 0.000047
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.23948777f;
    r0 = n += -0.72478765f;
    r1 = n *= -0.27781397f;
    r2 = n += -0.16392639f;
    n *= 0.47361597f;
    n += r1;
    r1 = n *= -1.43992305f;
    r3 = n += 0.07162727f;
    n *= r3;
    r3 = n += -1.02438998f;
    r4 = n *= -0.67704678f;
    r5 = n += -0.64104599f;
    n *= -0.94624907f;
    n += r2;
    n *= r1;
    r1 = n += 0.56147265f;
    n *= -0.00927147f;
    r2 = n += -0.24833836f;
    n *= r2;
    n += -0.98791164f;
    n *= r1;
    n = r0 += n;
    n *= -0.84531862f;
    n += r5;
    n *= 1.14810908f;
    n += r4;
    n = r0 *= n;
    r4 = n += 1.22366011f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.24121203f;
    return n;
} // Solution1

// Solution2 precision = 0.000118
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.75154346f;
    r0 = n += -0.03995036f;
    r1 = n *= -0.59240139f;
    r2 = n += -1.65392148f;
    n *= 1.55218387f;
    n += r1;
    r1 = n *= -0.18179186f;
    r3 = n += -0.56124032f;
    n *= r3;
    r3 = n += -1.16909969f;
    r4 = n *= -0.33306208f;
    r5 = n += 0.77889115f;
    n *= -0.61431855f;
    n += r2;
    n *= r1;
    r1 = n += 0.38778007f;
    n *= -0.12541164f;
    r2 = n += 0.73487043f;
    n *= r2;
    n += -0.63956231f;
    n *= r1;
    n = r0 += n;
    n *= -0.37299070f;
    n += r5;
    n *= 0.38901564f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.66201872f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.36773998f;
    return n;
} // Solution2
