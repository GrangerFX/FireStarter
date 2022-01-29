#include <math.h>

// Run date: 01/29/22 12:52:26 Pacific Standard Time
// Run duration = 25.027884 seconds
// Run count = 1
// Run units = 1
// Run population = 69632
// Run iterations = 15
// Run generations = 500

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 4

inline float Target(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf(n * 1.2f) + n * 0.2f;
    case 2:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 3:
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // Target

// Solution0 precision = 0.000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -1.89763880f;
    r0 = n;
    n += -1.24395573f;
    r1 = n;
    n = fabsf(n);
    n += 1.55779386f;
    n *= -0.29121003f;
    r2 = n;
    n *= 0.12596262f;
    r3 = n;
    n = fabsf(n);
    n += -0.55657631f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += 0.19335800f;
    r0 = n;
    n += 0.68290514f;
    n *= r3;
    r3 = n;
    n += -0.81421697f;
    n += 0.43137127f;
    r4 = n;
    n *= 4.87099123f;
    n += -0.85425580f;
    n *= 0.72882468f;
    n *= r3;
    n += 0.71369290f;
    r3 = n;
    n += r3;
    n *= r4;
    n *= -2.15295792f;
    r4 = n;
    n *= r0;
    n = fabsf(n);
    n += -0.17667128f;
    n *= r2;
    n += r4;
    n *= -0.67793125f;
    n *= r1;
    n += 0.00000051f;
    return n;
} // Solution0

// Solution1 precision = 0.000088
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -1.60870504f;
    r0 = n;
    n += -1.00928748f;
    r1 = n;
    n = fabsf(n);
    n += 0.68469709f;
    n *= -0.30331853f;
    r2 = n;
    n *= -0.37088755f;
    r3 = n;
    n = fabsf(n);
    n += -0.71115679f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += -0.62050521f;
    r0 = n;
    n += 1.14368176f;
    n *= r3;
    r3 = n;
    n += 0.87006855f;
    n += 1.42618883f;
    r4 = n;
    n *= -1.53750432f;
    n += 0.44259530f;
    n *= -0.40111542f;
    n *= r3;
    n += 0.71073204f;
    r3 = n;
    n += r3;
    n *= r4;
    n *= 0.52498072f;
    r4 = n;
    n *= r0;
    n = fabsf(n);
    n += -0.00558886f;
    n *= r2;
    n += r4;
    n *= -0.47867188f;
    n *= r1;
    n += 0.52359921f;
    return n;
} // Solution1

// Solution2 precision = 0.000007
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -1.26368904f;
    r0 = n;
    n += -1.82696664f;
    r1 = n;
    n = fabsf(n);
    n += 1.67088091f;
    n *= -0.15118580f;
    r2 = n;
    n *= -1.02751172f;
    r3 = n;
    n = fabsf(n);
    n += -0.72302121f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += -0.69220614f;
    r0 = n;
    n += -0.60161364f;
    n *= r3;
    r3 = n;
    n += -0.65173346f;
    n += -0.29040939f;
    r4 = n;
    n *= -0.09929717f;
    n += -1.70364714f;
    n *= -0.25514984f;
    n *= r3;
    n += 1.12790585f;
    r3 = n;
    n += r3;
    n *= r4;
    n *= -0.96294641f;
    r4 = n;
    n *= r0;
    n = fabsf(n);
    n += -1.02078068f;
    n *= r2;
    n += r4;
    n *= -0.45382559f;
    n *= r1;
    n += -0.11812961f;
    return n;
} // Solution2

// Solution3 precision = 0.000220
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4;

    n = fabsf(n);
    n += -2.68783855f;
    r0 = n;
    n += -0.45375377f;
    r1 = n;
    n = fabsf(n);
    n += -1.57055855f;
    n *= -0.21362612f;
    r2 = n;
    n *= 0.85554802f;
    r3 = n;
    n = fabsf(n);
    n += -1.29544497f;
    r0 = n;
    n *= r0;
    n += r2;
    r2 = n;
    n += 0.53615576f;
    r0 = n;
    n += -0.24063553f;
    n *= r3;
    r3 = n;
    n += 0.36937350f;
    n += 1.38687754f;
    r4 = n;
    n *= 0.82839561f;
    n += -0.90618294f;
    n *= 0.18355447f;
    n *= r3;
    n += 0.20022523f;
    r3 = n;
    n += r3;
    n *= r4;
    n *= -1.33298087f;
    r4 = n;
    n *= r0;
    n = fabsf(n);
    n += 0.18193834f;
    n *= r2;
    n += r4;
    n *= -0.35073721f;
    n *= r1;
    n += 0.00000069f;
    return n;
} // Solution3

