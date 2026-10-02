// Run date: 01/13/24 22:33:45 Pacific Standard Time
// Run duration = 520.422865 seconds
// Run generation = 8
// Run evolution = 8
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

// Solution0 result = 0.00000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.45568806f;
    n += 1.43158627f;
    n *= -0.91748482f;
    n *= -0.92131478f;
    r0 = n *= -1.00176620f;
    r1 = n *= -0.35594979f;
    r2 = n *= 1.56316435f;
    n = r2 *= n;
    n *= -0.17949742f;
    n += 1.91221011f;
    r3 = n *= 1.70181584f;
    r4 = n += -2.22279739f;
    n = r4 *= n;
    n *= -0.62802249f;
    n *= 0.23230793f;
    n += r2;
    n = r3 *= n;
    n *= -0.03499024f;
    r2 = n += 0.38035542f;
    r5 = n *= -2.87042093f;
    n *= r5;
    n += r2;
    n *= r0;
    r0 = n *= -0.23981829f;
    n *= r3;
    n *= -1.65297186f;
    n *= r4;
    n += -0.04392168f;
    n += r0;
    n += 0.04392167f;
    n *= 2.89837885f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.15912092f;
    n += -0.49178842f;
    n *= -0.09331819f;
    n *= -0.73127776f;
    r0 = n *= 1.24433351f;
    r1 = n *= -0.43138376f;
    r2 = n *= 6.49972916f;
    n = r2 *= n;
    n *= -3.76622057f;
    n += 0.14149751f;
    r3 = n *= 0.59992957f;
    r4 = n += 0.53611666f;
    n = r4 *= n;
    n *= 4.04525185f;
    n *= 0.90084034f;
    n += r2;
    n = r3 *= n;
    n *= 1.15362024f;
    r2 = n += -0.01061560f;
    r5 = n *= -0.48956040f;
    n *= r5;
    n += r2;
    n *= r0;
    r0 = n *= 0.93527764f;
    n *= r3;
    n *= 7873.01464844f;
    n *= r4;
    n += 0.33638573f;
    n += r0;
    n += -0.27152926f;
    n *= -1.82143247f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.68756700f;
    n += 1.80004597f;
    n *= 2.85649133f;
    n *= 0.23354888f;
    r0 = n *= 1.10864615f;
    r1 = n *= -0.27202755f;
    r2 = n *= -0.25090989f;
    n = r2 *= n;
    n *= -76.62652588f;
    n += 0.57411027f;
    r3 = n *= -0.10832609f;
    r4 = n += -1.12449777f;
    n = r4 *= n;
    n *= -1.45740902f;
    n *= -1.21538329f;
    n += r2;
    n = r3 *= n;
    n *= 0.09137176f;
    r2 = n += -0.77100778f;
    r5 = n *= 1.16269410f;
    n *= r5;
    n += r2;
    n *= r0;
    r0 = n *= 0.30464974f;
    n *= r3;
    n *= 1668.02636719f;
    n *= r4;
    n += 0.03754756f;
    n += r0;
    n += -1.28709841f;
    n *= -0.41902944f;
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
