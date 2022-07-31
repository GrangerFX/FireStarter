// Run date: 07/31/22 13:21:11 Pacific Daylight Time
// Run duration = 1.419273 seconds
// Run count = 20
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
// Solution Generation = 95

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

// Precision = 0.01465064

// Solution0 precision = 0.01047999
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.29694739f;
    r1 = n += 0.07101052f;
    n *= -0.82162702f;
    r2 = n *= -0.27137423f;
    n *= -0.20493181f;
    n = r2 += n;
    n += r2;
    r2 = n *= -0.96167248f;
    r3 = n *= -0.35908622f;
    r4 = n += -0.89562112f;
    n = r1 *= n;
    n += -0.28874719f;
    n *= r1;
    r1 = n += -0.31712750f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += -0.03155152f;
    n += -0.00247058f;
    r5 = n += -1.07780719f;
    n *= 0.24326754f;
    n += 0.75470537f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= 0.12368822f;
    n *= r5;
    n += r3;
    n *= -0.00320130f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00740355
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.09897935f;
    r1 = n += 1.54369187f;
    n *= -0.83103776f;
    r2 = n *= 0.38866639f;
    n *= -0.18784148f;
    n = r2 += n;
    n += r2;
    r2 = n *= 0.64166200f;
    r3 = n *= -0.30124298f;
    r4 = n += -0.75155914f;
    n = r1 *= n;
    n += -0.53964305f;
    n *= r1;
    r1 = n += 0.62294263f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += -0.45082507f;
    n += -1.02271235f;
    r5 = n += 1.14253795f;
    n *= 0.73939568f;
    n += 5.09687138f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= -0.02336872f;
    n *= r5;
    n += r3;
    n *= 0.01389349f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.01465064
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.50374025f;
    r1 = n += 0.02254368f;
    n *= -0.16539514f;
    r2 = n *= -1.32550120f;
    n *= 0.44258723f;
    n = r2 += n;
    n += r2;
    r2 = n *= -0.33952385f;
    r3 = n *= 0.78943336f;
    r4 = n += 1.09921420f;
    n = r1 *= n;
    n += 1.01204693f;
    n *= r1;
    r1 = n += -0.71626651f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += -1.20331860f;
    n += -1.02258444f;
    r5 = n += 0.54186654f;
    n *= 0.38043076f;
    n += 0.15403698f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= -0.00907397f;
    n *= r5;
    n += r3;
    n *= 0.49117449f;
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
