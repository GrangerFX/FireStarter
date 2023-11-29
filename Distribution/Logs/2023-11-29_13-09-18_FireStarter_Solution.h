// Run date: 11/29/23 13:09:18 Pacific Standard Time
// Run duration = 3993.860324 seconds
// Run generation = 78
// Run evolution = 13
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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
    float r0, r1, r2, r3, r4, r5;

    n += -0.47392002f;
    r0 = n += -2.66767263f;
    r1 = n *= 0.20062676f;
    n *= 3.66233706f;
    n = r0 *= n;
    n += -1.01218319f;
    r2 = n *= -0.00698950f;
    n += 0.84438437f;
    r3 = n *= -1.04429913f;
    r4 = n *= -2.35184789f;
    r5 = n *= 1.69932854f;
    n *= 1.95727932f;
    n *= r2;
    n += 0.92491603f;
    n += 0.10742712f;
    r2 = n *= -0.09506588f;
    n = r3 *= n;
    n += 0.23185940f;
    n = r5 += n;
    n *= r5;
    r5 = n += -0.11164254f;
    n += r4;
    n *= r0;
    n *= -0.02465814f;
    n += 2.78368258f;
    n *= r3;
    n *= r5;
    n += r2;
    n *= r1;
    n += -0.14663482f;
    n *= -1.34931743f;
    n += -0.19785698f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.43497920f;
    r0 = n += -1.65567935f;
    r1 = n *= -0.46200672f;
    n *= 1.19679809f;
    n = r0 *= n;
    n += 0.94290185f;
    r2 = n *= 0.02198024f;
    n += 0.70504612f;
    r3 = n *= -0.61817300f;
    r4 = n *= -0.61782736f;
    r5 = n *= -2.82598615f;
    n *= 0.05775023f;
    n *= r2;
    n += 0.18542212f;
    n += -0.40578121f;
    r2 = n *= -0.65763038f;
    n = r3 *= n;
    n += -1.30451667f;
    n = r5 += n;
    n *= r5;
    r5 = n += -0.53781062f;
    n += r4;
    n *= r0;
    n *= -0.08305915f;
    n += -1.87071395f;
    n *= r3;
    n *= r5;
    n += r2;
    n *= r1;
    n += -0.00643808f;
    n *= 3.68502665f;
    n += -0.09440726f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.75735152f;
    r0 = n += -0.86064225f;
    r1 = n *= 0.62285364f;
    n *= -0.10975716f;
    n = r0 *= n;
    n += 0.64515609f;
    r2 = n *= -0.27935988f;
    n += -1.10672653f;
    r3 = n *= 1.01972663f;
    r4 = n *= 0.83871740f;
    r5 = n *= 2.36090708f;
    n *= -0.59265739f;
    n *= r2;
    n += -0.72416604f;
    n += -2.43924308f;
    r2 = n *= -0.01146736f;
    n = r3 *= n;
    n += -0.83385944f;
    n = r5 += n;
    n *= r5;
    r5 = n += -2.56443620f;
    n += r4;
    n *= r0;
    n *= 0.40142125f;
    n += 1.08654726f;
    n *= r3;
    n *= r5;
    n += r2;
    n *= r1;
    n += 0.13386792f;
    n *= 3.21540284f;
    n += 0.09315941f;
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
