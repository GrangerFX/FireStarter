// Run date: 06/25/24 17:01:43 Pacific Daylight Time
// Run duration = 73.520990 seconds
// Run generation = 36
// Run evolution = 3
// Run max result = 0.00002611
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
// Run tests = 0
// Run streams = 1
// Run units = 1
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

// Solution0 result = 0.00001824
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.17224443f;
    r0 = n *= 0.18305272f;
    r1 = n += -0.51202458f;
    r2 = n *= 0.55790758f;
    n *= 0.67366356f;
    r3 = n += 1.30745065f;
    r4 = n *= -1.45095897f;
    r5 = n += 1.27298057f;
    n += 0.74666071f;
    n *= -1.28000915f;
    n += -0.63791186f;
    n = r0 *= n;
    r6 = n += -1.84951246f;
    n *= r1;
    n += 1.43663251f;
    r1 = n *= 0.08562210f;
    n *= r3;
    n *= -5.66660404f;
    n += r6;
    n = r4 *= n;
    n += 5.37944794f;
    r6 = n += 5.09988832f;
    n *= -0.31925052f;
    n *= r0;
    n *= r1;
    n *= 0.73418760f;
    n *= 0.80629689f;
    n *= r2;
    n *= r4;
    n *= r6;
    n *= r5;
    n += 0.17137434f;
    return n;
} // Solution0

// Solution1 result = 0.00002611
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.04336119f;
    r0 = n *= -0.22990216f;
    r1 = n += -1.06979859f;
    r2 = n *= -0.06376390f;
    n *= -2.22943783f;
    r3 = n += 0.48490512f;
    r4 = n *= -1.87766290f;
    r5 = n += 0.17559381f;
    n += 4.45357943f;
    n *= -0.24575600f;
    n += -1.32186937f;
    n = r0 *= n;
    r6 = n += -2.73548698f;
    n *= r1;
    n += 0.77233881f;
    r1 = n *= -0.09983777f;
    n *= r3;
    n *= 3.33892012f;
    n += r6;
    n = r4 *= n;
    n += -2.35680556f;
    r6 = n += -5.30363846f;
    n *= 1.18625760f;
    n *= r0;
    n *= r1;
    n *= -1.22726047f;
    n *= 1.97357595f;
    n *= r2;
    n *= r4;
    n *= r6;
    n *= r5;
    n += -0.06610440f;
    return n;
} // Solution1

// Solution2 result = 0.00002033
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.67965549f;
    r0 = n *= 0.22551627f;
    r1 = n += -0.99792254f;
    r2 = n *= -1.40793729f;
    n *= -0.21146272f;
    r3 = n += -0.79724026f;
    r4 = n *= 0.58025557f;
    r5 = n += 1.12485003f;
    n += -0.38001904f;
    n *= 2.05089879f;
    n += 0.17274445f;
    n = r0 *= n;
    r6 = n += -1.63388181f;
    n *= r1;
    n += -0.92621493f;
    r1 = n *= 0.22776940f;
    n *= r3;
    n *= -1.76755202f;
    n += r6;
    n = r4 *= n;
    n += -0.32358876f;
    r6 = n += 0.86896408f;
    n *= -2.41063666f;
    n *= r0;
    n *= r1;
    n *= 5.15588808f;
    n *= -5.14278746f;
    n *= r2;
    n *= r4;
    n *= r6;
    n *= r5;
    n += 0.86405534f;
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
