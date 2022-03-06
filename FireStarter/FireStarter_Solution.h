#include <math.h>

// Run date: 03/05/22 16:00:32 Pacific Standard Time
// Run duration = 0.937125 seconds
// Run count = 1440
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

// Precision = 0.000030

// Solution0 precision = 0.000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.22679210f;
    n += -0.83740169f;
    r0 = n;
    n *= -0.40462375f;
    r1 = n;
    n += -0.26791826f;
    r2 = n;
    n *= 21.46554565f;
    n += r1;
    n *= -0.08641255f;
    r1 = n;
    n += -0.66416508f;
    r3 = n;
    n *= r3;
    n += -1.56335950f;
    r3 = n;
    n *= -0.28523740f;
    r4 = n;
    n += -0.60184306f;
    r5 = n;
    n *= -1.12941861f;
    n += r2;
    n *= r1;
    n += 0.11520804f;
    r1 = n;
    n *= 0.45741048f;
    n += -0.32427543f;
    r2 = n;
    n *= r2;
    n += -0.75122094f;
    n *= r1;
    n += r0;
    r0 = n;
    n *= 0.79901695f;
    n += r5;
    n *= -1.97826791f;
    n += r4;
    n *= r0;
    r0 = n;
    n += 0.61560196f;
    r4 = n;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.08099338f;
    return n;
} // Solution0

// Solution1 precision = 0.000029
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.22305445f;
    n += -1.29709601f;
    r0 = n;
    n *= -0.07813786f;
    r1 = n;
    n += -0.10785617f;
    r2 = n;
    n *= 1.09934497f;
    n += r1;
    n *= -3.83070087f;
    r1 = n;
    n += 0.09996664f;
    r3 = n;
    n *= r3;
    n += -0.94076532f;
    r3 = n;
    n *= -0.39865458f;
    r4 = n;
    n += -0.35299990f;
    r5 = n;
    n *= -0.30929652f;
    n += r2;
    n *= r1;
    n += -0.00083018f;
    r1 = n;
    n *= 1.96850657f;
    n += 0.29218465f;
    r2 = n;
    n *= r2;
    n += -5.04982758f;
    n *= r1;
    n += r0;
    r0 = n;
    n *= -1.06368148f;
    n += r5;
    n *= 1.10062790f;
    n += r4;
    n *= r0;
    r0 = n;
    n += 1.32808638f;
    r4 = n;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.20917648f;
    return n;
} // Solution1

// Solution2 precision = 0.000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.52084911f;
    n += -0.53736389f;
    r0 = n;
    n *= -0.56495684f;
    r1 = n;
    n += 0.70578778f;
    r2 = n;
    n *= -0.47480640f;
    n += r1;
    n *= -0.69654030f;
    r1 = n;
    n += 0.22369094f;
    r3 = n;
    n *= r3;
    n += -1.40354407f;
    r3 = n;
    n *= 0.30725113f;
    r4 = n;
    n += -0.29862157f;
    r5 = n;
    n *= -0.56637776f;
    n += r2;
    n *= r1;
    n += 7.02718544f;
    r1 = n;
    n *= -0.04818351f;
    n += -0.48704645f;
    r2 = n;
    n *= r2;
    n += -0.53752285f;
    n *= r1;
    n += r0;
    r0 = n;
    n *= -0.00271964f;
    n += r5;
    n *= -1.05353916f;
    n += r4;
    n *= r0;
    r0 = n;
    n += 0.27259818f;
    r4 = n;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.54895800f;
    return n;
} // Solution2
