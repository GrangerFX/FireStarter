// Run date: 06/05/22 11:28:12 Pacific Daylight Time
// Run duration = 2.465102 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Solution Generation = 10

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

// Precision = 0.000097

// Solution0 precision = 0.000097
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.58586401f;
    r0 = n += -0.43171400f;
    n *= -0.31430301f;
    r1 = n *= 0.55550301f;
    r2 = n += -0.91356999f;
    n = r0 += n;
    n += -1.12234998f;
    n += r2;
    n += -0.00253900f;
    r2 = n *= -0.35648701f;
    n = r1 += n;
    n = r2 += n;
    r3 = n *= -0.18201900f;
    n *= 1.24160802f;
    r4 = n += -0.28246301f;
    n = r0 *= n;
    n *= 0.26298699f;
    n += r0;
    n *= 0.49538600f;
    n *= 0.30767199f;
    n = r3 += n;
    n = r1 += n;
    n += r4;
    n = r2 *= n;
    n += -0.94974798f;
    n += -1.86744499f;
    r4 = n += 0.17259800f;
    n *= r1;
    n *= r3;
    n += r4;
    n += 0.40225101f;
    n *= r2;
    return n;
} // Solution0

// Solution1 precision = 10.000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.00000000f;
    r0 = n += 1.00000000f;
    n *= 1.00000000f;
    r1 = n *= 1.00000000f;
    r2 = n += 1.00000000f;
    n = r0 += n;
    n += 1.00000000f;
    n += r2;
    n += 1.00000000f;
    r2 = n *= 1.00000000f;
    n = r1 += n;
    n = r2 += n;
    r3 = n *= 1.00000000f;
    n *= 1.00000000f;
    r4 = n += 1.00000000f;
    n = r0 *= n;
    n *= 1.00000000f;
    n += r0;
    n *= 1.00000000f;
    n *= 1.00000000f;
    n = r3 += n;
    n = r1 += n;
    n += r4;
    n = r2 *= n;
    n += 1.00000000f;
    n += 1.00000000f;
    r4 = n += 1.00000000f;
    n *= r1;
    n *= r3;
    n += r4;
    n += 1.00000000f;
    n *= r2;
    return n;
} // Solution1

// Solution2 precision = 10.000000
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.00000000f;
    r0 = n += 1.00000000f;
    n *= 1.00000000f;
    r1 = n *= 1.00000000f;
    r2 = n += 1.00000000f;
    n = r0 += n;
    n += 1.00000000f;
    n += r2;
    n += 1.00000000f;
    r2 = n *= 1.00000000f;
    n = r1 += n;
    n = r2 += n;
    r3 = n *= 1.00000000f;
    n *= 1.00000000f;
    r4 = n += 1.00000000f;
    n = r0 *= n;
    n *= 1.00000000f;
    n += r0;
    n *= 1.00000000f;
    n *= 1.00000000f;
    n = r3 += n;
    n = r1 += n;
    n += r4;
    n = r2 *= n;
    n += 1.00000000f;
    n += 1.00000000f;
    r4 = n += 1.00000000f;
    n *= r1;
    n *= r3;
    n += r4;
    n += 1.00000000f;
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
