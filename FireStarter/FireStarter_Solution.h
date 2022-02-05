#include <math.h>

// Run date: 02/05/22 11:12:07 Pacific Standard Time
// Run duration = 2.866242 seconds
// Run count = 3
// Run units = 16
// Run population = 4352
// Run iterations = 1024
// Run generations = 50
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 4

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

// Solution0 precision = 0.003963
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.55902666f;
    n *= -0.52289402f;
    r0 = n;
    n *= 0.21542904f;
    r1 = n;
    n += 0.72503543f;
    r2 = n;
    n *= 1.75204861f;
    r3 = n;
    n += -0.32887563f;
    r4 = n;
    n *= -1.09144795f;
    n *= 0.44217092f;
    n += fabsf(r0);
    r0 = n;
    n *= -1.45104682f;
    r5 = n;
    n *= r3;
    r3 = n;
    n += -0.51626289f;
    r6 = n;
    n += r1;
    n *= 0.34058231f;
    n *= r5;
    n *= r3;
    n *= r0;
    n *= -0.00478582f;
    r0 = n;
    n += r0;
    r0 = n;
    n += -1.19647694f;
    r3 = n;
    n += fabsf(r6);
    r6 = n;
    n += -0.14585720f;
    n *= -0.25326321f;
    n += -1.43529391f;
    n *= r4;
    n += r0;
    n += r2;
    r2 = n;
    n += r2;
    n *= r3;
    r3 = n;
    n += 0.12099155f;
    n *= r6;
    n += r3;
    return n;
} // Solution0

// Solution1 precision = 0.003507
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.20729311f;
    n *= -0.25206161f;
    r0 = n;
    n *= 0.33793744f;
    r1 = n;
    n += 0.93240154f;
    r2 = n;
    n *= 0.38371032f;
    r3 = n;
    n += 0.92657328f;
    r4 = n;
    n *= 0.63465285f;
    n *= 1.02294803f;
    n += fabsf(r0);
    r0 = n;
    n *= -0.78998494f;
    r5 = n;
    n *= r3;
    r3 = n;
    n += 0.59761876f;
    r6 = n;
    n += r1;
    n *= -1.42595851f;
    n *= r5;
    n *= r3;
    n *= r0;
    n *= 1.31752491f;
    r0 = n;
    n += r0;
    r0 = n;
    n += -1.42103028f;
    r3 = n;
    n += fabsf(r6);
    r6 = n;
    n += 0.02853722f;
    n *= -1.13545060f;
    n += -0.26912761f;
    n *= r4;
    n += r0;
    n += r2;
    r2 = n;
    n += r2;
    n *= r3;
    r3 = n;
    n += 0.74821812f;
    n *= r6;
    n += r3;
    return n;
} // Solution1

// Solution2 precision = 0.006264
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.30605349f;
    n *= 0.32799903f;
    r0 = n;
    n *= -0.84122944f;
    r1 = n;
    n += 0.65422308f;
    r2 = n;
    n *= -0.80422592f;
    r3 = n;
    n += -0.32798648f;
    r4 = n;
    n *= 0.96276248f;
    n *= -1.83241165f;
    n += fabsf(r0);
    r0 = n;
    n *= -0.52388197f;
    r5 = n;
    n *= r3;
    r3 = n;
    n += 0.75193173f;
    r6 = n;
    n += r1;
    n *= 1.64483714f;
    n *= r5;
    n *= r3;
    n *= r0;
    n *= 0.59917361f;
    r0 = n;
    n += r0;
    r0 = n;
    n += 0.49761578f;
    r3 = n;
    n += fabsf(r6);
    r6 = n;
    n += -1.67097116f;
    n *= 0.84448576f;
    n += -0.05792563f;
    n *= r4;
    n += r0;
    n += r2;
    r2 = n;
    n += r2;
    n *= r3;
    r3 = n;
    n += 0.58145392f;
    n *= r6;
    n += r3;
    return n;
} // Solution2

// Solution3 precision = 0.000210
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.57094860f;
    n *= -0.28982985f;
    r0 = n;
    n *= -0.00015327f;
    r1 = n;
    n += -1.53443217f;
    r2 = n;
    n *= -0.33820733f;
    r3 = n;
    n += 0.93584371f;
    r4 = n;
    n *= 0.61405224f;
    n *= -0.94261509f;
    n += fabsf(r0);
    r0 = n;
    n *= 0.84226906f;
    r5 = n;
    n *= r3;
    r3 = n;
    n += -0.02990810f;
    r6 = n;
    n += r1;
    n *= 0.00164869f;
    n *= r5;
    n *= r3;
    n *= r0;
    n *= -0.56423920f;
    r0 = n;
    n += r0;
    r0 = n;
    n += -1.15015006f;
    r3 = n;
    n += fabsf(r6);
    r6 = n;
    n += 2.85883689f;
    n *= -0.00240828f;
    n += -1.18493724f;
    n *= r4;
    n += r0;
    n += r2;
    r2 = n;
    n += r2;
    n *= r3;
    r3 = n;
    n += 0.38552099f;
    n *= r6;
    n += r3;
    return n;
} // Solution3

