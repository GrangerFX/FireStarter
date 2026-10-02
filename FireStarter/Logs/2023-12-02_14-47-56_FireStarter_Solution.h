// Run date: 12/02/23 14:47:56 Pacific Standard Time
// Run duration = 35183.739080 seconds
// Run generation = 23
// Run evolution = 11
// Run max result = 0.00000012
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
// Run tests = 16
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.63358855f;
    r1 = n *= 0.19425881f;
    n *= 0.64739215f;
    n += 2.24080276f;
    n = r0 += n;
    n *= -1.18628037f;
    r2 = n *= 0.31251314f;
    n = r2 *= n;
    n += -0.60026777f;
    n += 0.38463521f;
    r3 = n *= 1.80442727f;
    n *= -5.21426821f;
    r4 = n *= -0.00052092f;
    r5 = n += -0.08970269f;
    r6 = n += -0.45656323f;
    n = r2 += n;
    n += -1.65645802f;
    r7 = n *= -1.48843503f;
    n *= -2.80948949f;
    n *= r6;
    n = r3 += n;
    n *= 0.12024701f;
    n = r3 *= n;
    n *= r3;
    n *= r7;
    n += r4;
    n += 2.48359513f;
    n *= r2;
    n *= r0;
    n *= r5;
    n += 0.38666776f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.12028886f;
    r1 = n *= 3.77930903f;
    n *= -0.79724956f;
    n += -0.74839610f;
    n = r0 += n;
    n *= -1.72648990f;
    r2 = n *= 0.44099337f;
    n = r2 *= n;
    n += 0.94606334f;
    n += -0.99932981f;
    r3 = n *= -0.00075256f;
    n *= -5.92007923f;
    r4 = n *= 3.15106773f;
    r5 = n += -0.42285946f;
    r6 = n += 0.17920583f;
    n = r2 += n;
    n += -4.22970772f;
    r7 = n *= 1.64084697f;
    n *= -1.01867926f;
    n *= r6;
    n = r3 += n;
    n *= 0.55943960f;
    n = r3 *= n;
    n *= r3;
    n *= r7;
    n += r4;
    n += -0.10391597f;
    n *= r2;
    n *= r0;
    n *= r5;
    n += 1.28690875f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.41637474f;
    r1 = n *= 0.49885103f;
    n *= 0.41921717f;
    n += 1.31802869f;
    n = r0 += n;
    n *= -1.88904059f;
    r2 = n *= 0.65366215f;
    n = r2 *= n;
    n += -3.04548717f;
    n += -0.61046439f;
    r3 = n *= 1.44009411f;
    n *= -7.00227356f;
    r4 = n *= 0.00006329f;
    r5 = n += -0.33486125f;
    r6 = n += -1.04218400f;
    n = r2 += n;
    n += -1.34640598f;
    r7 = n *= -0.26628226f;
    n *= -3.83756495f;
    n *= r6;
    n = r3 += n;
    n *= -0.70733958f;
    n = r3 *= n;
    n *= r3;
    n *= r7;
    n += r4;
    n += 1.87135386f;
    n *= r2;
    n *= r0;
    n *= r5;
    n += 1.06737947f;
    n += r1;
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
