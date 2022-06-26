// Run date: 06/26/22 11:59:22 Pacific Daylight Time
// Run duration = 3.979710 seconds
// Run count = 2
// Run units = 4
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 1

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

// Precision = 0.000246

// Solution0 precision = 0.000216
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.48471501f;
    r0 = n *= -0.49711949f;
    r1 = n += 2.75563383f;
    n += -1.10713875f;
    r2 = n += 0.35773668f;
    r3 = n *= -0.06656229f;
    r4 = n += -1.28521645f;
    n = r0 *= n;
    r5 = n *= -0.30733979f;
    n *= -0.26269203f;
    n *= r2;
    n = r1 += n;
    n = r0 += n;
    r2 = n += -0.00969460f;
    n += r5;
    n *= 0.27827373f;
    n += r2;
    r2 = n *= -0.37674388f;
    n += -1.16044426f;
    n *= -0.57393068f;
    n *= r3;
    n *= 0.53825825f;
    n += -0.89057964f;
    n += r0;
    n += r2;
    r2 = n += 0.11123258f;
    n *= r1;
    n = r2 *= n;
    n *= r2;
    n += 0.30291179f;
    n += r4;
    n += -0.05676099f;
    return n;
} // Solution0

// Solution1 precision = 0.000165
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.46817714f;
    r0 = n *= -0.16600583f;
    r1 = n += 0.88087320f;
    n += -0.84401053f;
    r2 = n += 0.08986154f;
    r3 = n *= 1.01213431f;
    r4 = n += 0.18145315f;
    n = r0 *= n;
    r5 = n *= 1.69797051f;
    n *= -0.00927220f;
    n *= r2;
    n = r1 += n;
    n = r0 += n;
    r2 = n += -0.82735395f;
    n += r5;
    n *= -0.39281276f;
    n += r2;
    r2 = n *= 2.11060238f;
    n += 2.86113405f;
    n *= 1.31523776f;
    n *= r3;
    n *= -1.08620548f;
    n += 0.87882310f;
    n += r0;
    n += r2;
    r2 = n += -0.19813594f;
    n *= r1;
    n = r2 *= n;
    n *= r2;
    n += -1.33444011f;
    n += r4;
    n += 0.44799152f;
    return n;
} // Solution1

// Solution2 precision = 0.000246
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.66596657f;
    r0 = n *= -0.18295202f;
    r1 = n += 0.62472713f;
    n += 0.71391046f;
    r2 = n += -1.00410426f;
    r3 = n *= -1.33450747f;
    r4 = n += -1.34715116f;
    n = r0 *= n;
    r5 = n *= 1.20123959f;
    n *= 0.11698235f;
    n *= r2;
    n = r1 += n;
    n = r0 += n;
    r2 = n += -0.89048928f;
    n += r5;
    n *= -0.58590806f;
    n += r2;
    r2 = n *= -1.26574993f;
    n += -0.00743597f;
    n *= -1.29234135f;
    n *= r3;
    n *= -0.16974671f;
    n += -0.29131091f;
    n += r0;
    n += r2;
    r2 = n += 1.01798141f;
    n *= r1;
    n = r2 *= n;
    n *= r2;
    n += 0.73576027f;
    n += r4;
    n += 0.04646157f;
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
