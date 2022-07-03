// Run date: 07/03/22 02:29:32 Pacific Daylight Time
// Run duration = 1.365232 seconds
// Run count = 9966
// Run mode = 3
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 0

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

// Precision = 0.000058

// Solution0 precision = 0.000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -1.05021000f;
    n *= 0.76510549f;
    r0 = n *= -0.47984147f;
    n += -0.35343623f;
    r1 = n *= 0.37029314f;
    n += 0.76625496f;
    n *= r1;
    r1 = n += -0.82841194f;
    r2 = n += -0.35260832f;
    n += -0.59053838f;
    r3 = n *= -0.92585975f;
    n += -0.81819320f;
    n *= 0.56676745f;
    n += r0;
    n *= 0.81492853f;
    n *= r3;
    n += 0.42489007f;
    r3 = n *= -0.40751117f;
    n *= r2;
    r2 = n *= 1.69146144f;
    r0 = n *= -1.72654772f;
    n *= r3;
    r3 = n += -0.81086785f;
    n += -0.46681225f;
    n += 0.30043173f;
    n += r3;
    n = r1 += n;
    n *= -0.03904139f;
    n += r2;
    n += r0;
    n *= r1;
    n += 0.11472179f;
    return n;
} // Solution0

// Solution1 precision = 0.000058
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -0.86046124f;
    n *= -2.57218623f;
    r0 = n *= -0.32786849f;
    n += -0.35898516f;
    r1 = n *= -0.14825934f;
    n += 0.65709716f;
    n *= r1;
    r1 = n += -1.24219465f;
    r2 = n += -0.53112775f;
    n += 0.48180175f;
    r3 = n *= -0.56477565f;
    n += 0.17743598f;
    n *= 0.00433100f;
    n += r0;
    n *= 0.81197900f;
    n *= r3;
    n += -1.19777477f;
    r3 = n *= -0.77977931f;
    n *= r2;
    r2 = n *= 0.82360280f;
    r0 = n *= -0.58125496f;
    n *= r3;
    r3 = n += 0.29835242f;
    n += -2.32105803f;
    n += -0.84136462f;
    n += r3;
    n = r1 += n;
    n *= -0.00497535f;
    n += r2;
    n += r0;
    n *= r1;
    n += -0.03679343f;
    return n;
} // Solution1

// Solution2 precision = 0.000040
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += 0.68026966f;
    n *= -0.30754298f;
    r0 = n *= -0.73346239f;
    n += -1.02097619f;
    r1 = n *= -0.71330637f;
    n += -0.75744110f;
    n *= r1;
    r1 = n += -0.48844832f;
    r2 = n += -0.94339263f;
    n += -0.33928028f;
    r3 = n *= 0.52812898f;
    n += -0.96345389f;
    n *= 0.74599522f;
    n += r0;
    n *= 0.62066436f;
    n *= r3;
    n += -0.39409319f;
    r3 = n *= -2.84717965f;
    n *= r2;
    r2 = n *= -0.89532614f;
    r0 = n *= 0.38164473f;
    n *= r3;
    r3 = n += 0.78943694f;
    n += -1.74951589f;
    n += -0.31250334f;
    n += r3;
    n = r1 += n;
    n *= -0.27514538f;
    n += r2;
    n += r0;
    n *= r1;
    n += 0.55947793f;
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
