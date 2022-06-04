// Run date: 06/04/22 11:24:38 Pacific Daylight Time
// Run duration = 1.755576 seconds
// Run count = 18
// Run units = 1
// Run population = 4352
// Run iterations = 512
// Run generations = 10
// Run samples = 15
// Solution Generation = 170

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

// Precision = 0.011005

// Solution0 precision = 0.007118
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.47176820f;
    r1 = n += 0.23575377f;
    r2 = n *= 0.62226808f;
    r3 = n *= 0.24556321f;
    n *= 0.76208967f;
    r4 = n *= -0.51822764f;
    n *= -3.73042488f;
    n *= r4;
    r4 = n *= -0.28335711f;
    r5 = n += -0.74790937f;
    n += r4;
    n += -0.22777563f;
    n *= 0.39725259f;
    n = r0 *= n;
    n += 0.72759360f;
    n += -0.03488890f;
    r4 = n *= 0.94024837f;
    n *= -0.62082148f;
    n += -0.24367931f;
    n += 0.31289914f;
    n += r5;
    r5 = n *= 0.79590499f;
    n *= -1.20852339f;
    n += r1;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += 0.62734091f;
    n += r3;
    n *= r0;
    n += 0.30136931f;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.009725
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.77667272f;
    r1 = n += -0.16455872f;
    r2 = n *= -1.00645626f;
    r3 = n *= -0.29337412f;
    n *= -0.38849875f;
    r4 = n *= -0.60587078f;
    n *= 0.48602316f;
    n *= r4;
    r4 = n *= -0.46129432f;
    r5 = n += 0.63503319f;
    n += r4;
    n += -0.19420639f;
    n *= 0.98564070f;
    n = r0 *= n;
    n += -0.23000650f;
    n += -0.85626984f;
    r4 = n *= 0.98363876f;
    n *= -0.49735916f;
    n += 0.23211898f;
    n += 0.13288294f;
    n += r5;
    r5 = n *= -0.54212928f;
    n *= -0.86799186f;
    n += r1;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += 1.40393972f;
    n += r3;
    n *= r0;
    n += 0.42174560f;
    n += r2;
    return n;
} // Solution1

// Solution2 precision = 0.011005
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.17610702f;
    r1 = n += 0.74767220f;
    r2 = n *= 0.36187503f;
    r3 = n *= -0.18393432f;
    n *= -1.26110387f;
    r4 = n *= 1.28483069f;
    n *= 1.45501971f;
    n *= r4;
    r4 = n *= 0.38652229f;
    r5 = n += -0.61480081f;
    n += r4;
    n += -0.70597506f;
    n *= 0.73794919f;
    n = r0 *= n;
    n += 0.24098872f;
    n += 0.43156815f;
    r4 = n *= 0.47821265f;
    n *= -0.64294380f;
    n += 0.10560817f;
    n += -0.83837450f;
    n += r5;
    r5 = n *= 0.36826390f;
    n *= 0.14925006f;
    n += r1;
    n *= r4;
    n *= r5;
    n = r3 += n;
    n += -0.63980860f;
    n += r3;
    n *= r0;
    n += -0.03391106f;
    n += r2;
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
