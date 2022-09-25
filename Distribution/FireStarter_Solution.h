// Run date: 09/25/22 16:47:39 Pacific Daylight Time
// Run duration = 0.145396 seconds
// Run count = 0
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10;
// Run seed = 833715995;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 6

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

// Precision = 0.00005300

// Solution0 precision = 0.00000700
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.31239009f;
    n += -0.34219199f;
    n += -0.58265299f;
    r0 = n += 1.09561396f;
    r1 = n *= -0.00001700f;
    n = r0 += n;
    r2 = n *= -0.23439300f;
    n = r0 *= n;
    n += r1;
    n += 0.32686999f;
    r1 = n *= -2.72158194f;
    r3 = n *= -0.10645300f;
    n *= -0.28910699f;
    r4 = n += -0.50706202f;
    n *= r4;
    n += -0.28249601f;
    n += 2.56476998f;
    n += -0.14410301f;
    r4 = n += -2.07528496f;
    n *= -1.31636405f;
    n = r3 *= n;
    n = r3 += n;
    n *= 0.25667500f;
    r5 = n += -3.07220793f;
    n += r0;
    n += r1;
    n *= r5;
    n += r3;
    n *= r4;
    n *= r2;
    n += -0.70802701f;
    n += 0.70799398f;
    return n;
} // Solution0

// Solution1 precision = 0.00000300
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.56639099f;
    n += -0.57937300f;
    n += 1.93457401f;
    r0 = n += -0.87955201f;
    r1 = n *= -0.00003100f;
    n = r0 += n;
    r2 = n *= -0.22601900f;
    n = r0 *= n;
    n += r1;
    n += 1.05445004f;
    r1 = n *= -0.53379399f;
    r3 = n *= 0.87712598f;
    n *= 0.25434500f;
    r4 = n += -1.31357896f;
    n *= r4;
    n += 1.36985302f;
    n += -2.41423893f;
    n += 0.95770502f;
    r4 = n += 0.80879402f;
    n *= -0.22138000f;
    n = r3 *= n;
    n = r3 += n;
    n *= -0.25407201f;
    r5 = n += -0.66390902f;
    n += r0;
    n += r1;
    n *= r5;
    n += r3;
    n *= r4;
    n *= r2;
    n += 6.73589087f;
    n += -6.85411692f;
    return n;
} // Solution1

// Solution2 precision = 0.00005300
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.05280006f;
    n += -0.99154699f;
    n += 1.37718701f;
    r0 = n += -1.95079994f;
    r1 = n *= -0.00002500f;
    n = r0 += n;
    r2 = n *= -0.19531600f;
    n = r0 *= n;
    n += r1;
    n += 1.11183000f;
    r1 = n *= -0.35804999f;
    r3 = n *= 0.51598901f;
    n *= -0.80545199f;
    r4 = n += 1.77599204f;
    n *= r4;
    n += 0.67810100f;
    n += 0.19402599f;
    n += 0.46665600f;
    r4 = n += 0.41904300f;
    n *= 0.16807100f;
    n = r3 *= n;
    n = r3 += n;
    n *= -0.87570798f;
    r5 = n += 1.02567697f;
    n += r0;
    n += r1;
    n *= r5;
    n += r3;
    n *= r4;
    n *= r2;
    n += -1.53871500f;
    n += 2.06232500f;
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
