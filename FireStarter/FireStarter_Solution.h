// Run date: 05/15/22 21:17:15 Pacific Daylight Time
// Run duration = 2.033960 seconds
// Run count = 1
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 0

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

// Precision = 0.000093

// Solution0 precision = 0.000052
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.63071007f;
    r0 = n += -0.36711705f;
    n += -0.58995950f;
    n += -0.17912087f;
    n += -0.49440813f;
    r1 = n *= -0.38438457f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.28174144f;
    r3 = n += -0.94483912f;
    r4 = n += -0.98920953f;
    n *= -0.04626021f;
    n *= -1.14656281f;
    n *= r2;
    n *= 0.73943734f;
    r2 = n += -1.92499530f;
    n *= 0.04759289f;
    n *= r1;
    n *= r2;
    n *= -1.93948436f;
    n += 0.09510256f;
    n *= r4;
    r4 = n *= -0.14891477f;
    r2 = n += 0.53529346f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.23527396f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.20741762f;
    return n;
} // Solution0

// Solution1 precision = 0.000057
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.74423981f;
    r0 = n += -1.67269075f;
    n += -1.38685787f;
    n += 0.56178230f;
    n += -0.58541948f;
    r1 = n *= -0.76866198f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.25317797f;
    r3 = n += 0.64096117f;
    r4 = n += 0.22451955f;
    n *= -1.94461441f;
    n *= 0.46121892f;
    n *= r2;
    n *= 0.05278739f;
    r2 = n += 0.74489510f;
    n *= -1.63797688f;
    n *= r1;
    n *= r2;
    n *= -0.87863171f;
    n += -0.56522226f;
    n *= r4;
    r4 = n *= -0.21622671f;
    r2 = n += 1.30173886f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.06548691f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.24053885f;
    return n;
} // Solution1

// Solution2 precision = 0.000093
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.21225655f;
    r0 = n += -0.31120089f;
    n += -1.15430188f;
    n += 0.62104106f;
    n += 0.82070488f;
    r1 = n *= -1.25347340f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.56341743f;
    r3 = n += -0.83267134f;
    r4 = n += -0.51302868f;
    n *= 1.10055602f;
    n *= 0.40362242f;
    n *= r2;
    n *= 0.17852685f;
    r2 = n += -1.55461907f;
    n *= 0.87722009f;
    n *= r1;
    n *= r2;
    n *= -1.06683743f;
    n += 0.61953551f;
    n *= r4;
    r4 = n *= 0.02146392f;
    r2 = n += -0.97775584f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.86039084f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.14250836f;
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
