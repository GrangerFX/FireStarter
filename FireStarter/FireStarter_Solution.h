#include <math.h>

// Run date: 02/27/22 19:32:41 Pacific Standard Time
// Run duration = 0.464433 seconds
// Run count = 117
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

// Precision = 0.104708
// Solution0 precision = 0.000296
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 2.54453802f;
    r0 = n;
    n += -4.58369017f;
    n += 1.26757252f;
    n += -4.67795563f;
    n *= 31.76248360f;
    r1 = n;
    n += r0;
    n += -7.98326969f;
    n *= -0.04301165f;
    r0 = n;
    n *= -0.00037406f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= 0.10067760f;
    n += -0.01981127f;
    n += 0.02458976f;
    n *= -0.06869946f;
    r3 = n;
    n *= 17.29354668f;
    r4 = n;
    n += 0.64218277f;
    r5 = n;
    n += -0.66677427f;
    r6 = n;
    n *= 83.28641510f;
    n += -1.46497715f;
    n += r4;
    r4 = n;
    n *= r6;
    r6 = n;
    n *= 149.79277039f;
    n += 7.27290821f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= 0.02190321f;
    n *= -140.65672302f;
    n += r0;
    n *= r3;
    n *= r6;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.009083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 1.63445437f;
    r0 = n;
    n += -4.69014072f;
    n += 2.89231324f;
    n += -3.09150410f;
    n *= 32.22595978f;
    r1 = n;
    n += r0;
    n += -14.79663467f;
    n *= -0.08613716f;
    r0 = n;
    n *= -0.00054795f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= 0.02167804f;
    n += -0.03725751f;
    n += 0.02465072f;
    n *= -0.24441078f;
    r3 = n;
    n *= 12.93409824f;
    r4 = n;
    n += 0.64121664f;
    r5 = n;
    n += -0.70105493f;
    r6 = n;
    n *= 84.69233704f;
    n += -0.95696640f;
    n += r4;
    r4 = n;
    n *= r6;
    r6 = n;
    n *= 143.07843018f;
    n += 6.69876528f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= -0.02413904f;
    n *= -145.72283936f;
    n += r0;
    n *= r3;
    n *= r6;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.038565
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 1.37221420f;
    r0 = n;
    n += -6.11654520f;
    n += 3.06284928f;
    n += -2.97248292f;
    n *= 24.88061714f;
    r1 = n;
    n += r0;
    n += -48.30232620f;
    n *= -0.26213607f;
    r0 = n;
    n *= -0.00037845f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= 0.02542710f;
    n += -0.01968887f;
    n += 0.02449479f;
    n *= -0.04904165f;
    r3 = n;
    n *= 15.11158657f;
    r4 = n;
    n += 0.64445841f;
    r5 = n;
    n += -0.66035444f;
    r6 = n;
    n *= 80.26038361f;
    n += -1.86660886f;
    n += r4;
    r4 = n;
    n *= r6;
    r6 = n;
    n *= 136.64256287f;
    n += 8.07979870f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= -0.31245267f;
    n *= -132.03691101f;
    n += r0;
    n *= r3;
    n *= r6;
    n *= r4;
    return n;
} // Solution2

// Solution3 precision = 0.104708
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 2.36485696f;
    r0 = n;
    n += -5.62456322f;
    n += 2.01256251f;
    n += -3.81761909f;
    n *= 40.54301453f;
    r1 = n;
    n += r0;
    n += -7.40045023f;
    n *= -0.15218018f;
    r0 = n;
    n *= -0.00037660f;
    r2 = n;
    n *= r0;
    r0 = n;
    n *= 0.02585135f;
    n += -0.02794226f;
    n += 0.02463566f;
    n *= -0.14141285f;
    r3 = n;
    n *= 13.60071182f;
    r4 = n;
    n += 0.64503014f;
    r5 = n;
    n += -0.70196337f;
    r6 = n;
    n *= 86.24538422f;
    n += -0.42953804f;
    n += r4;
    r4 = n;
    n *= r6;
    r6 = n;
    n *= 149.28300476f;
    n += 6.86380434f;
    n = fabsf(n);
    n += r2;
    n *= r1;
    n *= -0.00305819f;
    n *= -141.36636353f;
    n += r0;
    n *= r3;
    n *= r6;
    n *= r4;
    return n;
} // Solution3

