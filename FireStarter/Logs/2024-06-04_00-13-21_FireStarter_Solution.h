// Run date: 06/04/24 00:13:21 Pacific Daylight Time
// Run duration = 21483.551664 seconds
// Run generation = 324
// Run evolution = 9
// Run max result = 0.00000027
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
// Run evolveSeed = 4
// Run optimizeSeed = 0
// Run tests = 16
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

// Solution0 result = 0.00000027
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.28220117f;
    n *= 1.39918625f;
    n *= 0.88233358f;
    n += -2.29551268f;
    r0 = n *= 0.51176763f;
    n += 0.00000204f;
    r1 = n *= -1.14520597f;
    n *= r0;
    n *= 0.19399446f;
    r0 = n += 0.87525576f;
    r2 = n += -0.64635205f;
    n = r2 += n;
    n *= 0.18194139f;
    r3 = n += 0.03569034f;
    n *= 0.74479640f;
    n += 0.92263973f;
    n += -0.41585231f;
    r4 = n *= 0.48496380f;
    n *= 3.02119493f;
    n += 6.68078613f;
    n *= r2;
    n *= 5.95221901f;
    n *= -0.00021488f;
    n += -0.51067317f;
    n *= r3;
    r3 = n += -0.99724871f;
    n = r3 *= n;
    n += r4;
    n *= r3;
    n *= r1;
    n *= r0;
    n += 0.00000093f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.29282606f;
    n *= 0.28950125f;
    n *= -1.21817899f;
    n += 1.54589558f;
    r0 = n *= -1.63091373f;
    n += -0.00000723f;
    r1 = n *= 0.21557261f;
    n *= r0;
    n *= 0.31796956f;
    r0 = n += -1.01374340f;
    r2 = n += 0.85669053f;
    n = r2 += n;
    n *= -3.70353174f;
    r3 = n += -0.66094118f;
    n *= 0.05695595f;
    n += 9.54679680f;
    n += -0.73273653f;
    r4 = n *= 0.91670197f;
    n *= 1.00891721f;
    n += -1.63809919f;
    n *= r2;
    n *= 0.00007433f;
    n *= 6.29305267f;
    n += -0.22886968f;
    n *= r3;
    r3 = n += -0.86677575f;
    n = r3 *= n;
    n += r4;
    n *= r3;
    n *= r1;
    n *= r0;
    n += -0.11813596f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.38120770f;
    n *= -1.05107796f;
    n *= -1.58917761f;
    n += -2.06586385f;
    r0 = n *= -1.39077854f;
    n += 0.00000205f;
    r1 = n *= -0.29644728f;
    n *= r0;
    n *= -0.16292351f;
    r0 = n += -1.29889619f;
    r2 = n += 0.77012372f;
    n = r2 += n;
    n *= -0.12925403f;
    r3 = n += 0.62555194f;
    n *= 2.63873839f;
    n += 3.39514589f;
    n += 5.21155834f;
    r4 = n *= -0.00769273f;
    n *= -5.04266214f;
    n += 0.86440760f;
    n *= r2;
    n *= -0.00161309f;
    n *= -1.17539060f;
    n += -0.31459275f;
    n *= r3;
    r3 = n += -0.80656070f;
    n = r3 *= n;
    n += r4;
    n *= r3;
    n *= r1;
    n *= r0;
    n += 0.52359837f;
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
