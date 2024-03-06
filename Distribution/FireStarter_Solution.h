// Run date: 03/05/24 21:46:33 Pacific Standard Time
// Run duration = 1390.377755 seconds
// Run generation = 121
// Run evolution = 12
// Run max result = 0.00000048
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
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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
    r0 = n *= -0.39412686f;
    r1 = n *= 0.75000447f;
    n = r0 *= n;
    n += -0.47693518f;
    r2 = n *= -1.94309938f;
    n *= -0.01170308f;
    n += 3.51472759f;
    r3 = n *= 0.19197683f;
    r4 = n += -0.69128317f;
    r5 = n *= -2.87352490f;
    n *= 0.73013997f;
    r6 = n += 0.80847144f;
    n = r2 *= n;
    n += 1.82111704f;
    n += r3;
    n *= 1.00910509f;
    n = r6 *= n;
    n = r0 += n;
    n *= r4;
    n = r0 *= n;
    n += r6;
    n += r2;
    n *= 405.81616211f;
    n += r5;
    n += 4.53237343f;
    n += -11.71123409f;
    n *= r0;
    n *= r1;
    n += 0.42416212f;
    n *= -0.01661488f;
    n += 0.00704741f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065914f;
    r0 = n *= -0.32554975f;
    r1 = n *= 0.01965871f;
    n = r0 *= n;
    n += 0.01214886f;
    r2 = n *= -1.81349397f;
    n *= -8.83507824f;
    n += -2.59607720f;
    r3 = n *= 1.28737521f;
    r4 = n += -0.47752646f;
    r5 = n *= -0.05708952f;
    n *= 2.82599735f;
    r6 = n += 0.07339957f;
    n = r2 *= n;
    n += 1.94427013f;
    n += r3;
    n *= 1.10523880f;
    n = r6 *= n;
    n = r0 += n;
    n *= r4;
    n = r0 *= n;
    n += r6;
    n += r2;
    n *= -2.88763738f;
    n += r5;
    n += -89.74150085f;
    n += 515.91442871f;
    n *= r0;
    n *= r1;
    n += -4.50569534f;
    n *= -0.15900882f;
    n += -0.83457750f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= 0.78631884f;
    r1 = n *= -0.15117553f;
    n = r0 *= n;
    n += 0.06162135f;
    r2 = n *= 1.86938190f;
    n *= -0.00576816f;
    n += 0.92658132f;
    r3 = n *= 0.62943059f;
    r4 = n += -0.97978580f;
    r5 = n *= 0.68616760f;
    n *= 3.06038880f;
    r6 = n += 0.22258170f;
    n = r2 *= n;
    n += -1.77325523f;
    n += r3;
    n *= -2.42602944f;
    n = r6 *= n;
    n = r0 += n;
    n *= r4;
    n = r0 *= n;
    n += r6;
    n += r2;
    n *= 3.51241302f;
    n += r5;
    n += 5.83401918f;
    n += -0.13639712f;
    n *= r0;
    n *= r1;
    n += -0.28084421f;
    n *= 0.96909046f;
    n += 0.79576224f;
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
