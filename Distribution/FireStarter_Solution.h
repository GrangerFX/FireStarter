// Run date: 12/02/22 20:15:36 Pacific Standard Time
// Run duration = 35.006832 seconds
// Run count = 7
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 8;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 7

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

// Precision = 0.00023273

// Solution0 precision = 0.00022340
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -7.91920042f;
    r0 = n += 2.63799620f;
    r1 = n *= -0.58791417f;
    r2 = n += 0.94208097f;
    r3 = n += 1.00468791f;
    r4 = n += -0.14373505f;
    r5 = n *= -0.95556402f;
    n += -0.18186438f;
    n *= r1;
    n = r2 += n;
    n += r3;
    n += r4;
    r4 = n += 1.11897695f;
    r3 = n *= -0.04851568f;
    r1 = n *= 0.30905202f;
    r6 = n += -0.59423667f;
    n *= r2;
    n *= -0.07065609f;
    r2 = n += 0.99537081f;
    n = r2 *= n;
    n += -0.59320080f;
    n = r0 += n;
    n += r3;
    n *= r0;
    n *= 0.67624986f;
    n += r5;
    n += r6;
    n *= r2;
    n *= -0.12555306f;
    n += r1;
    n *= r4;
    n *= -0.62934393f;
    return n;
} // Solution0

// Solution1 precision = 0.00023273
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.15985915f;
    r0 = n += -3.41851711f;
    r1 = n *= 0.24576382f;
    r2 = n += 0.54659700f;
    r3 = n += -0.72615188f;
    r4 = n += 0.71258676f;
    r5 = n *= -0.50893462f;
    n += -1.28587615f;
    n *= r1;
    n = r2 += n;
    n += r3;
    n += r4;
    r4 = n += -0.67802411f;
    r3 = n *= 0.23554960f;
    r1 = n *= 1.02488565f;
    r6 = n += 0.21383609f;
    n *= r2;
    n *= -0.94653684f;
    r2 = n += -0.28383616f;
    n = r2 *= n;
    n += -24.93644905f;
    n = r0 += n;
    n += r3;
    n *= r0;
    n *= -0.24669263f;
    n += r5;
    n += r6;
    n *= r2;
    n *= -0.12949237f;
    n += r1;
    n *= r4;
    n *= -0.81581718f;
    return n;
} // Solution1

// Solution2 precision = 0.00018660
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.81023544f;
    r0 = n += -2.24350739f;
    r1 = n *= -0.53823394f;
    r2 = n += -1.33230245f;
    r3 = n += 0.67205572f;
    r4 = n += 1.16052961f;
    r5 = n *= 0.60847872f;
    n += -1.09371305f;
    n *= r1;
    n = r2 += n;
    n += r3;
    n += r4;
    r4 = n += -0.57503259f;
    r3 = n *= 0.86164272f;
    r1 = n *= 0.44479424f;
    r6 = n += -1.20609295f;
    n *= r2;
    n *= -0.03102038f;
    r2 = n += -0.54799062f;
    n = r2 *= n;
    n += -1.30241382f;
    n = r0 += n;
    n += r3;
    n *= r0;
    n *= 1.95187175f;
    n += r5;
    n += r6;
    n *= r2;
    n *= -0.53110826f;
    n += r1;
    n *= r4;
    n *= 0.42952234f;
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
