// Run date: 11/30/23 10:16:50 Pacific Standard Time
// Run duration = 5296.066630 seconds
// Run generation = 26
// Run evolution = 8
// Run max result = 0.00000018
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.88075608f;
    r0 = n *= 0.43199521f;
    r1 = n += -1.19532073f;
    n *= 3.80797148f;
    n *= 0.22350650f;
    n = r0 += n;
    n *= 2.76947832f;
    r2 = n *= -0.10264912f;
    r3 = n += 0.67962241f;
    n *= r0;
    r0 = n *= 0.30178919f;
    n += 2.09451175f;
    r4 = n *= 1.97448742f;
    n += 2.30365658f;
    r5 = n *= -0.63918459f;
    n *= r0;
    n *= 0.45138648f;
    r0 = n *= -0.00260860f;
    r6 = n *= 6.79737759f;
    n += r6;
    n += 0.14046718f;
    r6 = n *= 2.65726614f;
    n = r0 += n;
    n *= r0;
    n = r4 += n;
    n *= r4;
    n *= r3;
    n *= r2;
    n += r5;
    n *= r6;
    n *= r1;
    n += 0.00000011f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.21756668f;
    r0 = n *= 2.20169711f;
    r1 = n += 1.48047459f;
    n *= 0.67451715f;
    n *= 0.68261170f;
    n = r0 += n;
    n *= 0.24417597f;
    r2 = n *= -1.64689004f;
    r3 = n += -1.19068956f;
    n *= r0;
    r0 = n *= 1.18332732f;
    n += -0.62335539f;
    r4 = n *= 0.08918866f;
    n += 1.99883401f;
    r5 = n *= -0.60647511f;
    n *= r0;
    n *= -0.00277327f;
    r0 = n *= 14.31033611f;
    r6 = n *= 0.85228848f;
    n += r6;
    n += 1.61879039f;
    r6 = n *= -0.70737725f;
    n = r0 += n;
    n *= r0;
    n = r4 += n;
    n *= r4;
    n *= r3;
    n *= r2;
    n += r5;
    n *= r6;
    n *= r1;
    n += -0.11813156f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 1.58497095f;
    r0 = n *= 0.35901728f;
    r1 = n += -1.48972237f;
    n *= 6.82592726f;
    n *= -0.00077217f;
    n = r0 += n;
    n *= -0.98252147f;
    r2 = n *= -1.24019361f;
    r3 = n += -3.63050246f;
    n *= r0;
    r0 = n *= 0.03436272f;
    n += -0.21456034f;
    r4 = n *= -0.62519622f;
    n += 1.16815186f;
    r5 = n *= 0.37475359f;
    n *= r0;
    n *= -1.60380769f;
    r0 = n *= -1.54511416f;
    r6 = n *= 1.05313981f;
    n += r6;
    n += -0.98009235f;
    r6 = n *= -0.75803995f;
    n = r0 += n;
    n *= r0;
    n = r4 += n;
    n *= r4;
    n *= r3;
    n *= r2;
    n += r5;
    n *= r6;
    n *= r1;
    n += 0.52359831f;
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
