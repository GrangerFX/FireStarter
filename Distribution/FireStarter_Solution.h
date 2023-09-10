// Run date: 09/09/23 16:54:35 Pacific Daylight Time
// Run duration = 1841.964647 seconds
// Run generation = 21
// Run evolution = 6
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 200
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -1.66464174f;
    n = r0 *= n;
    r2 = n += 3.51452756f;
    r3 = n *= -1.43760335f;
    n = r2 += n;
    r4 = n *= 0.08624956f;
    n += r0;
    n *= 0.03896241f;
    r0 = n += 0.62113512f;
    n = r3 += n;
    n *= -0.23195282f;
    n *= 13.90248013f;
    r5 = n += 2.87319565f;
    n = r5 += n;
    n *= -0.67507750f;
    n *= 1.48131478f;
    n += r5;
    n *= r3;
    r3 = n += 2.09364486f;
    n += r4;
    n += -4.41871166f;
    n *= r3;
    n = r0 *= n;
    n += r2;
    n *= 0.02528737f;
    r2 = n += -1.31945014f;
    n *= r2;
    n *= r0;
    n *= r1;
    n *= -0.09159286f;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.06928414f;
    n = r0 *= n;
    r2 = n += 1.03773248f;
    r3 = n *= 1.30375946f;
    n = r2 += n;
    r4 = n *= 0.06430329f;
    n += r0;
    n *= -0.65499228f;
    r0 = n += -1.14239168f;
    n = r3 += n;
    n *= -31.52596855f;
    n *= -8.15160370f;
    r5 = n += 43.18602753f;
    n = r5 += n;
    n *= 0.77742600f;
    n *= -1.28725064f;
    n += r5;
    n *= r3;
    r3 = n += -2.01851630f;
    n += r4;
    n += 4.39044809f;
    n *= r3;
    n = r0 *= n;
    n += r2;
    n *= -0.07971230f;
    r2 = n += -0.43814477f;
    n *= r2;
    n *= r0;
    n *= r1;
    n *= 1.94442248f;
    n += -0.11813183f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.15504697f;
    n = r0 *= n;
    r2 = n += 0.59621954f;
    r3 = n *= -0.80058032f;
    n = r2 += n;
    r4 = n *= 0.59195173f;
    n += r0;
    n *= -0.54194617f;
    r0 = n += 0.50630069f;
    n = r3 += n;
    n *= 19.67244911f;
    n *= 0.07489245f;
    r5 = n += 0.10012195f;
    n = r5 += n;
    n *= 0.58479500f;
    n *= -1.71045566f;
    n += r5;
    n *= r3;
    r3 = n += -1.43565452f;
    n += r4;
    n += -0.39932996f;
    n *= r3;
    n = r0 *= n;
    n += r2;
    n *= -0.25939643f;
    r2 = n += -1.14073241f;
    n *= r2;
    n *= r0;
    n *= r1;
    n *= -2.48531890f;
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
