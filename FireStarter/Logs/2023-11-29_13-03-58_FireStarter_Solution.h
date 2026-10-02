// Run date: 11/29/23 13:03:58 Pacific Standard Time
// Run duration = 169.155605 seconds
// Run generation = 23
// Run evolution = 2
// Run max result = 0.00011277
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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

// Solution0 result = 0.00000966
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14184356f;
    n *= -23.43666077f;
    n *= -0.15174106f;
    r0 = n *= 0.04050114f;
    r1 = n *= 0.94039434f;
    n += r0;
    r0 = n += 1.68331623f;
    n *= -0.34424222f;
    r2 = n += 1.20040286f;
    r3 = n += -1.32008922f;
    r4 = n *= 0.29990786f;
    n = r0 *= n;
    n += 3.72793889f;
    n *= r3;
    r3 = n *= 0.88032269f;
    n = r2 *= n;
    n *= r3;
    n = r1 += n;
    n *= 0.57481724f;
    n = r0 += n;
    n = r2 += n;
    n *= -0.06871216f;
    n *= r0;
    n *= r4;
    n += r1;
    n *= -2.65580106f;
    r1 = n *= -0.21135047f;
    n *= -0.15756699f;
    n *= 28.31351852f;
    n *= r2;
    n *= r1;
    n += -1.03506780f;
    return n;
} // Solution0

// Solution1 result = 0.00000334
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.24521255f;
    n *= 0.12600350f;
    n *= -0.10484798f;
    r0 = n *= 4.21295738f;
    r1 = n *= 1.30096686f;
    n += r0;
    r0 = n += 0.62069589f;
    n *= -0.85171086f;
    r2 = n += 0.08369654f;
    r3 = n += 1.44127929f;
    r4 = n *= -0.17630693f;
    n = r0 *= n;
    n += -0.98053485f;
    n *= r3;
    r3 = n *= 1.29780126f;
    n = r2 *= n;
    n *= r3;
    n = r1 += n;
    n *= 0.60567939f;
    n = r0 += n;
    n = r2 += n;
    n *= -0.57312733f;
    n *= r0;
    n *= r4;
    n += r1;
    n *= 0.23622839f;
    r1 = n *= 0.55708599f;
    n *= -28.00086594f;
    n *= -28.62969971f;
    n *= r2;
    n *= r1;
    n += -0.10329462f;
    return n;
} // Solution1

// Solution2 result = 0.00011277
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.36715198f;
    n *= 0.34328613f;
    n *= -0.52176839f;
    r0 = n *= -2.98908162f;
    r1 = n *= -1.53743804f;
    n += r0;
    r0 = n += 2.06705689f;
    n *= -0.62337708f;
    r2 = n += 0.64982694f;
    r3 = n += 1.27496243f;
    r4 = n *= -0.48179665f;
    n = r0 *= n;
    n += -2.77699614f;
    n *= r3;
    r3 = n *= -0.61745507f;
    n = r2 *= n;
    n *= r3;
    n = r1 += n;
    n *= -0.29629922f;
    n = r0 += n;
    n = r2 += n;
    n *= 0.07589991f;
    n *= r0;
    n *= r4;
    n += r1;
    n *= 2.70469451f;
    r1 = n *= 0.15739188f;
    n *= 0.10423135f;
    n *= 17.47437477f;
    n *= r2;
    n *= r1;
    n += 1.27568984f;
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
