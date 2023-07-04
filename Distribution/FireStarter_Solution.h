// Run date: 07/04/23 14:44:16 Pacific Daylight Time
// Run duration = 667.275234 seconds
// Run generation = 136
// Run evolution = 0
// Run result = 0.00000107
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 2
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
    float r0, r1, r2, r3, r4;

    n *= -0.63189602f;
    r0 = n += 1.98515987f;
    n *= 0.07730748f;
    r1 = n *= 0.34951758f;
    n = r1 += n;
    n *= r0;
    n += -0.44073415f;
    r0 = n += -2.18896365f;
    r2 = n *= 1.92400968f;
    r3 = n *= 0.76860541f;
    n = r2 *= n;
    n *= -0.11344737f;
    r4 = n += -0.48632196f;
    n += -2.15874887f;
    n *= r4;
    n += r3;
    n += -1.81865156f;
    r3 = n += -1.11465454f;
    r4 = n *= 0.10512195f;
    n += -0.44538125f;
    n *= r2;
    n = r1 *= n;
    n *= 14.32435417f;
    n *= 0.00199599f;
    n *= r0;
    n *= -0.00061969f;
    n *= r4;
    n *= -0.00435696f;
    n *= 2.93457079f;
    n += r1;
    n *= r3;
    n += 0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000107
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.31399634f;
    r0 = n += -0.97045583f;
    n *= 0.26758808f;
    r1 = n *= 0.11761056f;
    n = r1 += n;
    n *= r0;
    n += 3.01997089f;
    r0 = n += -3.23375416f;
    r2 = n *= 0.28520927f;
    r3 = n *= 0.19337428f;
    n = r2 *= n;
    n *= -2.10805798f;
    r4 = n += -0.02662273f;
    n += 20288.99609375f;
    n *= r4;
    n += r3;
    n += 1.95289433f;
    r3 = n += -1.90465748f;
    r4 = n *= 0.10492137f;
    n += 1.18937469f;
    n *= r2;
    n = r1 *= n;
    n *= 0.32010081f;
    n *= -0.59968835f;
    n *= r0;
    n *= -2.13476706f;
    n *= r4;
    n *= -1.94705439f;
    n *= 0.32399556f;
    n += r1;
    n *= r3;
    n += -0.11813287f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.33362165f;
    r0 = n += 0.87341940f;
    n *= -0.29302284f;
    r1 = n *= -0.15735924f;
    n = r1 += n;
    n *= r0;
    n += 0.55655974f;
    r0 = n += -1.13198483f;
    r2 = n *= 0.25903359f;
    r3 = n *= 0.26206058f;
    n = r2 *= n;
    n *= -0.21765372f;
    r4 = n += 0.00000000f;
    n += -416649.18750000f;
    n *= r4;
    n += r3;
    n += -9.53568840f;
    r3 = n += 3.38115096f;
    r4 = n *= 0.10551125f;
    n += -45.59219742f;
    n *= r2;
    n = r1 *= n;
    n *= -0.22928531f;
    n *= -1.25656295f;
    n *= r0;
    n *= 0.77449071f;
    n *= r4;
    n *= -0.09100659f;
    n *= 0.20287266f;
    n += r1;
    n *= r3;
    n += 0.52359849f;
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
