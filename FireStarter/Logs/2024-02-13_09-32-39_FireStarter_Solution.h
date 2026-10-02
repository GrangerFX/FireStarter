// Run date: 02/13/24 09:32:39 Pacific Standard Time
// Run duration = 16139.880051 seconds
// Run generation = 54
// Run evolution = 13
// Run max result = 0.00002396
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
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
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

// Solution0 result = 0.00001311
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.65896636f;
    n += -2.07020426f;
    n *= -0.42783338f;
    r0 = n *= 0.37661454f;
    n *= -1.42375767f;
    r1 = n += 0.47491866f;
    r2 = n += -0.94984007f;
    r3 = n *= 0.89672261f;
    n += 0.42600814f;
    r4 = n *= 0.57337695f;
    n = r4 *= n;
    r5 = n += -1.99515569f;
    n = r4 += n;
    n += 1.36002183f;
    n *= 0.00002997f;
    r6 = n *= 0.13634181f;
    r7 = n += 12.76650238f;
    n *= -7.05207396f;
    n *= r7;
    n = r4 *= n;
    n += r2;
    n += 2.84551930f;
    n *= -0.00788643f;
    n *= r4;
    n = r6 *= n;
    n *= r1;
    n *= r5;
    n *= -0.00929975f;
    n *= r0;
    n *= r3;
    n *= r6;
    n *= -216241.81250000f;
    return n;
} // Solution0

// Solution1 result = 0.00002396
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.10018037f;
    n += 0.29885194f;
    n *= -0.13574676f;
    r0 = n *= 6.56731892f;
    n *= 0.22420752f;
    r1 = n += -1.74123442f;
    r2 = n += 1.62646127f;
    r3 = n *= 1.34945369f;
    n += -0.66543764f;
    r4 = n *= -1.12553740f;
    n = r4 *= n;
    r5 = n += -1.11299527f;
    n = r4 += n;
    n += -1.38708687f;
    n *= -1.24569678f;
    r6 = n *= 0.52409661f;
    r7 = n += 1.21282566f;
    n *= -0.84920150f;
    n *= r7;
    n = r4 *= n;
    n += r2;
    n += -3.76174664f;
    n *= -0.00373250f;
    n *= r4;
    n = r6 *= n;
    n *= r1;
    n *= r5;
    n *= 9.30077934f;
    n *= r0;
    n *= r3;
    n *= r6;
    n *= 75869.64843750f;
    return n;
} // Solution1

// Solution2 result = 0.00000882
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -1.08699596f;
    n += 3.47386718f;
    n *= 0.16081457f;
    r0 = n *= -1.68077838f;
    n *= 1.29380238f;
    r1 = n += 1.21483445f;
    r2 = n += -1.65545154f;
    r3 = n *= 0.15464671f;
    n += 0.04902317f;
    r4 = n *= -1.99179745f;
    n = r4 *= n;
    r5 = n += -2.95007992f;
    n = r4 += n;
    n += 1.48378897f;
    n *= -0.51461589f;
    r6 = n *= -0.06682942f;
    r7 = n += -0.98902297f;
    n *= 1.46650136f;
    n *= r7;
    n = r4 *= n;
    n += r2;
    n += -0.27587581f;
    n *= -0.07115526f;
    n *= r4;
    n = r6 *= n;
    n *= r1;
    n *= r5;
    n *= 1364.14990234f;
    n *= r0;
    n *= r3;
    n *= r6;
    n *= -0.91141862f;
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
