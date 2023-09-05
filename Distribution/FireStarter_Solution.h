// Run date: 09/04/23 17:43:03 Pacific Daylight Time
// Run duration = 11809.096986 seconds
// Run generation = 24
// Run evolution = 9
// Run result = 0.00001442
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 2
// Run processes = 2
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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.36626902f;
    n *= 4.87094116f;
    n += -39.71729660f;
    n *= -0.00000000f;
    r1 = n += 1.77413416f;
    n *= r0;
    n *= 0.40416425f;
    r0 = n += 0.82507700f;
    r2 = n *= 1.10645127f;
    n *= r1;
    n = r2 *= n;
    n += -1.05623484f;
    n += 0.37929645f;
    r1 = n *= 0.88492781f;
    n *= -0.10991197f;
    r3 = n *= 1.44680130f;
    r4 = n += 3.63365746f;
    n *= r3;
    r3 = n += 1.00200975f;
    n += 1.24342668f;
    n *= r4;
    n = r3 += n;
    n += r2;
    n = r0 *= n;
    n *= r1;
    n *= -1.40968060f;
    n += r0;
    n *= r3;
    n *= -1.06240404f;
    n *= -0.01589976f;
    n += -0.01444394f;
    n += 0.01444395f;
    return n;
} // Solution0

// Solution1 result = 0.00000250
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.11739245f;
    n *= -11.35962868f;
    n += -2.06864476f;
    n *= -0.00000002f;
    r1 = n += 1.32014430f;
    n *= r0;
    n *= 0.99479651f;
    r0 = n += -0.47648242f;
    r2 = n *= -1.19406021f;
    n *= r1;
    n = r2 *= n;
    n += -0.65203321f;
    n += 0.22808003f;
    r1 = n *= -1.27459395f;
    n *= -2.43906665f;
    r3 = n *= 0.15076946f;
    r4 = n += -1.14861512f;
    n *= r3;
    r3 = n += 2.22005892f;
    n += 2.06863117f;
    n *= r4;
    n = r3 += n;
    n += r2;
    n = r0 *= n;
    n *= r1;
    n *= 1.11670339f;
    n += r0;
    n *= r3;
    n *= -1.02934015f;
    n *= 0.32427889f;
    n += 1.11858892f;
    n += -1.23672068f;
    return n;
} // Solution1

// Solution2 result = 0.00001442
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.23665196f;
    n *= 11.73439217f;
    n += 18.88714790f;
    n *= 0.00000003f;
    r1 = n += -1.41089284f;
    n *= r0;
    n *= 1.79600263f;
    r0 = n += -1.56992710f;
    r2 = n *= -0.70167571f;
    n *= r1;
    n = r2 *= n;
    n += 2.02471209f;
    n += -0.04632312f;
    r1 = n *= 0.78380948f;
    n *= -1.71012151f;
    r3 = n *= -0.08207391f;
    r4 = n += 0.62130320f;
    n *= r3;
    r3 = n += 0.12832725f;
    n += 1.32469893f;
    n *= r4;
    n = r3 += n;
    n += r2;
    n = r0 *= n;
    n *= r1;
    n *= 0.14102452f;
    n += r0;
    n *= r3;
    n *= 1.03278923f;
    n *= -0.46766040f;
    n += -0.13602282f;
    n += 0.65962130f;
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
