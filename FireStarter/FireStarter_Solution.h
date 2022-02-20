#include <math.h>

// Run date: 02/20/22 15:50:30 Pacific Standard Time
// Run duration = 3.609180 seconds
// Run count = 17
// Run units = 1
// Run population = 4352
// Run iterations = 512
// Run generations = 10
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

// Precision = 0.059660
// Solution0 precision = 0.027358
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.73855400f;
    r0 = n;
    n += -1.37743902f;
    r1 = n;
    n *= 2.91053581f;
    r2 = n;
    n += r2;
    n += -1.71098435f;
    r2 = n;
    n *= -0.31422633f;
    r3 = n;
    n += 0.92950594f;
    n += r2;
    r2 = n;
    n += fabsf(r0);
    n *= r1;
    n += -0.70323563f;
    n *= 1.49261928f;
    r1 = n;
    n *= -1.22654319f;
    n += -0.28084335f;
    r0 = n;
    n *= 2.19484377f;
    r4 = n;
    n += fabsf(r3);
    r3 = n;
    n += -0.02336209f;
    n += r4;
    n += r0;
    n *= r3;
    n *= 0.48082832f;
    n *= r2;
    r2 = n;
    n += 0.09303927f;
    r3 = n;
    n *= -0.08063807f;
    r0 = n;
    n *= -0.87929845f;
    n += -0.28694806f;
    n *= r3;
    n += r0;
    r0 = n;
    n += r0;
    r0 = n;
    n *= r0;
    n += r1;
    n *= r2;
    return n;
} // Solution0

// Solution1 precision = 0.006715
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.55646193f;
    r0 = n;
    n += 1.13870800f;
    r1 = n;
    n *= -1.94538438f;
    r2 = n;
    n += r2;
    n += 0.50776231f;
    r2 = n;
    n *= -0.77966756f;
    r3 = n;
    n += -0.92990297f;
    n += r2;
    r2 = n;
    n += fabsf(r0);
    n *= r1;
    n += 0.64817381f;
    n *= -1.40504014f;
    r1 = n;
    n *= -0.35516500f;
    n += -1.05961084f;
    r0 = n;
    n *= 0.16463311f;
    r4 = n;
    n += fabsf(r3);
    r3 = n;
    n += 0.04274386f;
    n += r4;
    n += r0;
    n *= r3;
    n *= 0.11591803f;
    n *= r2;
    r2 = n;
    n += -0.92033374f;
    r3 = n;
    n *= -0.11030801f;
    r0 = n;
    n *= -1.15448093f;
    n += -0.96749246f;
    n *= r3;
    n += r0;
    r0 = n;
    n += r0;
    r0 = n;
    n *= r0;
    n += r1;
    n *= r2;
    return n;
} // Solution1

// Solution2 precision = 0.051664
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.11242555f;
    r0 = n;
    n += 0.36494544f;
    r1 = n;
    n *= 0.59545040f;
    r2 = n;
    n += r2;
    n += 0.37427142f;
    r2 = n;
    n *= -1.19276202f;
    r3 = n;
    n += 0.46605548f;
    n += r2;
    r2 = n;
    n += fabsf(r0);
    n *= r1;
    n += 1.38539183f;
    n *= -0.52029896f;
    r1 = n;
    n *= 1.11190820f;
    n += 0.50708663f;
    r0 = n;
    n *= 1.52458334f;
    r4 = n;
    n += fabsf(r3);
    r3 = n;
    n += 0.03354121f;
    n += r4;
    n += r0;
    n *= r3;
    n *= 0.46977839f;
    n *= r2;
    r2 = n;
    n += 0.03486918f;
    r3 = n;
    n *= -0.95761293f;
    r0 = n;
    n *= -0.57504839f;
    n += 0.68960756f;
    n *= r3;
    n += r0;
    r0 = n;
    n += r0;
    r0 = n;
    n *= r0;
    n += r1;
    n *= r2;
    return n;
} // Solution2

// Solution3 precision = 0.059660
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.18152328f;
    r0 = n;
    n += 0.19418256f;
    r1 = n;
    n *= -1.12266469f;
    r2 = n;
    n += r2;
    n += -1.00877011f;
    r2 = n;
    n *= -0.61164051f;
    r3 = n;
    n += -1.39422095f;
    n += r2;
    r2 = n;
    n += fabsf(r0);
    n *= r1;
    n += 0.90787923f;
    n *= 1.61426651f;
    r1 = n;
    n *= 1.13591242f;
    n += 0.09522539f;
    r0 = n;
    n *= -0.56975657f;
    r4 = n;
    n += fabsf(r3);
    r3 = n;
    n += 0.64443052f;
    n += r4;
    n += r0;
    n *= r3;
    n *= 0.81351572f;
    n *= r2;
    r2 = n;
    n += -0.53705531f;
    r3 = n;
    n *= 0.01129011f;
    r0 = n;
    n *= -0.75810403f;
    n += 0.81630588f;
    n *= r3;
    n += r0;
    r0 = n;
    n += r0;
    r0 = n;
    n *= r0;
    n += r1;
    n *= r2;
    return n;
} // Solution3

