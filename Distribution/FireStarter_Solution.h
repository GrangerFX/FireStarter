// Run date: 06/04/22 10:49:36 Pacific Daylight Time
// Run duration = 1.102920 seconds
// Run count = 15
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 14

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

#define SOLUTION_VARIATIONS 1

// Precision = 0.000021

// Solution precision = 0.000021
inline float Solution(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.24277659f;
    r0 = n += -0.29643133f;
    n += 0.46559235f;
    n += -0.65317839f;
    n += -0.74069619f;
    r1 = n *= 0.41035315f;
    n *= 0.57004762f;
    n = r1 += n;
    r2 = n *= 0.30093321f;
    r3 = n += -0.40831625f;
    r4 = n += -0.54891390f;
    n *= 0.27241659f;
    n *= 0.64513117f;
    n *= r2;
    n *= 0.45168802f;
    r2 = n += -1.23831058f;
    n *= -0.93632495f;
    n *= r1;
    n *= r2;
    n *= 1.05485415f;
    n += 0.41404349f;
    n *= r4;
    r4 = n *= 0.05670016f;
    r2 = n += 0.82790488f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.00174034f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.05364925f;
    return n;
} // Solution
