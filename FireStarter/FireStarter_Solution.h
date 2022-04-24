// Run date: 04/24/22 12:38:42 Pacific Daylight Time
// Run duration = 0.975763 seconds
// Run count = 8
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// State Generation = 700

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

// Precision = 0.000029

// Solution0 precision = 0.000017
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.76212591f;
    r0 = n += 0.52949953f;
    n += -0.56985670f;
    n += -0.28943193f;
    n += -0.13760892f;
    r1 = n *= -0.16281824f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.11884075f;
    r3 = n += -0.60969973f;
    r4 = n += -0.62541848f;
    n *= -1.18465483f;
    n *= -1.70450723f;
    n *= r2;
    n *= -0.02181686f;
    r2 = n += 0.72009844f;
    n *= 0.92634279f;
    n *= r1;
    n *= r2;
    n *= -1.14742351f;
    n += 0.01338792f;
    n *= r4;
    r4 = n *= -0.48831710f;
    r2 = n += 0.66170949f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.84104466f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.03875201f;
    return n;
} // Solution0

// Solution1 precision = 0.000029
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.19003759f;
    r0 = n += 0.99410099f;
    n += -0.58618319f;
    n += -0.13553756f;
    n += -0.68667710f;
    r1 = n *= -0.74977839f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.21440986f;
    r3 = n += -0.87885755f;
    r4 = n += -0.60904521f;
    n *= 0.10870863f;
    n *= -0.68685186f;
    n *= r2;
    n *= -1.08924627f;
    r2 = n += -0.88031733f;
    n *= -1.14750624f;
    n *= r1;
    n *= r2;
    n *= -1.28934991f;
    n += -0.34183380f;
    n *= r4;
    r4 = n *= 0.15342957f;
    r2 = n += 0.73275310f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.89092857f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.20139320f;
    return n;
} // Solution1

// Solution2 precision = 0.000007
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.20190597f;
    r0 = n += -1.00089812f;
    n += -0.89775276f;
    n += 0.25746977f;
    n += -1.02722728f;
    r1 = n *= 1.45407367f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.03013764f;
    r3 = n += -0.64967084f;
    r4 = n += 0.24030161f;
    n *= -1.57466137f;
    n *= -0.89256406f;
    n *= r2;
    n *= 0.09520869f;
    r2 = n += -0.69360489f;
    n *= 2.73193860f;
    n *= r1;
    n *= r2;
    n *= 0.28899583f;
    n += 0.45903003f;
    n *= r4;
    r4 = n *= -0.15750532f;
    r2 = n += 0.72342622f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.68674546f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.96755397f;
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
