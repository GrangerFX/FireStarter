// Run date: 07/02/22 13:01:24 Pacific Daylight Time
// Run duration = 1.416005 seconds
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

// Precision = 0.000143

// Solution0 precision = 0.000044
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.15536013f;
    r0 = n += -0.14547610f;
    n += -0.80816990f;
    n += 0.27531287f;
    n += -0.85981834f;
    r1 = n *= 0.41125423f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.03819464f;
    r3 = n += 0.67729318f;
    r4 = n += -0.21264005f;
    n *= 0.37486276f;
    n *= -1.48266840f;
    n *= r2;
    n *= -0.35103786f;
    r2 = n += -0.92001700f;
    n *= 0.46757430f;
    n *= r1;
    n *= r2;
    n *= 0.77244103f;
    n += 0.15007696f;
    n *= r4;
    r4 = n *= 0.82538456f;
    r2 = n += 0.80559212f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.75529230f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.38564956f;
    return n;
} // Solution0

// Solution1 precision = 0.000143
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.28121114f;
    r0 = n += 0.07234970f;
    n += -0.37241966f;
    n += 0.88417977f;
    n += -1.07140100f;
    r1 = n *= -0.87640697f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.47201467f;
    r3 = n += -0.69879991f;
    r4 = n += -0.33754066f;
    n *= 0.12165508f;
    n *= -0.55733013f;
    n *= r2;
    n *= 1.28922069f;
    r2 = n += 1.38950729f;
    n *= 0.94013822f;
    n *= r1;
    n *= r2;
    n *= -0.27434319f;
    n += -0.16538644f;
    n *= r4;
    r4 = n *= -0.37431887f;
    r2 = n += 1.47518885f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.26096678f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.27071589f;
    return n;
} // Solution1

// Solution2 precision = 0.000120
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.12919644f;
    r0 = n += -0.33733448f;
    n += -0.53905094f;
    n += 0.21326247f;
    n += -0.24949251f;
    r1 = n *= 0.32505155f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.06054208f;
    r3 = n += -0.37155446f;
    r4 = n += -0.38657227f;
    n *= 0.47357526f;
    n *= -0.65482646f;
    n *= r2;
    n *= 0.47104549f;
    r2 = n += 0.92164868f;
    n *= -0.57064778f;
    n *= r1;
    n *= r2;
    n *= -1.53838456f;
    n += -0.02181032f;
    n *= r4;
    r4 = n *= -0.37278661f;
    r2 = n += 0.81962049f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.58053637f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.47665340f;
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
