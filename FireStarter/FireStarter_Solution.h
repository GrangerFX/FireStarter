#include <math.h>

// Run date: 03/04/22 18:53:27 Pacific Standard Time
// Run duration = 0.870138 seconds
// Run count = 1
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

// Precision = 0.017781
// Solution0 precision = 0.000625
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= -0.54147589f;
    r0 = n;
    n *= -0.30370083f;
    n += -0.01908110f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += r2;
    n += -1.59514284f;
    r2 = n;
    n *= 0.60178214f;
    r3 = n;
    n += -0.28287518f;
    r4 = n;
    n += -0.07712004f;
    r5 = n;
    n *= -1.52977145f;
    r6 = n;
    n += r2;
    n += 0.23707351f;
    r2 = n;
    n = fabsf(n);
    n += 0.26097098f;
    r7 = n;
    n += -0.81684107f;
    r8 = n;
    n *= r3;
    n *= 0.98968261f;
    n *= r7;
    n += -1.59685922f;
    r7 = n;
    n *= r7;
    n *= 0.79005939f;
    r7 = n;
    n = fabsf(n);
    n *= 0.66818315f;
    n += r2;
    n += r5;
    n *= 1.47757578f;
    n += r0;
    n *= r6;
    n *= r1;
    n *= r7;
    n += r8;
    return n;
} // Solution0
// Solution1 precision = 0.000382
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.22427815f;
    r0 = n;
    n *= 0.94091851f;
    n += 0.25665978f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += r2;
    n += -1.76435256f;
    r2 = n;
    n *= -0.84142548f;
    r3 = n;
    n += 0.89608049f;
    r4 = n;
    n += 0.23080316f;
    r5 = n;
    n *= 1.21911752f;
    r6 = n;
    n += r2;
    n += 0.63708556f;
    r2 = n;
    n = fabsf(n);
    n += -0.68961620f;
    r7 = n;
    n += -1.27824438f;
    r8 = n;
    n *= r3;
    n *= -1.48933125f;
    n *= r7;
    n += 0.94205534f;
    r7 = n;
    n *= r7;
    n *= 0.29364768f;
    r7 = n;
    n = fabsf(n);
    n *= 2.51600075f;
    n += r2;
    n += r5;
    n *= 1.30142510f;
    n += r0;
    n *= r6;
    n *= r1;
    n *= r7;
    n += r8;
    return n;
} // Solution1
// Solution2 precision = 0.017781
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.15416843f;
    r0 = n;
    n *= 0.49737573f;
    n += -0.84184712f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += r2;
    n += -0.75311559f;
    r2 = n;
    n *= -1.04208958f;
    r3 = n;
    n += 0.53867620f;
    r4 = n;
    n += -0.59092498f;
    r5 = n;
    n *= 0.75739765f;
    r6 = n;
    n += r2;
    n += -0.47291923f;
    r2 = n;
    n = fabsf(n);
    n += -0.57418674f;
    r7 = n;
    n += 1.02004004f;
    r8 = n;
    n *= r3;
    n *= -1.80447292f;
    n *= r7;
    n += 1.90507531f;
    r7 = n;
    n *= r7;
    n *= 2.13711238f;
    r7 = n;
    n = fabsf(n);
    n *= -1.34869254f;
    n += r2;
    n += r5;
    n *= -0.07323822f;
    n += r0;
    n *= r6;
    n *= r1;
    n *= r7;
    n += r8;
    return n;
} // Solution2
// Solution3 precision = 0.000000
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.30894360f;
    r0 = n;
    n *= 0.00914494f;
    n += -0.48972538f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += r2;
    n += -0.86453843f;
    r2 = n;
    n *= -0.71817684f;
    r3 = n;
    n += 0.75133985f;
    r4 = n;
    n += -0.41199273f;
    r5 = n;
    n *= -0.84067339f;
    r6 = n;
    n += r2;
    n += -1.46980739f;
    r2 = n;
    n = fabsf(n);
    n += -0.69222873f;
    r7 = n;
    n += -0.87856770f;
    r8 = n;
    n *= r3;
    n *= 0.99453002f;
    n *= r7;
    n += 0.21184400f;
    r7 = n;
    n *= r7;
    n *= 0.00000000f;
    r7 = n;
    n = fabsf(n);
    n *= 0.10133173f;
    n += r2;
    n += r5;
    n *= -0.82903314f;
    n += r0;
    n *= r6;
    n *= r1;
    n *= r7;
    n += r8;
    return n;
} // Solution3
