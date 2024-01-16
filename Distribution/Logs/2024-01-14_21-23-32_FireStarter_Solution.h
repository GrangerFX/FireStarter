// Run date: 01/14/24 21:23:32 Pacific Standard Time
// Run duration = 614.971294 seconds
// Run generation = 12
// Run evolution = 5
// Run max result = 0.00000030
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
// Run tests = 1
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

// Solution0 result = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.17859922f;
    r2 = n *= 0.88698918f;
    n = r1 *= n;
    n *= 1.55637968f;
    n += -0.99137253f;
    n = r1 += n;
    n += 0.27752975f;
    r3 = n *= -0.74317443f;
    n += 2.04301524f;
    r4 = n *= 0.50566608f;
    n *= r4;
    r4 = n *= -0.96947628f;
    r5 = n += -0.64547491f;
    r6 = n *= -0.75374717f;
    n += -1.61008370f;
    n *= 0.00000393f;
    r7 = n *= 0.00001014f;
    n += -0.88455260f;
    n += 3.31981015f;
    n += r1;
    n += r6;
    n = r4 *= n;
    n *= -4.34821033f;
    n *= r0;
    n *= -337972.56250000f;
    n *= r7;
    n += r2;
    n *= r3;
    n *= r5;
    n *= r4;
    n += -0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065890f;
    r1 = n *= 0.20542900f;
    r2 = n *= -2.12707210f;
    n = r1 *= n;
    n *= -1.48309338f;
    n += -0.03754399f;
    n = r1 += n;
    n += -1.83567750f;
    r3 = n *= 0.94982439f;
    n += 0.71607512f;
    r4 = n *= 0.01155822f;
    n *= r4;
    r4 = n *= 1.68425858f;
    r5 = n += 1.55121458f;
    r6 = n *= 16.85564613f;
    n += 14506.26269531f;
    n *= -0.72122496f;
    r7 = n *= 0.29985133f;
    n += -7.60912991f;
    n += -8.39470100f;
    n += r1;
    n += r6;
    n = r4 *= n;
    n *= -0.01738182f;
    n *= r0;
    n *= 0.00145229f;
    n *= r7;
    n += r2;
    n *= r3;
    n *= r5;
    n *= r4;
    n += -0.11813200f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= -0.21425566f;
    r2 = n *= -3.39520669f;
    n = r1 *= n;
    n *= -1.23138082f;
    n += 1.00468433f;
    n = r1 += n;
    n += -1.18439388f;
    r3 = n *= 0.98987955f;
    n += -1.51235402f;
    r4 = n *= -1.45477235f;
    n *= r4;
    r4 = n *= -0.21410447f;
    r5 = n += -0.16373730f;
    r6 = n *= -1.21404886f;
    n += -1.40846133f;
    n *= 0.00004064f;
    r7 = n *= -0.65479290f;
    n += 3.35371876f;
    n += -2.03852701f;
    n += r1;
    n += r6;
    n = r4 *= n;
    n *= 2.53835106f;
    n *= r0;
    n *= 4.40813446f;
    n *= r7;
    n += r2;
    n *= r3;
    n *= r5;
    n *= r4;
    n += 0.52359867f;
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
