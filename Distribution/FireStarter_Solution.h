// Run date: 05/14/23 12:00:58 Pacific Daylight Time
// Run duration = 1169.100428 seconds
// Run generation = 268
// Run result = 0.00000030
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 48
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

// Solution0 result = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.51159173f;
    n += 1.60721278f;
    r0 = n *= 1.73222041f;
    n *= -0.30680323f;
    r1 = n *= 1.96965647f;
    n *= 0.93073362f;
    r2 = n *= 0.77991086f;
    n = r2 *= n;
    n += -1.92373669f;
    n += 0.46072745f;
    n *= -0.00744862f;
    r3 = n *= 1.45058537f;
    r4 = n += 0.30238810f;
    n *= r2;
    r2 = n += -2.03742242f;
    r5 = n *= -1.73604727f;
    n += 1.27496350f;
    n *= 0.11060333f;
    n += 1.29463625f;
    n = r3 *= n;
    n *= r3;
    n = r4 += n;
    n *= 0.63626939f;
    n = r1 *= n;
    n *= -1.83447850f;
    n *= r2;
    n *= r1;
    n *= -0.99238050f;
    n += r4;
    n *= r5;
    n *= r0;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.99789220f;
    n += 3.08414388f;
    r0 = n *= -1.43801081f;
    n *= -0.24915761f;
    r1 = n *= -1.46529329f;
    n *= -0.37367499f;
    r2 = n *= -1.48785341f;
    n = r2 *= n;
    n += -0.16297127f;
    n += -0.10337469f;
    n *= 0.03104040f;
    r3 = n *= -0.40151188f;
    r4 = n += 0.46949661f;
    n *= r2;
    r2 = n += -1.78759718f;
    r5 = n *= 0.90627187f;
    n += 0.91555434f;
    n *= 0.81231099f;
    n += 6.24968052f;
    n = r3 *= n;
    n *= r3;
    n = r4 += n;
    n *= 0.92223698f;
    n = r1 *= n;
    n *= 0.28186947f;
    n *= r2;
    n *= r1;
    n *= 1.53277588f;
    n += r4;
    n *= r5;
    n *= r0;
    n += -0.11813165f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.81714976f;
    n += -2.13929296f;
    r0 = n *= 1.15445805f;
    n *= -0.73482555f;
    r1 = n *= -0.27820840f;
    n *= -1.62636650f;
    r2 = n *= -2.66637087f;
    n = r2 *= n;
    n += -1.29357708f;
    n += -5.73339319f;
    n *= -0.14959425f;
    r3 = n *= 0.02012747f;
    r4 = n += 0.22926527f;
    n *= r2;
    r2 = n += -5.55195904f;
    r5 = n *= 0.75957745f;
    n += 12.62296581f;
    n *= -0.06571125f;
    n += 2.00176549f;
    n = r3 *= n;
    n *= r3;
    n = r4 += n;
    n *= -3.17577028f;
    n = r1 *= n;
    n *= 1.64873433f;
    n *= r2;
    n *= r1;
    n *= 0.28650633f;
    n += r4;
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
