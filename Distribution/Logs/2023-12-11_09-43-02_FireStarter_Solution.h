// Run date: 12/11/23 09:43:02 Pacific Standard Time
// Run duration = 2693.564502 seconds
// Run generation = 53
// Run evolution = 10
// Run max result = 0.00000030
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

// Solution0 result = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.50965077f;
    r0 = n += 1.60111511f;
    r1 = n *= -0.67756480f;
    r2 = n *= 1.50541127f;
    n = r0 += n;
    r3 = n *= -0.00005375f;
    n *= 0.18689759f;
    r4 = n *= 0.00465374f;
    n += r2;
    n += r3;
    r3 = n *= 0.25914878f;
    n += r4;
    n = r0 *= n;
    n += -0.55400878f;
    r4 = n *= 1.31220496f;
    n = r1 *= n;
    n *= r1;
    r1 = n += -0.54342276f;
    r2 = n += -1.70845938f;
    n = r4 *= n;
    n *= r2;
    r2 = n *= 1.80403543f;
    n *= r0;
    n *= -1.00702024f;
    n *= r4;
    n += -0.22917421f;
    n += r2;
    n *= -1.89462388f;
    n *= r1;
    n += -0.33970326f;
    n *= r3;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.54056597f;
    r0 = n += 1.67070484f;
    r1 = n *= -0.82185954f;
    r2 = n *= 1.21865308f;
    n = r0 += n;
    r3 = n *= 0.00003295f;
    n *= -0.64887726f;
    r4 = n *= 10.57195854f;
    n += r2;
    n += r3;
    r3 = n *= 1.43506896f;
    n += r4;
    n = r0 *= n;
    n += -0.33705518f;
    r4 = n *= -1.82161617f;
    n = r1 *= n;
    n *= r1;
    r1 = n += -1.21465826f;
    r2 = n += -1.78665626f;
    n = r4 *= n;
    n *= r2;
    r2 = n *= -1.46316719f;
    n *= r0;
    n *= 1.48854876f;
    n *= r4;
    n += 0.33137798f;
    n += r2;
    n *= -0.14195275f;
    n *= r1;
    n += -0.07759513f;
    n *= r3;
    n += -0.11813179f;
    return n;
} // Solution1

// Solution2 result = 0.00000010
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.61922938f;
    r0 = n += 1.62113857f;
    r1 = n *= 1.09869266f;
    r2 = n *= -0.92050105f;
    n = r0 += n;
    r3 = n *= 0.01942499f;
    n *= -2.17572331f;
    r4 = n *= -0.00213047f;
    n += r2;
    n += r3;
    r3 = n *= 1.45427394f;
    n += r4;
    n = r0 *= n;
    n += -1.33875084f;
    r4 = n *= 0.43053102f;
    n = r1 *= n;
    n *= r1;
    r1 = n += -3.77090836f;
    r2 = n += 1.11468554f;
    n = r4 *= n;
    n *= r2;
    r2 = n *= -0.67516541f;
    n *= r0;
    n *= -0.05754329f;
    n *= r4;
    n += -1.30829978f;
    n += r2;
    n *= 0.21433131f;
    n *= r1;
    n += 0.06393283f;
    n *= r3;
    n += 0.52359879f;
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
