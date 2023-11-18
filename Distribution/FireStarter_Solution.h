// Run date: 11/17/23 10:09:26 Pacific Standard Time
// Run duration = 66672.948265 seconds
// Run generation = 266
// Run evolution = 4
// Run result = 0.00000179
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
// Run tests = 16
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.50768799f;
    n += 0.69035530f;
    r1 = n += -0.09540644f;
    r2 = n *= 0.95100302f;
    r3 = n += 0.95100290f;
    n *= -0.21299256f;
    n += -1.11161101f;
    n += 0.10642666f;
    n += 0.15481600f;
    r4 = n += -0.17210655f;
    n += 2.04495358f;
    n *= -0.14893693f;
    n = r0 *= n;
    n *= -0.61063951f;
    n *= -0.66359705f;
    n *= r2;
    n += r0;
    n = r4 *= n;
    r0 = n += -1.39602029f;
    n = r3 *= n;
    n = r3 *= n;
    r2 = n += -1.27193952f;
    n += -0.02982847f;
    n *= r4;
    r4 = n *= -0.01252246f;
    n *= 9.82762814f;
    n *= r4;
    n += r2;
    n *= r0;
    n = r3 += n;
    n *= r1;
    n += r3;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.95526117f;
    n += 0.50092095f;
    r1 = n += 1.34874594f;
    r2 = n *= 0.20887828f;
    r3 = n += 0.24231112f;
    n *= -0.61061442f;
    n += -2.13420343f;
    n += -0.11231984f;
    n += 1.27601230f;
    r4 = n += -0.53876323f;
    n += 3.03029966f;
    n *= -0.03546999f;
    n = r0 *= n;
    n *= -1.02079189f;
    n *= -1.16017091f;
    n *= r2;
    n += r0;
    n = r4 *= n;
    r0 = n += -1.67200351f;
    n = r3 *= n;
    n = r3 *= n;
    r2 = n += -0.62294197f;
    n += 0.38533270f;
    n *= r4;
    r4 = n *= -0.01659816f;
    n *= 7.94750452f;
    n *= r4;
    n += r2;
    n *= r0;
    n = r3 += n;
    n *= r1;
    n += r3;
    return n;
} // Solution1

// Solution2 result = 0.00000179
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.85440767f;
    n += 0.65888810f;
    r1 = n += -1.65888917f;
    r2 = n *= 0.66528314f;
    r3 = n += -1.47031975f;
    n *= -0.13206859f;
    n += 0.56002814f;
    n += 1.16170692f;
    n += -0.93018824f;
    r4 = n += -0.13448219f;
    n += -1.51106131f;
    n *= -0.19693975f;
    n = r0 *= n;
    n *= -0.20517708f;
    n *= 2.00355673f;
    n *= r2;
    n += r0;
    n = r4 *= n;
    r0 = n += 0.49797574f;
    n = r3 *= n;
    n = r3 *= n;
    r2 = n += -0.11115575f;
    n += -0.16510901f;
    n *= r4;
    r4 = n *= 0.06223610f;
    n *= -9.48646450f;
    n *= r4;
    n += r2;
    n *= r0;
    n = r3 += n;
    n *= r1;
    n += r3;
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
