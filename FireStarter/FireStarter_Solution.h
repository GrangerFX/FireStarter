#include <math.h>

// Run date: 02/27/22 11:48:49 Pacific Standard Time
// Run duration = 0.237957 seconds
// Run count = 27
// Run units = 1
// Run population = 8704
// Run iterations = 512
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

// Precision = 0.086866
// Solution0 precision = 0.000070
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.00040591f;
    n += fabsf(-1.58824265f);
    r0 = n;
    n *= -0.03722882f;
    r1 = n;
    n *= -4.21585369f;
    r2 = n;
    n *= r2;
    n += -1.17216408f;
    n += -0.58275604f;
    n += -0.11016508f;
    r2 = n;
    n += -0.33658516f;
    r3 = n;
    n += r2;
    n *= 0.77798599f;
    r2 = n;
    n *= 0.01399541f;
    r4 = n;
    n += 0.57169557f;
    n *= -0.12270952f;
    r5 = n;
    n *= -2.83852291f;
    n += r0;
    n *= r5;
    n += r1;
    n *= r2;
    n += r4;
    r4 = n;
    n *= r4;
    n += 0.38216099f;
    n += r3;
    r3 = n;
    n *= 0.13566375f;
    r4 = n;
    n += r4;
    r4 = n;
    n *= -0.44432217f;
    r2 = n;
    n *= -0.15701558f;
    n *= r4;
    n += -0.19458430f;
    n += r2;
    n *= -13.15758896f;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.002133
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.10167819f;
    n += fabsf(-0.32385230f);
    r0 = n;
    n *= 0.87777478f;
    r1 = n;
    n *= 0.87616503f;
    r2 = n;
    n *= r2;
    n += -0.76383704f;
    n += -1.34965515f;
    n += 1.06532466f;
    r2 = n;
    n += 0.33550909f;
    r3 = n;
    n += r2;
    n *= -0.41916201f;
    r2 = n;
    n *= 0.53183126f;
    r4 = n;
    n += 0.29516393f;
    n *= 5.33730412f;
    r5 = n;
    n *= 0.02953614f;
    n += r0;
    n *= r5;
    n += r1;
    n *= r2;
    n += r4;
    r4 = n;
    n *= r4;
    n += -2.56357837f;
    n += r3;
    r3 = n;
    n *= -0.05695308f;
    r4 = n;
    n += r4;
    r4 = n;
    n *= 0.19039911f;
    r2 = n;
    n *= 2.11388564f;
    n *= r4;
    n += -0.09693391f;
    n += r2;
    n *= 15.87120247f;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.001615
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.09317014f;
    n += fabsf(-0.45993876f);
    r0 = n;
    n *= -3.08282375f;
    r1 = n;
    n *= 1.36927426f;
    r2 = n;
    n *= r2;
    n += -1.44806719f;
    n += 0.40520486f;
    n += -0.91485411f;
    r2 = n;
    n += -1.22772491f;
    r3 = n;
    n += r2;
    n *= -0.16760290f;
    r2 = n;
    n *= 0.83126104f;
    r4 = n;
    n += 0.89716911f;
    n *= -2.55531764f;
    r5 = n;
    n *= -0.17060371f;
    n += r0;
    n *= r5;
    n += r1;
    n *= r2;
    n += r4;
    r4 = n;
    n *= r4;
    n += -0.99559605f;
    n += r3;
    r3 = n;
    n *= -0.00131926f;
    r4 = n;
    n += r4;
    r4 = n;
    n *= 28.04734421f;
    r2 = n;
    n *= 4.04841661f;
    n *= r4;
    n += 9.34037113f;
    n += r2;
    n *= -0.06751556f;
    n *= r3;
    return n;
} // Solution2

// Solution3 precision = 0.086866
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.98570961f;
    n += fabsf(-3.38370609f);
    r0 = n;
    n *= 0.51078570f;
    r1 = n;
    n *= 0.21681292f;
    r2 = n;
    n *= r2;
    n += -0.30375743f;
    n += 0.59921747f;
    n += -0.01507880f;
    r2 = n;
    n += -0.85288638f;
    r3 = n;
    n += r2;
    n *= -1.04031658f;
    r2 = n;
    n *= -0.91172248f;
    r4 = n;
    n += -0.66875470f;
    n *= 0.21618608f;
    r5 = n;
    n *= -9.87515259f;
    n += r0;
    n *= r5;
    n += r1;
    n *= r2;
    n += r4;
    r4 = n;
    n *= r4;
    n += 0.43257344f;
    n += r3;
    r3 = n;
    n *= 30.27901840f;
    r4 = n;
    n += r4;
    r4 = n;
    n *= -0.00476800f;
    r2 = n;
    n *= 48.01273346f;
    n *= r4;
    n += -4.55039310f;
    n += r2;
    n *= 1.99509311f;
    n *= r3;
    return n;
} // Solution3

