// Run date: 06/28/24 12:09:31 Pacific Daylight Time
// Run duration = 4031.166886 seconds
// Run generation = 163
// Run evolution = 9
// Run max result = 0.00000036
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

    n += -3.14159274f;
    r0 = n *= -0.09626330f;
    r1 = n *= 0.34911460f;
    n = r1 += n;
    n = r0 *= n;
    n += -0.86572790f;
    n *= 2.02058768f;
    r2 = n *= -1.67809236f;
    n *= r0;
    r0 = n *= -2.43277311f;
    r3 = n *= 0.83775443f;
    r4 = n += 0.29999533f;
    n += r3;
    r3 = n *= 0.00295818f;
    r5 = n *= 2.98664904f;
    n *= 19.41447830f;
    n += 1.27841771f;
    n += -0.31355408f;
    r6 = n += 0.01881867f;
    n *= 2.06238294f;
    n += r5;
    n += r0;
    r0 = n += -0.09154205f;
    n *= r3;
    n += r6;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= r4;
    n *= 6.82775116f;
    n += 0.00000000f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065843f;
    r0 = n *= 0.05976494f;
    r1 = n *= -1.45684624f;
    n = r1 += n;
    n = r0 *= n;
    n += 2.97770548f;
    n *= -1.48647153f;
    r2 = n *= 0.53124422f;
    n *= r0;
    r0 = n *= 8.67570591f;
    r3 = n *= -1.40797710f;
    r4 = n += 3.02427649f;
    n += r3;
    r3 = n *= 0.34539467f;
    r5 = n *= 2.04355145f;
    n *= -1.12565100f;
    n += 1.86847830f;
    n += -0.16350521f;
    r6 = n += -0.63170731f;
    n *= 0.40644732f;
    n += r5;
    n += r0;
    r0 = n += 1.37380970f;
    n *= r3;
    n += r6;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= r4;
    n *= -0.02839571f;
    n += -0.11813162f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799359f;
    r0 = n *= 0.07014254f;
    r1 = n *= 2.20729661f;
    n = r1 += n;
    n = r0 *= n;
    n += -1.60538483f;
    n *= -0.57972819f;
    r2 = n *= 0.92405015f;
    n *= r0;
    r0 = n *= 4.81693792f;
    r3 = n *= -1.58982658f;
    r4 = n += 0.77730465f;
    n += r3;
    r3 = n *= -0.67310375f;
    r5 = n *= -0.71639997f;
    n *= -2.78456378f;
    n += -1.04638541f;
    n += -1.13150370f;
    r6 = n += 1.10458493f;
    n *= -0.03116390f;
    n += r5;
    n += r0;
    r0 = n += 0.73040050f;
    n *= r3;
    n += r6;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= r4;
    n *= 0.01510653f;
    n += 0.52359879f;
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
