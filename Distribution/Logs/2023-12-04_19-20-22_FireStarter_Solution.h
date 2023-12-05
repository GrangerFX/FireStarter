// Run date: 12/04/23 19:20:22 Pacific Standard Time
// Run duration = 3512.949841 seconds
// Run generation = 28
// Run evolution = 6
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

// Solution0 result = 0.00000004
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.28284770f;
    n *= 1.66466367f;
    r0 = n += -1.47920728f;
    r1 = n *= -0.55676997f;
    n *= r0;
    r0 = n += 1.21824288f;
    r2 = n *= 0.56967723f;
    r3 = n += 2.51158309f;
    n += -2.46200609f;
    n *= 0.87863320f;
    n += 4.08997297f;
    n += 3.94782043f;
    n += -1.13525093f;
    n *= -0.00321074f;
    r4 = n *= -1.47808266f;
    n = r2 *= n;
    n *= -1.64056575f;
    n += -0.38407412f;
    n += r4;
    n = r3 *= n;
    n *= r0;
    r0 = n *= 1.49515200f;
    n *= 8.47951126f;
    r4 = n *= -0.00001004f;
    n += r2;
    n *= r4;
    n += r3;
    n *= r1;
    n *= r0;
    n += 0.00024238f;
    n *= 1.34653461f;
    n += -0.00032640f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -1.59231758f;
    n *= 0.37113491f;
    r0 = n += 1.82647002f;
    r1 = n *= -0.03108558f;
    n *= r0;
    r0 = n += 0.45763659f;
    r2 = n *= 2.95239902f;
    r3 = n += -0.52207488f;
    n += -29.17198181f;
    n *= -0.00000011f;
    n += -1.60211813f;
    n += -2.88335586f;
    n += -0.57880157f;
    n *= -1.38106251f;
    r4 = n *= 0.58735663f;
    n = r2 *= n;
    n *= -1.38394201f;
    n += 72.24892426f;
    n += r4;
    n = r3 *= n;
    n *= r0;
    r0 = n *= -0.02013962f;
    n *= 0.97952670f;
    r4 = n *= -4.69186258f;
    n += r2;
    n *= r4;
    n += r3;
    n *= r1;
    n *= r0;
    n += -0.07595584f;
    n *= 1.49871778f;
    n += -0.00429552f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -1.15775645f;
    n *= 0.60065210f;
    r0 = n += 1.82057595f;
    r1 = n *= 0.30385503f;
    n *= r0;
    r0 = n += -0.73224992f;
    r2 = n *= -0.06703322f;
    r3 = n += 0.40631372f;
    n += 0.00648008f;
    n *= 3.18553925f;
    n += 0.94134694f;
    n += -1.88444245f;
    n += 1.93050861f;
    n *= -1.53814101f;
    r4 = n *= -0.92815179f;
    n = r2 *= n;
    n *= 1.45839179f;
    n += 0.75808781f;
    n += r4;
    n = r3 *= n;
    n *= r0;
    r0 = n *= -1.18644512f;
    n *= -0.00419870f;
    r4 = n *= -1.82413280f;
    n += r2;
    n *= r4;
    n += r3;
    n *= r1;
    n *= r0;
    n += 0.24348894f;
    n *= 1.28433180f;
    n += 0.21087819f;
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
