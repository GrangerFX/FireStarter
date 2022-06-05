// Run date: 06/05/22 10:36:51 Pacific Daylight Time
// Run duration = 1.285668 seconds
// Run count = 8
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Solution Generation = 700

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

// Precision = 0.000109

// Solution0 precision = 0.000107
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.21059445f;
    r1 = n += 0.06443758f;
    r2 = n += -0.47221974f;
    n = r0 *= n;
    r3 = n += -1.41019249f;
    n *= 0.64126617f;
    r4 = n += 0.23913947f;
    r5 = n += -1.05420816f;
    r6 = n += -0.92858970f;
    n *= -0.64591771f;
    n = r1 *= n;
    n = r2 += n;
    n += r0;
    n += 0.63975787f;
    r0 = n *= 0.31512657f;
    r7 = n += -0.65746891f;
    n += r4;
    n = r5 *= n;
    n += r1;
    r1 = n *= -0.23662978f;
    n += r7;
    n += -0.69076514f;
    n += 0.84423476f;
    n *= r6;
    n *= r2;
    n += r5;
    n += r3;
    n *= r1;
    n += 0.92441767f;
    n = r0 += n;
    n += -2.10983014f;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.000056
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.43526906f;
    r1 = n += 0.03950778f;
    r2 = n += 3.26961541f;
    n = r0 *= n;
    r3 = n += -1.14737523f;
    n *= -0.43311694f;
    r4 = n += 0.59123731f;
    r5 = n += 0.46560037f;
    r6 = n += 0.53508645f;
    n *= 0.65935475f;
    n = r1 *= n;
    n = r2 += n;
    n += r0;
    n += 2.49427962f;
    r0 = n *= 0.00429989f;
    r7 = n += 1.37258720f;
    n += r4;
    n = r5 *= n;
    n += r1;
    r1 = n *= 0.01076948f;
    n += r7;
    n += 0.20592627f;
    n += -0.06147190f;
    n *= r6;
    n *= r2;
    n += r5;
    n += r3;
    n *= r1;
    n += 1.19615507f;
    n = r0 += n;
    n += -2.75876045f;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.000109
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.33177897f;
    r1 = n += -0.44958675f;
    r2 = n += -0.83803189f;
    n = r0 *= n;
    r3 = n += 0.12942185f;
    n *= 0.36513650f;
    r4 = n += -0.83490235f;
    r5 = n += 0.12728952f;
    r6 = n += -0.08377613f;
    n *= -1.14239490f;
    n = r1 *= n;
    n = r2 += n;
    n += r0;
    n += -0.92593336f;
    r0 = n *= 0.25556019f;
    r7 = n += 0.75814205f;
    n += r4;
    n = r5 *= n;
    n += r1;
    r1 = n *= 0.47013336f;
    n += r7;
    n += 1.32751215f;
    n += 1.03583980f;
    n *= r6;
    n *= r2;
    n += r5;
    n += r3;
    n *= r1;
    n += -0.10518327f;
    n = r0 += n;
    n += 1.27592766f;
    n += r0;
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
