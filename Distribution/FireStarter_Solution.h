// Run date: 07/26/23 09:30:00 Pacific Daylight Time
// Run duration = 3156.573877 seconds
// Run generation = 122
// Run evolution = 0
// Run result = 0.00000274
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

// Solution0 result = 0.00000250
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= 0.15823425f;
    r1 = n *= -1.39740658f;
    n = r1 *= n;
    n *= 11.86763191f;
    n *= -5.33669662f;
    n *= -0.04457666f;
    n *= -0.03858855f;
    n *= -14.74429989f;
    n += -0.49817607f;
    r2 = n *= -0.01571929f;
    r3 = n += 2.14702773f;
    n *= -0.79618251f;
    r4 = n += 2.17949486f;
    n += 3.77588224f;
    n += 4.86531878f;
    r5 = n += -9.75025558f;
    r6 = n *= -1.22253823f;
    n += r2;
    n += r5;
    n *= r3;
    n = r6 *= n;
    r3 = n *= 4.18083048f;
    n *= 10.83552170f;
    n = r3 *= n;
    n *= r6;
    n *= r1;
    n += -1.08599150f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += -0.00000008f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065986f;
    r0 = n *= -0.14959905f;
    r1 = n *= 0.15376820f;
    n = r1 *= n;
    n *= -135.97041321f;
    n *= 5.18288994f;
    n *= 1.32379675f;
    n *= 0.11429175f;
    n *= 0.16565955f;
    n += -0.87431234f;
    r2 = n *= 0.06303792f;
    r3 = n += 0.14727697f;
    n *= 0.90129173f;
    r4 = n += -0.03087295f;
    n += -0.13604625f;
    n += 0.05419240f;
    r5 = n += 0.14735276f;
    r6 = n *= -0.32623884f;
    n += r2;
    n += r5;
    n *= r3;
    n = r6 *= n;
    r3 = n *= 242116.85937500f;
    n *= 1.56063676f;
    n = r3 *= n;
    n *= r6;
    n *= r1;
    n += 0.21033230f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += -0.11813251f;
    return n;
} // Solution1

// Solution2 result = 0.00000274
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799407f;
    r0 = n *= -0.41513756f;
    r1 = n *= -0.64745188f;
    n = r1 *= n;
    n *= 2.14371634f;
    n *= 0.51873755f;
    n *= 1.78065562f;
    n *= 0.17928402f;
    n *= 0.94414556f;
    n += -0.20946077f;
    r2 = n *= -0.09589872f;
    r3 = n += 0.16536139f;
    n *= -0.15925866f;
    r4 = n += -0.01707705f;
    n += -1.41182184f;
    n += -3.09034491f;
    r5 = n += 5.29850531f;
    r6 = n *= 0.00941175f;
    n += r2;
    n += r5;
    n *= r3;
    n = r6 *= n;
    r3 = n *= 100560.44531250f;
    n *= 0.04021159f;
    n = r3 *= n;
    n *= r6;
    n *= r1;
    n += -0.12297457f;
    n *= r3;
    n *= r0;
    n *= r4;
    n += 0.52359855f;
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
