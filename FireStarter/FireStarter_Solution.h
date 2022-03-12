#include <math.h>

// Run date: 03/12/22 14:44:11 Pacific Standard Time
// Run duration = 0.494503 seconds
// Run count = 73
// Run units = 1
// Run population = 17408
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

// Precision = 0.000102

// Solution0 precision = 0.000040
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.24034937f;
    r0 = n += -0.89706373f;
    r1 = n *= -0.35727522f;
    r2 = n += -0.30693537f;
    n *= 2.47582316f;
    n += r1;
    r1 = n *= -0.60466522f;
    r3 = n += -0.62243253f;
    n *= r3;
    r3 = n += -1.56335950f;
    r4 = n *= -0.27742520f;
    r5 = n += -0.58797354f;
    n *= -1.16946959f;
    n += r2;
    n *= r1;
    r1 = n += 0.13879333f;
    n *= 0.54607153f;
    r2 = n += -0.32377550f;
    n *= r2;
    n += -0.71222228f;
    n *= r1;
    n = r0 += n;
    n *= 0.90206027f;
    n += r5;
    n *= -1.62685025f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.62922043f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.08920177f;
    return n;
} // Solution0

// Solution1 precision = 0.000051
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.24795347f;
    r0 = n += -0.88397527f;
    r1 = n *= -0.26487517f;
    r2 = n += -0.20683755f;
    n *= 0.67676842f;
    n += r1;
    r1 = n *= -1.21137857f;
    r3 = n += 0.07779354f;
    n *= r3;
    r3 = n += -0.84380150f;
    r4 = n *= -0.56170702f;
    r5 = n += -0.42400044f;
    n *= -0.99400377f;
    n += r2;
    n *= r1;
    r1 = n += 0.37976211f;
    n *= 0.21847114f;
    r2 = n += 0.01949666f;
    n *= r2;
    n += -1.39180744f;
    n *= r1;
    n = r0 += n;
    n *= -0.81533945f;
    n += r5;
    n *= 1.19867074f;
    n += r4;
    n = r0 *= n;
    r4 = n += 1.44838452f;
    n *= r4;
    n += r0;
    n *= r3;
    n += -0.16503525f;
    return n;
} // Solution1

// Solution2 precision = 0.000102
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.72027719f;
    r0 = n += -0.05078488f;
    r1 = n *= -0.45577416f;
    r2 = n += -0.32576978f;
    n *= 0.43996203f;
    n += r1;
    r1 = n *= -0.29938036f;
    r3 = n += 0.38969633f;
    n *= r3;
    r3 = n += -1.37458301f;
    r4 = n *= 0.22849248f;
    r5 = n += -0.33466309f;
    n *= -0.55591846f;
    n += r2;
    n *= r1;
    r1 = n += 4.40465260f;
    n *= -0.06014019f;
    r2 = n += -0.55904025f;
    n *= r2;
    n += -0.62546134f;
    n *= r1;
    n = r0 += n;
    n *= -0.00528722f;
    n += r5;
    n *= -1.05231416f;
    n += r4;
    n = r0 *= n;
    r4 = n += 0.41681111f;
    n *= r4;
    n += r0;
    n *= r3;
    n += 0.36241478f;
    return n;
} // Solution2
