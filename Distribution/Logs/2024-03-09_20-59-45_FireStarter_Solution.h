// Run date: 03/09/24 20:59:45 Pacific Standard Time
// Run duration = 1257.006009 seconds
// Run generation = 100
// Run evolution = 12
// Run max result = 0.00000012
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n *= 0.11321561f;
    n *= 0.48804098f;
    r1 = n *= -3.39068985f;
    n = r0 *= n;
    r2 = n += 0.33740056f;
    n += 0.41301033f;
    n += 1.53985071f;
    n += -0.44120416f;
    r3 = n *= -0.01532860f;
    n += -0.88057911f;
    r4 = n *= -0.01988518f;
    n *= -14241.23925781f;
    n = r4 *= n;
    n *= 0.00004518f;
    n *= 6.31044626f;
    n *= r2;
    r2 = n += -1.17817581f;
    r5 = n += 0.88268894f;
    n += 0.24609359f;
    n *= 2.98290396f;
    n *= r0;
    n = r4 += n;
    n *= r4;
    r4 = n += -5.07024145f;
    n *= r2;
    n *= r4;
    n *= r5;
    n *= r1;
    n *= r3;
    n *= -1.96574140f;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065890f;
    n *= -1.09372222f;
    n *= -0.11533406f;
    r1 = n *= 0.51066840f;
    n = r0 *= n;
    r2 = n += -0.19763829f;
    n += -0.12124831f;
    n += -2.12295389f;
    n += -3.62693048f;
    r3 = n *= 0.09431867f;
    n += 1.44618833f;
    r4 = n *= -1.09341800f;
    n *= 2.13188171f;
    n = r4 *= n;
    n *= 0.00028041f;
    n *= 34.81233978f;
    n *= r2;
    r2 = n += 0.53143048f;
    r5 = n += 1.71981227f;
    n += -1.29286528f;
    n *= -1.04686725f;
    n *= r0;
    n = r4 += n;
    n *= r4;
    r4 = n += -0.95563555f;
    n *= r2;
    n *= r4;
    n *= r5;
    n *= r1;
    n *= r3;
    n *= 3.13779092f;
    n += -0.11813203f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    n *= -0.49237111f;
    n *= -0.33145791f;
    r1 = n *= 1.22876930f;
    n = r0 *= n;
    r2 = n += -2.49661660f;
    n += -1.37093461f;
    n += 1.98248613f;
    n += 0.88574678f;
    r3 = n *= -0.05452901f;
    n += 1.33904064f;
    r4 = n *= -1.10709023f;
    n *= -1.45585632f;
    n = r4 *= n;
    n *= -3.86164737f;
    n *= 0.00023997f;
    n *= r2;
    r2 = n += 1.36489677f;
    r5 = n += -2.39888573f;
    n += 0.88488007f;
    n *= -0.62499583f;
    n *= r0;
    n = r4 += n;
    n *= r4;
    r4 = n += -0.22698289f;
    n *= r2;
    n *= r4;
    n *= r5;
    n *= r1;
    n *= r3;
    n *= 0.46640983f;
    n += 0.52359873f;
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
