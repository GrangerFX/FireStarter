// Run date: 03/24/24 17:54:30 Pacific Daylight Time
// Run duration = 2454.710796 seconds
// Run generation = 1947
// Run evolution = 18
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
    float r0, r1, r2, r3, r4;

    r0 = n *= -1.21039665f;
    n *= 0.46635580f;
    r1 = n += 1.17301714f;
    n += 1.32034349f;
    n += -0.11967344f;
    n *= r1;
    r1 = n *= -1.20151389f;
    n += 1.75021720f;
    r2 = n *= 0.10989093f;
    n += 1.82570386f;
    n = r2 *= n;
    n += r1;
    r1 = n *= 0.02213153f;
    r3 = n += 0.68345731f;
    n *= 2.38091183f;
    n += 4.37654829f;
    n = r1 += n;
    n = r3 *= n;
    r4 = n += 0.10352302f;
    n += r1;
    n += r4;
    n += -5.33399391f;
    n *= 1.51429474f;
    n += 2.40602446f;
    r4 = n *= 0.05999830f;
    n *= r0;
    n *= 0.26297984f;
    n = r4 += n;
    n *= r2;
    n *= r3;
    n += r4;
    n += 0.00000026f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.23716320f;
    n *= 1.87813973f;
    r1 = n += -0.83441067f;
    n += -1.25135720f;
    n += 0.16686197f;
    n *= r1;
    r1 = n *= -0.55361140f;
    n += 0.71623015f;
    r2 = n *= -0.33526459f;
    n += -1.97793186f;
    n = r2 *= n;
    n += r1;
    r1 = n *= -0.09449930f;
    r3 = n += -1.49035466f;
    n *= 0.65433633f;
    n += -0.56053430f;
    n = r1 += n;
    n = r3 *= n;
    r4 = n += -83.66156006f;
    n += r1;
    n += r4;
    n += 5.81758928f;
    n *= -0.00489342f;
    n += -1.90885174f;
    r4 = n *= -1.08805704f;
    n *= r0;
    n *= -1.36427379f;
    n = r4 += n;
    n *= r2;
    n *= r3;
    n += r4;
    n += -0.11813274f;
    return n;
} // Solution1

// Solution2 result = 0.00000027
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.55635899f;
    n *= -1.68949878f;
    r1 = n += 1.68470573f;
    n += 0.50691640f;
    n += 1.04533243f;
    n *= r1;
    r1 = n *= -0.32905811f;
    n += 1.61847818f;
    r2 = n *= 0.27240571f;
    n += 1.84565747f;
    n = r2 *= n;
    n += r1;
    r1 = n *= -0.10281099f;
    r3 = n += -1.16195345f;
    n *= -2.43145275f;
    n += 2.19815850f;
    n = r1 += n;
    n = r3 *= n;
    r4 = n += 3.86383438f;
    n += r1;
    n += r4;
    n += -103.47508240f;
    n *= 0.00692644f;
    n += -1.03722453f;
    r4 = n *= 0.21661699f;
    n *= r0;
    n *= -0.68655664f;
    n = r4 += n;
    n *= r2;
    n *= r3;
    n += r4;
    n += 0.52359915f;
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
