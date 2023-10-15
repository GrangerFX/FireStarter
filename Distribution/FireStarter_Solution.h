// Run date: 10/15/23 10:56:36 Pacific Daylight Time
// Run duration = 14245.274511 seconds
// Run generation = 14
// Run evolution = 8
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
// Run evolveSeed = 1
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -1.01130891f;
    n += -0.91551024f;
    r1 = n *= 0.08268099f;
    n += r1;
    r1 = n += 0.67676556f;
    n += 0.18935530f;
    n += 12.76297760f;
    n += 3.27768898f;
    n += -0.19263612f;
    n *= 0.19810714f;
    n = r0 += n;
    r2 = n *= -0.50290924f;
    n = r2 *= n;
    n += -0.53392547f;
    n *= 0.24481882f;
    r3 = n *= -0.06829117f;
    r4 = n *= 0.59833348f;
    n += 0.85654002f;
    n *= r4;
    r4 = n += -0.55807000f;
    r5 = n += 0.72559690f;
    n *= r5;
    n = r3 += n;
    n *= 59.84398270f;
    n += r2;
    n += r4;
    r4 = n *= 1.83345222f;
    n *= r0;
    n *= r4;
    n = r3 *= n;
    n += r3;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -1.63755691f;
    n += 2.62164497f;
    r1 = n *= 0.14550397f;
    n += r1;
    r1 = n += 0.59177762f;
    n += -16.61350632f;
    n += 4.47752380f;
    n += 2.80870247f;
    n += 48.89951706f;
    n *= 0.12827890f;
    n = r0 += n;
    r2 = n *= 0.24966143f;
    n = r2 *= n;
    n += -0.51016223f;
    n *= 2.55131841f;
    r3 = n *= -0.09843436f;
    r4 = n *= -0.08175910f;
    n += -1.46992218f;
    n *= r4;
    r4 = n += -0.38686982f;
    r5 = n += 0.82875079f;
    n *= r5;
    n = r3 += n;
    n *= 3.90679550f;
    n += r2;
    n += r4;
    r4 = n *= -0.77927136f;
    n *= r0;
    n *= r4;
    n = r3 *= n;
    n += r3;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -2.11643434f;
    n += 9.87048912f;
    r1 = n *= -0.01525303f;
    n += r1;
    r1 = n += 0.65568012f;
    n += 2.32925415f;
    n += 4.69311237f;
    n += 0.16351093f;
    n += -1.79859209f;
    n *= 0.93739140f;
    n = r0 += n;
    r2 = n *= 0.29075125f;
    n = r2 *= n;
    n += -1.87417078f;
    n *= -2.91666865f;
    r3 = n *= 0.28960988f;
    r4 = n *= -0.03510421f;
    n += -3.45081091f;
    n *= r4;
    r4 = n += 1.73881900f;
    r5 = n += -2.01406026f;
    n *= r5;
    n = r3 += n;
    n *= 1.75508261f;
    n += r2;
    n += r4;
    r4 = n *= -0.08544082f;
    n *= r0;
    n *= r4;
    n = r3 *= n;
    n += r3;
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
