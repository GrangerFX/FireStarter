#include <math.h>

// Run date: 03/12/22 15:24:18 Pacific Standard Time
// Run duration = 0.235274 seconds
// Run count = 491
// Run units = 1
// Run population = 4352
// Run iterations = 1024
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

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

// Precision = 0.000012

// Solution0 precision = 0.000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.28059515f;
    r0 = n += -0.95450270f;
    r1 = n *= -0.38758373f;
    r2 = n += -0.34210908f;
    n *= 22.34366417f;
    n += r1;
    r1 = n *= -0.05397480f;
    r3 = n += -0.57554370f;
    n *= r3;
    r3 = n += -0.93451840f;
    r4 = n *= -0.42731646f;
    r5 = n += -0.64055622f;
    n *= -1.47511458f;
    n += r2;
    n *= r1;
    r1 = n += 0.15089297f;
    n *= -0.66165590f;
    r2 = n += 0.46522591f;
    n *= r2;
    n += -0.99090528f;
    n *= r1;
    n = r0 += n;
    n *= 0.73708630f;
    n += r5;
    n *= -1.87565196f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.90562445f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.12697093f;
    return n;
} // Solution0

// Solution1 precision = 0.000011
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.32600504f;
    r0 = n += -0.87733239f;
    r1 = n *= -0.01128009f;
    r2 = n += 0.00973782f;
    n *= 4.79685545f;
    n += r1;
    r1 = n *= -7.10706091f;
    r3 = n += 0.48557720f;
    n *= r3;
    r3 = n += -0.82186788f;
    r4 = n *= -0.88960767f;
    r5 = n += -0.62421238f;
    n *= -0.55570614f;
    n += r2;
    n *= r1;
    r1 = n += 0.57649457f;
    n *= 0.35979679f;
    r2 = n += 0.30559996f;
    n *= r2;
    n += -1.68388331f;
    n *= r1;
    n = r0 += n;
    n *= -1.58162987f;
    n += r5;
    n *= 0.32793677f;
    n += r4;
    n = r0 *= n;
    r4 = n += 1.54762435f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.20611933f;
    return n;
} // Solution1

// Solution2 precision = 0.000010
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.83632571f;
    r0 = n += -0.14605074f;
    r1 = n *= -0.47951484f;
    r2 = n += -1.31137967f;
    n *= 1.29788339f;
    n += r1;
    r1 = n *= -0.18633045f;
    r3 = n += -0.29997545f;
    n *= r3;
    r3 = n += -0.69649100f;
    r4 = n *= -0.46942464f;
    r5 = n += 0.91491252f;
    n *= -1.05091155f;
    n += r2;
    n *= r1;
    r1 = n += 0.22185723f;
    n *= -0.17217024f;
    r2 = n += 0.93119836f;
    n *= r2;
    n += -0.97017920f;
    n *= r1;
    n = r0 += n;
    n *= -0.20197834f;
    n += r5;
    n *= 0.52860892f;
    n += r4;
    n = r0 *= n;
    r4 = n += 1.08493662f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.44267875f;
    return n;
} // Solution2
