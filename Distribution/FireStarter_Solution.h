// Run date: 12/28/22 10:50:44 Pacific Standard Time
// Run duration = 47.273861 seconds
// Run count = 115
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 115

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_VARIATIONS 3

// Precision = 0.00003472

// Solution0 precision = 0.00000316
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.45607683f;
    n += 0.29960668f;
    n += 1.73287511f;
    r1 = n += 0.11673252f;
    r2 = n *= 0.00000039f;
    r3 = n *= -8.75909710f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -0.59448189f;
    n = r1 *= n;
    n += 1.70805228f;
    n *= -0.94392008f;
    n += -1.32482708f;
    r0 = n *= -0.23093931f;
    n += 0.94771206f;
    r2 = n *= -0.41309953f;
    r4 = n += -1.59871209f;
    r5 = n += 1.91232550f;
    n *= r4;
    r4 = n += 1.50527477f;
    n *= -0.47133428f;
    r6 = n *= -1.32646000f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += -0.16984931f;
    return n;
} // Solution0

// Solution1 precision = 0.00001395
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.30286837f;
    n += -2.23350430f;
    n += -1.83434629f;
    r1 = n += 0.03476273f;
    r2 = n *= -0.25544098f;
    r3 = n *= -1.20129967f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.08897062f;
    n = r1 *= n;
    n += -1.35196567f;
    n *= -2.42283034f;
    n += 1.56750226f;
    r0 = n *= 0.29793108f;
    n += 1.47263372f;
    r2 = n *= -1.81155252f;
    r4 = n += 1.14017045f;
    r5 = n += 3.09000969f;
    n *= r4;
    r4 = n += 1.23032701f;
    n *= 0.87964696f;
    r6 = n *= -0.68719858f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += -0.13199462f;
    return n;
} // Solution1

// Solution2 precision = 0.00003472
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.38450792f;
    n += 1.38528264f;
    n += -1.36847496f;
    r1 = n += -0.51424748f;
    r2 = n *= -0.19658057f;
    r3 = n *= -1.00937140f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -1.41642284f;
    n = r1 *= n;
    n += 0.37135345f;
    n *= 0.05931082f;
    n += 1.11982524f;
    r0 = n *= 1.50458884f;
    n += -0.15248877f;
    r2 = n *= 0.95831734f;
    r4 = n += 0.64437073f;
    r5 = n += -1.37494576f;
    n *= r4;
    r4 = n += 1.25758410f;
    n *= -0.57976347f;
    r6 = n *= 0.77430701f;
    n *= r1;
    n *= r0;
    n = r2 *= n;
    n *= r6;
    n += r2;
    n += r5;
    n += r3;
    n *= r4;
    n += -0.97994143f;
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
