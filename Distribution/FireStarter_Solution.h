// Run date: 07/16/22 17:03:51 Pacific Daylight Time
// Run duration = 0.842665 seconds
// Run count = 28
// Run mode = 2
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 8337
// Solution Generation = 27

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

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000226

// Solution0 precision = 0.00000061
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159250f;
    r0 = n *= 0.68487579f;
    n *= 0.87620533f;
    r1 = n *= -0.73290819f;
    n = r0 *= n;
    r2 = n += 0.84546125f;
    n *= 0.00224442f;
    r3 = n += 0.11018267f;
    r4 = n *= -0.36565757f;
    n *= r0;
    n *= 1.42252553f;
    r0 = n += -0.03348169f;
    n *= 0.59434420f;
    n += -0.62763596f;
    r5 = n *= -1.75793958f;
    n = r3 += n;
    n += -0.58648765f;
    n *= r2;
    n += 1.03593719f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n += r1;
    n *= -0.08992067f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += 0.35879499f;
    n *= -0.30379429f;
    n *= 0.62803799f;
    n += r5;
    n += 0.06845598f;
    return n;
} // Solution0

// Solution1 precision = 0.00000226
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065890f;
    r0 = n *= -0.80337429f;
    n *= 0.42261335f;
    r1 = n *= 0.62546539f;
    n = r0 *= n;
    r2 = n += -0.46209407f;
    n *= 0.16379203f;
    r3 = n += -1.06810796f;
    r4 = n *= 0.18790065f;
    n *= r0;
    n *= -0.95866257f;
    r0 = n += 0.42083693f;
    n *= -0.16921201f;
    n += 0.94905406f;
    r5 = n *= -1.04160881f;
    n = r3 += n;
    n += 0.74943906f;
    n *= r2;
    n += 2.13526487f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n += r1;
    n *= 0.05997634f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += 0.48648706f;
    n *= -1.38549256f;
    n *= 1.14599776f;
    n += r5;
    n += 0.65429842f;
    return n;
} // Solution1

// Solution2 precision = 0.00000215
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= 0.62960815f;
    n *= -0.99899852f;
    r1 = n *= -0.87849194f;
    n = r0 *= n;
    r2 = n += -1.10640466f;
    n *= -0.01985217f;
    r3 = n += 1.10305810f;
    r4 = n *= -1.44310701f;
    n *= r0;
    n *= 0.03823148f;
    r0 = n += 1.26189852f;
    n *= 1.01620495f;
    n += 0.31683660f;
    r5 = n *= 0.13860518f;
    n = r3 += n;
    n += 1.19578493f;
    n *= r2;
    n += -1.56389201f;
    n = r3 *= n;
    n = r1 *= n;
    n = r5 *= n;
    n += r1;
    n *= 0.01989209f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += 0.04644400f;
    n *= -0.60592598f;
    n *= -0.48021340f;
    n += r5;
    n += 0.51008481f;
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
