// Run date: 03/17/24 00:00:27 Pacific Daylight Time
// Run duration = 18139.191196 seconds
// Run generation = 703
// Run evolution = 14
// Run max result = 0.00000155
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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

// Solution0 result = 0.00000155
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.56012058f;
    r1 = n *= 0.46945345f;
    n *= 0.68946129f;
    r2 = n += -0.46289685f;
    n *= -0.58532685f;
    n *= -0.29588777f;
    r3 = n *= 3.56073189f;
    n = r3 += n;
    r4 = n *= -1.17023110f;
    n = r4 += n;
    n = r1 += n;
    n *= r2;
    r2 = n *= -0.47029537f;
    r5 = n *= -0.00145476f;
    n *= 33.59324646f;
    n += 0.87139809f;
    r6 = n *= 0.58649832f;
    n *= 3.89360070f;
    n *= -0.34552959f;
    n += r2;
    n = r6 *= n;
    r2 = n += -1.66293097f;
    n += -1.83131194f;
    n *= r6;
    n = r5 += n;
    n *= r5;
    n *= r2;
    n += r1;
    n += r3;
    n += r0;
    n += r4;
    n *= 0.47584385f;
    return n;
} // Solution0

// Solution1 result = 0.00000066
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.41317868f;
    r1 = n *= -0.76027787f;
    n *= 0.18021043f;
    r2 = n += 0.49703550f;
    n *= -154.81288147f;
    n *= -0.03548832f;
    r3 = n *= 0.04468291f;
    n = r3 += n;
    r4 = n *= 2.85591412f;
    n = r4 += n;
    n = r1 += n;
    n *= r2;
    r2 = n *= -0.69410217f;
    r5 = n *= -0.00427692f;
    n *= 1.60718811f;
    n += -0.22714965f;
    r6 = n *= 1.26057398f;
    n *= 2.92643189f;
    n *= -1.43936324f;
    n += r2;
    n = r6 *= n;
    r2 = n += -1.74183226f;
    n += -2.10401320f;
    n *= r6;
    n = r5 += n;
    n *= r5;
    n *= r2;
    n += r1;
    n += r3;
    n += r0;
    n += r4;
    n *= 0.33556446f;
    return n;
} // Solution1

// Solution2 result = 0.00000131
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.96569848f;
    r1 = n *= -0.12203144f;
    n *= 3.56615734f;
    r2 = n += 1.42488062f;
    n *= -0.00181564f;
    n *= 0.12384319f;
    r3 = n *= 2380.92431641f;
    n = r3 += n;
    r4 = n *= -0.55413276f;
    n = r4 += n;
    n = r1 += n;
    n *= r2;
    r2 = n *= 0.42903376f;
    r5 = n *= 0.00306875f;
    n *= -10.74511051f;
    n += 0.68509817f;
    r6 = n *= 0.59928477f;
    n *= 1.15114164f;
    n *= -1.76850533f;
    n += r2;
    n = r6 *= n;
    r2 = n += -1.55796635f;
    n += -1.76109242f;
    n *= r6;
    n = r5 += n;
    n *= r5;
    n *= r2;
    n += r1;
    n += r3;
    n += r0;
    n += r4;
    n *= 0.64285326f;
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
