// Run date: 09/18/22 16:05:17 Pacific Daylight Time
// Run duration = 0.490721 seconds
// Run count = 1693
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 1757;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1693

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

// Precision = 0.00010842

// Solution0 precision = 0.00003475
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14190459f;
    r0 = n *= -0.34398773f;
    r1 = n += -0.00013957f;
    n = r0 *= n;
    n *= 0.34152013f;
    n += 1.77025294f;
    r2 = n += -2.32178998f;
    r3 = n += -5.60136509f;
    r4 = n *= 0.01864833f;
    n *= r0;
    n *= 3.97973466f;
    n += 2.14076567f;
    n *= 0.86478823f;
    r0 = n *= -1.25424647f;
    n = r2 += n;
    n += r0;
    n = r4 *= n;
    n *= r2;
    n *= 0.85196668f;
    n += 0.65670317f;
    n = r4 *= n;
    n += r4;
    n = r1 *= n;
    n *= -1.15003169f;
    n = r3 *= n;
    n *= r3;
    n += -0.22387750f;
    n *= 0.00014611f;
    n = r1 += n;
    n += -140.16007996f;
    n *= 0.02167093f;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00003421
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.07648826f;
    r0 = n *= 0.21019010f;
    r1 = n += -0.00390124f;
    n = r0 *= n;
    n *= 0.40043154f;
    n += -0.47148666f;
    r2 = n += -0.99309856f;
    r3 = n += 0.92734963f;
    r4 = n *= -0.94613028f;
    n *= r0;
    n *= -2.81959200f;
    n += 4.51457739f;
    n *= -0.04067722f;
    r0 = n *= 0.09011605f;
    n = r2 += n;
    n += r0;
    n = r4 *= n;
    n *= r2;
    n *= 0.24826406f;
    n += -0.03509347f;
    n = r4 *= n;
    n += r4;
    n = r1 *= n;
    n *= 0.87378794f;
    n = r3 *= n;
    n *= r3;
    n += -0.08890936f;
    n *= 0.09855600f;
    n = r1 += n;
    n += -35.53271866f;
    n *= -0.39489192f;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00010842
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61792350f;
    r0 = n *= 0.41149563f;
    r1 = n += -0.00004802f;
    n = r0 *= n;
    n *= 0.15114659f;
    n += 0.50230426f;
    r2 = n += -2.64399123f;
    r3 = n += 2.01415038f;
    r4 = n *= 0.49051780f;
    n *= r0;
    n *= 0.02489801f;
    n += -0.12135366f;
    n *= 2.01359582f;
    r0 = n *= -0.92407787f;
    n = r2 += n;
    n += r0;
    n = r4 *= n;
    n *= r2;
    n *= 0.27262983f;
    n += -0.12219663f;
    n = r4 *= n;
    n += r4;
    n = r1 *= n;
    n *= -3.26204538f;
    n = r3 *= n;
    n *= r3;
    n += -0.02749273f;
    n *= -0.29404524f;
    n = r1 += n;
    n += 24.36990166f;
    n *= 2.65635586f;
    n *= r1;
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
