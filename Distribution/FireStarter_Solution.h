// Run date: 09/10/23 13:43:31 Pacific Daylight Time
// Run duration = 897.046817 seconds
// Run generation = 18
// Run evolution = 12
// Run result = 0.00000346
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000092
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.40760690f;
    r1 = n += -0.19495335f;
    n *= 1.76675177f;
    n += -0.46502736f;
    n *= -0.80157286f;
    r2 = n += 1.16462529f;
    n *= 1.27903223f;
    n *= -0.38049573f;
    n += -0.74819118f;
    n = r1 *= n;
    r3 = n *= -0.05147567f;
    r4 = n *= -1.71741724f;
    r5 = n *= 1.90145779f;
    n += 0.28305474f;
    n += -1.91638625f;
    n = r5 += n;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    n += r0;
    r0 = n += -1.28053653f;
    n *= 0.00436718f;
    n *= 0.00015820f;
    n += -3.70290017f;
    n += -2.40475297f;
    n *= r4;
    n += 3.02900028f;
    n *= r5;
    n *= r3;
    n += r0;
    n *= -0.74592787f;
    n *= 0.56838697f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.36779135f;
    r1 = n += -2.03023624f;
    n *= 1.10207736f;
    n += -0.82733816f;
    n *= -1.28894544f;
    r2 = n += -2.33565259f;
    n *= -0.12896247f;
    n *= 2.57958364f;
    n += 0.42224410f;
    n = r1 *= n;
    r3 = n *= -0.13789694f;
    r4 = n *= 1.07216609f;
    r5 = n *= -1.04130065f;
    n += -0.61619210f;
    n += -0.60424483f;
    n = r5 += n;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    n += r0;
    r0 = n += -1.05566382f;
    n *= 2.86480474f;
    n *= 0.00000790f;
    n += 1.76286137f;
    n += 1.16462171f;
    n *= r4;
    n += 1.73625898f;
    n *= r5;
    n *= r3;
    n += r0;
    n *= 0.86126882f;
    n *= -1.69221938f;
    return n;
} // Solution1

// Solution2 result = 0.00000346
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.26990485f;
    r1 = n += -1.46905982f;
    n *= -1.63839126f;
    n += -0.98487681f;
    n *= 2.16043139f;
    r2 = n += -0.57103276f;
    n *= -0.87474132f;
    n *= -0.62285459f;
    n += -1.47040761f;
    n = r1 *= n;
    r3 = n *= -0.10761892f;
    r4 = n *= -0.54637551f;
    r5 = n *= 2.20129609f;
    n += 1.76280022f;
    n += -1.07540560f;
    n = r5 += n;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    n += r0;
    r0 = n += -0.21418722f;
    n *= -0.72183222f;
    n *= -0.00021046f;
    n += -2.82257938f;
    n += -2.78217149f;
    n *= r4;
    n += -1.14219975f;
    n *= r5;
    n *= r3;
    n += r0;
    n *= 0.76793700f;
    n *= 1.38462412f;
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
