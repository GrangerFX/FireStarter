// Run date: 01/11/24 20:11:36 Pacific Standard Time
// Run duration = 4425.726179 seconds
// Run generation = 104
// Run evolution = 5
// Run max result = 0.00000024
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.47595471f;
    n = r0 *= n;
    n += 7.73632812f;
    r2 = n *= -0.04862752f;
    r3 = n += 2.33186722f;
    n *= 2.02026963f;
    r4 = n *= 1.34351003f;
    r5 = n *= -0.21420673f;
    n *= 0.76510727f;
    n = r4 *= n;
    r6 = n *= -0.47654247f;
    r7 = n *= 0.81154096f;
    n *= 0.37128916f;
    n = r4 *= n;
    n = r0 += n;
    n = r5 += n;
    n *= r7;
    n = r2 += n;
    n += r3;
    n += r0;
    n *= r5;
    n += -5.17918539f;
    n += -1.08054101f;
    n *= -0.01446204f;
    n += r2;
    n += r4;
    n *= r6;
    n *= -0.03911601f;
    n *= r1;
    n += -0.00000000f;
    n *= -2.14246607f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= -0.11499692f;
    n = r0 *= n;
    n += 2.83599782f;
    r2 = n *= -1.33639443f;
    r3 = n += -1.04031539f;
    n *= -1.03399467f;
    r4 = n *= -0.15085477f;
    r5 = n *= 1.32127142f;
    n *= -0.53598911f;
    n = r4 *= n;
    r6 = n *= 2.73353696f;
    r7 = n *= 0.37757567f;
    n *= -0.39267474f;
    n = r4 *= n;
    n = r0 += n;
    n = r5 += n;
    n *= r7;
    n = r2 += n;
    n += r3;
    n += r0;
    n *= r5;
    n += 4.43817186f;
    n += -12.71861267f;
    n *= -0.01229642f;
    n += r2;
    n += r4;
    n *= r6;
    n *= -1.14018381f;
    n *= r1;
    n += 0.05293846f;
    n *= -2.23149228f;
    return n;
} // Solution1

// Solution2 result = 0.00000022
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= -0.24031088f;
    n = r0 *= n;
    n += 0.33987585f;
    r2 = n *= 0.08337685f;
    r3 = n += 1.03305376f;
    n *= 1.77669835f;
    r4 = n *= 0.46371457f;
    r5 = n *= -0.73745042f;
    n *= 0.36591083f;
    n = r4 *= n;
    r6 = n *= 2.08711648f;
    r7 = n *= -11.09813499f;
    n *= -2.28927040f;
    n = r4 *= n;
    n = r0 += n;
    n = r5 += n;
    n *= r7;
    n = r2 += n;
    n += r3;
    n += r0;
    n *= r5;
    n += -134.90113831f;
    n += -89.66915131f;
    n *= 0.00189346f;
    n += r2;
    n += r4;
    n *= r6;
    n *= 1.36685264f;
    n *= r1;
    n += -0.71129084f;
    n *= -0.73612463f;
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
