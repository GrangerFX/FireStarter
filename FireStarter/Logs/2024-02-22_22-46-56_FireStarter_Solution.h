// Run date: 02/22/24 22:46:56 Pacific Standard Time
// Run duration = 16706.320972 seconds
// Run generation = 44
// Run evolution = 13
// Run max result = 0.00032198
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
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

// Solution0 result = 0.00025606
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 2.75308800f;
    r1 = n *= -0.16100109f;
    r2 = n += 1.02592421f;
    r3 = n += -0.33191973f;
    n += 3.14794636f;
    r4 = n *= -0.70038533f;
    r5 = n *= 0.95403957f;
    r6 = n *= -0.92017394f;
    n *= 0.35977215f;
    r7 = n *= -1.21595430f;
    n *= r0;
    n = r5 *= n;
    n *= -0.64147830f;
    n = r2 *= n;
    n *= r3;
    n *= r6;
    n = r4 *= n;
    n *= r1;
    n = r5 += n;
    n *= r5;
    n *= -0.14617650f;
    n *= -19.98215866f;
    n *= 5.64941788f;
    n *= -0.03144947f;
    n *= 0.08615172f;
    n += -3.00506067f;
    n += r4;
    n *= r2;
    n *= 1.53736615f;
    n *= -0.12159345f;
    n *= r7;
    n += -0.45960546f;
    return n;
} // Solution0

// Solution1 result = 0.00019109
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 1.85596108f;
    r1 = n *= 0.13346642f;
    r2 = n += 0.08999203f;
    r3 = n += -0.53779250f;
    n += -1.50747383f;
    r4 = n *= -1.43609369f;
    r5 = n *= 0.51929349f;
    r6 = n *= -1.31388557f;
    n *= 0.60178936f;
    r7 = n *= 0.04849356f;
    n *= r0;
    n = r5 *= n;
    n *= -1.45012891f;
    n = r2 *= n;
    n *= r3;
    n *= r6;
    n = r4 *= n;
    n *= r1;
    n = r5 += n;
    n *= r5;
    n *= 0.41633525f;
    n *= 0.88333315f;
    n *= -9.37123966f;
    n *= -0.54295474f;
    n *= -0.61115617f;
    n += 0.16460478f;
    n += r4;
    n *= r2;
    n *= 1.31202519f;
    n *= -1383.77648926f;
    n *= r7;
    n += -0.14271213f;
    return n;
} // Solution1

// Solution2 result = 0.00032198
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -0.07316041f;
    r1 = n *= -0.32082224f;
    r2 = n += 0.95937401f;
    r3 = n += -1.45492589f;
    n += 5.94764471f;
    r4 = n *= 0.55443192f;
    r5 = n *= -1.62892854f;
    r6 = n *= -0.16720295f;
    n *= -1.30125463f;
    r7 = n *= 0.20450719f;
    n *= r0;
    n = r5 *= n;
    n *= 0.60118926f;
    n = r2 *= n;
    n *= r3;
    n *= r6;
    n = r4 *= n;
    n *= r1;
    n = r5 += n;
    n *= r5;
    n *= 9.00490856f;
    n *= 0.02977707f;
    n *= -0.14007576f;
    n *= -0.18797703f;
    n *= -3.16454411f;
    n += -1.84999514f;
    n += r4;
    n *= r2;
    n *= -0.00656611f;
    n *= -849.18103027f;
    n *= r7;
    n += 0.10323981f;
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
