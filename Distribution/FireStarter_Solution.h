// Run date: 06/23/24 15:52:14 Pacific Daylight Time
// Run duration = 152.301220 seconds
// Run generation = 58
// Run evolution = 2
// Run max result = 0.00002536
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

// Solution0 result = 0.00001422
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.73100102f;
    r0 = n *= 0.16056025f;
    r1 = n *= -1.43948209f;
    r2 = n += 1.61625159f;
    r3 = n *= -0.69682336f;
    n *= -1.83234346f;
    n += r1;
    n *= 3.23547125f;
    r1 = n += -0.04028617f;
    n *= 1.26077795f;
    n *= 0.14786930f;
    n = r3 += n;
    n *= r2;
    n *= -0.15949009f;
    r2 = n *= -0.90019453f;
    r4 = n *= 0.35935533f;
    n *= 2.69097972f;
    n *= 15.70580482f;
    r5 = n += -2.06957603f;
    n += -5.81215429f;
    n *= r2;
    n += r3;
    n += r0;
    r0 = n += 2.02852130f;
    n *= r4;
    n *= -0.39155802f;
    n *= r5;
    n *= 0.69917303f;
    n *= -6.06102848f;
    n *= r1;
    n += -0.00976300f;
    n *= r0;
    return n;
} // Solution0

// Solution1 result = 0.00002536
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.36878586f;
    r0 = n *= -0.33177039f;
    r1 = n *= 0.78535646f;
    r2 = n += 1.19495094f;
    r3 = n *= 0.55323929f;
    n *= 1.64752376f;
    n += r1;
    n *= -1.48859632f;
    r1 = n += 1.75467885f;
    n *= -0.32299945f;
    n *= -1.19867098f;
    n = r3 += n;
    n *= r2;
    n *= -4.04938030f;
    r2 = n *= 0.82532609f;
    r4 = n *= 0.00161651f;
    n *= 12.06577206f;
    n *= 5.63958502f;
    r5 = n += -1.32305634f;
    n += -2.08613801f;
    n *= r2;
    n += r3;
    n += r0;
    r0 = n += 5.89221811f;
    n *= r4;
    n *= 2.80306101f;
    n *= r5;
    n *= 0.45888409f;
    n *= -0.51324415f;
    n *= r1;
    n += -0.01310441f;
    n *= r0;
    return n;
} // Solution1

// Solution2 result = 0.00002321
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.35354877f;
    r0 = n *= 1.01196313f;
    r1 = n *= 1.25801706f;
    r2 = n += 2.58524394f;
    r3 = n *= 0.73807478f;
    n *= 1.32059801f;
    n += r1;
    n *= -0.15890217f;
    r1 = n += 0.50360739f;
    n *= 1.79558587f;
    n *= 2.67906308f;
    n = r3 += n;
    n *= r2;
    n *= 0.04190727f;
    r2 = n *= 0.28405139f;
    r4 = n *= 2.76551938f;
    n *= 0.15348849f;
    n *= 11.68743038f;
    r5 = n += 2.43078113f;
    n += 3.88861871f;
    n *= r2;
    n += r3;
    n += r0;
    r0 = n += 0.53166711f;
    n *= r4;
    n *= 0.18823823f;
    n *= r5;
    n *= -0.52205139f;
    n *= -3.72894907f;
    n *= r1;
    n += 0.15384068f;
    n *= r0;
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
