// Run date: 03/24/24 09:47:31 Pacific Daylight Time
// Run duration = 20184.961442 seconds
// Run generation = 545
// Run evolution = 13
// Run max result = 0.00000012
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.57807535f;
    r0 = n += -1.81607723f;
    r1 = n *= -1.04882455f;
    n *= r1;
    r1 = n += -2.39478683f;
    n *= -0.02274276f;
    r2 = n *= -55.14857483f;
    n *= -0.00163960f;
    r3 = n += -1.33130085f;
    r4 = n += 1.40511763f;
    r5 = n += 1.40986931f;
    r6 = n *= 0.33907965f;
    n += r1;
    n *= r5;
    n *= r4;
    n *= -0.50469983f;
    r4 = n += 1.58349895f;
    n = r3 *= n;
    n *= -0.13537584f;
    r5 = n += -0.20952021f;
    r1 = n += -2.51625323f;
    n *= r1;
    n *= -0.34229723f;
    n *= r6;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n *= r0;
    n *= r3;
    n *= r5;
    n += 0.39040112f;
    n += -0.39040110f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.32267010f;
    r0 = n += 0.99726313f;
    r1 = n *= 1.92770362f;
    n *= r1;
    r1 = n += -0.74689615f;
    n *= -1.87301838f;
    r2 = n *= 0.25720227f;
    n *= 0.00102030f;
    r3 = n += -0.25567001f;
    r4 = n += 0.15137087f;
    r5 = n += 0.94821000f;
    r6 = n *= -1.46503842f;
    n += r1;
    n *= r5;
    n *= r4;
    n *= 1.23437238f;
    r4 = n += 0.90824032f;
    n = r3 *= n;
    n *= 1.13661611f;
    r5 = n += -0.19976357f;
    r1 = n += -2.76790476f;
    n *= r1;
    n *= 0.32775852f;
    n *= r6;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n *= r0;
    n *= r3;
    n *= r5;
    n += -0.10493001f;
    n += -0.01320186f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.54580218f;
    r0 = n += 1.42890668f;
    r1 = n *= -0.98201478f;
    n *= r1;
    r1 = n += -0.56224120f;
    n *= -5.37565136f;
    r2 = n *= 0.25551635f;
    n *= 0.00678878f;
    r3 = n += 0.31811839f;
    r4 = n += 0.02526343f;
    r5 = n += 1.13926744f;
    r6 = n *= 0.42691770f;
    n += r1;
    n *= r5;
    n *= r4;
    n *= 0.38963038f;
    r4 = n += -1.61049199f;
    n = r3 *= n;
    n *= 0.03790406f;
    r5 = n += -1.05620694f;
    r1 = n += 0.36123404f;
    n *= r1;
    n *= -2.84283566f;
    n *= r6;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n *= r0;
    n *= r3;
    n *= r5;
    n += -0.75311953f;
    n += 1.27671826f;
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
