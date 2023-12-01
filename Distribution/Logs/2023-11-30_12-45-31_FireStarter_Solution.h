// Run date: 11/30/23 12:45:31 Pacific Standard Time
// Run duration = 11030.045539 seconds
// Run generation = 22
// Run evolution = 8
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.03580904f;
    r0 = n += -1.10578358f;
    n *= -0.80759048f;
    r1 = n += 0.00000003f;
    r2 = n *= 0.74128115f;
    n = r2 *= n;
    r3 = n += -2.50760007f;
    r4 = n *= 1.10614872f;
    n += -0.27353376f;
    n *= 0.00104526f;
    r5 = n *= 0.47691193f;
    r6 = n += -0.02535965f;
    n = r4 *= n;
    r7 = n += 1.42528653f;
    n += -1.66113508f;
    n = r5 *= n;
    n *= -5.95987797f;
    n += 0.53689682f;
    n *= r4;
    n = r7 += n;
    n *= -3.68461418f;
    n *= -1.31416261f;
    n *= r2;
    n += r5;
    n *= r6;
    n += 1.46042848f;
    n *= r3;
    n *= r7;
    n *= r1;
    n += r0;
    n *= -2.90816784f;
    n *= 0.06191332f;
    return n;
} // Solution0

// Solution1 result = 0.00000009
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.29922211f;
    r0 = n += -1.50849211f;
    n *= -1.04640985f;
    r1 = n += 0.29607576f;
    r2 = n *= 0.43417665f;
    n = r2 *= n;
    r3 = n += -1.58570075f;
    r4 = n *= 0.54026139f;
    n += 0.43120807f;
    n *= 0.00334972f;
    r5 = n *= 1.03308308f;
    r6 = n += -0.06404929f;
    n = r4 *= n;
    r7 = n += 2.01835895f;
    n += -2.06831980f;
    n = r5 *= n;
    n *= -4.44280243f;
    n += 1.55085301f;
    n *= r4;
    n = r7 += n;
    n *= 1.52596164f;
    n *= 0.39677900f;
    n *= r2;
    n += r5;
    n *= r6;
    n += 0.45576769f;
    n *= r3;
    n *= r7;
    n *= r1;
    n += r0;
    n *= 1.12785411f;
    n *= -0.37017965f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 0.98913437f;
    r0 = n += -1.24596941f;
    n *= 1.59084141f;
    r1 = n += -3.75622916f;
    r2 = n *= 0.22232608f;
    n = r2 *= n;
    r3 = n += -0.88934880f;
    r4 = n *= 0.61007220f;
    n += -13.15476418f;
    n *= 0.53149140f;
    r5 = n *= -0.00012679f;
    r6 = n += -4.73221731f;
    n = r4 *= n;
    r7 = n += 1.92987823f;
    n += -1.00204504f;
    n = r5 *= n;
    n *= 4.17137957f;
    n += -0.87693590f;
    n *= r4;
    n = r7 += n;
    n *= -0.29619107f;
    n *= -0.31089151f;
    n *= r2;
    n += r5;
    n *= r6;
    n += 1.72296941f;
    n *= r3;
    n *= r7;
    n *= r1;
    n += r0;
    n *= -0.33024395f;
    n *= -0.67148846f;
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
