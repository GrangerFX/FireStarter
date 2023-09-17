// Run date: 09/17/23 13:52:07 Pacific Daylight Time
// Run duration = 679.894250 seconds
// Run generation = 31
// Run evolution = 8
// Run result = 0.00000024
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
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= -0.16925503f;
    r1 = n *= 0.49270797f;
    n *= r1;
    n *= -9.87242699f;
    r1 = n *= -0.76285625f;
    n += -0.15259838f;
    n *= -6.64005804f;
    n += 0.01842837f;
    n *= -2.95818686f;
    n *= 0.00720730f;
    r2 = n += -0.79159403f;
    r3 = n *= 1.23545206f;
    r4 = n *= -0.47391310f;
    r5 = n *= -3.30586815f;
    r6 = n *= -2.29573154f;
    n *= r2;
    n *= -0.08948223f;
    r2 = n += 1.99125016f;
    n *= -1.28328609f;
    n *= r0;
    r0 = n *= -0.91047049f;
    n *= r3;
    n = r2 *= n;
    n *= r0;
    n += r1;
    n += r6;
    n *= r4;
    n = r2 *= n;
    n *= r5;
    n += 0.00000001f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065843f;
    r0 = n *= -0.09528148f;
    r1 = n *= 1.63782001f;
    n *= r1;
    n *= -1.40986013f;
    r1 = n *= 3.50512719f;
    n += 0.40766656f;
    n *= -18.11653900f;
    n += 1.65738261f;
    n *= 0.33747041f;
    n *= 0.00801016f;
    r2 = n += -0.67491561f;
    r3 = n *= -1.76168728f;
    r4 = n *= -0.35203543f;
    r5 = n *= -2.01213908f;
    r6 = n *= -1.93917418f;
    n *= r2;
    n *= 0.21429615f;
    r2 = n += 2.00394917f;
    n *= 0.42426288f;
    n *= r0;
    r0 = n *= 3.31544971f;
    n *= r3;
    n = r2 *= n;
    n *= r0;
    n += r1;
    n += r6;
    n *= r4;
    n = r2 *= n;
    n *= r5;
    n += -0.11813163f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= 0.14858428f;
    r1 = n *= -5.36176395f;
    n *= r1;
    n *= -2.37676048f;
    r1 = n *= 0.31384692f;
    n += 4.71641731f;
    n *= -13.14747524f;
    n += 1.14920402f;
    n *= -0.04873672f;
    n *= -0.04208092f;
    r2 = n += -1.24558711f;
    r3 = n *= -1.40142238f;
    r4 = n *= -1.55369866f;
    r5 = n *= 0.55247772f;
    r6 = n *= -1.52211249f;
    n *= r2;
    n *= 0.76277232f;
    r2 = n += 0.38946086f;
    n *= -0.46553025f;
    n *= r0;
    r0 = n *= 0.31076345f;
    n *= r3;
    n = r2 *= n;
    n *= r0;
    n += r1;
    n += r6;
    n *= r4;
    n = r2 *= n;
    n *= r5;
    n += 0.52359891f;
    n += r2;
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
