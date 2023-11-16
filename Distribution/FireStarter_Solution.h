// Run date: 11/15/23 17:59:38 Pacific Standard Time
// Run duration = 43644.130538 seconds
// Run generation = 421
// Run evolution = 20
// Run result = 0.00000064
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.45117927f;
    r0 = n *= -0.64823323f;
    r1 = n *= 1.16266894f;
    n += -0.06817898f;
    r2 = n += 2.61291242f;
    n *= 3.50311065f;
    n += -0.09691749f;
    n += -15.81906223f;
    n += r2;
    r2 = n *= -0.12138408f;
    n += -1.86337554f;
    n = r2 *= n;
    n *= -0.04415628f;
    r3 = n += 0.47832862f;
    n += r1;
    n += 0.15994665f;
    r1 = n *= -0.87033349f;
    n = r0 += n;
    r4 = n += -1.18144333f;
    n = r3 *= n;
    n += -0.13081928f;
    n *= 0.56386071f;
    n = r4 *= n;
    n *= r0;
    n = r3 *= n;
    n *= r2;
    r2 = n += -0.25235742f;
    n = r1 *= n;
    n += r2;
    n *= r4;
    n += r3;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.66601753f;
    r0 = n *= -0.69964647f;
    r1 = n *= 2.51139522f;
    n += -0.60026884f;
    r2 = n += 6.74631405f;
    n *= 2.78353047f;
    n += -1.31270015f;
    n += -33.60783005f;
    n += r2;
    r2 = n *= 0.07903711f;
    n += 2.48120427f;
    n = r2 *= n;
    n *= -0.03739972f;
    r3 = n += 1.09175062f;
    n += r1;
    n += -0.16253933f;
    r1 = n *= -0.39974254f;
    n = r0 += n;
    r4 = n += -0.75987113f;
    n = r3 *= n;
    n += 0.15221913f;
    n *= 0.43022746f;
    n = r4 *= n;
    n *= r0;
    n = r3 *= n;
    n *= r2;
    r2 = n += -0.51635003f;
    n = r1 *= n;
    n += r2;
    n *= r4;
    n += r3;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000064
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.57973111f;
    r0 = n *= -0.48264128f;
    r1 = n *= 1.65594137f;
    n += -1.99824286f;
    r2 = n += 4.54177284f;
    n *= -1.25209582f;
    n += -6.21645308f;
    n += 6.94698668f;
    n += r2;
    r2 = n *= 1.31445479f;
    n += -1.17055464f;
    n = r2 *= n;
    n *= -0.23125193f;
    r3 = n += 0.50997519f;
    n += r1;
    n += 0.21663746f;
    r1 = n *= -0.64702368f;
    n = r0 += n;
    r4 = n += -1.41289091f;
    n = r3 *= n;
    n += -1.42895913f;
    n *= 0.56051189f;
    n = r4 *= n;
    n *= r0;
    n = r3 *= n;
    n *= r2;
    r2 = n += 0.10906173f;
    n = r1 *= n;
    n += r2;
    n *= r4;
    n += r3;
    n += r1;
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
