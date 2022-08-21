// Run date: 08/21/22 11:55:50 Pacific Daylight Time
// Run duration = 1.100111 seconds
// Run count = 10
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 17408;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 2;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 20

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

// Precision = 0.01965651

// Solution0 precision = 0.01965651
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.40200388f;
    r0 = n += 0.35832220f;
    r1 = n += 0.39077938f;
    n *= 0.81058365f;
    r2 = n *= 0.61326867f;
    n = r1 *= n;
    r3 = n *= 0.24014793f;
    r4 = n += 0.06268851f;
    r5 = n *= 0.56670946f;
    n *= r5;
    r5 = n *= 0.19340254f;
    n *= -2.08127546f;
    n = r2 += n;
    n = r4 += n;
    n = r4 += n;
    n *= -2.26084638f;
    n *= 0.86169535f;
    n += -0.81903762f;
    n = r3 *= n;
    n *= r2;
    n *= 1.31588519f;
    n += r5;
    n = r3 *= n;
    r5 = n += -0.73541605f;
    n += r5;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r3;
    n *= r4;
    n += -1.06394601f;
    n += 1.86144614f;
    return n;
} // Solution0

// Solution1 precision = 0.01152468
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.33871764f;
    r0 = n += -0.50123411f;
    r1 = n += -0.62791365f;
    n *= 0.37418985f;
    r2 = n *= 0.62924981f;
    n = r1 *= n;
    r3 = n *= -1.03991985f;
    r4 = n += 0.37316120f;
    r5 = n *= 1.00138831f;
    n *= r5;
    r5 = n *= -1.09183240f;
    n *= -1.10586274f;
    n = r2 += n;
    n = r4 += n;
    n = r4 += n;
    n *= 0.64968646f;
    n *= 0.48988277f;
    n += 0.74563926f;
    n = r3 *= n;
    n *= r2;
    n *= 0.77075118f;
    n += r5;
    n = r3 *= n;
    r5 = n += -0.57794791f;
    n += r5;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r3;
    n *= r4;
    n += 0.55820215f;
    n += 0.64150304f;
    return n;
} // Solution1

// Solution2 precision = 0.01701295
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.51362479f;
    r0 = n += 0.49065936f;
    r1 = n += 0.56742841f;
    n *= 0.93985552f;
    r2 = n *= -0.49272141f;
    n = r1 *= n;
    r3 = n *= 0.54646814f;
    r4 = n += 0.02994346f;
    r5 = n *= 0.59711879f;
    n *= r5;
    r5 = n *= 0.68647701f;
    n *= 0.77451682f;
    n = r2 += n;
    n = r4 += n;
    n = r4 += n;
    n *= -0.47214916f;
    n *= -0.20344344f;
    n += 0.47388405f;
    n = r3 *= n;
    n *= r2;
    n *= 0.28483620f;
    n += r5;
    n = r3 *= n;
    r5 = n += 0.64534622f;
    n += r5;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r3;
    n *= r4;
    n += 0.50287551f;
    n += 0.61064160f;
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
