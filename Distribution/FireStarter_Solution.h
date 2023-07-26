// Run date: 07/26/23 11:58:10 Pacific Daylight Time
// Run duration = 568.205767 seconds
// Run generation = 42
// Run evolution = 0
// Run result = 0.00000420
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
// Run tests = 0
// Run units = 1
// Run processes = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= 1.61683047f;
    r1 = n *= 0.57609230f;
    n *= r1;
    n += -1.16446495f;
    n *= 0.74230975f;
    r1 = n += -1.12030017f;
    n *= -1.49262035f;
    r2 = n += -0.59085435f;
    n += 0.27611542f;
    n *= -4.97645378f;
    r3 = n *= -0.00064080f;
    n += 0.53823107f;
    n *= 0.17091021f;
    r4 = n *= -1.24723101f;
    n *= r1;
    n *= 0.47213420f;
    n += -0.49641979f;
    r1 = n += 2.18750811f;
    r5 = n *= -0.37166581f;
    n *= -0.87636572f;
    n += -0.22497103f;
    r6 = n *= -1.46546602f;
    n *= r1;
    n *= -13.21149731f;
    n += r2;
    n += r3;
    n *= r6;
    n *= r5;
    n *= r0;
    n *= r4;
    n += 0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000420
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065962f;
    r0 = n *= -1.16740465f;
    r1 = n *= 0.70786214f;
    n *= r1;
    n += -0.91031224f;
    n *= 1.37883961f;
    r1 = n += -0.96014398f;
    n *= 0.00044553f;
    r2 = n += -1.09542441f;
    n += 2.00961757f;
    n *= -0.55854428f;
    r3 = n *= -1.61614239f;
    n += -0.87208748f;
    n *= -2.79708672f;
    r4 = n *= -1.57496810f;
    n *= r1;
    n *= 0.72313797f;
    n += 2.40856504f;
    r1 = n += 0.21385147f;
    r5 = n *= -0.02954075f;
    n *= -1.76559091f;
    n += 3.10642266f;
    r6 = n *= -0.90063637f;
    n *= r1;
    n *= 1.97624648f;
    n += r2;
    n += r3;
    n *= r6;
    n *= r5;
    n *= r0;
    n *= r4;
    n += -0.11813273f;
    return n;
} // Solution1

// Solution2 result = 0.00000093
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= -0.82794642f;
    r1 = n *= 3.84251928f;
    n *= r1;
    n += -2.21545434f;
    n *= 0.16964410f;
    r1 = n += -5.07923126f;
    n *= 0.08011963f;
    r2 = n += 0.50823879f;
    n += -0.30342990f;
    n *= 0.38222679f;
    r3 = n *= 0.03517110f;
    n += -0.21197461f;
    n *= 0.02160410f;
    r4 = n *= -0.02752763f;
    n *= r1;
    n *= -0.90779144f;
    n += -0.06058833f;
    r1 = n += 0.06580527f;
    r5 = n *= -87983.40625000f;
    n *= -0.16594647f;
    n += 0.80045778f;
    r6 = n *= 0.20660424f;
    n *= r1;
    n *= -10.53388023f;
    n += r2;
    n += r3;
    n *= r6;
    n *= r5;
    n *= r0;
    n *= r4;
    n += 0.52359879f;
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
