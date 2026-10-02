// Run date: 12/10/23 18:10:59 Pacific Standard Time
// Run duration = 14638.409397 seconds
// Run generation = 76
// Run evolution = 19
// Run max result = 0.00000007
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
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.36415631f;
    n *= 0.82516366f;
    n *= 0.18014042f;
    n += 1.71251345f;
    n += -0.39842781f;
    n = r0 += n;
    n = r0 += n;
    r1 = n *= 0.50812823f;
    r2 = n *= 0.07103228f;
    n *= r2;
    n *= -0.93637025f;
    r2 = n += 0.32148027f;
    n = r1 *= n;
    r3 = n *= -2.99895120f;
    n *= r1;
    n += 0.69282132f;
    n += -0.28601789f;
    r1 = n *= 1.44463599f;
    n = r2 *= n;
    r4 = n += 1.14367425f;
    n += r1;
    n *= r4;
    n = r3 *= n;
    n *= 3.78068566f;
    n *= r2;
    n += -0.09304229f;
    n += r3;
    n *= 2.61064911f;
    n += -0.70307660f;
    n += r0;
    n *= -0.25927338f;
    n += -0.24526682f;
    return n;
} // Solution0

// Solution1 result = 0.00000007
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.07396991f;
    n *= 0.02392802f;
    n *= -1.83444369f;
    n += 1.39303875f;
    n += -1.61161947f;
    n = r0 += n;
    n = r0 += n;
    r1 = n *= 2.76389623f;
    r2 = n *= -0.27981764f;
    n *= r2;
    n *= -0.13461700f;
    r2 = n += 0.72280347f;
    n = r1 *= n;
    r3 = n *= -0.67029953f;
    n *= r1;
    n += 2.47250795f;
    n += 0.05504827f;
    r1 = n *= -1.31611621f;
    n = r2 *= n;
    r4 = n += 1.63648808f;
    n += r1;
    n *= r4;
    n = r3 *= n;
    n *= -1.05239367f;
    n *= r2;
    n += -0.20973261f;
    n += r3;
    n *= -0.58162504f;
    n += -0.19400093f;
    n += r0;
    n *= -0.80621088f;
    n += -0.17619106f;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 1.08184302f;
    n *= 1.91513681f;
    n *= -0.42973885f;
    n += -0.52513784f;
    n += 0.02385272f;
    n = r0 += n;
    n = r0 += n;
    r1 = n *= -1.61759579f;
    r2 = n *= -1.00668871f;
    n *= r2;
    n *= 0.01180899f;
    r2 = n += -1.42288411f;
    n = r1 *= n;
    r3 = n *= 1.09301376f;
    n *= r1;
    n += -0.98428035f;
    n += 0.08812047f;
    r1 = n *= -0.27229679f;
    n = r2 *= n;
    r4 = n += -1.56267118f;
    n += r1;
    n *= r4;
    n = r3 *= n;
    n *= -0.05812697f;
    n *= r2;
    n += -0.28151494f;
    n += r3;
    n *= -1.04539907f;
    n += 0.92734164f;
    n += r0;
    n *= 0.34649161f;
    n += 0.10031185f;
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
