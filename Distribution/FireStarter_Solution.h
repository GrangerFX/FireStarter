// Run date: 07/14/23 11:05:58 Pacific Daylight Time
// Run duration = 1431.847340 seconds
// Run generation = 158
// Run evolution = 0
// Run result = 0.00000143
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    n *= 0.35878190f;
    r0 = n += -1.12714660f;
    r1 = n *= 0.98663020f;
    n *= -0.40299937f;
    n *= 4.75858164f;
    n = r1 *= n;
    n += 0.54351485f;
    r2 = n *= -0.02167061f;
    r3 = n += -0.59369910f;
    r4 = n += 1.38079274f;
    r5 = n += 0.71330732f;
    n *= r5;
    n = r1 += n;
    n *= 0.76037151f;
    r5 = n *= 0.16267927f;
    n = r4 *= n;
    r6 = n *= 0.12981023f;
    n += r3;
    n += r6;
    n = r2 += n;
    n *= r5;
    n = r2 += n;
    r5 = n *= 0.96128041f;
    n *= 1.01326442f;
    n += r5;
    r5 = n *= -1.10490632f;
    n *= r4;
    n += r1;
    n *= r2;
    n *= r5;
    n *= r0;
    n += -0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000143
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.48901874f;
    r0 = n += 1.51139057f;
    r1 = n *= -4.69431543f;
    n *= -0.99667835f;
    n *= 0.01958681f;
    n = r1 *= n;
    n += -11.52806473f;
    r2 = n *= 0.00711960f;
    r3 = n += -1.49691820f;
    r4 = n += 1.62211394f;
    r5 = n += -2.28882957f;
    n *= r5;
    n = r1 += n;
    n *= 0.51306176f;
    r5 = n *= -0.78339112f;
    n = r4 *= n;
    r6 = n *= 2.31702232f;
    n += r3;
    n += r6;
    n = r2 += n;
    n *= r5;
    n = r2 += n;
    r5 = n *= -1.15892887f;
    n *= -1.06960762f;
    n += r5;
    r5 = n *= 1.23248661f;
    n *= r4;
    n += r1;
    n *= r2;
    n *= r5;
    n *= r0;
    n += -0.11813237f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.88652384f;
    r0 = n += 2.32091379f;
    r1 = n *= -1.19288826f;
    n *= -0.12527242f;
    n *= 0.73921978f;
    n = r1 *= n;
    n += 0.18043728f;
    r2 = n *= 0.05026477f;
    r3 = n += 2.07497501f;
    r4 = n += -0.58591032f;
    r5 = n += -0.75380218f;
    n *= r5;
    n = r1 += n;
    n *= 0.68117821f;
    r5 = n *= 0.29090503f;
    n = r4 *= n;
    r6 = n *= 0.52020919f;
    n += r3;
    n += r6;
    n = r2 += n;
    n *= r5;
    n = r2 += n;
    r5 = n *= 0.96902710f;
    n *= 0.74539453f;
    n += r5;
    r5 = n *= 0.15882026f;
    n *= r4;
    n += r1;
    n *= r2;
    n *= r5;
    n *= r0;
    n += 0.52359879f;
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
