// Run date: 04/11/24 00:26:11 Pacific Daylight Time
// Run duration = 25510.008599 seconds
// Run generation = 82
// Run evolution = 5
// Run max result = 0.00000012
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
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.10776117f;
    n = r0 *= n;
    r2 = n += 0.66532522f;
    n *= 0.04568959f;
    r3 = n *= -1.34149814f;
    r4 = n *= -1.53540218f;
    r5 = n += -1.97208595f;
    r6 = n *= -1.76567054f;
    r7 = n += -3.42317438f;
    n *= -1.79554975f;
    n += r7;
    n *= r3;
    n *= 15409.50390625f;
    r3 = n *= -0.00001014f;
    n += r2;
    n *= r3;
    n += r6;
    n *= 0.18759504f;
    n *= r5;
    n *= -3.43097758f;
    n = r0 += n;
    n *= 2.16547990f;
    n += 0.32461351f;
    n *= r0;
    r0 = n += -1.37836504f;
    n = r1 *= n;
    n *= r0;
    n *= r4;
    n += r1;
    n += 0.00000038f;
    n *= 0.07510025f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= -0.11567221f;
    n = r0 *= n;
    r2 = n += 0.75930339f;
    n *= 1.40964115f;
    r3 = n *= 0.11858550f;
    r4 = n *= 0.44077948f;
    r5 = n += -0.02085687f;
    r6 = n *= -2.83249879f;
    r7 = n += 1.32240975f;
    n *= -1.13885689f;
    n += r7;
    n *= r3;
    n *= -11578.82617188f;
    r3 = n *= -0.00005824f;
    n += r2;
    n *= r3;
    n += r6;
    n *= 0.65126961f;
    n *= r5;
    n *= -3.38741803f;
    n = r0 += n;
    n *= 0.07553085f;
    n += 3.50741076f;
    n *= r0;
    r0 = n += 15.37784195f;
    n = r1 *= n;
    n *= r0;
    n *= r4;
    n += r1;
    n += -0.35639134f;
    n *= 0.33146647f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= -0.19044845f;
    n = r0 *= n;
    r2 = n += 1.81322813f;
    n *= -1.60895097f;
    r3 = n *= -0.41905177f;
    r4 = n *= 0.69684136f;
    r5 = n += 0.02873018f;
    r6 = n *= 1.43253589f;
    r7 = n += -1.19764638f;
    n *= -885.52410889f;
    n += r7;
    n *= r3;
    n *= -6.13318634f;
    r3 = n *= 0.00000008f;
    n += r2;
    n *= r3;
    n += r6;
    n *= -0.34923804f;
    n *= r5;
    n *= -0.56741786f;
    n = r0 += n;
    n *= -0.01450676f;
    n += -0.60721529f;
    n *= r0;
    r0 = n += -2.99501181f;
    n = r1 *= n;
    n *= r0;
    n *= r4;
    n += r1;
    n += 0.51988846f;
    n *= 1.00713670f;
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
