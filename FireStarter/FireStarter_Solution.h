// Run date: 04/17/22 16:31:25 Pacific Daylight Time
// Run duration = 2.263054 seconds
// Run count = 15
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15

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

// Precision = 0.000052

// Solution0 precision = 0.000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.30202809f;
    r0 = n += 0.25450674f;
    n += -2.54731178f;
    n += 0.86876684f;
    r1 = n *= 0.14945824f;
    r2 = n *= -0.70972407f;
    n = r0 += n;
    n = r0 += n;
    r3 = n *= -0.14144860f;
    r4 = n += 0.87118828f;
    n = r1 += n;
    n *= -1.75102711f;
    n += -0.14590369f;
    n *= r3;
    n *= 0.06454843f;
    r3 = n += 1.26327062f;
    n *= 1.62754643f;
    n *= r2;
    n *= r3;
    r3 = n *= -0.89824259f;
    n += r3;
    n *= r1;
    r1 = n *= 0.14377147f;
    r3 = n += 0.58310777f;
    n = r1 += n;
    n += r3;
    n = r4 *= n;
    n += 0.79674000f;
    n *= r1;
    n *= r0;
    n *= r4;
    n += -0.15110280f;
    return n;
} // Solution0

// Solution1 precision = 0.000050
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.05197179f;
    r0 = n += 0.63507563f;
    n += -0.97814310f;
    n += -0.27085283f;
    r1 = n *= 0.43225211f;
    r2 = n *= -1.07806528f;
    n = r0 += n;
    n = r0 += n;
    r3 = n *= -0.51864028f;
    r4 = n += 1.82171214f;
    n = r1 += n;
    n *= 3.12628102f;
    n += 0.67777383f;
    n *= r3;
    n *= -0.00491072f;
    r3 = n += 0.78781104f;
    n *= 1.67259169f;
    n *= r2;
    n *= r3;
    r3 = n *= 0.01808299f;
    n += r3;
    n *= r1;
    r1 = n *= -1.84784555f;
    r3 = n += 0.35772076f;
    n = r1 += n;
    n += r3;
    n = r4 *= n;
    n += 1.80628788f;
    n *= r1;
    n *= r0;
    n *= r4;
    n += 0.39131007f;
    return n;
} // Solution1

// Solution2 precision = 0.000052
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.28559414f;
    r0 = n += -0.22546636f;
    n += -0.39493233f;
    n += -0.64052671f;
    r1 = n *= 0.21088669f;
    r2 = n *= 0.99142259f;
    n = r0 += n;
    n = r0 += n;
    r3 = n *= -0.18060890f;
    r4 = n += 1.25403082f;
    n = r1 += n;
    n *= -5.24306154f;
    n += -0.15076528f;
    n *= r3;
    n *= 0.01313268f;
    r3 = n += 1.63478756f;
    n *= 0.18684410f;
    n *= r2;
    n *= r3;
    r3 = n *= 0.88231105f;
    n += r3;
    n *= r1;
    r1 = n *= 0.18564849f;
    r3 = n += 0.43544731f;
    n = r1 += n;
    n += r3;
    n = r4 *= n;
    n += 0.60809869f;
    n *= r1;
    n *= r0;
    n *= r4;
    n += 0.16600153f;
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
