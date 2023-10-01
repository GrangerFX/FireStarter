// Run date: 10/01/23 11:34:30 Pacific Daylight Time
// Run duration = 5391.460711 seconds
// Run generation = 15
// Run evolution = 7
// Run result = 0.00000072
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
// Run tests = 8
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00000051
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159298f;
    r1 = n *= 0.90940779f;
    n *= -0.00000002f;
    r2 = n += -0.93924206f;
    n *= r1;
    r1 = n *= 0.53165245f;
    r3 = n *= 0.27354211f;
    r4 = n *= -0.05249442f;
    n *= 1.21163499f;
    n = r0 *= n;
    n += 0.59953731f;
    n = r2 += n;
    r5 = n += -0.32092741f;
    n = r2 += n;
    n *= r5;
    r5 = n *= -1.19949496f;
    n *= 1.14880395f;
    n += -0.50825328f;
    n = r2 += n;
    n = r1 *= n;
    n += r4;
    r4 = n *= 0.37403157f;
    n += r3;
    n *= r1;
    n += r2;
    n = r4 *= n;
    n *= r0;
    n *= 2.74864030f;
    n *= r5;
    n += -0.00000059f;
    n *= 0.08756679f;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.60980743f;
    n *= 0.00000003f;
    r2 = n += 0.06233391f;
    n *= r1;
    r1 = n *= -0.32762370f;
    r3 = n *= -1.38858485f;
    r4 = n *= -0.44054833f;
    n *= -3.72839499f;
    n = r0 *= n;
    n += 0.41994449f;
    n = r2 += n;
    r5 = n += 0.79894662f;
    n = r2 += n;
    n *= r5;
    r5 = n *= -0.73204601f;
    n *= -3.42286611f;
    n += -0.97107476f;
    n = r2 += n;
    n = r1 *= n;
    n += r4;
    r4 = n *= -1.93698704f;
    n += r3;
    n *= r1;
    n += r2;
    n = r4 *= n;
    n *= r0;
    n *= -0.00116563f;
    n *= r5;
    n += -8.42544079f;
    n *= 0.01402089f;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000066
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= -0.20308492f;
    n *= -0.00000022f;
    r2 = n += -1.81184781f;
    n *= r1;
    r1 = n *= 0.70938694f;
    r3 = n *= -0.98724943f;
    r4 = n *= -0.44362792f;
    n *= -0.23836374f;
    n = r0 *= n;
    n += 0.21688505f;
    n = r2 += n;
    r5 = n += 2.40367556f;
    n = r2 += n;
    n *= r5;
    r5 = n *= -6.11032677f;
    n *= -0.05591407f;
    n += 2.68548369f;
    n = r2 += n;
    n = r1 *= n;
    n += r4;
    r4 = n *= -1.07439923f;
    n += r3;
    n *= r1;
    n += r2;
    n = r4 *= n;
    n *= r0;
    n *= 0.25603890f;
    n *= r5;
    n += -17.54730797f;
    n *= -0.02983927f;
    n += r4;
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
