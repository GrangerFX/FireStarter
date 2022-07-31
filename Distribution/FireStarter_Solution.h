// Run date: 07/31/22 14:39:31 Pacific Daylight Time
// Run duration = 1.587613 seconds
// Run count = 5
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 20

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.02301764

// Solution0 precision = 0.02301764
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.24877806f;
    r1 = n += 0.24237481f;
    n *= -0.59425437f;
    r2 = n *= -0.59262210f;
    n *= -0.14053236f;
    n *= 0.28137383f;
    n = r2 += n;
    r3 = n *= -0.96694916f;
    r4 = n *= -0.35923570f;
    r5 = n += -0.89641094f;
    n = r1 *= n;
    n += -0.19561689f;
    n *= r1;
    r1 = n += -0.40078482f;
    n = r5 += n;
    n = r3 *= n;
    n = r1 += n;
    n += r5;
    r5 = n += -0.88587296f;
    n += 0.33581719f;
    n += -0.94660503f;
    n *= 0.38566533f;
    n += -0.58362126f;
    n *= r0;
    n += r3;
    n = r4 *= n;
    n *= r5;
    n *= 0.79821372f;
    n *= r2;
    n += r4;
    n *= 0.00450235f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.02258229
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.03080606f;
    r1 = n += 1.58364081f;
    n *= -0.95909339f;
    r2 = n *= 0.56157929f;
    n *= -0.52947044f;
    n *= 0.04114551f;
    n = r2 += n;
    r3 = n *= 0.62108666f;
    r4 = n *= -0.30466026f;
    r5 = n += -0.77295268f;
    n = r1 *= n;
    n += -0.33099180f;
    n *= r1;
    r1 = n += 0.62840104f;
    n = r5 += n;
    n = r3 *= n;
    n = r1 += n;
    n += r5;
    r5 = n += 0.20506346f;
    n += 0.13316818f;
    n += 1.06037414f;
    n *= 0.75170833f;
    n += 3.81601334f;
    n *= r0;
    n += r3;
    n = r4 *= n;
    n *= r5;
    n *= 0.05775384f;
    n *= r2;
    n += r4;
    n *= 0.01986673f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.02165149
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.59974533f;
    r1 = n += 0.10415626f;
    n *= 0.93569815f;
    r2 = n *= -0.36412302f;
    n *= -1.32101393f;
    n *= -0.13578509f;
    n = r2 += n;
    r3 = n *= 0.38535440f;
    r4 = n *= 0.80445790f;
    r5 = n += 0.90948683f;
    n = r1 *= n;
    n += 1.13134837f;
    n *= r1;
    r1 = n += -0.88074988f;
    n = r5 += n;
    n = r3 *= n;
    n = r1 += n;
    n += r5;
    r5 = n += -0.24854347f;
    n += -1.94157398f;
    n += 0.00978766f;
    n *= 0.42061374f;
    n += 0.12956683f;
    n *= r0;
    n += r3;
    n = r4 *= n;
    n *= r5;
    n *= -0.08205984f;
    n *= r2;
    n += r4;
    n *= 0.48934621f;
    n += r1;
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
