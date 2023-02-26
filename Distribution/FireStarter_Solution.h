// Run date: 02/26/23 15:54:39 Pacific Standard Time
// Run duration = 2715.870495 seconds
// Run count = 5
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 5

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

// Precision = 0.00039840

// Solution0 precision = 0.00039840
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.16071472f;
    r1 = n += -0.74398893f;
    r2 = n *= -0.94366169f;
    n += 0.84892744f;
    r3 = n += -1.07460678f;
    r4 = n += 1.52097213f;
    n *= -0.39802077f;
    r5 = n *= 1.09934127f;
    n *= r4;
    r4 = n += 0.19616863f;
    n = r3 *= n;
    r6 = n += 1.93604469f;
    r7 = n += 2.02648425f;
    n += r4;
    n = r6 *= n;
    n += -3.36610603f;
    n *= r5;
    n *= -3.36727095f;
    n += 2.42038727f;
    n *= r2;
    r2 = n *= 0.28295627f;
    n *= -0.81745744f;
    n += 2.76705432f;
    n *= r0;
    n += -3.01400733f;
    n *= r6;
    r6 = n += -5.32253838f;
    n *= r1;
    n += r6;
    n += r2;
    n += r7;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00024104
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.10906431f;
    r1 = n += 0.41155469f;
    r2 = n *= -1.74922884f;
    n += 0.60232955f;
    r3 = n += -1.55962074f;
    r4 = n += 1.35745788f;
    n *= -0.71627563f;
    r5 = n *= -1.42230535f;
    n *= r4;
    r4 = n += -1.58943677f;
    n = r3 *= n;
    r6 = n += -1.56204128f;
    r7 = n += 0.61529911f;
    n += r4;
    n = r6 *= n;
    n += -0.88214099f;
    n *= r5;
    n *= 0.44601417f;
    n += -0.42075357f;
    n *= r2;
    r2 = n *= -0.01439598f;
    n *= 1.37655246f;
    n += 0.50068623f;
    n *= r0;
    n += -0.95721400f;
    n *= r6;
    r6 = n += -0.79699498f;
    n *= r1;
    n += r6;
    n += r2;
    n += r7;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00037348
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.31534213f;
    r1 = n += 0.16963391f;
    r2 = n *= 0.90004379f;
    n += -1.05548203f;
    r3 = n += 0.90287292f;
    r4 = n += 1.00436378f;
    n *= 2.94113016f;
    r5 = n *= 0.09345738f;
    n *= r4;
    r4 = n += -1.17138731f;
    n = r3 *= n;
    r6 = n += -1.39189231f;
    r7 = n += -0.19924743f;
    n += r4;
    n = r6 *= n;
    n += -5.83665180f;
    n *= r5;
    n *= 0.90678072f;
    n += -0.67076892f;
    n *= r2;
    r2 = n *= 0.32535934f;
    n *= -0.56284451f;
    n += -1.78585768f;
    n *= r0;
    n += 1.77275407f;
    n *= r6;
    r6 = n += -0.00710006f;
    n *= r1;
    n += r6;
    n += r2;
    n += r7;
    n *= r3;
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
