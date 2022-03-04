#include <math.h>

// Run date: 03/04/22 11:20:19 Pacific Standard Time
// Run duration = 0.378634 seconds
// Run count = 2
// Run units = 1
// Run population = 4352
// Run iterations = 1024
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_VARIATIONS 4

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

// Precision = 0.014998
// Solution0 precision = 0.012184
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.72792333f;
    r0 = n;
    n *= -0.28990158f;
    n += -0.76594490f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -2.36770296f;
    n += -1.11257768f;
    r2 = n;
    n *= 0.07482004f;
    r3 = n;
    n += 0.00146778f;
    n += 0.30854014f;
    r4 = n;
    n *= -0.74256378f;
    r5 = n;
    n += r2;
    r2 = n;
    n += -0.19229621f;
    n = fabsf(n);
    n += -1.45128429f;
    r6 = n;
    n += -1.15715754f;
    r7 = n;
    n *= r3;
    n *= 2.56793523f;
    r3 = n;
    n *= r6;
    n += 1.06729102f;
    r6 = n;
    n *= r6;
    n *= r2;
    n += -0.11558402f;
    n = fabsf(n);
    n += r3;
    n += r4;
    n *= -0.42326802f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= 2.86473751f;
    n += r7;
    return n;
} // Solution0

// Solution1 precision = 0.013850
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.10651047f;
    r0 = n;
    n *= 0.91351199f;
    n += -1.07332897f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -1.05450463f;
    n += -1.48601282f;
    r2 = n;
    n *= 1.95296657f;
    r3 = n;
    n += 1.60965145f;
    n += 2.71526814f;
    r4 = n;
    n *= 0.00019812f;
    r5 = n;
    n += r2;
    r2 = n;
    n += -0.16344537f;
    n = fabsf(n);
    n += -0.84835529f;
    r6 = n;
    n += -2.24924088f;
    r7 = n;
    n *= r3;
    n *= 6.17140675f;
    r3 = n;
    n *= r6;
    n += 3.52636552f;
    r6 = n;
    n *= r6;
    n *= r2;
    n += 0.38503391f;
    n = fabsf(n);
    n += r3;
    n += r4;
    n *= -2.12936258f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= 2.08281207f;
    n += r7;
    return n;
} // Solution1

// Solution2 precision = 0.014998
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.89697993f;
    r0 = n;
    n *= -0.15142146f;
    n += -1.17381322f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -0.83931476f;
    n += -1.33870733f;
    r2 = n;
    n *= 0.09538402f;
    r3 = n;
    n += 0.53216392f;
    n += -0.42184719f;
    r4 = n;
    n *= -0.97295725f;
    r5 = n;
    n += r2;
    r2 = n;
    n += -0.14511314f;
    n = fabsf(n);
    n += -0.26858148f;
    r6 = n;
    n += -0.76418763f;
    r7 = n;
    n *= r3;
    n *= 2.05660295f;
    r3 = n;
    n *= r6;
    n += 1.35762846f;
    r6 = n;
    n *= r6;
    n *= r2;
    n += -0.26944175f;
    n = fabsf(n);
    n += r3;
    n += r4;
    n *= -0.45468137f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= 2.42396498f;
    n += r7;
    return n;
} // Solution2

// Solution3 precision = 0.000000
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.75166297f;
    r0 = n;
    n *= 0.33038348f;
    n += -1.57079637f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -1.68745458f;
    n += -0.96868616f;
    r2 = n;
    n *= 0.58351082f;
    r3 = n;
    n += -0.68850118f;
    n += 0.81969857f;
    r4 = n;
    n *= -0.00000000f;
    r5 = n;
    n += r2;
    r2 = n;
    n += -0.48545209f;
    n = fabsf(n);
    n += -0.62376422f;
    r6 = n;
    n += -0.94703227f;
    r7 = n;
    n *= r3;
    n *= 2.47796631f;
    r3 = n;
    n *= r6;
    n += 1.86072111f;
    r6 = n;
    n *= r6;
    n *= r2;
    n += -0.41875565f;
    n = fabsf(n);
    n += r3;
    n += r4;
    n *= 0.15866169f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= 0.57925653f;
    n += r7;
    return n;
} // Solution3

