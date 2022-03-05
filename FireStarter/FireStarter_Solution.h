#include <math.h>

// Run date: 03/05/22 13:58:50 Pacific Standard Time
// Run duration = 0.371446 seconds
// Run count = 144
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

// Precision = 0.003153
// Solution0 precision = 0.002581
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.84958941f;
    r0 = n;
    n *= -0.11894012f;
    n += 0.63426745f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -1.93871891f;
    n += 0.52198225f;
    r2 = n;
    n *= -1.12241125f;
    r3 = n;
    n += 0.71164989f;
    n += 1.03702581f;
    r4 = n;
    n *= 0.89977455f;
    r5 = n;
    n += r2;
    n += 0.66827011f;
    r2 = n;
    n = fabsf(n);
    n += -0.83751690f;
    r6 = n;
    n += -1.37388158f;
    r7 = n;
    n *= r3;
    n *= -3.94849610f;
    n *= r6;
    n += 0.97594774f;
    r6 = n;
    n *= r6;
    n *= 1.27129424f;
    r6 = n;
    n = fabsf(n);
    n *= 0.60609961f;
    n += r2;
    n += r4;
    n *= -0.12401745f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution0
// Solution1 precision = 0.000135
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 1.36362720f;
    r0 = n;
    n *= 0.24775057f;
    n += 0.43312991f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -0.20062098f;
    n += -4.21456003f;
    r2 = n;
    n *= 0.99780959f;
    r3 = n;
    n += -1.33240652f;
    n += 0.22628456f;
    r4 = n;
    n *= -1.00932145f;
    r5 = n;
    n += r2;
    n += 1.05824125f;
    r2 = n;
    n = fabsf(n);
    n += -1.48839808f;
    r6 = n;
    n += -0.68798780f;
    r7 = n;
    n *= r3;
    n *= -1.96876049f;
    n *= r6;
    n += -0.87949473f;
    r6 = n;
    n *= r6;
    n *= 0.15153123f;
    r6 = n;
    n = fabsf(n);
    n *= -6.98310232f;
    n += r2;
    n += r4;
    n *= -1.20914292f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution1
// Solution2 precision = 0.003153
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.12861715f;
    r0 = n;
    n *= -0.26062337f;
    n += -0.04368832f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -0.43879613f;
    n += -0.17443235f;
    r2 = n;
    n *= -0.39806435f;
    r3 = n;
    n += 0.37591603f;
    n += -0.55262905f;
    r4 = n;
    n *= 7.63999939f;
    r5 = n;
    n += r2;
    n += -1.60140276f;
    r2 = n;
    n = fabsf(n);
    n += 3.15028906f;
    r6 = n;
    n += -3.93427491f;
    r7 = n;
    n *= r3;
    n *= -0.37160307f;
    n *= r6;
    n += -0.08175670f;
    r6 = n;
    n *= r6;
    n *= -205.25216675f;
    r6 = n;
    n = fabsf(n);
    n *= 4.18491268f;
    n += r2;
    n += r4;
    n *= -0.00532298f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution2
// Solution3 precision = 0.000000
inline float Solution3(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.50091183f;
    r0 = n;
    n *= 0.12914377f;
    n += -0.88844472f;
    r1 = n;
    n += r0;
    r0 = n;
    n = fabsf(n);
    n += -0.96010250f;
    n += 0.30778763f;
    r2 = n;
    n *= 0.94012433f;
    r3 = n;
    n += -0.00109366f;
    n += -0.07443994f;
    r4 = n;
    n *= 0.81694436f;
    r5 = n;
    n += r2;
    n += -1.92657423f;
    r2 = n;
    n = fabsf(n);
    n += -1.14999044f;
    r6 = n;
    n += -0.42080605f;
    r7 = n;
    n *= r3;
    n *= -13.41184425f;
    n *= r6;
    n += 14.21977425f;
    r6 = n;
    n *= r6;
    n *= -0.00000000f;
    r6 = n;
    n = fabsf(n);
    n *= -12.36868954f;
    n += r2;
    n += r4;
    n *= 17.70174026f;
    n += r0;
    n *= r5;
    n *= r1;
    n *= r6;
    n += r7;
    return n;
} // Solution3
