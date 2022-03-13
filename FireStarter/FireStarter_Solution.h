#include <math.h>

// Run date: 03/13/22 12:25:10 Pacific Daylight Time
// Run duration = 1.745247 seconds
// Run count = 16
// Run units = 1
// Run population = 17408
// Run iterations = 4096
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

// Precision = 0.000047

// Solution0 precision = 0.000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.30920237f;
    r0 = n += 0.80847210f;
    r1 = n *= -0.68288857f;
    r2 = n += -0.20649566f;
    n *= 0.53462619f;
    n += r1;
    r1 = n *= 0.38830629f;
    r3 = n += -0.22142452f;
    n *= r3;
    r3 = n += -0.95492429f;
    r4 = n *= -1.78349805f;
    r5 = n += 1.44466603f;
    n *= 0.50306737f;
    n += r2;
    n *= r1;
    r1 = n += -0.82561690f;
    n *= 0.11660530f;
    r2 = n += 0.76847863f;
    n *= r2;
    n += -1.39839625f;
    n *= r1;
    n = r0 += n;
    n *= 0.82043540f;
    n += r5;
    n *= -0.63181186f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.97851330f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.02696223f;
    return n;
} // Solution0

// Solution1 precision = 0.000017
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.23242605f;
    r0 = n += 1.15724492f;
    r1 = n *= 0.42648497f;
    r2 = n += -0.59542787f;
    n *= 0.71077698f;
    n += r1;
    r1 = n *= -0.84735143f;
    r3 = n += 0.17295970f;
    n *= r3;
    r3 = n += -0.79247785f;
    r4 = n *= 0.84120452f;
    r5 = n += 0.59313804f;
    n *= 1.21281099f;
    n += r2;
    n *= r1;
    r1 = n += 0.47689027f;
    n *= -0.21858963f;
    r2 = n += 0.25445843f;
    n *= r2;
    n += 0.58941370f;
    n *= r1;
    n = r0 += n;
    n *= -1.00653112f;
    n += r5;
    n *= 0.83436716f;
    n += r4;
    n = r0 *= n;
    r4 = n += 1.67480230f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.26815504f;
    return n;
} // Solution1

// Solution2 precision = 0.000047
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.49554992f;
    r0 = n += 1.07515883f;
    r1 = n *= 0.72754109f;
    r2 = n += 0.23585647f;
    n *= 0.18993294f;
    n += r1;
    r1 = n *= 1.17302668f;
    r3 = n += 0.71779710f;
    n *= r3;
    r3 = n += -0.45583475f;
    r4 = n *= -0.38388187f;
    r5 = n += 0.52224195f;
    n *= -0.42605835f;
    n += r2;
    n *= r1;
    r1 = n += -1.99116433f;
    n *= 0.05144594f;
    r2 = n += 0.55642581f;
    n *= r2;
    n += 0.36975533f;
    n *= r1;
    n = r0 += n;
    n *= 0.07379434f;
    n += r5;
    n *= -1.32477200f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.11721250f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.77777630f;
    return n;
} // Solution2
