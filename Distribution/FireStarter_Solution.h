// Run date: 07/26/23 10:34:06 Pacific Daylight Time
// Run duration = 911.721835 seconds
// Run generation = 116
// Run evolution = 0
// Run result = 0.00000250
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000104
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159322f;
    n *= -0.76021647f;
    r1 = n *= -0.64423221f;
    n *= r1;
    r1 = n += -2.03296781f;
    n *= -1.43835640f;
    r2 = n *= 0.04701827f;
    r3 = n += 0.80495656f;
    n *= 1.38037455f;
    r4 = n += 0.56330693f;
    r5 = n *= 0.16604874f;
    n = r4 *= n;
    n = r5 *= n;
    n *= -0.21207495f;
    r6 = n *= -1.64708674f;
    n *= -0.04099607f;
    r7 = n *= -0.92626750f;
    n = r4 += n;
    n *= r1;
    n = r6 += n;
    n *= -2.36957479f;
    n *= r5;
    n *= -0.71671575f;
    n += -0.99468982f;
    n += r3;
    n += r2;
    n += r6;
    n += r7;
    n *= r4;
    n *= 1.26296842f;
    n *= r0;
    n += 0.00000041f;
    return n;
} // Solution0

// Solution1 result = 0.00000250
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065914f;
    n *= 0.76503050f;
    r1 = n *= 1.52351058f;
    n *= r1;
    r1 = n += -0.39057478f;
    n *= -1.91659272f;
    r2 = n *= -0.10466740f;
    r3 = n += -1.32242775f;
    n *= -0.03728475f;
    r4 = n += 0.28769928f;
    r5 = n *= 0.56821680f;
    n = r4 *= n;
    n = r5 *= n;
    n *= 0.31301484f;
    r6 = n *= -2.93550754f;
    n *= -0.43047830f;
    r7 = n *= 0.89972776f;
    n = r4 += n;
    n *= r1;
    n = r6 += n;
    n *= 0.27018416f;
    n *= r5;
    n *= 3.37610650f;
    n += -11.69015694f;
    n += r3;
    n += r2;
    n += r6;
    n += r7;
    n *= r4;
    n *= 1.18719745f;
    n *= r0;
    n += -0.11813206f;
    return n;
} // Solution1

// Solution2 result = 0.00000224
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799312f;
    n *= 1.74583459f;
    r1 = n *= -0.48963490f;
    n *= r1;
    r1 = n += -1.97246575f;
    n *= -0.21236672f;
    r2 = n *= 0.35742661f;
    r3 = n += 1.70768774f;
    n *= 1.57329273f;
    r4 = n += 0.84468031f;
    r5 = n *= -0.02713008f;
    n = r4 *= n;
    n = r5 *= n;
    n *= -0.34187654f;
    r6 = n *= -1.15120494f;
    n *= 0.71697384f;
    r7 = n *= -0.48661715f;
    n = r4 += n;
    n *= r1;
    n = r6 += n;
    n *= 1.22835827f;
    n *= r5;
    n *= 1.99851489f;
    n += -0.91906458f;
    n += r3;
    n += r2;
    n += r6;
    n += r7;
    n *= r4;
    n *= 1.31773543f;
    n *= r0;
    n += 0.52359933f;
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
