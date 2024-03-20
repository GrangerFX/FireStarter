// Run date: 03/20/24 00:26:11 Pacific Daylight Time
// Run duration = 20041.340955 seconds
// Run generation = 46
// Run evolution = 10
// Run max result = 0.00001860
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
// Run evolveSeed = 3
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

// Solution0 result = 0.00000060
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.54319835f;
    r1 = n *= -0.05524875f;
    r2 = n *= 3.80371976f;
    n += 0.17039543f;
    r3 = n += -0.10356126f;
    r4 = n *= 0.82332128f;
    n += 0.86208695f;
    n *= r4;
    r4 = n += -1.47153652f;
    n *= 0.45989990f;
    n *= -1.04340792f;
    r5 = n *= 1.12976432f;
    n = r1 += n;
    n *= r3;
    n *= r4;
    n = r0 += n;
    r4 = n += -2.05580163f;
    n *= -0.09692643f;
    n += -1.76717067f;
    n += 1.92427361f;
    n = r0 *= n;
    n *= -0.00101827f;
    n *= 36.08527374f;
    n += r1;
    n *= r4;
    n += 0.40273318f;
    n = r2 += n;
    n *= r0;
    n += r2;
    n *= -1.10718775f;
    n *= r5;
    n += -0.02956211f;
    return n;
} // Solution0

// Solution1 result = 0.00000489
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.65361136f;
    r1 = n *= -1.32682717f;
    r2 = n *= -0.03898466f;
    n += -1.05748534f;
    r3 = n += 1.34651947f;
    r4 = n *= 0.32663026f;
    n += 3.98881531f;
    n *= r4;
    r4 = n += 1.68470585f;
    n *= 2.15980864f;
    n *= -0.50697166f;
    r5 = n *= -1.91086555f;
    n = r1 += n;
    n *= r3;
    n *= r4;
    n = r0 += n;
    r4 = n += 0.20855510f;
    n *= 0.26972702f;
    n += 2.56119823f;
    n += -1.56477427f;
    n = r0 *= n;
    n *= 0.01438854f;
    n *= -15.96750069f;
    n += r1;
    n *= r4;
    n += 1.50984192f;
    n = r2 += n;
    n *= r0;
    n += r2;
    n *= 0.00524808f;
    n *= r5;
    n += -0.16821997f;
    return n;
} // Solution1

// Solution2 result = 0.00001860
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.35591918f;
    r1 = n *= 0.39233664f;
    r2 = n *= 0.62850773f;
    n += -1.44665194f;
    r3 = n += 1.07861042f;
    r4 = n *= 0.63628942f;
    n += -0.66921824f;
    n *= r4;
    r4 = n += -2.14734054f;
    n *= -0.59921509f;
    n *= -3.31078339f;
    r5 = n *= 0.39690816f;
    n = r1 += n;
    n *= r3;
    n *= r4;
    n = r0 += n;
    r4 = n += 0.54115129f;
    n *= -0.05568406f;
    n += -1.11861277f;
    n += 0.93623424f;
    n = r0 *= n;
    n *= 0.00001676f;
    n *= -8.13377094f;
    n += r1;
    n *= r4;
    n += -0.93467170f;
    n = r2 += n;
    n *= r0;
    n += r2;
    n *= 0.27567065f;
    n *= r5;
    n += 0.43436539f;
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
