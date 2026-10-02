// Run date: 03/24/24 16:17:05 Pacific Daylight Time
// Run duration = 779.424419 seconds
// Run generation = 204
// Run evolution = 14
// Run max result = 0.00000024
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -1.67626679f;
    r0 = n += -1.46532547f;
    r1 = n += -0.00000060f;
    n = r1 *= n;
    r2 = n += -4.24350357f;
    n *= 0.50733328f;
    n *= -2.00761509f;
    n += r2;
    r2 = n += 0.08667026f;
    r3 = n *= 0.30910078f;
    n *= -51.96615601f;
    n += r1;
    n *= r3;
    n *= -0.00020826f;
    r3 = n *= -8.08534241f;
    n += -0.89845794f;
    n = r2 *= n;
    n += -0.64255911f;
    n = r3 += n;
    r1 = n *= -2.48804426f;
    n = r3 += n;
    n = r2 += n;
    n *= r1;
    n *= -0.66466916f;
    n = r2 *= n;
    n += r3;
    n *= r2;
    n *= r0;
    n *= -1.73390746f;
    r0 = n += -0.15636240f;
    n += 0.31272504f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -0.96491098f;
    r0 = n += -2.12575507f;
    r1 = n += 0.00001271f;
    n = r1 *= n;
    r2 = n += -3.91737676f;
    n *= -0.71483040f;
    n *= 1.47846973f;
    n += r2;
    r2 = n += 0.14829792f;
    r3 = n *= -0.06676823f;
    n *= 107.58699799f;
    n += r1;
    n *= r3;
    n *= -7.25932598f;
    r3 = n *= 0.00034309f;
    n += -0.66696292f;
    n = r2 *= n;
    n += -0.72506183f;
    n = r3 += n;
    r1 = n *= -2.43103909f;
    n = r3 += n;
    n = r2 += n;
    n *= r1;
    n *= 0.05744745f;
    n = r2 *= n;
    n += r3;
    n *= r2;
    n *= r0;
    n *= -1.96861207f;
    r0 = n += -0.00710248f;
    n += -0.10393526f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -0.88965100f;
    r0 = n += -1.72834158f;
    r1 = n += -0.00000205f;
    n = r1 *= n;
    r2 = n += 0.35269916f;
    n *= 0.98212540f;
    n *= -0.91495419f;
    n += r2;
    r2 = n += -0.79247874f;
    r3 = n *= 0.09116920f;
    n *= -114.74331665f;
    n += r1;
    n *= r3;
    n *= 4.16257000f;
    r3 = n *= -0.00130690f;
    n += 0.22070615f;
    n = r2 *= n;
    n += -1.33831120f;
    n = r3 += n;
    r1 = n *= 0.84909314f;
    n = r3 += n;
    n = r2 += n;
    n *= r1;
    n *= -0.31444016f;
    n = r2 *= n;
    n += r3;
    n *= r2;
    n *= r0;
    n *= -0.19926420f;
    r0 = n += 1.24078405f;
    n += -1.95796812f;
    n += r0;
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
