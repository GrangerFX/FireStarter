// Run date: 01/14/24 17:23:45 Pacific Standard Time
// Run duration = 9147.947093 seconds
// Run generation = 12
// Run evolution = 8
// Run max result = 0.00000234
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
// Run tests = 4
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

// Solution0 result = 0.00000234
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.18071747f;
    r0 = n += 0.79185361f;
    r1 = n += -1.64346433f;
    n = r1 *= n;
    r2 = n += 0.84926641f;
    r3 = n += -1.33343196f;
    n *= 1.30303168f;
    n *= -1.64886200f;
    n *= 0.08702222f;
    r4 = n *= 0.02692938f;
    n += -0.41922310f;
    n += -1.93232751f;
    n = r2 *= n;
    n *= 0.07830024f;
    n *= r3;
    n = r1 += n;
    n += -1.93387961f;
    n += r1;
    r1 = n *= -0.78684974f;
    n = r1 *= n;
    n = r1 += n;
    n *= 0.50826210f;
    n = r2 += n;
    n *= r0;
    n *= -0.00025324f;
    n *= 1.08406699f;
    n += r4;
    n *= 0.01204904f;
    n += r2;
    n *= r1;
    n += 1.66421986f;
    n *= -0.59393454f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.09204275f;
    r0 = n += 1.23651195f;
    r1 = n += -0.95204061f;
    n = r1 *= n;
    r2 = n += -1.46003902f;
    r3 = n += 1.42945468f;
    n *= -0.02285920f;
    n *= 0.00000001f;
    n *= 24.60982513f;
    r4 = n *= 5113.15625000f;
    n += 5.38700581f;
    n += 3.81240439f;
    n = r2 *= n;
    n *= 0.18789139f;
    n *= r3;
    n = r1 += n;
    n += 0.36685336f;
    n += r1;
    r1 = n *= 0.76619548f;
    n = r1 *= n;
    n = r1 += n;
    n *= -0.95850325f;
    n = r2 += n;
    n *= r0;
    n *= 1.62323153f;
    n *= -0.38203171f;
    n += r4;
    n *= 1.69381547f;
    n += r2;
    n *= r1;
    n += -0.04550402f;
    n *= 2.59657907f;
    return n;
} // Solution1

// Solution2 result = 0.00000125
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.18975246f;
    r0 = n += 0.16737913f;
    r1 = n += -0.66414988f;
    n = r1 *= n;
    r2 = n += 0.12481590f;
    r3 = n += 0.10186940f;
    n *= -4.60746813f;
    n *= 0.00005986f;
    n *= -0.00006348f;
    r4 = n *= -7.36264944f;
    n += 0.61179417f;
    n += 1.50229096f;
    n = r2 *= n;
    n *= -0.11129913f;
    n *= r3;
    n = r1 += n;
    n += -1.77214575f;
    n += r1;
    r1 = n *= -0.76909387f;
    n = r1 *= n;
    n = r1 += n;
    n *= -0.25111362f;
    n = r2 += n;
    n *= r0;
    n *= -1.75034285f;
    n *= 1.31753433f;
    n += r4;
    n *= 0.65290332f;
    n += r2;
    n *= r1;
    n += -0.38541409f;
    n *= -1.35853612f;
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
