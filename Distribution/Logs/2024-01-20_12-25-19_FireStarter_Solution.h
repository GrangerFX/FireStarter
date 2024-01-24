// Run date: 01/20/24 12:25:19 Pacific Standard Time
// Run duration = 49713.690086 seconds
// Run generation = 251
// Run evolution = 8
// Run max result = 0.00000935
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
// Run tests = 256
// Run states = 1
// Run units = 1
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

// Solution0 result = 0.00000170
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.13250852f;
    n *= -0.33009803f;
    n *= -2.37979484f;
    n += -0.00768673f;
    r1 = n *= 0.11393949f;
    r2 = n += -0.00025440f;
    n = r1 *= n;
    r3 = n += -1.12294805f;
    n *= 0.50896907f;
    n = r1 += n;
    r4 = n *= -0.00118091f;
    r5 = n *= -0.96553010f;
    n = r4 += n;
    n += r2;
    r2 = n *= -0.71428961f;
    n *= r0;
    n *= -0.21455485f;
    n *= r3;
    r3 = n += 0.14132421f;
    r0 = n += 1.88307333f;
    n = r0 *= n;
    n *= r5;
    n += r1;
    r1 = n *= -0.02627853f;
    n *= 118604.82812500f;
    n += r4;
    n *= r0;
    n *= r1;
    n *= r3;
    n *= r2;
    n += -0.04621534f;
    n += 0.04293216f;
    return n;
} // Solution0

// Solution1 result = 0.00000322
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09110618f;
    n *= -0.02450655f;
    n *= -0.46283504f;
    n += 1.12692213f;
    r1 = n *= -0.11596093f;
    r2 = n += 0.40968218f;
    n = r1 *= n;
    r3 = n += -0.62339061f;
    n *= -2.82760143f;
    n = r1 += n;
    r4 = n *= -0.24538158f;
    r5 = n *= -0.37844980f;
    n = r4 += n;
    n += r2;
    r2 = n *= 3.45945334f;
    n *= r0;
    n *= -9.24355602f;
    n *= r3;
    r3 = n += 0.67967957f;
    r0 = n += 0.31467155f;
    n = r0 *= n;
    n *= r5;
    n += r1;
    r1 = n *= 0.19158040f;
    n *= 2360.02709961f;
    n += r4;
    n *= r0;
    n *= r1;
    n *= r3;
    n *= r2;
    n += 1.56236112f;
    n += -1.67998707f;
    return n;
} // Solution1

// Solution2 result = 0.00000935
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.99084878f;
    n *= -0.40834445f;
    n *= -3.18722892f;
    n += 0.52745169f;
    r1 = n *= -0.07864555f;
    r2 = n += -0.01536792f;
    n = r1 *= n;
    r3 = n += -1.16511214f;
    n *= 0.61713916f;
    n = r1 += n;
    r4 = n *= 0.00072314f;
    r5 = n *= -7.01045132f;
    n = r4 += n;
    n += r2;
    r2 = n *= 2.80902910f;
    n *= r0;
    n *= -0.12535782f;
    n *= r3;
    r3 = n += 0.19643976f;
    r0 = n += 2.35041380f;
    n = r0 *= n;
    n *= r5;
    n += r1;
    r1 = n *= -0.01425461f;
    n *= 27222.18945312f;
    n += r4;
    n *= r0;
    n *= r1;
    n *= r3;
    n *= r2;
    n += -2.80514479f;
    n += 3.47974825f;
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
