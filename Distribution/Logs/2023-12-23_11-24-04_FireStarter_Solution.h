// Run date: 12/23/23 11:24:04 Pacific Standard Time
// Run duration = 3552.581603 seconds
// Run generation = 84
// Run evolution = 19
// Run max result = 0.00000009
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.33118692f;
    n += -2.20795441f;
    n *= -0.84185344f;
    n += 0.27639818f;
    r0 = n += 0.23077759f;
    n *= 0.44947907f;
    r1 = n *= -0.46191815f;
    n = r1 *= n;
    r2 = n += -0.30152389f;
    r3 = n *= -1.42326057f;
    n *= -0.40526479f;
    r4 = n *= 0.37161359f;
    n += r1;
    n *= -0.01525584f;
    n *= 9.04107952f;
    n += r4;
    n = r2 *= n;
    r4 = n *= 0.85278469f;
    r1 = n *= -0.83571285f;
    n += r1;
    r1 = n += -1.58591878f;
    n *= r1;
    n += 1.32149041f;
    n = r3 += n;
    n = r4 += n;
    n += -0.61903572f;
    n *= r2;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.10123202f;
    n += -0.10123213f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.32296664f;
    n += 1.57193565f;
    n *= 0.39545086f;
    n += -0.84231651f;
    r0 = n += -1.12922788f;
    n *= 0.62982845f;
    r1 = n *= 0.74991310f;
    n = r1 *= n;
    r2 = n += -1.92999589f;
    r3 = n *= -2.12249947f;
    n *= 0.11578232f;
    r4 = n *= -0.23588607f;
    n += r1;
    n *= -0.00000890f;
    n *= 44.15743256f;
    n += r4;
    n = r2 *= n;
    r4 = n *= 0.45741293f;
    r1 = n *= -3.19667888f;
    n += r1;
    r1 = n += 1.02156591f;
    n *= r1;
    n += -2.90568376f;
    n = r3 += n;
    n = r4 += n;
    n += -8.09666538f;
    n *= r2;
    n *= r0;
    n *= r4;
    n *= r3;
    n += -0.11912267f;
    n += 0.00099083f;
    return n;
} // Solution1

// Solution2 result = 0.00000009
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.68317974f;
    n += -1.15742433f;
    n *= 2.08473611f;
    n += 2.47385359f;
    r0 = n += -2.00976968f;
    n *= -1.07365286f;
    r1 = n *= -0.12596242f;
    n = r1 *= n;
    r2 = n += -0.39611790f;
    r3 = n *= -0.88285148f;
    n *= -0.10913397f;
    r4 = n *= -0.25740412f;
    n += r1;
    n *= 0.01348591f;
    n *= 1.70234573f;
    n += r4;
    n = r2 *= n;
    r4 = n *= -2.37075591f;
    r1 = n *= 2.01491237f;
    n += r1;
    r1 = n += 1.96839404f;
    n *= r1;
    n += -0.63430953f;
    n = r3 += n;
    n = r4 += n;
    n += 4.83709288f;
    n *= r2;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.41959807f;
    n += 0.10400068f;
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
