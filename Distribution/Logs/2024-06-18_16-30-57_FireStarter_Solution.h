// Run date: 06/18/24 16:30:57 Pacific Daylight Time
// Run duration = 1566.691692 seconds
// Run generation = 43
// Run evolution = 6
// Run max result = 0.00002289
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
// Run tests = 16
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

// Solution0 result = 0.00001353
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 1.67230535f;
    r1 = n *= -1.10074961f;
    n *= 0.26453188f;
    r2 = n += 1.48892951f;
    n *= -3.57498479f;
    n += -7.85264015f;
    r3 = n *= 0.00018990f;
    n *= -0.70232207f;
    n += 0.26826623f;
    n = r2 *= n;
    n += r3;
    r3 = n *= -1.30242026f;
    n = r3 *= n;
    n *= -7.78455877f;
    n += 7.78468227f;
    n = r3 *= n;
    n += -3.74608135f;
    r4 = n *= 0.21674022f;
    n += -2.95498896f;
    n += r0;
    n += -3.99597168f;
    n *= r2;
    r2 = n *= -0.83214664f;
    n += r1;
    n *= r4;
    n *= r2;
    r2 = n *= -1.20044196f;
    n *= -0.51756471f;
    n *= r3;
    n += 0.29285541f;
    n += r2;
    n *= -1.00735343f;
    return n;
} // Solution0

// Solution1 result = 0.00001958
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 0.58261055f;
    r1 = n *= 0.60844719f;
    n *= 0.17391749f;
    r2 = n += -1.20568287f;
    n *= 1.24102640f;
    n += 0.99946952f;
    r3 = n *= -1.12983239f;
    n *= -0.35150900f;
    n += 0.60883135f;
    n = r2 *= n;
    n += r3;
    r3 = n *= 0.71263021f;
    n = r3 *= n;
    n *= -0.82445771f;
    n += -1.67653298f;
    n = r3 *= n;
    n += 0.21339777f;
    r4 = n *= 4.67936182f;
    n += -1.71695387f;
    n += r0;
    n += 2.75783634f;
    n *= r2;
    r2 = n *= 3.00406790f;
    n += r1;
    n *= r4;
    n *= r2;
    r2 = n *= 2.22580194f;
    n *= 0.92724639f;
    n *= r3;
    n += -6.18551207f;
    n += r2;
    n *= 0.03318414f;
    return n;
} // Solution1

// Solution2 result = 0.00002289
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -0.45612872f;
    r1 = n *= -2.26276398f;
    n *= 0.45133311f;
    r2 = n += 1.85718369f;
    n *= 2.15994358f;
    n += 6.28032732f;
    r3 = n *= 0.00030015f;
    n *= -4.30769253f;
    n += -0.43258896f;
    n = r2 *= n;
    n += r3;
    r3 = n *= -0.33817482f;
    n = r3 *= n;
    n *= -2.03061700f;
    n += 4.02692270f;
    n = r3 *= n;
    n += -3.17979407f;
    r4 = n *= 1.23386633f;
    n += 0.08538985f;
    n += r0;
    n += -1.60946107f;
    n *= r2;
    r2 = n *= 0.13505235f;
    n += r1;
    n *= r4;
    n *= r2;
    r2 = n *= -0.18920270f;
    n *= -0.52101398f;
    n *= r3;
    n += -0.64074284f;
    n += r2;
    n *= -1.33499169f;
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
