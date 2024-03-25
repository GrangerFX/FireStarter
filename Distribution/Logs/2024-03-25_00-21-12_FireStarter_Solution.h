// Run date: 03/25/24 00:21:12 Pacific Daylight Time
// Run duration = 27814.633518 seconds
// Run generation = 437
// Run evolution = 13
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
// Run evolveSeed = 4
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159250f;
    r1 = n += -0.00000019f;
    n = r0 *= n;
    r2 = n *= -0.10221066f;
    n += 0.34124389f;
    r3 = n *= 0.93796748f;
    n = r3 += n;
    n *= -4.35822058f;
    r4 = n *= -0.00125419f;
    r5 = n += 0.43897027f;
    r6 = n *= -0.98534578f;
    r7 = n *= -0.77135253f;
    n *= r0;
    n += r4;
    n *= r5;
    n += -0.94227093f;
    n *= 7.32301712f;
    n *= -0.00210156f;
    n *= r3;
    n = r2 += n;
    n *= r6;
    n += -1.64026463f;
    n = r7 *= n;
    n *= r1;
    n *= 1.27913296f;
    n = r7 *= n;
    n *= r2;
    n += 0.04848608f;
    n += r7;
    n *= 1.19592905f;
    n += -0.05798589f;
    n *= -2.11815810f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09064460f;
    r1 = n += -0.00001973f;
    n = r0 *= n;
    r2 = n *= -0.04185833f;
    n += 0.36062422f;
    r3 = n *= 0.00712253f;
    n = r3 += n;
    n *= 2.26902080f;
    r4 = n *= 3.35211658f;
    r5 = n += 0.10820697f;
    r6 = n *= 1.22088790f;
    r7 = n *= 2.62096024f;
    n *= r0;
    n += r4;
    n *= r5;
    n += -1.51374090f;
    n *= -0.64569545f;
    n *= -0.99888974f;
    n *= r3;
    n = r2 += n;
    n *= r6;
    n += 1.93357253f;
    n = r7 *= n;
    n *= r1;
    n *= -1.82221258f;
    n = r7 *= n;
    n *= r2;
    n += 0.11274210f;
    n += r7;
    n *= -0.43188792f;
    n += 0.11846212f;
    n *= -1.69324863f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799407f;
    r1 = n += 0.00000036f;
    n = r0 *= n;
    r2 = n *= -0.20022604f;
    n += 0.66627347f;
    r3 = n *= 0.01120514f;
    n = r3 += n;
    n *= 1654.11303711f;
    r4 = n *= 0.00079250f;
    r5 = n += 0.71310347f;
    r6 = n *= -0.36712867f;
    r7 = n *= 0.95931870f;
    n *= r0;
    n += r4;
    n *= r5;
    n += 1.78724265f;
    n *= -0.06842194f;
    n *= -4.79675007f;
    n *= r3;
    n = r2 += n;
    n *= r6;
    n += -1.56688571f;
    n = r7 *= n;
    n *= r1;
    n *= 2.95508218f;
    n = r7 *= n;
    n *= r2;
    n += -0.11050121f;
    n += r7;
    n *= -1.10471594f;
    n += 0.16068472f;
    n *= 1.85176158f;
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
