#include <math.h>

// Run date: 03/13/22 21:01:15 Pacific Daylight Time
// Run duration = 13.808960 seconds
// Run count = 1
// Run units = 32
// Run population = 4352
// Run iterations = 1024
// Run generations = 10
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

// Precision = 0.004861

// Solution0 precision = 0.004345
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.23749161f;
    n += 0.70814282f;
    r1 = n *= 0.78335243f;
    r2 = n += 0.66975904f;
    n *= -0.32967803f;
    r3 = n += 0.55844718f;
    r4 = n *= 0.11626437f;
    r5 = n += 0.99473119f;
    n *= 0.43011123f;
    r6 = n += 0.88959479f;
    n = r3 *= n;
    n += r3;
    n = r2 *= n;
    n = r6 += n;
    n *= r1;
    n += r2;
    n = r6 *= n;
    r2 = n += -0.77236366f;
    n = r6 *= n;
    n += r4;
    n = r0 *= n;
    n += -0.64366132f;
    n *= -0.63209766f;
    n += r2;
    n *= -1.13433158f;
    n += r5;
    n *= 3.01323462f;
    n += r6;
    n *= 1.13934886f;
    n += r0;
    n *= -0.21477275f;
    n += 0.09376058f;
    return n;
} // Solution0

// Solution1 precision = 0.003091
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.18751319f;
    n += -0.45778295f;
    r1 = n *= -0.99301767f;
    r2 = n += -0.78850585f;
    n *= -0.00152828f;
    r3 = n += 0.60258180f;
    r4 = n *= -0.60213131f;
    r5 = n += -1.24499774f;
    n *= -0.62876779f;
    r6 = n += 0.10489707f;
    n = r3 *= n;
    n += r3;
    n = r2 *= n;
    n = r6 += n;
    n *= r1;
    n += r2;
    n = r6 *= n;
    r2 = n += -1.52138340f;
    n = r6 *= n;
    n += r4;
    n = r0 *= n;
    n += 0.08835405f;
    n *= -0.89738792f;
    n += r2;
    n *= -0.17167880f;
    n += r5;
    n *= -0.32204187f;
    n += r6;
    n *= 0.86386681f;
    n += r0;
    n *= 1.64491153f;
    n += 0.02555401f;
    return n;
} // Solution1

// Solution2 precision = 0.004861
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.37599260f;
    n += -0.61107993f;
    r1 = n *= 1.00784588f;
    r2 = n += -0.05220281f;
    n *= -0.08045135f;
    r3 = n += 0.07029345f;
    r4 = n *= -0.33147186f;
    r5 = n += -0.93281502f;
    n *= 0.36549577f;
    r6 = n += -1.19709349f;
    n = r3 *= n;
    n += r3;
    n = r2 *= n;
    n = r6 += n;
    n *= r1;
    n += r2;
    n = r6 *= n;
    r2 = n += 0.77650011f;
    n = r6 *= n;
    n += r4;
    n = r0 *= n;
    n += -0.31641084f;
    n *= -0.69137543f;
    n += r2;
    n *= -0.93423021f;
    n += r5;
    n *= 0.33226293f;
    n += r6;
    n *= -1.51458752f;
    n += r0;
    n *= 0.67386770f;
    n += 0.61713231f;
    return n;
} // Solution2
