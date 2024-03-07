// Run date: 03/06/24 20:20:17 Pacific Standard Time
// Run duration = 1261.928599 seconds
// Run generation = 95
// Run evolution = 16
// Run max result = 0.00000013
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
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159250f;
    r1 = n *= -0.94659251f;
    n = r0 *= n;
    n *= -0.02147735f;
    r2 = n *= -2.74746656f;
    r3 = n *= -0.49280447f;
    r4 = n += -1.82153106f;
    n *= r2;
    n *= 0.32519218f;
    r2 = n += 1.05784917f;
    r5 = n += -1.33569717f;
    r6 = n += -0.36840209f;
    n *= r6;
    n *= -3.29826713f;
    n += -1.07210112f;
    n *= r0;
    n += -6.08174515f;
    n *= r2;
    n *= -2.43792796f;
    n += r3;
    n += -0.07346886f;
    n *= -0.67476642f;
    r3 = n *= 0.00038868f;
    n += -1.23788321f;
    n = r4 *= n;
    n = r3 += n;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= -0.32957351f;
    n *= r5;
    n += 0.00000011f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    r1 = n *= 0.03309221f;
    n = r0 *= n;
    n *= -0.28056040f;
    r2 = n *= -2.08882117f;
    r3 = n *= 1.72667086f;
    r4 = n += -0.98445559f;
    n *= r2;
    n *= -0.65196019f;
    r2 = n += -0.53846055f;
    r5 = n += -0.46034738f;
    r6 = n += 2.28782773f;
    n *= r6;
    n *= 202.99658203f;
    n += 0.85271138f;
    n *= r0;
    n += -0.67337096f;
    n *= r2;
    n *= 0.21898459f;
    n += r3;
    n += 3.49777126f;
    n *= -0.00045075f;
    r3 = n *= -19.02401924f;
    n += -3.19011903f;
    n = r4 *= n;
    n = r3 += n;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= 1.08452690f;
    n *= r5;
    n += -0.11813170f;
    return n;
} // Solution1

// Solution2 result = 0.00000013
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    r1 = n *= 0.47976142f;
    n = r0 *= n;
    n *= -2.06120181f;
    r2 = n *= 0.02937502f;
    r3 = n *= -0.54881167f;
    r4 = n += -0.88296896f;
    n *= r2;
    n *= 2.30008197f;
    r2 = n += -0.45093408f;
    r5 = n += 0.18339986f;
    r6 = n += 0.83902168f;
    n *= r6;
    n *= -5.15957403f;
    n += -12.67685223f;
    n *= r0;
    n += 7.08416271f;
    n *= r2;
    n *= 0.00029203f;
    n += r3;
    n += -0.61410213f;
    n *= -1.48671985f;
    r3 = n *= 0.44976297f;
    n += 1.76041889f;
    n = r4 *= n;
    n = r3 += n;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= -1.79082012f;
    n *= r5;
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
