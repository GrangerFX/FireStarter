// Run date: 07/31/23 10:53:34 Pacific Daylight Time
// Run duration = 217.609641 seconds
// Run generation = 15
// Run evolution = 0
// Run result = 0.00000057
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
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 8
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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.62747383f;
    r1 = n *= 0.28595766f;
    n *= -2.11377335f;
    n = r1 *= n;
    r2 = n *= 1.93124688f;
    n += 0.72415465f;
    n *= 0.06042774f;
    n *= 1.50278246f;
    n += 1.40137041f;
    r3 = n *= 0.38651177f;
    n *= -2.21798635f;
    n = r3 *= n;
    n *= -1.06991851f;
    r4 = n *= 0.78896284f;
    n *= 0.02264654f;
    n *= r1;
    r1 = n *= -1.00796258f;
    r5 = n += -2.03805113f;
    n *= -0.94528955f;
    n *= r0;
    r0 = n *= -0.44215629f;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += -2.13787436f;
    n += r1;
    n *= r5;
    n *= r4;
    n += -1.57368743f;
    n += 1.57368743f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= 0.93481368f;
    r1 = n *= 0.60974652f;
    n *= -0.24226177f;
    n = r1 *= n;
    r2 = n *= -1.89412272f;
    n += -0.46616104f;
    n *= 0.02492992f;
    n *= -0.77022642f;
    n += 0.45630464f;
    r3 = n *= 1.07439613f;
    n *= 1.82053471f;
    n = r3 *= n;
    n *= 1.34333968f;
    r4 = n *= -1.63136840f;
    n *= 0.00313058f;
    n *= r1;
    r1 = n *= 2.66705132f;
    r5 = n += -1.50803065f;
    n *= -0.93715417f;
    n *= r0;
    r0 = n *= -0.53525221f;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += 2.27466464f;
    n += r1;
    n *= r5;
    n *= r4;
    n += -3.78176641f;
    n += 3.66363454f;
    return n;
} // Solution1

// Solution2 result = 0.00000057
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= -0.35760519f;
    r1 = n *= -0.58097023f;
    n *= -1.94792461f;
    n = r1 *= n;
    r2 = n *= -3.97743893f;
    n += -3.75278473f;
    n *= -0.07945824f;
    n *= 1.98766100f;
    n += 2.26174021f;
    r3 = n *= -0.49198806f;
    n *= 0.43719500f;
    n = r3 *= n;
    n *= -1.68423820f;
    r4 = n *= 0.42988622f;
    n *= -1.96263862f;
    n *= r1;
    r1 = n *= 0.00987289f;
    r5 = n += 3.23178172f;
    n *= 0.75144649f;
    n *= r0;
    r0 = n *= 0.28209355f;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += -2.34645557f;
    n += r1;
    n *= r5;
    n *= r4;
    n += -0.04265147f;
    n += 0.56625026f;
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
