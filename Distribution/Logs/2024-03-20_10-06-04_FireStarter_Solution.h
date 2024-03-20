// Run date: 03/20/24 10:06:04 Pacific Daylight Time
// Run duration = 1417.391635 seconds
// Run generation = 94
// Run evolution = 7
// Run max result = 0.00000027
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 8
// Run units = 1
// Run states = 16
// Run generations = 0
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159250f;
    r0 = n *= 0.40138438f;
    r1 = n *= -0.00231683f;
    n *= -105218.96093750f;
    n = r1 *= n;
    n += 4.83569670f;
    n *= -0.23488067f;
    r2 = n *= -0.89978391f;
    r3 = n *= -0.64235008f;
    r4 = n *= 1.11722386f;
    r5 = n *= 1.15983820f;
    n = r2 *= n;
    n *= 1.68312716f;
    n += 1.70022428f;
    n += r5;
    r5 = n *= 0.03343694f;
    r6 = n += -0.16722067f;
    n *= r6;
    r6 = n *= -9.12471867f;
    n *= -4.09535885f;
    n *= r3;
    n += r5;
    n *= r1;
    n *= 1.67891347f;
    n += r6;
    n += r2;
    n *= r4;
    n *= r0;
    r0 = n *= -1.42610729f;
    n += r0;
    n += -0.07685925f;
    n += 0.07685932f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065843f;
    r0 = n *= -0.49010938f;
    r1 = n *= 0.73101759f;
    n *= -0.19675235f;
    n = r1 *= n;
    n += 0.69738013f;
    n *= 1.36694610f;
    r2 = n *= -1.33694220f;
    r3 = n *= 1.19092822f;
    r4 = n *= 1.18305504f;
    r5 = n *= 2.52750635f;
    n = r2 *= n;
    n *= 0.74307585f;
    n += 0.63152772f;
    n += r5;
    r5 = n *= 3.67562604f;
    r6 = n += 0.82542318f;
    n *= r6;
    r6 = n *= 0.00297330f;
    n *= 0.91632348f;
    n *= r3;
    n += r5;
    n *= r1;
    n *= 0.12068725f;
    n += r6;
    n += r2;
    n *= r4;
    n *= r0;
    r0 = n *= -0.10775903f;
    n += r0;
    n += -0.10346786f;
    n += -0.01466379f;
    return n;
} // Solution1

// Solution2 result = 0.00000027
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= 0.07727408f;
    r1 = n *= 0.02367216f;
    n *= 23933.17187500f;
    n = r1 *= n;
    n += -0.39907670f;
    n *= 0.91697091f;
    r2 = n *= 0.22705287f;
    r3 = n *= 1.93299401f;
    r4 = n *= -0.85977757f;
    r5 = n *= -2.22880769f;
    n = r2 *= n;
    n *= -0.85504854f;
    n += 0.17291485f;
    n += r5;
    r5 = n *= -1.80691540f;
    r6 = n += 2.66330481f;
    n *= r6;
    r6 = n *= -5.47554493f;
    n *= -6.81848431f;
    n *= r3;
    n += r5;
    n *= r1;
    n *= -0.01132241f;
    n += r6;
    n += r2;
    n *= r4;
    n *= r0;
    r0 = n *= 0.98622996f;
    n += r0;
    n += 0.20519228f;
    n += 0.31840646f;
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
