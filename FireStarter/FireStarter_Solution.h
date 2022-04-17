#include <math.h>

// Run date: 04/17/22 12:19:19 Pacific Daylight Time
// Run duration = 1.797184 seconds
// Run count = 7
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float SolutionTarget(float n, unsigned int variation)
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
} // SolutionTarget

// Precision = 0.000069

// Solution0 precision = 0.000060
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.73601037f;
    r0 = n += 0.18103014f;
    n += -0.93162316f;
    n += 0.89092344f;
    n += -0.61612338f;
    r1 = n *= 0.59233469f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.07175864f;
    r3 = n += 0.35260868f;
    r4 = n += 0.89682877f;
    n *= -0.65736675f;
    n *= 0.78839517f;
    n *= r2;
    n *= -0.09637040f;
    r2 = n += -0.99278969f;
    n *= -0.50400847f;
    n *= r1;
    n *= r2;
    r2 = n *= -0.34668931f;
    n += r2;
    n *= r4;
    r4 = n *= 0.13664587f;
    r2 = n += 0.50624299f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.99966228f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.71691650f;
    return n;
} // Solution0

// Solution1 precision = 0.000069
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.96487969f;
    r0 = n += 0.54250914f;
    n += -0.28754416f;
    n += -0.17436911f;
    n += -0.21790615f;
    r1 = n *= -0.87716877f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.46694735f;
    r3 = n += -0.87127799f;
    r4 = n += -0.52926046f;
    n *= 1.35520136f;
    n *= 0.04880886f;
    n *= r2;
    n *= -1.21864879f;
    r2 = n += 1.20149469f;
    n *= -0.47517720f;
    n *= r1;
    n *= r2;
    r2 = n *= -0.52586555f;
    n += r2;
    n *= r4;
    r4 = n *= 0.25178728f;
    r2 = n += 1.14088809f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.19763184f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.19768539f;
    return n;
} // Solution1

// Solution2 precision = 0.000042
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.68912578f;
    r0 = n += -0.02667892f;
    n += 0.87514430f;
    n += -0.36986375f;
    n += 0.45260662f;
    r1 = n *= 0.06654207f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.07684188f;
    r3 = n += 0.72628212f;
    r4 = n += -0.09478576f;
    n *= 1.16792417f;
    n *= 0.81553960f;
    n *= r2;
    n *= 0.64573240f;
    r2 = n += -3.84001970f;
    n *= 0.85390025f;
    n *= r1;
    n *= r2;
    r2 = n *= -0.21608037f;
    n += r2;
    n *= r4;
    r4 = n *= -0.25446126f;
    r2 = n += 0.80178142f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.85488135f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.83962911f;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
return 0.0f;
} // Solution
