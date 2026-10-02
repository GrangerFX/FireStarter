// Run date: 12/03/23 13:12:45 Pacific Standard Time
// Run duration = 39043.298882 seconds
// Run generation = 103
// Run evolution = 11
// Run max result = 0.00000007
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 2

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
    float r0, r1, r2, r3;

    n += -3.46201873f;
    r0 = n += 0.32042611f;
    r1 = n *= -0.02801172f;
    r2 = n *= 0.00653412f;
    n *= 17.62286377f;
    n *= -25.78308296f;
    n *= -13.51919746f;
    n *= r1;
    r1 = n += -4.24882412f;
    n = r1 *= n;
    r3 = n *= -0.11649647f;
    n *= r1;
    n *= -2.38435102f;
    n += 1.63091898f;
    n = r3 += n;
    n = r2 *= n;
    n = r0 += n;
    r1 = n *= 0.46550748f;
    n = r0 += n;
    n *= -1.41101098f;
    n += r0;
    r0 = n *= 0.57079279f;
    n *= r1;
    n += 1.03948474f;
    n = r3 *= n;
    n += 21.11698151f;
    n += 0.30065590f;
    n *= -0.46468991f;
    n += r3;
    n *= r2;
    n += -0.00000001f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -1.48512137f;
    r0 = n += -1.60553741f;
    r1 = n *= -0.44085187f;
    r2 = n *= -0.10394365f;
    n *= -0.22077176f;
    n *= 2.65861487f;
    n *= 1.69764996f;
    n *= r1;
    r1 = n += -3.39287710f;
    n = r1 *= n;
    r3 = n *= -0.59490013f;
    n *= r1;
    n *= -0.12446117f;
    n += -0.19172506f;
    n = r3 += n;
    n = r2 *= n;
    n = r0 += n;
    r1 = n *= -0.99956858f;
    n = r0 += n;
    n *= 3.64889383f;
    n += r0;
    r0 = n *= -1.78757298f;
    n *= r1;
    n += -3.11291885f;
    n = r3 *= n;
    n += -7.99516153f;
    n += 7.09122753f;
    n *= -0.00000950f;
    n += r3;
    n *= r2;
    n += -0.11813203f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000007
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -1.44338286f;
    r0 = n += -1.17461097f;
    r1 = n *= -0.31353274f;
    r2 = n *= -1.34498346f;
    n *= 0.28207174f;
    n *= 0.29829025f;
    n *= -0.28440350f;
    n *= r1;
    r1 = n += -0.84204334f;
    n = r1 *= n;
    r3 = n *= 1.53283787f;
    n *= r1;
    n *= 4.29281139f;
    n += -2.45494127f;
    n = r3 += n;
    n = r2 *= n;
    n = r0 += n;
    r1 = n *= 1.03794968f;
    n = r0 += n;
    n *= -0.76062661f;
    n += r0;
    r0 = n *= 0.08465240f;
    n *= r1;
    n += -0.67736018f;
    n = r3 *= n;
    n += -0.57214022f;
    n += 9.70276070f;
    n *= -0.00001098f;
    n += r3;
    n *= r2;
    n += 0.52359867f;
    n += r0;
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
