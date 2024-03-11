// Run date: 03/10/24 22:38:35 Pacific Daylight Time
// Run duration = 30634.145753 seconds
// Run generation = 140
// Run evolution = 16
// Run max result = 0.00000167
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= -0.55202228f;
    n *= -0.72550678f;
    r1 = n *= -0.23328693f;
    n *= r1;
    n *= 23.51822090f;
    n += -0.31455219f;
    r1 = n += -1.71164238f;
    n += 1.34480262f;
    r2 = n *= -0.02871324f;
    r3 = n += -0.76755995f;
    r4 = n += 0.88520026f;
    n *= r2;
    r2 = n += 0.88637936f;
    n *= r0;
    r0 = n *= 1.43000746f;
    n *= 0.13044971f;
    n *= -0.00000001f;
    n += 1.07987177f;
    n = r4 += n;
    n = r2 *= n;
    r5 = n += -0.86878234f;
    n = r3 *= n;
    r6 = n += -3.80204844f;
    n *= r2;
    n *= r6;
    n *= r1;
    n *= r4;
    n *= r0;
    n *= r3;
    n *= r5;
    n += -0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09066582f;
    r0 = n *= 0.09125210f;
    n *= -1.28740168f;
    r1 = n *= 0.01704096f;
    n *= r1;
    n *= -24537.42187500f;
    n += 0.28796715f;
    r1 = n += 1.98469877f;
    n += 1.25134969f;
    r2 = n *= 0.14509635f;
    r3 = n += -1.89606023f;
    r4 = n += 0.38678068f;
    n *= r2;
    r2 = n += -0.14454898f;
    n *= r0;
    r0 = n *= 6.22993565f;
    n *= 0.00000115f;
    n *= 4.35311317f;
    n += 1.80490863f;
    n = r4 += n;
    n = r2 *= n;
    r5 = n += -0.94378781f;
    n = r3 *= n;
    r6 = n += -3.04656863f;
    n *= r2;
    n *= r6;
    n *= r1;
    n *= r4;
    n *= r0;
    n *= r3;
    n *= r5;
    n += -0.11813992f;
    return n;
} // Solution1

// Solution2 result = 0.00000167
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= 0.15347835f;
    n *= 0.93239307f;
    r1 = n *= -1.71087182f;
    n *= r1;
    n *= 1.77359712f;
    n += 0.64060366f;
    r1 = n += -1.17038202f;
    n += -0.35064733f;
    r2 = n *= 0.02684342f;
    r3 = n += -0.31063500f;
    r4 = n += -1.83089364f;
    n *= r2;
    r2 = n += 0.44397864f;
    n *= r0;
    r0 = n *= -1.62932742f;
    n *= -0.00000001f;
    n *= -7.56550694f;
    n += -0.57811654f;
    n = r4 += n;
    n = r2 *= n;
    r5 = n += 0.58110029f;
    n = r3 *= n;
    r6 = n += 4.24130058f;
    n *= r2;
    n *= r6;
    n *= r1;
    n *= r4;
    n *= r0;
    n *= r3;
    n *= r5;
    n += 0.52359885f;
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
