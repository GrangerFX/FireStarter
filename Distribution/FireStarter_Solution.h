// Run date: 07/17/22 14:05:05 Pacific Daylight Time
// Run duration = 1.534346 seconds
// Run count = 13
// Run mode = 5
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 0
// Solution Generation = 1200

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

// Precision = 0.00008750

// Solution0 precision = 0.00008750
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.98100168f;
    n += 0.54078531f;
    n *= 0.20816287f;
    n += -0.01039791f;
    n *= 0.75122070f;
    r1 = n *= 0.69742340f;
    r2 = n *= -0.73459864f;
    n *= -0.35842475f;
    r3 = n += -0.10452916f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += 0.35550633f;
    n += r3;
    r3 = n += -0.94990808f;
    n *= r2;
    n = r3 *= n;
    r2 = n += 0.25601497f;
    n = r2 += n;
    r5 = n += 0.77595395f;
    n = r2 += n;
    n += r0;
    r0 = n += 3.58147049f;
    n *= r0;
    n *= r5;
    r5 = n += -2.52385879f;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= r5;
    n *= -0.02668750f;
    n *= r2;
    return n;
} // Solution0

// Solution1 precision = 0.00005424
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.50071508f;
    n += -0.90504676f;
    n *= 0.41172397f;
    n += -0.42568985f;
    n *= -0.29744536f;
    r1 = n *= -0.83135211f;
    r2 = n *= 0.04687514f;
    n *= 3.32974243f;
    r3 = n += -0.81228197f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += -0.92140764f;
    n += r3;
    r3 = n += -0.23266982f;
    n *= r2;
    n = r3 *= n;
    r2 = n += 0.42573708f;
    n = r2 += n;
    r5 = n += -2.22926664f;
    n = r2 += n;
    n += r0;
    r0 = n += 0.16378857f;
    n *= r0;
    n *= r5;
    r5 = n += -0.06764384f;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= r5;
    n *= 0.54415196f;
    n *= r2;
    return n;
} // Solution1

// Solution2 precision = 0.00002992
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.66769797f;
    n += 0.21474168f;
    n *= 0.19202803f;
    n += 0.41639319f;
    n *= -0.64194596f;
    r1 = n *= -1.02359247f;
    r2 = n *= -0.79593629f;
    n *= 0.20947845f;
    r3 = n += 0.20146725f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += 0.93069297f;
    n += r3;
    r3 = n += 0.79752821f;
    n *= r2;
    n = r3 *= n;
    r2 = n += 0.19100142f;
    n = r2 += n;
    r5 = n += -0.49001300f;
    n = r2 += n;
    n += r0;
    r0 = n += -0.37476295f;
    n *= r0;
    n *= r5;
    r5 = n += -1.12420356f;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= r5;
    n *= 0.42787832f;
    n *= r2;
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
