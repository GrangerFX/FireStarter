// Run date: 07/08/23 12:43:32 Pacific Daylight Time
// Run duration = 2476.975966 seconds
// Run generation = 191
// Run evolution = 0
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.76752758f;
    r0 = n += -1.37406504f;
    r1 = n *= -0.36418471f;
    n *= r1;
    r1 = n += -0.51989365f;
    r2 = n *= -0.99356782f;
    n = r1 += n;
    n *= 0.12000257f;
    n += 0.45915452f;
    r3 = n *= 1.09347379f;
    r4 = n += -2.08629131f;
    n = r3 += n;
    r5 = n *= 1.62093782f;
    r6 = n *= -1.04901969f;
    n = r4 *= n;
    n = r4 += n;
    n = r3 *= n;
    n *= r1;
    r1 = n += -0.20991276f;
    n *= r6;
    n = r0 *= n;
    r6 = n *= -0.19492555f;
    n *= r5;
    n *= r3;
    n *= r6;
    n += r2;
    n += 1.22624111f;
    n *= r0;
    n *= r1;
    n *= r4;
    n += 0.13407968f;
    n += -0.13407966f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.26847947f;
    r0 = n += -2.82218003f;
    r1 = n *= 0.49563742f;
    n *= r1;
    r1 = n += -0.67339271f;
    r2 = n *= 0.52828038f;
    n = r1 += n;
    n *= -0.00046957f;
    n += 0.66955566f;
    r3 = n *= -1.61877823f;
    r4 = n += 1.96656966f;
    n = r3 += n;
    r5 = n *= 1.87462473f;
    r6 = n *= -0.78178310f;
    n = r4 *= n;
    n = r4 += n;
    n = r3 *= n;
    n *= r1;
    r1 = n += 0.79201925f;
    n *= r6;
    n = r0 *= n;
    r6 = n *= -1.15835273f;
    n *= r5;
    n *= r3;
    n *= r6;
    n += r2;
    n += -8.34104347f;
    n *= r0;
    n *= r1;
    n *= r4;
    n += -0.19807093f;
    n += 0.07993860f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.29970098f;
    r0 = n += -1.31829274f;
    r1 = n *= 0.44221234f;
    n *= r1;
    r1 = n += -0.22751519f;
    r2 = n *= -1.20978022f;
    n = r1 += n;
    n *= 0.25346246f;
    n += 0.00293396f;
    r3 = n *= -0.00398256f;
    r4 = n += -0.01847942f;
    n = r3 += n;
    r5 = n *= 0.07341386f;
    r6 = n *= -58191.35937500f;
    n = r4 *= n;
    n = r4 += n;
    n = r3 *= n;
    n *= r1;
    r1 = n += 0.05748811f;
    n *= r6;
    n = r0 *= n;
    r6 = n *= 0.84712505f;
    n *= r5;
    n *= r3;
    n *= r6;
    n += r2;
    n += 0.90730584f;
    n *= r0;
    n *= r1;
    n *= r4;
    n += 0.35771453f;
    n += 0.16588420f;
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
