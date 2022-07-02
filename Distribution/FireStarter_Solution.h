// Run date: 07/02/22 16:24:43 Pacific Daylight Time
// Run duration = 1.239427 seconds
// Run count = 1
// Run mode = 3
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 0

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

// Precision = 0.000260

// Solution0 precision = 0.000045
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.74231082f;
    r0 = n += -0.87486881f;
    n += -0.07507422f;
    n += 0.72898519f;
    n += -1.21947634f;
    r1 = n *= -0.70048124f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.32071924f;
    r3 = n += 0.49042091f;
    r4 = n += 0.56747341f;
    n *= -0.06777420f;
    n *= -0.68473321f;
    n *= r2;
    n *= 1.32597923f;
    r2 = n += -0.91130453f;
    n *= 2.17927623f;
    n *= r1;
    n *= r2;
    n *= 0.39690715f;
    n += -0.32400709f;
    n *= r4;
    r4 = n *= -0.13229752f;
    r2 = n += 1.01219022f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.34539974f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.29022470f;
    return n;
} // Solution0

// Solution1 precision = 0.000260
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.19987187f;
    r0 = n += -0.48977944f;
    n += -0.56632417f;
    n += -1.09206402f;
    n += -0.59561670f;
    r1 = n *= -0.16491662f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.09179738f;
    r3 = n += -0.36633807f;
    r4 = n += -0.75261182f;
    n *= 0.68024731f;
    n *= 0.35758153f;
    n *= r2;
    n *= 0.31891519f;
    r2 = n += -2.27720904f;
    n *= -0.33602127f;
    n *= r1;
    n *= r2;
    n *= 0.73376811f;
    n += 0.42798153f;
    n *= r4;
    r4 = n *= -0.24909768f;
    r2 = n += 0.65929693f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.14270735f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.74970460f;
    return n;
} // Solution1

// Solution2 precision = 0.000050
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.65490526f;
    r0 = n += -0.89188474f;
    n += -0.45971468f;
    n += -0.96653312f;
    n += 0.36404261f;
    r1 = n *= 0.48174471f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.05118203f;
    r3 = n += -0.67443824f;
    r4 = n += 0.19073652f;
    n *= 0.91668242f;
    n *= -0.91112339f;
    n *= r2;
    n *= -0.23379271f;
    r2 = n += -1.05916739f;
    n *= -1.26975667f;
    n *= r1;
    n *= r2;
    n *= -0.50993335f;
    n += 0.24585526f;
    n *= r4;
    r4 = n *= -0.28107834f;
    r2 = n += 0.83126187f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.71373063f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.75970626f;
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
