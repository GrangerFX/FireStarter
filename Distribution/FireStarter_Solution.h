// Run date: 10/23/22 15:36:04 Pacific Daylight Time
// Run duration = 0.010572 seconds
// Run count = 318
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 2;
// Run processes = 2;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
// Run seed = 3533;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 318

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000495

// Solution0 precision = 0.00000203
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.88424277f;
    r0 = n += -4.02582788f;
    n += -0.00001311f;
    r1 = n *= 0.31897172f;
    n = r1 *= n;
    n *= -6.14922619f;
    n *= -4.39478731f;
    n += 0.67839766f;
    r2 = n *= 0.48675144f;
    n += -8.88074493f;
    n += r2;
    r2 = n *= -0.04281974f;
    r3 = n += 0.91324228f;
    n = r1 += n;
    r4 = n += -0.48287812f;
    n *= -4.42878008f;
    n *= r1;
    r1 = n *= -0.27259508f;
    n += 0.64289480f;
    n *= r4;
    r4 = n *= -0.13717429f;
    n *= -0.10982136f;
    n *= r3;
    n += 2.05942559f;
    n *= r2;
    n += 1.13899958f;
    n *= r1;
    n = r4 *= n;
    n += r4;
    n += -0.11676183f;
    n *= r0;
    n += 0.00000721f;
    return n;
} // Solution0

// Solution1 precision = 0.00000441
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.87737918f;
    r0 = n += 0.78676689f;
    n += -0.00008333f;
    r1 = n *= 0.59475040f;
    n = r1 *= n;
    n *= -0.96653891f;
    n *= -1.04126549f;
    n += -0.41129503f;
    r2 = n *= 0.61350268f;
    n += -1.68618429f;
    n += r2;
    r2 = n *= -0.85598606f;
    r3 = n += 1.12529135f;
    n = r1 += n;
    r4 = n += 0.65692472f;
    n *= 2.53675103f;
    n *= r1;
    r1 = n *= -0.00568557f;
    n += -0.36026090f;
    n *= r4;
    r4 = n *= 0.89532667f;
    n *= 0.01735999f;
    n *= r3;
    n += -0.38952306f;
    n *= r2;
    n += -0.27099967f;
    n *= r1;
    n = r4 *= n;
    n += r4;
    n += -0.47244456f;
    n *= r0;
    n += -0.11807785f;
    return n;
} // Solution1

// Solution2 precision = 0.00000495
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.44940758f;
    r0 = n += -3.06738472f;
    n += -0.00003055f;
    r1 = n *= 0.11791203f;
    n = r1 *= n;
    n *= 0.59193087f;
    n *= 79.80309296f;
    n += -0.31334782f;
    r2 = n *= 0.10370211f;
    n += -0.17554931f;
    n += r2;
    r2 = n *= -0.20459728f;
    r3 = n += 0.80912995f;
    n = r1 += n;
    r4 = n += 0.51742923f;
    n *= -1.36180317f;
    n *= r1;
    r1 = n *= -0.22615720f;
    n += 1.20939195f;
    n *= r4;
    r4 = n *= -0.71706653f;
    n *= -4.62606192f;
    n *= r3;
    n += 0.98731869f;
    n *= r2;
    n += 0.61094975f;
    n *= r1;
    n = r4 *= n;
    n += r4;
    n += 0.08682927f;
    n *= r0;
    n += 0.52361619f;
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
