// Run date: 11/08/23 12:15:45 Pacific Standard Time
// Run duration = 1934.014944 seconds
// Run generation = 0
// Run evolution = 0
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
// Run tests = 1
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.03190875f;
    r0 = n += -1.10968375f;
    r1 = n *= -0.53796834f;
    n *= r0;
    n *= 0.38399646f;
    r0 = n += 0.48238683f;
    r2 = n += 1.50217152f;
    n += -0.43455032f;
    n *= 3.02661824f;
    r3 = n += 1.47951519f;
    n *= -0.33089238f;
    n = r2 += n;
    n = r0 *= n;
    n += -1.34179580f;
    r4 = n += -0.21703947f;
    n += r0;
    n *= 1.95070910f;
    n *= r4;
    r4 = n += -0.31537947f;
    n += -2.26496696f;
    n = r2 += n;
    n *= -0.00000005f;
    n *= -1.81957233f;
    n = r1 += n;
    n *= r2;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -1.97154164f;
    n *= 1.80525911f;
    n += 0.00003090f;
    n *= -0.00703315f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.49529195f;
    r0 = n += -1.59537506f;
    r1 = n *= 0.10732789f;
    n *= r0;
    n *= 0.14859912f;
    r0 = n += -1.72791350f;
    r2 = n += -1.16607666f;
    n += -6.45455456f;
    n *= 1.10425806f;
    r3 = n += 1.17194963f;
    n *= -0.08118616f;
    n = r2 += n;
    n = r0 *= n;
    n += 1.63444293f;
    r4 = n += -1.54934454f;
    n += r0;
    n *= 0.32128271f;
    n *= r4;
    r4 = n += -2.86454248f;
    n += -0.08221789f;
    n = r2 += n;
    n *= -0.00000097f;
    n *= -0.42178547f;
    n = r1 += n;
    n *= r2;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -1.71993566f;
    n *= -0.66303104f;
    n += -3.22613597f;
    n *= 0.03661468f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.64179993f;
    r0 = n += -0.97619426f;
    r1 = n *= -0.18382257f;
    n *= r0;
    n *= -0.94056982f;
    r0 = n += -0.95513844f;
    r2 = n += -0.05267323f;
    n += 1.55890942f;
    n *= -1.06643546f;
    r3 = n += 1.50654387f;
    n *= 0.93052179f;
    n = r2 += n;
    n = r0 *= n;
    n += 2.29310918f;
    r4 = n += 0.30843350f;
    n += r0;
    n *= -0.59413677f;
    n *= r4;
    r4 = n += 0.62797970f;
    n += 2.04817176f;
    n = r2 += n;
    n *= 4.55756950f;
    n *= 0.00000002f;
    n = r1 += n;
    n *= r2;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -2.47804618f;
    n *= -0.55101109f;
    n += 1.20868361f;
    n *= 0.43319800f;
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
