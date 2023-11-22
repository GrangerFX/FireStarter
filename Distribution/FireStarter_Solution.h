// Run date: 11/22/23 11:38:09 Pacific Standard Time
// Run duration = 2375.140441 seconds
// Run generation = 38
// Run evolution = 13
// Run result = 0.00000072
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159346f;
    r1 = n *= -0.60984427f;
    r2 = n *= 0.04402832f;
    r3 = n *= -0.94799829f;
    n *= r1;
    n *= -0.04925816f;
    r1 = n += -0.05551969f;
    r4 = n *= 18240.09179688f;
    n *= -0.03741288f;
    n = r2 *= n;
    n = r3 *= n;
    r5 = n += 0.20664637f;
    r6 = n *= -0.08399601f;
    n += -0.09323516f;
    n += -0.05436473f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= -0.28390166f;
    n *= -2.28131795f;
    n *= r0;
    n += r2;
    r2 = n += -0.93416852f;
    r0 = n += 0.99573922f;
    n *= r6;
    n *= r5;
    n *= -0.43682337f;
    n += r0;
    n *= -0.01697341f;
    n += 0.22486657f;
    n += 0.71034777f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065700f;
    r1 = n *= -0.18319501f;
    r2 = n *= -0.15592018f;
    r3 = n *= 0.20035577f;
    n *= r1;
    n *= -1.86288190f;
    r1 = n += -0.15557252f;
    r4 = n *= -2201.29589844f;
    n *= -0.12729695f;
    n = r2 *= n;
    n = r3 *= n;
    r5 = n += 0.17792492f;
    r6 = n *= -1.73638403f;
    n += -0.14536315f;
    n += -1.11880875f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= 1.80820942f;
    n *= -0.11269145f;
    n *= r0;
    n += r2;
    r2 = n += -0.45603845f;
    r0 = n += 0.45940265f;
    n *= r6;
    n *= r5;
    n *= 0.27310321f;
    n += r0;
    n *= -0.11839875f;
    n += 1.45340717f;
    n += -1.11510646f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= 0.12586974f;
    r2 = n *= -0.03566753f;
    r3 = n *= 2.12247968f;
    n *= r1;
    n *= -0.35268125f;
    r1 = n += -0.02892635f;
    r4 = n *= 21903.16992188f;
    n *= -1.72349834f;
    n = r2 *= n;
    n = r3 *= n;
    r5 = n += -0.31790987f;
    r6 = n *= -0.62977922f;
    n += 0.47133178f;
    n += 0.27815172f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= 2.63920546f;
    n *= 0.62244028f;
    n *= r0;
    n += r2;
    r2 = n += 0.39706096f;
    r0 = n += -0.39719349f;
    n *= r6;
    n *= r5;
    n *= 0.01278916f;
    n += r0;
    n *= -0.79666471f;
    n += -0.33488977f;
    n += 0.46132213f;
    n += r2;
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
