// Run date: 07/24/22 17:55:22 Pacific Daylight Time
// Run duration = 2.238362 seconds
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

// Run mode = FIRESTARTER_OPTIMIZE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 400

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

// Precision = 0.00070843

// Solution0 precision = 0.00070843
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.20192355f;
    n *= 0.95273465f;
    r0 = n += -1.97139573f;
    r1 = n += 0.80638617f;
    n = r1 *= n;
    n += -0.39226201f;
    r2 = n += -0.70339501f;
    n += r0;
    r0 = n += 0.43336588f;
    n = r1 += n;
    r3 = n += 0.16028264f;
    n += -1.17163157f;
    r4 = n *= -0.15204865f;
    n += -1.32086515f;
    r5 = n *= 1.12860000f;
    n *= r2;
    n += 0.50574023f;
    n *= r1;
    n += r4;
    n *= 0.46423480f;
    n += 0.78764683f;
    n += -0.84861243f;
    n += 0.50493455f;
    n = r0 += n;
    n = r0 *= n;
    n += r5;
    n *= r3;
    n += -0.80084646f;
    n += -0.31527263f;
    n += r0;
    n += 1.11101329f;
    n += -0.39184481f;
    return n;
} // Solution0

// Solution1 precision = 0.00024998
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.15523583f;
    n *= 0.73967987f;
    r0 = n += -1.26252198f;
    r1 = n += -0.56514621f;
    n = r1 *= n;
    n += -0.75112265f;
    r2 = n += -3.93731332f;
    n += r0;
    r0 = n += -0.51242065f;
    n = r1 += n;
    r3 = n += 0.68200892f;
    n += -0.64372373f;
    r4 = n *= -0.22879587f;
    n += -0.77579403f;
    r5 = n *= 0.49956885f;
    n *= r2;
    n += -0.42482668f;
    n *= r1;
    n += r4;
    n *= 0.74698663f;
    n += 0.91999805f;
    n += 1.17049313f;
    n += 0.20341310f;
    n = r0 += n;
    n = r0 *= n;
    n += r5;
    n *= r3;
    n += 1.23361135f;
    n += 1.15355980f;
    n += r0;
    n += -0.81383485f;
    n += -1.72016835f;
    return n;
} // Solution1

// Solution2 precision = 0.00056618
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.96478117f;
    n *= 0.22300217f;
    r0 = n += -0.65301657f;
    r1 = n += 1.40058839f;
    n = r1 *= n;
    n += -0.47928426f;
    r2 = n += -0.58268601f;
    n += r0;
    r0 = n += 0.91901988f;
    n = r1 += n;
    r3 = n += -0.49473161f;
    n += 1.48920083f;
    r4 = n *= 0.08157155f;
    n += 0.89504963f;
    r5 = n *= -2.20770025f;
    n *= r2;
    n += 0.15513803f;
    n *= r1;
    n += r4;
    n *= -0.58319688f;
    n += 1.05219531f;
    n += -0.11901073f;
    n += 0.38012609f;
    n = r0 += n;
    n = r0 *= n;
    n += r5;
    n *= r3;
    n += 0.55237013f;
    n += 0.69278538f;
    n += r0;
    n += -2.04612756f;
    n += -0.07884676f;
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
