// Run date: 04/07/24 17:34:15 Pacific Daylight Time
// Run duration = 23783.504830 seconds
// Run generation = 438
// Run evolution = 6
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159250f;
    r1 = n *= -0.09864056f;
    n *= -3.49654007f;
    r2 = n *= 2.00482678f;
    r3 = n *= 0.01147249f;
    r4 = n *= 0.11506972f;
    n += r1;
    r1 = n *= 1.49937952f;
    n = r2 *= n;
    r5 = n += 15.27760315f;
    n *= r3;
    n *= r1;
    n += 1.44369841f;
    r1 = n *= -0.05067873f;
    r3 = n *= -1.88421595f;
    n *= -2.47473621f;
    n += -0.56621760f;
    n = r0 *= n;
    r6 = n *= -0.22699229f;
    n *= r6;
    n += r1;
    n *= r3;
    n *= -16605.97460938f;
    n += -12.59628963f;
    n *= r4;
    n = r5 *= n;
    n *= -1.04287577f;
    n += r5;
    n = r0 += n;
    n *= r2;
    n += r0;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    r1 = n *= -0.33284640f;
    n *= 0.39748168f;
    r2 = n *= 0.08109391f;
    r3 = n *= -0.49342889f;
    r4 = n *= 76.96256256f;
    n += r1;
    r1 = n *= 10.18314552f;
    n = r2 *= n;
    r5 = n += 2.20626426f;
    n *= r3;
    n *= r1;
    n += -0.40352324f;
    r1 = n *= 2.45217896f;
    r3 = n *= 0.68293816f;
    n *= 0.24805802f;
    n += -0.32068878f;
    n = r0 *= n;
    r6 = n *= -1.02079058f;
    n *= r6;
    n += r1;
    n *= r3;
    n *= -0.76436228f;
    n += -0.35435212f;
    n *= r4;
    n = r5 *= n;
    n *= -0.21375003f;
    n += r5;
    n = r0 += n;
    n *= r2;
    n += r0;
    n += -0.11813179f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= 0.51396209f;
    n *= 2.48662829f;
    r2 = n *= -0.03349250f;
    r3 = n *= -1.48751557f;
    r4 = n *= -0.03196404f;
    n += r1;
    r1 = n *= 0.96547103f;
    n = r2 *= n;
    r5 = n += 2.01607156f;
    n *= r3;
    n *= r1;
    n += -1.45443797f;
    r1 = n *= 3.47347808f;
    r3 = n *= 0.45419100f;
    n *= -0.01883510f;
    n += 0.18415134f;
    n = r0 *= n;
    r6 = n *= 3.45046473f;
    n *= r6;
    n += r1;
    n *= r3;
    n *= 212.99093628f;
    n += 7.39163494f;
    n *= r4;
    n = r5 *= n;
    n *= -0.87920779f;
    n += r5;
    n = r0 += n;
    n *= r2;
    n += r0;
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
