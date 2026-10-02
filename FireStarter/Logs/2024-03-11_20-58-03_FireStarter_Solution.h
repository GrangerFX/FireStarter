// Run date: 03/11/24 20:58:03 Pacific Daylight Time
// Run duration = 32198.188520 seconds
// Run generation = 193
// Run evolution = 16
// Run max result = 0.00000203
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159250f;
    r1 = n *= -0.13872196f;
    n = r1 *= n;
    r2 = n += -1.82237375f;
    n *= -0.06743158f;
    r3 = n *= -0.59428871f;
    n += r1;
    n = r3 *= n;
    n *= 5.25385141f;
    n += 0.63570887f;
    n *= 1.95192516f;
    r1 = n *= 0.33245993f;
    n = r1 *= n;
    r4 = n *= 2.18007040f;
    r5 = n *= 0.69689393f;
    n += r2;
    n += r1;
    n += -10.27503967f;
    n *= r5;
    r5 = n += 1.59433806f;
    n = r0 *= n;
    n *= r5;
    n = r0 += n;
    r5 = n *= -0.86881548f;
    n += r4;
    n += 2.40250969f;
    n *= r0;
    n += r3;
    n *= 3.61522365f;
    n += -207.09649658f;
    n *= -0.00000000f;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00000203
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065342f;
    r1 = n *= 0.19326514f;
    n = r1 *= n;
    r2 = n += -3.98217440f;
    n *= -1.19911802f;
    r3 = n *= -0.07729483f;
    n += r1;
    n = r3 *= n;
    n *= 1.04858208f;
    n += -1.84660602f;
    n *= 1.25535905f;
    r1 = n *= 0.20792256f;
    n = r1 *= n;
    r4 = n *= -4.05590963f;
    r5 = n *= -0.61445540f;
    n += r2;
    n += r1;
    n += -2.36293435f;
    n *= r5;
    r5 = n += 3.13840175f;
    n = r0 *= n;
    n *= r5;
    n = r0 += n;
    r5 = n *= -2.31578159f;
    n += r4;
    n += 3.74615836f;
    n *= r0;
    n += r3;
    n *= -0.00025203f;
    n += 6.57873106f;
    n *= -0.01795593f;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00000143
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= -0.45276150f;
    n = r1 *= n;
    r2 = n += -1.08572590f;
    n *= -1.96863639f;
    r3 = n *= 0.51992959f;
    n += r1;
    n = r3 *= n;
    n *= -0.10127211f;
    n += -2.01441073f;
    n *= -0.88779938f;
    r1 = n *= -0.25285771f;
    n = r1 *= n;
    r4 = n *= -1.08733773f;
    r5 = n *= 1.66151416f;
    n += r2;
    n += r1;
    n += 1.20917177f;
    n *= r5;
    r5 = n += 0.36422691f;
    n = r0 *= n;
    n *= r5;
    n = r0 += n;
    r5 = n *= -1.84270692f;
    n += r4;
    n += -63.73812485f;
    n *= r0;
    n += r3;
    n *= -0.00000010f;
    n += -4.80676699f;
    n *= -0.10892951f;
    n += r5;
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
