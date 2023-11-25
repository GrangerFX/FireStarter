// Run date: 11/24/23 21:11:12 Pacific Standard Time
// Run duration = 38816.389081 seconds
// Run generation = 63
// Run evolution = 12
// Run result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.29278049f;
    r1 = n += -0.03975009f;
    r2 = n += -0.88004696f;
    n *= -1.08719647f;
    n *= r0;
    n = r1 += n;
    r0 = n *= -0.00279792f;
    r3 = n += -0.01916074f;
    n *= r3;
    n *= 6.06199121f;
    r3 = n *= -5.12885523f;
    n = r3 *= n;
    n = r3 += n;
    n *= 7.40928316f;
    n += -7.39307117f;
    n *= r3;
    n += -0.03394180f;
    n *= 1.00720596f;
    n = r0 += n;
    n *= 2.98249388f;
    n += r1;
    r1 = n += 0.14703164f;
    n *= r0;
    r0 = n += -0.08716810f;
    n *= r2;
    n *= -0.71008426f;
    n *= r0;
    n *= r1;
    n *= -0.05190883f;
    n *= -59852.88281250f;
    n *= 0.11207339f;
    n += -0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.19741924f;
    r1 = n += -0.06476600f;
    r2 = n += -0.54539204f;
    n *= -1.63894320f;
    n *= r0;
    n = r1 += n;
    r0 = n *= 0.25278863f;
    r3 = n += 0.44300663f;
    n *= r3;
    n *= 0.15299197f;
    r3 = n *= 0.22096761f;
    n = r3 *= n;
    n = r3 += n;
    n *= 4.18851757f;
    n += -2.22038007f;
    n *= r3;
    n += -0.16231072f;
    n *= -1.16062391f;
    n = r0 += n;
    n *= -4.31538534f;
    n += r1;
    r1 = n += 0.27302310f;
    n *= r0;
    r0 = n += -0.03832750f;
    n *= r2;
    n *= 0.98207259f;
    n *= r0;
    n *= r1;
    n *= -14342.73144531f;
    n *= -0.08658486f;
    n *= 0.14330499f;
    n += -0.11814657f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.19028719f;
    r1 = n += 0.14536753f;
    r2 = n += -0.64353806f;
    n *= -2.00734282f;
    n *= r0;
    n = r1 += n;
    r0 = n *= 0.01524335f;
    r3 = n += 0.07522745f;
    n *= r3;
    n *= -3.45917988f;
    r3 = n *= 3.62526536f;
    n = r3 *= n;
    n = r3 += n;
    n *= 7.73095322f;
    n += -2.74932027f;
    n *= r3;
    n += -0.24839912f;
    n *= -0.39590260f;
    n = r0 += n;
    n *= -0.27279952f;
    n += r1;
    r1 = n += -0.24973501f;
    n *= r0;
    r0 = n += 0.17785609f;
    n *= r2;
    n *= -0.28147089f;
    n *= r0;
    n *= r1;
    n *= -0.38312697f;
    n *= -67100.38281250f;
    n *= 0.04064700f;
    n += 0.52359962f;
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
