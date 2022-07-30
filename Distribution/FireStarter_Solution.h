// Run date: 07/30/22 11:47:45 Pacific Daylight Time
// Run duration = 1.942314 seconds
// Run count = 52
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
// Solution Generation = 255

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

// Precision = 0.00888427

// Solution0 precision = 0.00886297
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 0.28995773f;
    r1 = n += 0.07227947f;
    n *= 0.58732939f;
    r2 = n *= 0.56162316f;
    n *= 0.23190637f;
    n *= -0.13713066f;
    n += r2;
    r2 = n *= -1.07312620f;
    r3 = n *= -0.35969415f;
    r4 = n += -0.90031821f;
    n = r1 *= n;
    n += -0.26811624f;
    n *= r1;
    r1 = n += -0.30600637f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    n += -0.26226357f;
    n += -1.91959119f;
    r4 = n += -1.10183382f;
    n *= -0.14235209f;
    n += -0.06797273f;
    n *= r0;
    n += r2;
    r2 = n *= -0.00239203f;
    n += -0.57068002f;
    n *= 0.59344840f;
    n *= r4;
    n += r3;
    n *= r2;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00693119
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -1.08931339f;
    r1 = n += 1.53724980f;
    n *= 0.91608673f;
    r2 = n *= -0.55858731f;
    n *= 0.05204157f;
    n *= 0.23452309f;
    n += r2;
    r2 = n *= 0.64987564f;
    r3 = n *= -0.30192089f;
    r4 = n += -0.75125021f;
    n = r1 *= n;
    n += -0.54516035f;
    n *= r1;
    r1 = n += 0.62072217f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    n += -1.10191095f;
    n += -0.19220442f;
    r4 = n += 1.42179143f;
    n *= 0.62632543f;
    n += 4.79686546f;
    n *= r0;
    n += r2;
    r2 = n *= 0.01236780f;
    n += -0.39298213f;
    n *= -0.05834230f;
    n *= r4;
    n += r3;
    n *= r2;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00888427
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 0.50372350f;
    r1 = n += 0.01591485f;
    n *= 0.76510358f;
    r2 = n *= -1.61743748f;
    n *= -0.11097101f;
    n *= 1.44826007f;
    n += r2;
    r2 = n *= 0.21365169f;
    r3 = n *= 0.75819236f;
    r4 = n += 1.09322906f;
    n = r1 *= n;
    n += 1.02178752f;
    n *= r1;
    r1 = n += -0.69501913f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    n += -1.56946719f;
    n += -0.59090763f;
    r4 = n += 0.51894850f;
    n *= 0.37534904f;
    n += 0.13420705f;
    n *= r0;
    n += r2;
    r2 = n *= 0.48857221f;
    n += 3.01128125f;
    n *= 0.00741937f;
    n *= r4;
    n += r3;
    n *= r2;
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
