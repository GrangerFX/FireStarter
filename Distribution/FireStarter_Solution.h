// Run date: 11/18/23 10:51:55 Pacific Standard Time
// Run duration = 1833.502899 seconds
// Run generation = 88
// Run evolution = 7
// Run result = 0.00000006
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
// Run tests = 1
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
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

// Solution0 result = 0.00000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.77558845f;
    n *= -0.37015262f;
    r0 = n += 1.71417344f;
    n += -2.45011330f;
    r1 = n += 2.18589473f;
    n *= 0.47780761f;
    r2 = n += -0.12624566f;
    n = r0 *= n;
    r3 = n *= -1.26708603f;
    n *= 0.00003265f;
    n *= -39.27254486f;
    r4 = n += -0.03742195f;
    r5 = n += -0.51395601f;
    n *= r0;
    n += 0.77705002f;
    n = r3 += n;
    n = r4 *= n;
    n += 1.02435696f;
    n *= 0.36795872f;
    r0 = n += -1.06469202f;
    n = r4 += n;
    n *= r3;
    n = r4 *= n;
    n *= r5;
    n = r0 += n;
    n *= -3.62779331f;
    n += r0;
    n *= r4;
    n *= r1;
    r1 = n += 0.06312279f;
    n += r2;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.42675966f;
    n *= 0.54895711f;
    r0 = n += -2.06650448f;
    n += 0.12793601f;
    r1 = n += 0.47620204f;
    n *= -0.86206031f;
    r2 = n += -0.52080411f;
    n = r0 *= n;
    r3 = n *= 0.81552339f;
    n *= -11.91035843f;
    n *= -0.00001645f;
    r4 = n += 0.01714800f;
    r5 = n += 0.18484160f;
    n *= r0;
    n += 1.47871816f;
    n = r3 += n;
    n = r4 *= n;
    n += 57.70352173f;
    n *= 0.00000000f;
    r0 = n += 0.66738421f;
    n = r4 += n;
    n *= r3;
    n = r4 *= n;
    n *= r5;
    n = r0 += n;
    n *= -1.77047992f;
    n += r0;
    n *= r4;
    n *= r1;
    r1 = n += 0.20133594f;
    n += r2;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.23656406f;
    n *= 0.64210922f;
    r0 = n += -0.16861933f;
    n += 0.05431144f;
    r1 = n += -1.41483009f;
    n *= 0.15884998f;
    r2 = n += -0.21611828f;
    n = r0 *= n;
    r3 = n *= 0.00034182f;
    n *= 134.88002014f;
    n *= 0.25311440f;
    r4 = n += -0.21966083f;
    r5 = n += -0.83683169f;
    n *= r0;
    n += 0.09398737f;
    n = r3 += n;
    n = r4 *= n;
    n += -0.14864445f;
    n *= -0.16482483f;
    r0 = n += -1.10154116f;
    n = r4 += n;
    n *= r3;
    n = r4 *= n;
    n *= r5;
    n = r0 += n;
    n *= -0.02474116f;
    n += r0;
    n *= r4;
    n *= r1;
    r1 = n += 0.36985832f;
    n += r2;
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
