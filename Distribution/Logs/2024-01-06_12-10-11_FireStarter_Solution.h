// Run date: 01/06/24 12:10:11 Pacific Standard Time
// Run duration = 3705.003622 seconds
// Run generation = 70
// Run evolution = 7
// Run max result = 0.00000036
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

// Solution0 result = 0.00000031
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14160180f;
    r1 = n += 0.00001280f;
    n = r0 *= n;
    n *= -0.00277035f;
    r2 = n += -0.46782202f;
    r3 = n += -0.17704782f;
    r4 = n += 0.85436654f;
    n *= 0.00019046f;
    n *= -0.00152425f;
    n *= r2;
    n *= -16.21525955f;
    r2 = n += -2.35360765f;
    n = r0 += n;
    r5 = n *= 0.00008890f;
    r6 = n *= 392.87246704f;
    n += r6;
    n *= r5;
    r5 = n += 0.11124767f;
    n *= r0;
    r0 = n *= -2.90585852f;
    n *= r5;
    n *= r4;
    r4 = n += -1.35754108f;
    r5 = n += 1.60917115f;
    n *= r0;
    n *= r2;
    n *= r4;
    n *= r5;
    n *= -2.03925586f;
    n += r3;
    n *= r1;
    n += 0.00000386f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09063888f;
    r1 = n += -0.00002770f;
    n = r0 *= n;
    n *= 0.07158057f;
    r2 = n += -1.05161583f;
    r3 = n += 0.07698367f;
    r4 = n += -6.27319241f;
    n *= -12.12263680f;
    n *= 0.05379337f;
    n *= r2;
    n *= 2.58923578f;
    r2 = n += 5.17197561f;
    n = r0 += n;
    r5 = n *= -0.00000703f;
    r6 = n *= -543.18530273f;
    n += r6;
    n *= r5;
    r5 = n += 0.01836060f;
    n *= r0;
    r0 = n *= 0.72508913f;
    n *= r5;
    n *= r4;
    r4 = n += 1.64824450f;
    r5 = n += -0.33225393f;
    n *= r0;
    n *= r2;
    n *= r4;
    n *= r5;
    n *= -0.05410357f;
    n += r3;
    n *= r1;
    n += -0.11814089f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799479f;
    r1 = n += 0.00000155f;
    n = r0 *= n;
    n *= 0.00953349f;
    r2 = n += 0.24141084f;
    r3 = n += -0.65791041f;
    r4 = n += -0.76188827f;
    n *= -1.49582922f;
    n *= -0.00002084f;
    n *= r2;
    n *= 21.98624420f;
    r2 = n += -2.53386807f;
    n = r0 += n;
    r5 = n *= -0.00180983f;
    r6 = n *= 0.31353304f;
    n += r6;
    n *= r5;
    r5 = n += 0.17111489f;
    n *= r0;
    r0 = n *= 1.00044191f;
    n *= r5;
    n *= r4;
    r4 = n += 1.49411440f;
    r5 = n += -0.41223422f;
    n *= r0;
    n *= r2;
    n *= r4;
    n *= r5;
    n *= -0.24541205f;
    n += r3;
    n *= r1;
    n += 0.52359921f;
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
