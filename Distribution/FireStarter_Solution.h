// Run date: 11/09/23 09:56:41 Pacific Standard Time
// Run duration = 38663.446417 seconds
// Run generation = 26
// Run evolution = 8
// Run result = 0.00000024
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.76094759f;
    n += -1.38064504f;
    r0 = n *= -0.46848416f;
    n *= 13.83533764f;
    n *= 0.02577060f;
    n *= 0.25554386f;
    r1 = n *= 0.53136808f;
    r2 = n *= 22.81976891f;
    n *= r1;
    r1 = n += -3.07647920f;
    r3 = n += 2.41408968f;
    r4 = n *= 0.37977096f;
    r5 = n += -0.56665134f;
    n = r0 *= n;
    r6 = n *= -2.33797884f;
    n = r2 += n;
    n = r2 += n;
    n += r6;
    n *= r3;
    r3 = n *= -0.20679799f;
    n = r4 *= n;
    n *= r1;
    n *= 1.25064027f;
    n += r2;
    n *= r0;
    n += 2.84321046f;
    n += 1.82326007f;
    n *= r5;
    n *= r4;
    n += 0.12560265f;
    n += r3;
    n += -0.12560265f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.38264632f;
    n += -0.70801222f;
    r0 = n *= 0.35474831f;
    n *= 1.31739283f;
    n *= -0.86782771f;
    n *= -0.26143256f;
    r1 = n *= -2.52964020f;
    r2 = n *= -0.16826859f;
    n *= r1;
    r1 = n += 1.90396631f;
    r3 = n += -1.26382279f;
    r4 = n *= -0.20576619f;
    r5 = n += -1.89400136f;
    n = r0 *= n;
    r6 = n *= -0.26448262f;
    n = r2 += n;
    n = r2 += n;
    n += r6;
    n *= r3;
    r3 = n *= -2.00688171f;
    n = r4 *= n;
    n *= r1;
    n *= 0.51812321f;
    n += r2;
    n *= r0;
    n += 2.34963322f;
    n += -1.23866439f;
    n *= r5;
    n *= r4;
    n += -0.18519703f;
    n += r3;
    n += 0.06706528f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.52913022f;
    n += -2.08886361f;
    r0 = n *= 0.38249412f;
    n *= 0.53555912f;
    n *= -0.68447107f;
    n *= 0.27448958f;
    r1 = n *= 3.43556213f;
    r2 = n *= -0.93779361f;
    n *= r1;
    r1 = n += 1.60388970f;
    r3 = n += -0.83930677f;
    r4 = n *= 2.35881758f;
    r5 = n += 1.29870057f;
    n = r0 *= n;
    r6 = n *= 0.11183014f;
    n = r2 += n;
    n = r2 += n;
    n += r6;
    n *= r3;
    r3 = n *= 0.12176752f;
    n = r4 *= n;
    n *= r1;
    n *= 0.25783181f;
    n += r2;
    n *= r0;
    n += -0.87319368f;
    n += -2.27696872f;
    n *= r5;
    n *= r4;
    n += 0.39149365f;
    n += r3;
    n += 0.13210502f;
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
