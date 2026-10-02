// Run date: 12/23/23 22:23:35 Pacific Standard Time
// Run duration = 6608.931903 seconds
// Run generation = 42
// Run evolution = 17
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run states = 64
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.20647672f;
    r1 = n += 1.94599700f;
    n += -1.72627175f;
    r2 = n += 0.42894056f;
    n += r1;
    n = r0 *= n;
    r1 = n += 0.56878835f;
    r3 = n += -0.56878853f;
    n *= -0.03433793f;
    r4 = n *= 0.03340454f;
    n *= 31.45746231f;
    n *= r0;
    n += -3.84340310f;
    n *= r1;
    n *= -0.00371020f;
    r1 = n += -1.77222276f;
    n = r1 *= n;
    n *= 2.21932101f;
    n += -5.65975857f;
    r0 = n *= -5.30681658f;
    n = r3 += n;
    n = r0 *= n;
    n *= 2.04195356f;
    n += r1;
    n *= 0.29802328f;
    n *= r0;
    n *= -0.67701256f;
    n *= r3;
    n *= r4;
    n *= r2;
    n *= 0.46374279f;
    n += -0.00000033f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.12834068f;
    r1 = n += -1.18997037f;
    n += -0.20659839f;
    r2 = n += 0.99991119f;
    n += r1;
    n = r0 *= n;
    r1 = n += -1.51283264f;
    r3 = n += -0.18135057f;
    n *= 0.77487886f;
    r4 = n *= -3.12996340f;
    n *= -12.87424660f;
    n *= r0;
    n += -5.70430422f;
    n *= r1;
    n *= 0.00098534f;
    r1 = n += -0.78973073f;
    n = r1 *= n;
    n *= 1.17387342f;
    n += 0.80941838f;
    r0 = n *= 0.77516949f;
    n = r3 += n;
    n = r0 *= n;
    n *= -0.40107787f;
    n += r1;
    n *= 2.69403863f;
    n *= r0;
    n *= 1.17892933f;
    n *= r3;
    n *= r4;
    n *= r2;
    n *= -0.71055299f;
    n += -0.11813503f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.26533279f;
    r1 = n += 2.08391976f;
    n += -0.55102211f;
    r2 = n += -0.83825833f;
    n += r1;
    n = r0 *= n;
    r1 = n += -0.25426617f;
    r3 = n += 0.51765883f;
    n *= 0.12244914f;
    r4 = n *= 0.00169797f;
    n *= 9.12027073f;
    n *= r0;
    n += 2.39480591f;
    n *= r1;
    n *= 0.03244521f;
    r1 = n += -1.36291397f;
    n = r1 *= n;
    n *= 2.62106776f;
    n += 1.82937837f;
    r0 = n *= -1.67607963f;
    n = r3 += n;
    n = r0 *= n;
    n *= -0.80568522f;
    n += r1;
    n *= 0.50520635f;
    n *= r0;
    n *= -0.93752849f;
    n *= r3;
    n *= r4;
    n *= r2;
    n *= 0.19891617f;
    n += 0.52359974f;
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
