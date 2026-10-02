// Run date: 05/11/24 09:28:48 Pacific Daylight Time
// Run duration = 90.885010 seconds
// Run generation = 35
// Run evolution = 3
// Run max result = 0.00009322
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

// Solution0 result = 0.00000232
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 0.04384057f;
    r0 = n += -1.61463690f;
    n *= r0;
    r0 = n *= 0.08677640f;
    n *= -0.44820708f;
    r1 = n += 1.90156114f;
    r2 = n *= 1.35860777f;
    r3 = n += -1.07513857f;
    n += -1.06073213f;
    r4 = n *= -0.03689173f;
    r5 = n += -0.22824821f;
    r6 = n *= -1.96549332f;
    n *= -2.32009292f;
    n *= -1.62721097f;
    r7 = n += -0.81619918f;
    n *= 1.29707801f;
    n *= r1;
    n *= r5;
    n += -0.27645975f;
    n = r2 *= n;
    n *= -3.00387621f;
    n *= r4;
    n *= -2.75108981f;
    n *= r6;
    n += -0.17763758f;
    n *= 0.07462604f;
    n += 2.12544465f;
    n *= 0.76831639f;
    n *= r2;
    n *= r0;
    n *= r3;
    n += r7;
    return n;
} // Solution0

// Solution1 result = 0.00009322
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 0.38415807f;
    r0 = n += 1.64288449f;
    n *= r0;
    r0 = n *= -0.64138848f;
    n *= -0.01828087f;
    r1 = n += -1.19016337f;
    r2 = n *= 1.96786726f;
    r3 = n += -0.10022729f;
    n += 1.32589066f;
    r4 = n *= -0.15158534f;
    r5 = n += 0.60934734f;
    r6 = n *= 0.41457459f;
    n *= -2.60600686f;
    n *= 0.09060538f;
    r7 = n += -0.08186613f;
    n *= 1.47903001f;
    n *= r1;
    n *= r5;
    n += 0.49206716f;
    n = r2 *= n;
    n *= 2.47084498f;
    n *= r4;
    n *= -1.05194521f;
    n *= r6;
    n += -0.24871306f;
    n *= -0.43959099f;
    n += -0.08239231f;
    n *= 1.72670209f;
    n *= r2;
    n *= r0;
    n *= r3;
    n += r7;
    return n;
} // Solution1

// Solution2 result = 0.00007153
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 1.31828201f;
    r0 = n += 0.06192425f;
    n *= r0;
    r0 = n *= -0.03630012f;
    n *= -0.26162136f;
    r1 = n += -1.89989889f;
    r2 = n *= -1.95544255f;
    r3 = n += -1.50335538f;
    n += -1.95010853f;
    r4 = n *= -2.00542378f;
    r5 = n += -1.14775395f;
    r6 = n *= 1.61485910f;
    n *= -0.00051602f;
    n *= -7.03281736f;
    r7 = n += -1.21758926f;
    n *= 0.20240292f;
    n *= r1;
    n *= r5;
    n += -0.88641864f;
    n = r2 *= n;
    n *= -3.28022075f;
    n *= r4;
    n *= -0.27310389f;
    n *= r6;
    n += 1.73730111f;
    n *= 0.12381351f;
    n += -0.56156987f;
    n *= -1.19951105f;
    n *= r2;
    n *= r0;
    n *= r3;
    n += r7;
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
