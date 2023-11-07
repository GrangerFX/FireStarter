// Run date: 11/06/23 12:37:45 Pacific Standard Time
// Run duration = 12595.557613 seconds
// Run generation = 10
// Run evolution = 5
// Run result = 0.00000161
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
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.79457736f;
    r0 = n += 2.49623823f;
    r1 = n *= -1.15862703f;
    n *= 0.42768458f;
    r2 = n *= -1.47457254f;
    r3 = n *= 0.40774861f;
    r4 = n *= 0.12931646f;
    n = r0 *= n;
    r5 = n += -0.24007772f;
    n += -1.53411400f;
    n += 1.20598221f;
    n = r0 *= n;
    n = r4 *= n;
    r6 = n *= 2.29016113f;
    n += r2;
    n *= -0.36166209f;
    n *= r3;
    n += 1.89929938f;
    n *= 1.26471353f;
    n *= 0.88552064f;
    n = r0 += n;
    n *= r0;
    n = r5 *= n;
    n *= -0.66204727f;
    n *= -0.34159091f;
    n += r4;
    n *= r6;
    r6 = n *= 0.01007564f;
    n += r6;
    n += r1;
    n *= r5;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000119
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.73553920f;
    r0 = n += -2.27329993f;
    r1 = n *= 0.40104711f;
    n *= -0.22955821f;
    r2 = n *= -2.28885412f;
    r3 = n *= 1.00511479f;
    r4 = n *= 0.19499502f;
    n = r0 *= n;
    r5 = n += -1.45480824f;
    n += 0.62505978f;
    n += 0.00482817f;
    n = r0 *= n;
    n = r4 *= n;
    r6 = n *= 0.39888725f;
    n += r2;
    n *= -1.57820714f;
    n *= r3;
    n += 1.05959678f;
    n *= 1.75437832f;
    n *= 0.86124969f;
    n = r0 += n;
    n *= r0;
    n = r5 *= n;
    n *= -0.35431954f;
    n *= 3.45379806f;
    n += r4;
    n *= r6;
    r6 = n *= 0.02112119f;
    n += r6;
    n += r1;
    n *= r5;
    n += -0.11813085f;
    return n;
} // Solution1

// Solution2 result = 0.00000161
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.47834960f;
    r0 = n += -1.25231588f;
    r1 = n *= -1.71917915f;
    n *= 0.24647166f;
    r2 = n *= -1.50597930f;
    r3 = n *= 0.24028900f;
    r4 = n *= -1.07935202f;
    n = r0 *= n;
    r5 = n += 0.18871552f;
    n += 0.46187672f;
    n += 0.11391144f;
    n = r0 *= n;
    n = r4 *= n;
    r6 = n *= -0.32278967f;
    n += r2;
    n *= -1.56922805f;
    n *= r3;
    n += 1.09011769f;
    n *= -2.10998511f;
    n *= -1.10359907f;
    n = r0 += n;
    n *= r0;
    n = r5 *= n;
    n *= -3.05515504f;
    n *= -0.92686480f;
    n += r4;
    n *= r6;
    r6 = n *= -0.01169693f;
    n += r6;
    n += r1;
    n *= r5;
    n += 0.52359867f;
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
