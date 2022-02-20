#include <math.h>

// Run date: 02/20/22 12:07:11 Pacific Standard Time
// Run duration = 4.148425 seconds
// Run count = 2
// Run units = 1
// Run population = 4352
// Run iterations = 256
// Run generations = 10
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

// Precision = 0.236558
// Solution0 precision = 0.236558
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 0.70768440f;
    n += 0.48732656f;
    r0 = n;
    n += 0.45371187f;
    n += fabsf(-0.00385418f);
    n *= 0.28350818f;
    n += -0.11627807f;
    r1 = n;
    n += 0.63449210f;
    n *= -0.11201410f;
    n *= -0.62116784f;
    r2 = n;
    n *= r0;
    r0 = n;
    n += r1;
    r1 = n;
    n += -0.53034437f;
    n += fabsf(-0.66335934f);
    r3 = n;
    n *= r2;
    n += fabsf(0.32782206f);
    n += r1;
    n += 0.17281020f;
    n *= r0;
    n += -0.26454461f;
    r0 = n;
    n += 0.25360584f;
    n += r0;
    r0 = n;
    n += -0.16493475f;
    n *= -0.56356955f;
    r1 = n;
    n *= r1;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += -0.20501573f;
    r0 = n;
    n += 0.28974009f;
    n *= r3;
    n += -0.56813771f;
    n += r1;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.177590
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= 1.10225725f;
    n += 0.55481708f;
    r0 = n;
    n += -0.52621764f;
    n += fabsf(0.64232165f);
    n *= 0.42532611f;
    n += 0.72978050f;
    r1 = n;
    n += 0.27563521f;
    n *= 0.17939089f;
    n *= -0.46949640f;
    r2 = n;
    n *= r0;
    r0 = n;
    n += r1;
    r1 = n;
    n += -0.28458807f;
    n += fabsf(0.90588462f);
    r3 = n;
    n *= r2;
    n += fabsf(-0.06166513f);
    n += r1;
    n += -0.37540132f;
    n *= r0;
    n += 0.07449973f;
    r0 = n;
    n += -0.42081439f;
    n += r0;
    r0 = n;
    n += -0.29314974f;
    n *= -0.22217289f;
    r1 = n;
    n *= r1;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += -0.33984873f;
    r0 = n;
    n += 0.11113986f;
    n *= r3;
    n += -0.85070366f;
    n += r1;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.120410
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= -0.84180421f;
    n += -0.75097823f;
    r0 = n;
    n += 1.00731635f;
    n += fabsf(0.46927682f);
    n *= 0.32773262f;
    n += -0.48852700f;
    r1 = n;
    n += 0.16966712f;
    n *= 0.16029879f;
    n *= 0.15047835f;
    r2 = n;
    n *= r0;
    r0 = n;
    n += r1;
    r1 = n;
    n += 0.32877201f;
    n += fabsf(-0.56178033f);
    r3 = n;
    n *= r2;
    n += fabsf(-0.76591057f);
    n += r1;
    n += -0.47527188f;
    n *= r0;
    n += 0.01425626f;
    r0 = n;
    n += 0.85702133f;
    n += r0;
    r0 = n;
    n += -0.75475514f;
    n *= 0.04726658f;
    r1 = n;
    n *= r1;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 0.63556159f;
    r0 = n;
    n += 0.19470008f;
    n *= r3;
    n += -0.49000016f;
    n += r1;
    n += r0;
    return n;
} // Solution2

// Solution3 precision = 0.207349
inline float Solution3(float n)
{
    float r0, r1, r2, r3;

    n *= -0.67710555f;
    n += 0.83345729f;
    r0 = n;
    n += 0.49440396f;
    n += fabsf(0.67654860f);
    n *= -0.26504055f;
    n += 0.53559381f;
    r1 = n;
    n += 0.38578561f;
    n *= 0.52694249f;
    n *= 0.31523207f;
    r2 = n;
    n *= r0;
    r0 = n;
    n += r1;
    r1 = n;
    n += -0.88406289f;
    n += fabsf(0.53066641f);
    r3 = n;
    n *= r2;
    n += fabsf(-0.44263026f);
    n += r1;
    n += -0.61769712f;
    n *= r0;
    n += 0.15395303f;
    r0 = n;
    n += 0.22501211f;
    n += r0;
    r0 = n;
    n += 0.60227031f;
    n *= -0.32758743f;
    r1 = n;
    n *= r1;
    r1 = n;
    n += r0;
    r0 = n;
    n += r0;
    n += 0.64985335f;
    r0 = n;
    n += -0.26905984f;
    n *= r3;
    n += 0.44538575f;
    n += r1;
    n += r0;
    return n;
} // Solution3

