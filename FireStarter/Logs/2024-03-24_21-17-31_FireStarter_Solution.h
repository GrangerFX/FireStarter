// Run date: 03/24/24 21:17:31 Pacific Daylight Time
// Run duration = 117.166703 seconds
// Run generation = 33
// Run evolution = 6
// Run max result = 0.00000015
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    n *= 2.54460049f;
    n *= -0.37293109f;
    r1 = n *= 1.07419276f;
    n *= r1;
    r1 = n *= -0.12488080f;
    r2 = n += 0.38629121f;
    r3 = n *= -1.48844206f;
    n = r1 += n;
    n += -77.75558472f;
    n += -45.52484894f;
    n *= 0.06144527f;
    n *= r2;
    r2 = n *= 0.12864245f;
    n += -5.41299582f;
    n *= -0.39157745f;
    r4 = n *= -4.18196154f;
    n += -6.52186728f;
    n = r2 += n;
    n *= 0.24964711f;
    r5 = n *= 0.07218284f;
    r6 = n += -0.53015697f;
    n *= r2;
    n += r3;
    n *= r4;
    n *= r1;
    n *= -0.05562937f;
    n *= r6;
    n *= r5;
    n += -0.04294383f;
    n *= r0;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    n *= 0.00783326f;
    n *= -2.36095262f;
    r1 = n *= 0.75632578f;
    n *= r1;
    r1 = n *= -4559.97607422f;
    r2 = n += 2.43379140f;
    r3 = n *= -1.03523362f;
    n = r1 += n;
    n += -2.01436377f;
    n += -1.26799226f;
    n *= 0.00281023f;
    n *= r2;
    r2 = n *= -1.92580450f;
    n += 1.49221194f;
    n *= -2.41284585f;
    r4 = n *= 1.50531459f;
    n += 0.10600284f;
    n = r2 += n;
    n *= -0.28008455f;
    r5 = n *= 0.10148247f;
    r6 = n += 0.67181760f;
    n *= r2;
    n += r3;
    n *= r4;
    n *= r1;
    n *= 0.04904816f;
    n *= r6;
    n *= r5;
    n += -0.45170692f;
    n *= r0;
    n += -0.11813170f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    n *= -0.58342230f;
    n *= -0.00198162f;
    r1 = n *= 1.28663945f;
    n *= r1;
    r1 = n *= -252185.31250000f;
    r2 = n += 1.06502581f;
    r3 = n *= -1.02465034f;
    n = r1 += n;
    n += 1.48374748f;
    n += -1.36734223f;
    n *= -0.38461611f;
    n *= r2;
    r2 = n *= 0.14403063f;
    n += 1.61483169f;
    n *= 2.21485162f;
    r4 = n *= 1.20640492f;
    n += -2.23984718f;
    n = r2 += n;
    n *= -0.05358649f;
    r5 = n *= 0.25715050f;
    r6 = n += -0.72392315f;
    n *= r2;
    n += r3;
    n *= r4;
    n *= r1;
    n *= -2.77344942f;
    n *= r6;
    n *= r5;
    n += -0.09288690f;
    n *= r0;
    n += 0.52359873f;
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
