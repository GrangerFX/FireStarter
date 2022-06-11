// Run date: 06/05/22 17:52:15 Pacific Daylight Time
// Run duration = 3.279558 seconds
// Run count = 8
// Run units = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 7

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

// Precision = 0.000183

// Solution0 precision = 0.000159
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.09284966f;
    r0 = n *= 0.17661567f;
    n += -0.59453732f;
    n = r0 += n;
    r1 = n += -0.29829061f;
    r2 = n *= -0.58909446f;
    n = r2 += n;
    n += -1.99666822f;
    n = r1 += n;
    n += 0.33920282f;
    r3 = n += 0.36524326f;
    n += 0.88396090f;
    r4 = n *= -0.82545495f;
    n = r3 *= n;
    n = r0 += n;
    r5 = n *= 0.41651294f;
    n *= r2;
    r2 = n += 0.78121960f;
    r6 = n += 0.88499141f;
    n += r4;
    n *= r2;
    n += r5;
    n += r3;
    n = r1 *= n;
    n += 0.68463957f;
    n *= -0.79337531f;
    n += 0.07864946f;
    n *= 0.09395555f;
    n += 0.90154350f;
    n *= r6;
    n *= r1;
    n *= r0;
    return n;
} // Solution0

// Solution1 precision = 0.000095
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.16184913f;
    r0 = n *= -0.41739306f;
    n += 0.49170163f;
    n = r0 += n;
    r1 = n += -0.51261324f;
    r2 = n *= -0.45054954f;
    n = r2 += n;
    n += -0.16726887f;
    n = r1 += n;
    n += 0.55795789f;
    r3 = n += 0.83418941f;
    n += 0.28155965f;
    r4 = n *= 1.77983809f;
    n = r3 *= n;
    n = r0 += n;
    r5 = n *= 0.02399005f;
    n *= r2;
    r2 = n += 0.81650132f;
    r6 = n += 0.57915658f;
    n += r4;
    n *= r2;
    n += r5;
    n += r3;
    n = r1 *= n;
    n += 1.42663407f;
    n *= 2.10268331f;
    n += 0.49477294f;
    n *= 0.08446050f;
    n += -0.21859178f;
    n *= r6;
    n *= r1;
    n *= r0;
    return n;
} // Solution1

// Solution2 precision = 0.000183
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.77263182f;
    r0 = n *= 0.22469193f;
    n += -0.51910442f;
    n = r0 += n;
    r1 = n += 0.15075415f;
    r2 = n *= -0.93364799f;
    n = r2 += n;
    n += -3.53552246f;
    n = r1 += n;
    n += 1.90088832f;
    r3 = n += -0.90710413f;
    n += 0.71197098f;
    r4 = n *= -0.07330885f;
    n = r3 *= n;
    n = r0 += n;
    r5 = n *= 0.21566910f;
    n *= r2;
    r2 = n += 0.57332593f;
    r6 = n += 1.07119429f;
    n += r4;
    n *= r2;
    n += r5;
    n += r3;
    n = r1 *= n;
    n += -0.36256936f;
    n *= -0.33646214f;
    n += 0.56201512f;
    n *= 0.10779164f;
    n += 0.62299311f;
    n *= r6;
    n *= r1;
    n *= r0;
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
