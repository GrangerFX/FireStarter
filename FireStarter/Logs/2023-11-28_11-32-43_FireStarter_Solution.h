// Run date: 11/28/23 11:32:43 Pacific Standard Time
// Run duration = 2534.224863 seconds
// Run generation = 11
// Run evolution = 9
// Run max result = 0.00000015
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
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

    r0 = n += -3.14159274f;
    r1 = n *= 0.19828150f;
    r2 = n += 0.00000003f;
    r3 = n *= -0.81293839f;
    n *= r0;
    r0 = n *= -0.08084644f;
    n *= 3.45463228f;
    r4 = n += -0.15045881f;
    n += -8.84190941f;
    n *= 16.44462013f;
    n += 2.91731000f;
    n *= r4;
    n *= -1.22408676f;
    n *= 0.00043745f;
    n += -0.79918122f;
    r4 = n += -2.19940042f;
    n = r0 += n;
    n *= r0;
    n *= 0.51966876f;
    n *= -0.81613731f;
    n = r1 *= n;
    n *= r2;
    r2 = n += 2.42298961f;
    n *= -0.85989404f;
    n *= 2.50533676f;
    n *= r4;
    n *= r1;
    n *= r2;
    n += -0.00000239f;
    n *= -0.03112996f;
    n += r3;
    n *= -1.34771788f;
    return n;
} // Solution0

// Solution1 result = 0.00000007
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09066057f;
    r1 = n *= -0.14928673f;
    r2 = n += -0.00000107f;
    r3 = n *= -0.02276618f;
    n *= r0;
    r0 = n *= 3.65454578f;
    n *= 3.73793793f;
    r4 = n += -0.13039808f;
    n += -3.71181297f;
    n *= -23.54266167f;
    n += 0.77767444f;
    n *= r4;
    n *= 0.00029767f;
    n *= 0.82584554f;
    n += -0.41061914f;
    r4 = n += -2.55423284f;
    n = r0 += n;
    n *= r0;
    n *= -0.28788778f;
    n *= 1.38092089f;
    n = r1 *= n;
    n *= r2;
    r2 = n += 1.53852534f;
    n *= -2.95853925f;
    n *= 0.06471758f;
    n *= r4;
    n *= r1;
    n *= r2;
    n += 0.07581447f;
    n *= 1.19450891f;
    n += r3;
    n *= -1.30446839f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= -0.68428528f;
    r2 = n += -0.00000021f;
    r3 = n *= 0.78602785f;
    n *= r0;
    r0 = n *= -0.04553645f;
    n *= -7.89777565f;
    r4 = n += 1.81494176f;
    n += -1.67434645f;
    n *= -9.77720833f;
    n += 0.06121368f;
    n *= r4;
    n *= -9.18189335f;
    n *= -0.00001283f;
    n += -2.66424155f;
    r4 = n += -0.39193937f;
    n = r0 += n;
    n *= r0;
    n *= -0.36777338f;
    n *= -0.08526313f;
    n = r1 *= n;
    n *= r2;
    r2 = n += -1.51805103f;
    n *= 0.57684851f;
    n *= 1.17496324f;
    n *= r4;
    n *= r1;
    n *= r2;
    n += -0.34303400f;
    n *= 1.78211606f;
    n += r3;
    n *= -0.85649586f;
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
