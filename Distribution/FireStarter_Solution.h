// Run date: 10/09/23 12:33:08 Pacific Daylight Time
// Run duration = 12724.495876 seconds
// Run generation = 30
// Run evolution = 5
// Run result = 0.00002980
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
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
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

// Solution0 result = 0.00002636
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.55323398f;
    r1 = n *= -1.64927971f;
    r2 = n += 1.35426474f;
    r3 = n *= 0.04384022f;
    n *= -0.37745073f;
    n += 0.50285292f;
    n *= r2;
    r2 = n *= -1.81849718f;
    n = r1 += n;
    n *= -0.51932627f;
    r4 = n *= 0.64398533f;
    n = r4 += n;
    n += 3.25379109f;
    n += r0;
    n = r3 *= n;
    r0 = n *= 0.59570843f;
    r5 = n += 1.46772087f;
    r6 = n += 2.46132588f;
    n *= r5;
    r5 = n += -1.47825587f;
    n *= r0;
    n *= 0.57771480f;
    n += r3;
    n *= r5;
    n *= r2;
    n += r6;
    n *= -2.07771754f;
    n *= r4;
    n *= r1;
    n *= -1.37015378f;
    n += 0.27598736f;
    n *= -0.07409844f;
    return n;
} // Solution0

// Solution1 result = 0.00001299
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.25919500f;
    r1 = n *= -0.75025809f;
    r2 = n += -0.77069801f;
    r3 = n *= 0.06632860f;
    n *= -1.99067509f;
    n += -0.27480990f;
    n *= r2;
    r2 = n *= 3.53485084f;
    n = r1 += n;
    n *= 1.36522233f;
    r4 = n *= 4.94804955f;
    n = r4 += n;
    n += -1.13217437f;
    n += r0;
    n = r3 *= n;
    r0 = n *= 1.16504037f;
    r5 = n += -1.10614216f;
    r6 = n += 1.23735118f;
    n *= r5;
    r5 = n += 4.65701914f;
    n *= r0;
    n *= -0.11449058f;
    n += r3;
    n *= r5;
    n *= r2;
    n += r6;
    n *= -1.30450261f;
    n *= r4;
    n *= r1;
    n *= 1.69055974f;
    n += -0.34119889f;
    n *= 0.37535736f;
    return n;
} // Solution1

// Solution2 result = 0.00002980
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.00481749f;
    r1 = n *= -0.59198952f;
    r2 = n += 0.85187370f;
    r3 = n *= -0.17923112f;
    n *= -0.05600499f;
    n += -1.41414022f;
    n *= r2;
    r2 = n *= 0.75246698f;
    n = r1 += n;
    n *= 2.01764011f;
    r4 = n *= 1.01421511f;
    n = r4 += n;
    n += -2.33025670f;
    n += r0;
    n = r3 *= n;
    r0 = n *= -0.27355343f;
    r5 = n += 1.01489639f;
    r6 = n += 0.15933603f;
    n *= r5;
    r5 = n += 0.13847241f;
    n *= r0;
    n *= -1.69672346f;
    n += r3;
    n *= r5;
    n *= r2;
    n += r6;
    n *= 3.20769286f;
    n *= r4;
    n *= r1;
    n *= 2.68638206f;
    n += 1.38050282f;
    n *= 0.04058111f;
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
