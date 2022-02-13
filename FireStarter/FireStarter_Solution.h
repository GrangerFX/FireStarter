#include <math.h>

// Run date: 02/13/22 10:55:51 Pacific Standard Time
// Run duration = 8.152679 seconds
// Run count = 1
// Run units = 1
// Run population = 4352
// Run iterations = 512
// Run generations = 50
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

// Solution0 precision = 0.000688
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.42141467f;
    r0 = n;
    n += 0.83048642f;
    n += -0.31988326f;
    r1 = n;
    n *= 1.59454322f;
    n *= -0.79632950f;
    r2 = n;
    n += -0.85929835f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -1.03493762f;
    r2 = n;
    n *= 2.67577934f;
    n += r0;
    r0 = n;
    n *= 0.28363624f;
    n *= 0.02788550f;
    r4 = n;
    n += -0.16962343f;
    n *= r2;
    n += 0.08267583f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.26605889f;
    r4 = n;
    n *= 2.32666206f;
    r2 = n;
    n *= -0.71382838f;
    n += -0.34919679f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.91332364f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 0.64944023f;
    n += r5;
    n += r3;
    n += 0.01389474f;
    return n;
} // Solution0

// Solution1 precision = 0.001989
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.19847310f;
    r0 = n;
    n += 0.97129577f;
    n += -0.60567981f;
    r1 = n;
    n *= 1.59897161f;
    n *= 1.34790564f;
    r2 = n;
    n += 0.89499116f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -1.39084935f;
    r2 = n;
    n *= 0.65043974f;
    n += r0;
    r0 = n;
    n *= 0.29334989f;
    n *= 0.37059167f;
    r4 = n;
    n += -0.43883964f;
    n *= r2;
    n += 1.24633443f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.88127303f;
    r4 = n;
    n *= 0.00002584f;
    r2 = n;
    n *= -0.90840352f;
    n += 0.26107553f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 2.59218144f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= -0.08788028f;
    n += r5;
    n += r3;
    n += -1.14715743f;
    return n;
} // Solution1

// Solution2 precision = 0.007409
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.64785719f;
    r0 = n;
    n += -1.08658278f;
    n += -1.16027963f;
    r1 = n;
    n *= 0.96596563f;
    n *= -0.78473639f;
    r2 = n;
    n += 0.00772898f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += 0.42694917f;
    r2 = n;
    n *= 1.65989089f;
    n += r0;
    r0 = n;
    n *= -0.00168131f;
    n *= -1.99519312f;
    r4 = n;
    n += 0.76228184f;
    n *= r2;
    n += 1.41396189f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.06227166f;
    r4 = n;
    n *= -1.17322588f;
    r2 = n;
    n *= 0.31268153f;
    n += -0.04162915f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= -0.15897706f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 0.55730700f;
    n += r5;
    n += r3;
    n += -0.14397483f;
    return n;
} // Solution2

// Solution3 precision = 0.112313
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.35979837f;
    r0 = n;
    n += -0.05470751f;
    n += 1.13693619f;
    r1 = n;
    n *= 1.03669596f;
    n *= 1.14778447f;
    r2 = n;
    n += 0.24810614f;
    r3 = n;
    n += r1;
    r1 = n;
    n *= r2;
    n += -1.94207168f;
    r2 = n;
    n *= 0.54447562f;
    n += r0;
    r0 = n;
    n *= -0.53113574f;
    n *= -1.50343335f;
    r4 = n;
    n += -1.19317114f;
    n *= r2;
    n += -0.69250774f;
    n *= r3;
    r3 = n;
    n += fabsf(r4);
    n += -0.52528566f;
    r4 = n;
    n *= 0.82729572f;
    r2 = n;
    n *= -0.42636245f;
    n += 0.04735982f;
    r5 = n;
    n += r2;
    n *= r0;
    n *= 0.12375418f;
    r0 = n;
    n += r0;
    n *= r4;
    n += r1;
    n *= 0.42260817f;
    n += r5;
    n += r3;
    n += 0.28864902f;
    return n;
} // Solution3

