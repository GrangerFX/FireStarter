// Run date: 06/23/24 17:53:25 Pacific Daylight Time
// Run duration = 2952.505586 seconds
// Run generation = 153
// Run evolution = 7
// Run max result = 0.00000173
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
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

// Solution0 result = 0.00000042
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.56856513f;
    r0 = n += 1.78619981f;
    r1 = n += -1.78619981f;
    n *= -0.86692125f;
    n += -3.09698987f;
    n *= 0.51920092f;
    n = r1 *= n;
    r2 = n *= 0.86780548f;
    n *= 0.18212648f;
    n *= -0.13069069f;
    n += -0.67543876f;
    r3 = n += -1.39875150f;
    n = r2 *= n;
    r4 = n *= -1.58184934f;
    r5 = n += -2.69254303f;
    n += r1;
    n *= 9.05792713f;
    n *= -0.07741950f;
    n += r4;
    r4 = n *= 0.01516187f;
    n *= r3;
    n = r4 *= n;
    n += 0.14330472f;
    n *= r0;
    n = r2 *= n;
    n *= -8.66304970f;
    n *= 9.24417686f;
    n *= r5;
    n *= r4;
    n += r2;
    n += -0.00000011f;
    n *= -3.79258013f;
    return n;
} // Solution0

// Solution1 result = 0.00000119
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.45320621f;
    r0 = n += -1.40070736f;
    r1 = n += -2.28613687f;
    n *= 0.26157880f;
    n += 1.19601130f;
    n *= -0.11022056f;
    n = r1 *= n;
    r2 = n *= -0.85385227f;
    n *= 2.67140341f;
    n *= -1.38923037f;
    n += 1.68640184f;
    r3 = n += 2.67047453f;
    n = r2 *= n;
    r4 = n *= -3.13629580f;
    r5 = n += -1.57775927f;
    n += r1;
    n *= -0.08802349f;
    n *= 4.62421846f;
    n += r4;
    r4 = n *= 1.76004529f;
    n *= r3;
    n = r4 *= n;
    n += -5.35087776f;
    n *= r0;
    n = r2 *= n;
    n *= 2.98850489f;
    n *= 0.00005670f;
    n *= r5;
    n *= r4;
    n += r2;
    n += -1.21036470f;
    n *= 0.09760400f;
    return n;
} // Solution1

// Solution2 result = 0.00000173
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.42725283f;
    r0 = n += -1.11854470f;
    r1 = n += 0.95376307f;
    n *= -0.70850116f;
    n += 1.35148585f;
    n *= 0.08294225f;
    n = r1 *= n;
    r2 = n *= 0.14819816f;
    n *= 8.16922951f;
    n *= 0.33417940f;
    n += 2.87065005f;
    r3 = n += 3.39789653f;
    n = r2 *= n;
    r4 = n *= -1.20421958f;
    r5 = n += -0.23177215f;
    n += r1;
    n *= 1.86184907f;
    n *= 2.49218512f;
    n += r4;
    r4 = n *= -1.42028594f;
    n *= r3;
    n = r4 *= n;
    n += 8.64791775f;
    n *= r0;
    n = r2 *= n;
    n *= -3.35842490f;
    n *= 0.45616114f;
    n *= r5;
    n *= r4;
    n += r2;
    n += -2.51404405f;
    n *= -0.20827009f;
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
