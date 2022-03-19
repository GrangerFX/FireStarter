#include <math.h>

// Run date: 03/19/22 12:50:51 Pacific Daylight Time
// Run duration = 1.783029 seconds
// Run count = 1
// Run units = 1
// Run population = 17408
// Run iterations = 4096
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
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
} // Target

// Precision = 2.207694

// Solution0 precision = 0.999981
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.19253030f;
    r1 = n += -0.60809386f;
    r2 = n *= 0.98321062f;
    n += 0.13710941f;
    r3 = n *= -0.30700058f;
    r4 = n += 0.22458658f;
    r5 = n *= 0.40287790f;
    n += r5;
    n *= -1.20798635f;
    r5 = n += -0.46862003f;
    r6 = n *= -0.95802373f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= -0.83515131f;
    r2 = n += -0.65692133f;
    n *= -0.12534845f;
    n += r3;
    n *= 0.67532772f;
    n += r1;
    n *= -0.92602295f;
    n += -0.74773550f;
    n *= 0.53909898f;
    n += -0.66017646f;
    n *= r5;
    n += r6;
    n *= 0.35080159f;
    n += r2;
    n *= -0.18077031f;
    n += 0.26333597f;
    return n;
} // Solution0

// Solution1 precision = 1.491959
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.99339730f;
    r1 = n += 0.66673595f;
    r2 = n *= -0.90591449f;
    n += -0.10516953f;
    r3 = n *= 0.42634439f;
    r4 = n += -0.72093892f;
    r5 = n *= 1.63308942f;
    n += r5;
    n *= -0.01109008f;
    r5 = n += 0.16723537f;
    r6 = n *= -0.05650296f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= 0.74417228f;
    r2 = n += -0.10191678f;
    n *= 0.07641265f;
    n += r3;
    n *= 0.52786934f;
    n += r1;
    n *= -0.94059002f;
    n += -0.76223409f;
    n *= -0.76897317f;
    n += 0.70283204f;
    n *= r5;
    n += r6;
    n *= -0.76556522f;
    n += r2;
    n *= 0.65741879f;
    n += 0.48247424f;
    return n;
} // Solution1

// Solution2 precision = 2.207694
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.68158835f;
    r1 = n += 0.85991013f;
    r2 = n *= 0.87324315f;
    n += 0.69497526f;
    r3 = n *= -0.65398985f;
    r4 = n += -0.47570035f;
    r5 = n *= -0.02821375f;
    n += r5;
    n *= 0.77240133f;
    r5 = n += -0.32606971f;
    r6 = n *= -0.59856665f;
    n += r0;
    n = r2 *= n;
    n += r4;
    n *= r2;
    n += r5;
    r5 = n *= -0.77679747f;
    r2 = n += 0.73368043f;
    n *= -0.15106705f;
    n += r3;
    n *= -0.10239591f;
    n += r1;
    n *= 0.47458687f;
    n += -0.01495017f;
    n *= -0.10102049f;
    n += 0.69961095f;
    n *= r5;
    n += r6;
    n *= -1.68809354f;
    n += r2;
    n *= -0.01019355f;
    n += 0.91533291f;
    return n;
} // Solution2
