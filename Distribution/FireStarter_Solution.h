// Run date: 07/31/22 13:48:25 Pacific Daylight Time
// Run duration = 1.833493 seconds
// Run count = 4
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
// Solution Generation = 15

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

// Precision = 0.03886360

// Solution0 precision = 0.03529227
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.29354933f;
    r1 = n += 0.23590051f;
    n *= -0.59189534f;
    r2 = n *= -0.58737755f;
    n *= -0.13301328f;
    n *= 0.26313472f;
    n = r2 += n;
    r3 = n *= -0.97185940f;
    r4 = n *= -0.35653856f;
    r5 = n += -0.89285320f;
    n = r1 *= n;
    n += -0.18889406f;
    n *= r1;
    r1 = n += -0.40776390f;
    n = r5 += n;
    n = r3 *= n;
    n = r1 += n;
    n += r5;
    r5 = n += -1.28076339f;
    n += -0.58151424f;
    n += -0.91486728f;
    n *= 0.38281786f;
    n += -0.57839483f;
    n *= r0;
    n += r3;
    n = r4 *= n;
    n *= r5;
    n *= 0.79475284f;
    n *= r2;
    n += r4;
    n *= -0.00075852f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.03189367
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.02891457f;
    r1 = n += 1.57511306f;
    n *= -0.97020394f;
    r2 = n *= 0.53750867f;
    n *= -0.16672638f;
    n *= -0.12360089f;
    n = r2 += n;
    r3 = n *= 0.61623412f;
    r4 = n *= -0.30081391f;
    r5 = n += -0.76669955f;
    n = r1 *= n;
    n += -0.31022707f;
    n *= r1;
    r1 = n += 0.65603602f;
    n = r5 += n;
    n = r3 *= n;
    n = r1 += n;
    n += r5;
    r5 = n += 0.21924755f;
    n += 0.19312152f;
    n += 0.75562680f;
    n *= 0.78471214f;
    n += 3.88013792f;
    n *= r0;
    n += r3;
    n = r4 *= n;
    n *= r5;
    n *= 0.05747251f;
    n *= r2;
    n += r4;
    n *= 0.02106547f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.03886360
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.53034061f;
    r1 = n += 0.08355969f;
    n *= 0.93289769f;
    r2 = n *= -0.45859134f;
    n *= -1.74583411f;
    n *= 0.11594800f;
    n = r2 += n;
    r3 = n *= 0.59102368f;
    r4 = n *= 0.81399196f;
    r5 = n += 1.07346606f;
    n = r1 *= n;
    n += 1.10114515f;
    n *= r1;
    r1 = n += -0.89406985f;
    n = r5 += n;
    n = r3 *= n;
    n = r1 += n;
    n += r5;
    r5 = n += -0.32536507f;
    n += -1.53758681f;
    n += 0.47150749f;
    n *= 0.37301952f;
    n += 0.07298823f;
    n *= r0;
    n += r3;
    n = r4 *= n;
    n *= r5;
    n *= 0.00343332f;
    n *= r2;
    n += r4;
    n *= 0.47771093f;
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
