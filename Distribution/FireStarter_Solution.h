// Run date: 05/29/23 14:49:41 Pacific Daylight Time
// Run duration = 1183.849677 seconds
// Run generation = 88
// Run evolution = 0
// Run result = 0.00045594
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
// Run units = 8
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

// Solution0 result = 0.00045594
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.54985762f;
    r1 = n *= -0.11444570f;
    n *= -2.95686603f;
    n *= 0.38191712f;
    r2 = n *= -1.01063287f;
    n *= -1.56091905f;
    n += -1.29813921f;
    n *= -0.67828685f;
    r3 = n *= 0.64445722f;
    r4 = n += 0.02204725f;
    n += -1.74709558f;
    r5 = n *= -2.02131820f;
    n *= r4;
    n *= r1;
    n = r5 *= n;
    r1 = n += -0.26369846f;
    n += r2;
    r2 = n += -1.39337289f;
    n += r1;
    r1 = n *= -0.32314029f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    r2 = n *= -1.55536234f;
    n *= 1.08340061f;
    n *= r2;
    n = r5 += n;
    n *= r3;
    n += r5;
    n += r1;
    n *= 2.61600637f;
    n += -1.98594224f;
    return n;
} // Solution0

// Solution1 result = 0.00039965
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.62236458f;
    r1 = n *= -0.29048389f;
    n *= 1.28187215f;
    n *= -2.01271129f;
    r2 = n *= 0.29440141f;
    n *= 1.08798170f;
    n += 0.28457397f;
    n *= -0.51112080f;
    r3 = n *= -1.00001025f;
    r4 = n += 0.99388671f;
    n += 0.69508576f;
    r5 = n *= 0.33007616f;
    n *= r4;
    n *= r1;
    n = r5 *= n;
    r1 = n += 2.88222837f;
    n += r2;
    r2 = n += 0.21445219f;
    n += r1;
    r1 = n *= -0.18398070f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    r2 = n *= -2.06273794f;
    n *= 0.46370530f;
    n *= r2;
    n = r5 += n;
    n *= r3;
    n += r5;
    n += r1;
    n *= 1.95499444f;
    n += 1.86793149f;
    return n;
} // Solution1

// Solution2 result = 0.00041759
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.96181542f;
    r1 = n *= -0.22455837f;
    n *= 3.15598512f;
    n *= -0.26671213f;
    r2 = n *= 0.97270805f;
    n *= -0.78732777f;
    n += 0.66058397f;
    n *= -1.23590577f;
    r3 = n *= -1.09335744f;
    r4 = n += -1.26392853f;
    n += 2.06201935f;
    r5 = n *= 1.64843965f;
    n *= r4;
    n *= r1;
    n = r5 *= n;
    r1 = n += 2.05794239f;
    n += r2;
    r2 = n += 2.09162855f;
    n += r1;
    r1 = n *= -0.23186243f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    r2 = n *= 0.05169385f;
    n *= 2.19767880f;
    n *= r2;
    n = r5 += n;
    n *= r3;
    n += r5;
    n += r1;
    n *= 0.62359250f;
    n += 0.66158295f;
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
