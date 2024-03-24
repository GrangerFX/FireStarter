// Run date: 03/24/24 00:22:21 Pacific Daylight Time
// Run duration = 21169.993551 seconds
// Run generation = 1596
// Run evolution = 10
// Run max result = 0.00000027
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
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.48483503f;
    r0 = n *= -0.56728888f;
    r1 = n += -1.31637669f;
    n *= -0.00000000f;
    n *= r1;
    n *= -12.62214184f;
    r1 = n += -0.86406845f;
    n = r0 += n;
    n *= -1.45728028f;
    n *= -0.46476111f;
    r2 = n *= -1.04517102f;
    n = r0 *= n;
    r3 = n *= 0.11180709f;
    r4 = n += 2.40840197f;
    n *= r3;
    r3 = n += 2.14505887f;
    n *= r3;
    n *= r0;
    n += 1.02577972f;
    n = r4 *= n;
    r0 = n += 1.51240969f;
    n *= 0.40360069f;
    n += -1.09716666f;
    n *= 0.10098945f;
    n *= r0;
    n += 0.64299101f;
    n += 1.34865808f;
    n = r1 += n;
    n += r1;
    n += r4;
    n *= r2;
    n += -0.00000005f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 1.35389900f;
    r0 = n *= 0.27302596f;
    r1 = n += 21.66419792f;
    n *= 23.79224586f;
    n *= r1;
    n *= 0.00000000f;
    r1 = n += -1.14246058f;
    n = r0 += n;
    n *= -0.40765747f;
    n *= 1.66612494f;
    r2 = n *= -0.41940159f;
    n = r0 *= n;
    r3 = n *= -0.09779651f;
    r4 = n += 1.90398550f;
    n *= r3;
    r3 = n += 1.32378483f;
    n *= r3;
    n *= r0;
    n += -0.47651601f;
    n = r4 *= n;
    r0 = n += -1.63429821f;
    n *= 1.54361880f;
    n += 1.35234785f;
    n *= -0.59763932f;
    n *= r0;
    n += -0.74505818f;
    n += 1.02295530f;
    n = r1 += n;
    n += r1;
    n += r4;
    n *= r2;
    n += -0.11813171f;
    return n;
} // Solution1

// Solution2 result = 0.00000027
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.41198584f;
    r0 = n *= 0.98524123f;
    r1 = n += 3.68281031f;
    n *= -0.00000000f;
    n *= r1;
    n *= -22.86757851f;
    r1 = n += -1.06265819f;
    n = r0 += n;
    n *= -1.18607152f;
    n *= 0.38084993f;
    r2 = n *= 0.30524921f;
    n = r0 *= n;
    r3 = n *= -0.54053152f;
    r4 = n += -3.50226021f;
    n *= r3;
    r3 = n += 4.40017128f;
    n *= r3;
    n *= r0;
    n += 1.93828285f;
    n = r4 *= n;
    r0 = n += -0.54828823f;
    n *= 0.05508059f;
    n += -1.47117007f;
    n *= 0.94093102f;
    n *= r0;
    n += 1.15890217f;
    n += -0.71407104f;
    n = r1 += n;
    n += r1;
    n += r4;
    n *= r2;
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
