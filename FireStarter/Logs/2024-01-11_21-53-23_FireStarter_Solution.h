// Run date: 01/11/24 21:53:23 Pacific Standard Time
// Run duration = 1656.653472 seconds
// Run generation = 36
// Run evolution = 13
// Run max result = 0.00000036
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
// Run tests = 1
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    float r0, r1, r2, r3, r4, r5;

    n += 0.14113525f;
    n += -1.85464847f;
    n += -1.42807937f;
    r0 = n *= 0.85185575f;
    r1 = n *= -0.02298197f;
    n = r0 += n;
    n = r1 += n;
    r2 = n *= -0.69348425f;
    r3 = n *= 0.18365082f;
    n *= -3.20023274f;
    n = r0 += n;
    n += r0;
    n = r3 *= n;
    r0 = n *= -1.06452644f;
    r4 = n += -2.53057718f;
    n = r3 += n;
    r5 = n *= -0.00302085f;
    n *= -2.90718412f;
    n *= r0;
    r0 = n += 0.38164660f;
    n += -6.32373714f;
    n *= -0.22488144f;
    n *= r5;
    n += r0;
    n *= r4;
    n *= 0.88187921f;
    r4 = n *= 0.49401605f;
    n *= r1;
    n += r2;
    n *= r3;
    n *= r4;
    n += 0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.10744417f;
    n += -0.85150504f;
    n += -1.13170946f;
    r0 = n *= -0.24025342f;
    r1 = n *= 2.32797432f;
    n = r0 += n;
    n = r1 += n;
    r2 = n *= -2.38470817f;
    r3 = n *= 0.00186440f;
    n *= -1.22598517f;
    n = r0 += n;
    n += r0;
    n = r3 *= n;
    r0 = n *= 1.28551614f;
    r4 = n += 0.57405251f;
    n = r3 += n;
    r5 = n *= -0.99822003f;
    n *= 0.26687419f;
    n *= r0;
    r0 = n += 1.67246401f;
    n += -5.25029755f;
    n *= -8224.45410156f;
    n *= r5;
    n += r0;
    n *= r4;
    n *= -0.00281088f;
    r4 = n *= -0.01802801f;
    n *= r1;
    n += r2;
    n *= r3;
    n *= r4;
    n += -0.11813191f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.15447474f;
    n += 0.32263559f;
    n += -2.78615451f;
    r0 = n *= -1.24338436f;
    r1 = n *= 0.93575376f;
    n = r0 += n;
    n = r1 += n;
    r2 = n *= -0.16409191f;
    r3 = n *= 0.02519454f;
    n *= 1.51362753f;
    n = r0 += n;
    n += r0;
    n = r3 *= n;
    r0 = n *= 0.13580872f;
    r4 = n += 0.39843908f;
    n = r3 += n;
    r5 = n *= 3.26227021f;
    n *= -0.04385323f;
    n *= r0;
    r0 = n += -0.70177650f;
    n += -1.02205181f;
    n *= 0.04094179f;
    n *= r5;
    n += r0;
    n *= r4;
    n *= -1.08536327f;
    r4 = n *= -2.21584177f;
    n *= r1;
    n += r2;
    n *= r3;
    n *= r4;
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
