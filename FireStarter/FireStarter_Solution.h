#include <math.h>

// Run date: 01/30/22 18:28:19 Pacific Standard Time
// Run duration = 0.481160 seconds
// Run count = 421
// Run units = 1
// Run population = 4352
// Run iterations = 1024
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define TARGET_PI 3.14159265f
#define TARGET_VARIATIONS 3

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

// Solution0 precision = 0.000066
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 5.96958590f;
    n += -5.11003304f;
    n *= 0.51966101f;
    r0 = n;
    n += -11.49813271f;
    r1 = n;
    n *= -0.02007259f;
    n += 0.34824780f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += -0.85053116f;
    n *= -0.33259755f;
    r3 = n;
    n += r2;
    n *= -1.04869533f;
    r2 = n;
    n += 0.60030252f;
    n *= r0;
    n += -3.22616196f;
    r0 = n;
    n *= r3;
    n += -1.46104348f;
    r3 = n;
    n *= -4.36366606f;
    r4 = n;
    n += -3.61771107f;
    n *= r2;
    n += r1;
    n *= 1.17848051f;
    n += 9.41998005f;
    n *= r3;
    r3 = n;
    n += r3;
    n *= 0.03714212f;
    r3 = n;
    n += r3;
    r3 = n;
    n *= r0;
    n += r4;
    n *= r3;
    n += 3.82934999f;
    n *= 0.08793661f;
    n += 0.09359682f;
    return n;
} // Solution0

// Solution1 precision = 0.000067
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 7.01180267f;
    n += -7.02233982f;
    n *= 0.43487865f;
    r0 = n;
    n += -11.85392666f;
    r1 = n;
    n *= -0.01508076f;
    n += 0.26794711f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += -0.75338757f;
    n *= -0.48404571f;
    r3 = n;
    n += r2;
    n *= -1.43495524f;
    r2 = n;
    n += 0.75181472f;
    n *= r0;
    n += -2.50554562f;
    r0 = n;
    n *= r3;
    n += -1.19388032f;
    r3 = n;
    n *= -4.93177891f;
    r4 = n;
    n += -4.68980742f;
    n *= r2;
    n += r1;
    n *= 1.19204915f;
    n += 9.26822186f;
    n *= r3;
    r3 = n;
    n += r3;
    n *= 0.02833894f;
    r3 = n;
    n += r3;
    r3 = n;
    n *= r0;
    n += r4;
    n *= r3;
    n += 2.68154693f;
    n *= 0.16055743f;
    n += -0.53364736f;
    return n;
} // Solution1

// Solution2 precision = 0.000077
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 6.78881502f;
    n += -6.36839867f;
    n *= 0.49531654f;
    r0 = n;
    n += -12.53871346f;
    r1 = n;
    n *= -0.02392094f;
    n += 0.27238125f;
    r2 = n;
    n *= r2;
    r2 = n;
    n += -0.60049742f;
    n *= -0.31405297f;
    r3 = n;
    n += r2;
    n *= -1.08452141f;
    r2 = n;
    n += 0.60546541f;
    n *= r0;
    n += -2.44102144f;
    r0 = n;
    n *= r3;
    n += -1.60666060f;
    r3 = n;
    n *= -3.82383728f;
    r4 = n;
    n += -4.07947063f;
    n *= r2;
    n += r1;
    n *= 1.22639036f;
    n += 9.86754608f;
    n *= r3;
    r3 = n;
    n += r3;
    n *= 0.03934307f;
    r3 = n;
    n += r3;
    r3 = n;
    n *= r0;
    n += r4;
    n *= r3;
    n += 1.13955116f;
    n *= 0.12138498f;
    n += 0.45987225f;
    return n;
} // Solution2

