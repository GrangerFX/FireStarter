// Run date: 07/08/23 17:26:27 Pacific Daylight Time
// Run duration = 447.318909 seconds
// Run generation = 32
// Run evolution = 0
// Run result = 0.00000083
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

// Solution0 result = 0.00000027
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.28255546f;
    r0 = n += -1.85903716f;
    r1 = n *= -0.78754604f;
    n *= r1;
    r1 = n *= -0.06664331f;
    n += 0.29628560f;
    r2 = n += 1.28553462f;
    r3 = n *= 0.58890122f;
    n += -1.63018382f;
    n = r3 *= n;
    n *= 0.41444826f;
    n *= 1.36872792f;
    r4 = n *= 0.18518819f;
    n *= r1;
    n = r4 *= n;
    n *= -1.65220690f;
    n = r2 += n;
    n += 3.51922226f;
    n = r4 += n;
    n *= r0;
    n *= 0.16560155f;
    r0 = n *= 0.28736472f;
    n *= 0.46951807f;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n += -1.89299357f;
    n += 1.45644629f;
    n *= r4;
    n *= r2;
    n += -0.14935121f;
    n += 0.14935119f;
    return n;
} // Solution0

// Solution1 result = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.70789516f;
    r0 = n += -1.38276422f;
    r1 = n *= -0.07563435f;
    n *= r1;
    r1 = n *= 1.15202081f;
    n += -2.20350456f;
    r2 = n += 2.02581787f;
    r3 = n *= 0.30069295f;
    n += 0.00813157f;
    n = r3 *= n;
    n *= 14.78547287f;
    n *= -2.62507725f;
    r4 = n *= 0.33818021f;
    n *= r1;
    n = r4 *= n;
    n *= 3.88559818f;
    n = r2 += n;
    n += -1.04415226f;
    n = r4 += n;
    n *= r0;
    n *= -0.27285844f;
    r0 = n *= -2.22044849f;
    n *= -0.79872227f;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n += -1.39645481f;
    n += -7.17510557f;
    n *= r4;
    n *= r2;
    n += 0.13302265f;
    n += -0.25115481f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.96930528f;
    r0 = n += -1.64868844f;
    r1 = n *= 0.38459906f;
    n *= r1;
    r1 = n *= 0.20358580f;
    n += -1.62908649f;
    r2 = n += 0.06616674f;
    r3 = n *= 1.81090522f;
    n += 1.70294642f;
    n = r3 *= n;
    n *= 0.26880369f;
    n *= 1.85483873f;
    r4 = n *= -0.01751195f;
    n *= r1;
    n = r4 *= n;
    n *= 1.84036648f;
    n = r2 += n;
    n += 0.03699584f;
    n = r4 += n;
    n *= r0;
    n *= -0.80034786f;
    r0 = n *= -0.14055945f;
    n *= 1.86713421f;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n += 0.02929270f;
    n += -1.91181219f;
    n *= r4;
    n *= r2;
    n += 0.80111623f;
    n += -0.27751759f;
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
