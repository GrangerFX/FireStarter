// Run date: 08/06/22 12:29:57 Pacific Daylight Time
// Run duration = 2.040160 seconds
// Run count = 11
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 50

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

// Precision = 0.01355040

// Solution0 precision = 0.01355040
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.25160509f;
    r1 = n += 0.15927614f;
    n *= -0.50478309f;
    r2 = n *= -0.55140412f;
    n *= 0.74236882f;
    n *= 0.33658776f;
    n = r2 += n;
    r3 = n *= -0.96923548f;
    r4 = n *= -0.36000127f;
    r5 = n += -0.90326482f;
    n = r1 *= n;
    n += -0.22834876f;
    n = r1 *= n;
    r6 = n += -0.34627181f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += -1.00102305f;
    n += -0.42289117f;
    n += -1.36988580f;
    n *= -1.46887672f;
    n += -0.49017128f;
    n *= r0;
    n *= 0.85614616f;
    n = r4 *= n;
    n *= r1;
    n *= 0.92238873f;
    n *= r2;
    n += r4;
    n *= 0.00033125f;
    n += r6;
    return n;
} // Solution0

// Solution1 precision = 0.01300311
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.13145459f;
    r1 = n += 1.58055663f;
    n *= -0.88605428f;
    r2 = n *= 0.53633732f;
    n *= 0.06733482f;
    n *= 1.07545900f;
    n = r2 += n;
    r3 = n *= 0.64735788f;
    r4 = n *= -0.32050753f;
    r5 = n += -0.76898897f;
    n = r1 *= n;
    n += -0.44052580f;
    n = r1 *= n;
    r6 = n += 0.63850433f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += 0.13028599f;
    n += 0.41072407f;
    n += 0.81567806f;
    n *= 1.57882404f;
    n += 3.80594635f;
    n *= r0;
    n *= 0.75647926f;
    n = r4 *= n;
    n *= r1;
    n *= 0.80717742f;
    n *= r2;
    n += r4;
    n *= 0.00282519f;
    n += r6;
    return n;
} // Solution1

// Solution2 precision = 0.00418162
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.54218328f;
    r1 = n += -0.17923442f;
    n *= 0.90089488f;
    r2 = n *= -0.46739882f;
    n *= 0.03117135f;
    n *= -1.57506633f;
    n = r2 += n;
    r3 = n *= 0.55414820f;
    r4 = n *= 0.79677498f;
    r5 = n += 1.06180918f;
    n = r1 *= n;
    n += 1.09702706f;
    n = r1 *= n;
    r6 = n += -0.44465572f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += -0.40206891f;
    n += -2.51547480f;
    n += 0.14242600f;
    n *= 0.39305291f;
    n += 0.04332557f;
    n *= r0;
    n *= 0.81640661f;
    n = r4 *= n;
    n *= r1;
    n *= -0.05550401f;
    n *= r2;
    n += r4;
    n *= 0.23188956f;
    n += r6;
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
