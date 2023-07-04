// Run date: 07/04/23 14:40:26 Pacific Daylight Time
// Run duration = 98.520448 seconds
// Run generation = 5
// Run evolution = 0
// Run result = 0.00008452
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

// Solution0 result = 0.00005906
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14192510f;
    r0 = n *= 0.33648324f;
    r1 = n *= -0.50449431f;
    n *= r1;
    n *= -0.67830551f;
    r1 = n += 1.21813869f;
    n += 0.22608079f;
    n += r1;
    n *= -0.48641926f;
    n *= 0.73611629f;
    r1 = n *= -1.19964159f;
    n *= -0.72568852f;
    n = r1 *= n;
    n *= 1.62768734f;
    n += -1.22604346f;
    n *= -0.28023082f;
    r2 = n *= -1.92105734f;
    r3 = n *= 0.03025168f;
    r4 = n += -0.76628715f;
    n *= 1.49379647f;
    n *= r0;
    r0 = n += -0.00012135f;
    n *= r1;
    n = r4 *= n;
    n *= r0;
    n += r2;
    n += 0.40497944f;
    n += r3;
    n *= r4;
    n *= -2.81304741f;
    n += 0.02124800f;
    n += -0.02122383f;
    return n;
} // Solution0

// Solution1 result = 0.00003326
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09043932f;
    r0 = n *= -0.14517269f;
    r1 = n *= -1.65926504f;
    n *= r1;
    n *= -0.36368859f;
    r1 = n += 0.92538249f;
    n += 1.65875208f;
    n += r1;
    n *= -1.62625718f;
    n *= -0.95690453f;
    r1 = n *= 0.40146273f;
    n *= 1.12049758f;
    n = r1 *= n;
    n *= 3.61319709f;
    n += -3.03034115f;
    n *= 0.24830891f;
    r2 = n *= 0.00547028f;
    r3 = n *= 0.43304491f;
    r4 = n += 0.75658482f;
    n *= -1.25180626f;
    n *= r0;
    r0 = n += -0.00003116f;
    n *= r1;
    n = r4 *= n;
    n *= r0;
    n += r2;
    n += -0.95562571f;
    n += r3;
    n *= r4;
    n *= 2.07211542f;
    n += 0.38623947f;
    n += -0.50436515f;
    return n;
} // Solution1

// Solution2 result = 0.00008452
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61818933f;
    r0 = n *= 0.12701665f;
    r1 = n *= 1.11705637f;
    n *= r1;
    n *= 1.31499159f;
    r1 = n += -0.54548478f;
    n += -1.11295104f;
    n += r1;
    n *= -0.41776770f;
    n *= -3.40818787f;
    r1 = n *= 1.62363267f;
    n *= -0.12834892f;
    n = r1 *= n;
    n *= -1.77074659f;
    n += -3.82031488f;
    n *= 2.47881532f;
    r2 = n *= -1.87186778f;
    r3 = n *= -0.02062756f;
    r4 = n += 1.63190711f;
    n *= -0.41689587f;
    n *= r0;
    r0 = n += -0.00004033f;
    n *= r1;
    n = r4 *= n;
    n *= r0;
    n += r2;
    n += 3.59344387f;
    n += r3;
    n *= r4;
    n *= 0.28870085f;
    n += -0.00187145f;
    n += 0.52573961f;
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
