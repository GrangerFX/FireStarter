// Run date: 11/04/23 19:19:31 Pacific Daylight Time
// Run duration = 21371.834454 seconds
// Run generation = 69
// Run evolution = 14
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.79168183f;
    n += -0.16338190f;
    r1 = n += 1.42734098f;
    n += r1;
    r1 = n *= -0.15837960f;
    n += 1.45304680f;
    n += 0.64664030f;
    n = r0 += n;
    n *= 1.99548590f;
    n += 1.66768551f;
    n *= r1;
    r1 = n *= 0.90154028f;
    n *= 0.02672645f;
    r2 = n += 1.88503623f;
    r3 = n += 0.03053018f;
    r4 = n += -1.28180385f;
    r5 = n *= -2.55692124f;
    n *= 0.23975235f;
    n = r5 *= n;
    n *= r2;
    n *= r4;
    n *= r3;
    r3 = n *= 0.75959700f;
    n += r1;
    n *= r5;
    n = r3 *= n;
    n += -8.18604279f;
    n *= -0.00000001f;
    n += r3;
    n += 0.44210392f;
    n *= r0;
    n += 0.00000046f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.26600581f;
    n += -1.79899275f;
    r1 = n += 0.49611044f;
    n += r1;
    r1 = n *= 0.96235579f;
    n += 0.52754968f;
    n += -0.42437670f;
    n = r0 += n;
    n *= -1.31788969f;
    n += -1.85301459f;
    n *= r1;
    r1 = n *= 0.51760983f;
    n *= -0.01494196f;
    r2 = n += -0.83298171f;
    r3 = n += -0.78580308f;
    r4 = n += 1.10688257f;
    r5 = n *= 0.68040025f;
    n *= -2.10277176f;
    n = r5 *= n;
    n *= r2;
    n *= r4;
    n *= r3;
    r3 = n *= 7.13539743f;
    n += r1;
    n *= r5;
    n = r3 *= n;
    n += 10.14490604f;
    n *= -0.00004056f;
    n += r3;
    n += -0.56411791f;
    n *= r0;
    n += -0.11812810f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.10339095f;
    n += -1.91622078f;
    r1 = n += 1.40628147f;
    n += r1;
    r1 = n *= 1.56257176f;
    n += 1.69172883f;
    n += -1.21467638f;
    n = r0 += n;
    n *= 0.63962728f;
    n += 0.63130718f;
    n *= r1;
    r1 = n *= -2.96154881f;
    n *= -0.07276276f;
    r2 = n += -0.41994956f;
    r3 = n += -1.02064002f;
    r4 = n += -0.74772596f;
    r5 = n *= -0.58679199f;
    n *= -1.13589036f;
    n = r5 *= n;
    n *= r2;
    n *= r4;
    n *= r3;
    r3 = n *= 0.17567508f;
    n += r1;
    n *= r5;
    n = r3 *= n;
    n += 17.55216980f;
    n *= -0.00005989f;
    n += r3;
    n += 0.46405372f;
    n *= r0;
    n += 0.52359837f;
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
