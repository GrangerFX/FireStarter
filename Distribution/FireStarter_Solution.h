// Run date: 04/17/23 12:09:45 Pacific Daylight Time
// Run duration = 815.478402 seconds
// Run generation = 388
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159250f;
    r1 = n *= -0.36071429f;
    n = r0 *= n;
    r2 = n += 0.77854860f;
    r3 = n += 1.68774271f;
    n = r0 += n;
    r4 = n *= 0.00075751f;
    n *= -9.30451488f;
    n += r4;
    r4 = n *= -1.80794239f;
    n += 1.13346803f;
    r5 = n *= 0.37154415f;
    n *= -2.17997527f;
    n *= r3;
    n = r5 *= n;
    n += 2.15913129f;
    n += -1.02370596f;
    n = r5 *= n;
    r3 = n *= 0.03914636f;
    n *= 2.65700388f;
    n += r3;
    n += r2;
    n += r4;
    r4 = n *= -0.22733410f;
    n += 2.51398730f;
    n *= r4;
    n += r5;
    n += r0;
    n += 2.10659862f;
    n *= r1;
    n *= 0.68951082f;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065843f;
    r1 = n *= 0.10685849f;
    n = r0 *= n;
    r2 = n += -3.55794954f;
    r3 = n += 3.00566435f;
    n = r0 += n;
    r4 = n *= 0.00751503f;
    n *= 6.39884424f;
    n += r4;
    r4 = n *= 0.76019448f;
    n += -0.74981970f;
    r5 = n *= 0.22956252f;
    n *= -0.10805012f;
    n *= r3;
    n = r5 *= n;
    n += -21.01631355f;
    n += 2.00838900f;
    n = r5 *= n;
    r3 = n *= -3.68379664f;
    n *= -7.00423288f;
    n += r3;
    n += r2;
    n += r4;
    r4 = n *= -2.58187175f;
    n += 4.63957024f;
    n *= r4;
    n += r5;
    n += r0;
    n += 1.54851413f;
    n *= r1;
    n *= -0.05696119f;
    n += -0.11813166f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= -0.10415965f;
    n = r0 *= n;
    r2 = n += -0.10756470f;
    r3 = n += 0.69334173f;
    n = r0 += n;
    r4 = n *= 2.16744590f;
    n *= 3.70200515f;
    n += r4;
    r4 = n *= 0.00208928f;
    n += 1.15094995f;
    r5 = n *= -1.34154081f;
    n *= -1.04910123f;
    n *= r3;
    n = r5 *= n;
    n += -15.23386478f;
    n += -1.56346071f;
    n = r5 *= n;
    r3 = n *= 6.60335684f;
    n *= -1.08972299f;
    n += r3;
    n += r2;
    n += r4;
    r4 = n *= 0.22244549f;
    n += 1.61379778f;
    n *= r4;
    n += r5;
    n += r0;
    n += -1.76913846f;
    n *= r1;
    n *= 0.28636208f;
    n += 0.52359873f;
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
