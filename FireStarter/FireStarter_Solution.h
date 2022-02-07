#include <math.h>

// Run date: 02/06/22 16:23:48 Pacific Standard Time
// Run duration = 11.935351 seconds
// Run count = 1
// Run units = 1
// Run population = 4352
// Run iterations = 512
// Run generations = 50
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

// Solution0 precision = 0.003297
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.07139289f;
    r0 = n;
    n += 0.17895670f;
    n += 0.75222242f;
    r1 = n;
    n *= -0.45512858f;
    n *= -0.10530408f;
    r2 = n;
    n += 0.67889929f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.22564748f;
    r2 = n;
    n *= 0.07858420f;
    n += r0;
    r0 = n;
    n *= 0.68708587f;
    n *= 0.89328814f;
    r4 = n;
    n += -1.06037784f;
    n *= r2;
    n += 0.42324677f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.89406294f;
    r4 = n;
    n *= 0.40522218f;
    r2 = n;
    n *= 0.40552321f;
    n += 0.51257235f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.29567182f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.60558659f;
    n += r5;
    n += r3;
    n += 0.13854247f;
    return n;
} // Solution0

// Solution1 precision = 0.001314
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.41874412f;
    r0 = n;
    n += 0.67981666f;
    n += 0.84862047f;
    r1 = n;
    n *= -1.03234637f;
    n *= -0.89169276f;
    r2 = n;
    n += -0.23070367f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -2.44095182f;
    r2 = n;
    n *= -0.90165049f;
    n += r0;
    r0 = n;
    n *= 0.20736298f;
    n *= -0.24761814f;
    r4 = n;
    n += -0.58730352f;
    n *= r2;
    n += 0.79631835f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -1.25361204f;
    r4 = n;
    n *= 0.04865687f;
    r2 = n;
    n *= -1.00136805f;
    n += -0.21674831f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.95651519f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 0.24303052f;
    n += r5;
    n += r3;
    n += 0.12783901f;
    return n;
} // Solution1

// Solution2 precision = 0.003995
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.18960893f;
    r0 = n;
    n += 0.44542474f;
    n += 0.00399898f;
    r1 = n;
    n *= 0.13846023f;
    n *= 0.40764070f;
    r2 = n;
    n += -0.70021749f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -0.11860792f;
    r2 = n;
    n *= 0.29934499f;
    n += r0;
    r0 = n;
    n *= 0.69160306f;
    n *= 0.90845180f;
    r4 = n;
    n += -0.03487320f;
    n *= r2;
    n += 0.03894384f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += 0.92435247f;
    r4 = n;
    n *= 0.28497723f;
    r2 = n;
    n *= -0.21409069f;
    n += -0.40560269f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.85972387f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 0.84067631f;
    n += r5;
    n += r3;
    n += 0.68836075f;
    return n;
} // Solution2

// Solution3 precision = 0.108127
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.24123372f;
    r0 = n;
    n += -0.09875718f;
    n += -0.73147339f;
    r1 = n;
    n *= -0.82101673f;
    n *= -1.90513289f;
    r2 = n;
    n += 0.06216830f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -1.27488291f;
    r2 = n;
    n *= -0.67974204f;
    n += r0;
    r0 = n;
    n *= 2.89996481f;
    n *= 0.36770430f;
    r4 = n;
    n += 2.16354704f;
    n *= r2;
    n += 0.23223734f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.26392925f;
    r4 = n;
    n *= -0.53820294f;
    r2 = n;
    n *= 0.51390576f;
    n += 0.23191957f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.17408472f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.45586801f;
    n += r5;
    n += r3;
    n += 0.41985795f;
    return n;
} // Solution3

