// Run date: 03/10/24 12:08:28 Pacific Daylight Time
// Run duration = 33637.647039 seconds
// Run generation = 129
// Run evolution = 18
// Run max result = 0.00000548
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

// Solution0 result = 0.00000244
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.52033496f;
    r0 = n += -0.62125790f;
    n *= 0.38763294f;
    r1 = n += 0.00000007f;
    n *= r0;
    n += -28.89416504f;
    r0 = n += 7.95030880f;
    n += r0;
    r0 = n *= -0.17240426f;
    r2 = n *= 0.02202525f;
    r3 = n += -1.41443193f;
    n = r2 *= n;
    r4 = n *= -0.51679242f;
    n += r0;
    n = r2 *= n;
    n = r4 *= n;
    n = r2 *= n;
    n += r4;
    n *= -2.96160126f;
    n *= -1.22870719f;
    n = r1 *= n;
    n *= 5.07820940f;
    n *= 0.13810325f;
    r4 = n += -0.00000000f;
    n *= r3;
    n *= r1;
    n *= -2.91454339f;
    n += 11.67640209f;
    n *= r2;
    n += 31.46664047f;
    n *= r4;
    n *= -0.42527223f;
    return n;
} // Solution0

// Solution1 result = 0.00000465
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.63281935f;
    r0 = n += -2.45793176f;
    n *= -0.06070019f;
    r1 = n += 0.00000737f;
    n *= r0;
    n += -0.45939812f;
    r0 = n += 3.01518083f;
    n += r0;
    r0 = n *= -0.24580388f;
    r2 = n *= -0.34858081f;
    r3 = n += -1.97235620f;
    n = r2 *= n;
    r4 = n *= -1.61797774f;
    n += r0;
    n = r2 *= n;
    n = r4 *= n;
    n = r2 *= n;
    n += r4;
    n *= -1.26337385f;
    n *= 1.20290053f;
    n = r1 *= n;
    n *= -2.66684365f;
    n *= 2.95943904f;
    r4 = n += -0.01078265f;
    n *= r3;
    n *= r1;
    n *= -4.96514034f;
    n += 0.92540634f;
    n *= r2;
    n += 4.33421707f;
    n *= r4;
    n *= 2.52526641f;
    return n;
} // Solution1

// Solution2 result = 0.00000548
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.61989844f;
    r0 = n += -2.00281119f;
    n *= 0.06328606f;
    r1 = n += 0.00053132f;
    n *= r0;
    n += -1.77260518f;
    r0 = n += -1.55132174f;
    n += r0;
    r0 = n *= 0.26964289f;
    r2 = n *= -0.32527992f;
    r3 = n += 0.82047266f;
    n = r2 *= n;
    r4 = n *= 0.30506587f;
    n += r0;
    n = r2 *= n;
    n = r4 *= n;
    n = r2 *= n;
    n += r4;
    n *= 4.28875589f;
    n *= 0.75861257f;
    n = r1 *= n;
    n *= 1.63543940f;
    n *= 3.57895708f;
    r4 = n += -0.05261827f;
    n *= r3;
    n *= r1;
    n *= -0.09924384f;
    n += -0.14811163f;
    n *= r2;
    n += -4.62629938f;
    n *= r4;
    n *= 2.13878942f;
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
