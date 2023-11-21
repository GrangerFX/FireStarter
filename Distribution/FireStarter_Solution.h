// Run date: 11/19/23 23:44:15 Pacific Standard Time
// Run duration = 66377.765893 seconds
// Run generation = 42
// Run evolution = 13
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
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
    float r0, r1, r2, r3, r4;

    n *= -0.31406009f;
    r0 = n += 0.98664898f;
    n *= -0.56638533f;
    n *= -0.64596897f;
    r1 = n += -0.00000005f;
    n = r0 *= n;
    n += -0.97790504f;
    n += -7.04175043f;
    r2 = n *= 0.00226955f;
    r3 = n += 1.85522199f;
    n += 3.75035667f;
    n += -1.29297185f;
    n = r0 *= n;
    r4 = n += -1.52979696f;
    n += 0.98255360f;
    n *= r2;
    r2 = n *= 2.65125084f;
    n += r2;
    n = r3 += n;
    n *= r0;
    r0 = n *= 0.04027895f;
    n *= 0.45002824f;
    n += -0.46790814f;
    n *= r3;
    n = r0 += n;
    n = r0 += n;
    n *= r4;
    n *= r0;
    n *= r1;
    n += 0.29332492f;
    n *= -1.81886542f;
    n += 0.53351867f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.63151437f;
    r0 = n += -1.95178699f;
    n *= -0.32397416f;
    n *= -1.21508896f;
    r1 = n += -0.00000469f;
    n = r0 *= n;
    n += -5.44670820f;
    n += 5.06132412f;
    r2 = n *= -0.00040601f;
    r3 = n += 0.93640119f;
    n += 0.73865575f;
    n += -1.52030671f;
    n = r0 *= n;
    r4 = n += -1.21929085f;
    n += -1.91796422f;
    n *= r2;
    r2 = n *= -6.03982735f;
    n += r2;
    n = r3 += n;
    n *= r0;
    r0 = n *= -0.44549951f;
    n *= -4.01320219f;
    n += -0.70803905f;
    n *= r3;
    n = r0 += n;
    n = r0 += n;
    n *= r4;
    n *= r0;
    n *= r1;
    n += -0.05039263f;
    n *= 2.03731608f;
    n += -0.01547244f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.68536925f;
    r0 = n += -1.79429317f;
    n *= -0.26302046f;
    n *= 1.75638223f;
    r1 = n += -0.00000050f;
    n = r0 *= n;
    n += 3.00635886f;
    n += -1.52508259f;
    r2 = n *= -0.01350302f;
    r3 = n += -1.19327843f;
    n += 0.46803993f;
    n += 0.34142476f;
    n = r0 *= n;
    r4 = n += -0.42088023f;
    n += 2.12894440f;
    n *= r2;
    r2 = n *= -0.02498425f;
    n += r2;
    n = r3 += n;
    n *= r0;
    r0 = n *= 0.50759977f;
    n *= 2.14152551f;
    n += 1.88559532f;
    n *= r3;
    n = r0 += n;
    n = r0 += n;
    n *= r4;
    n *= r0;
    n *= r1;
    n += -1.18574381f;
    n *= -0.35946140f;
    n += 0.09737006f;
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
