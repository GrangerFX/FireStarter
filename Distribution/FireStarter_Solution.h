// Run date: 05/13/23 13:06:55 Pacific Daylight Time
// Run duration = 1447.610264 seconds
// Run generation = 194
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 57
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 400
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.13536616f;
    r2 = n *= 0.68621135f;
    r3 = n *= 1.94688773f;
    n *= 1.09687197f;
    n *= r3;
    r3 = n += 3.33499241f;
    n += -3.76901984f;
    r4 = n += 0.07997014f;
    r5 = n += -1.51948619f;
    r6 = n *= -0.29243535f;
    n = r5 *= n;
    n += r5;
    r5 = n *= 4.43543434f;
    r7 = n *= -1.31122923f;
    n += 17.46119118f;
    n += r3;
    n += -2.01374602f;
    n *= r1;
    n *= 0.58804220f;
    n *= r6;
    n = r0 += n;
    n *= 0.00302351f;
    n *= 6.01163864f;
    n *= r0;
    n += r5;
    n *= r2;
    n = r4 *= n;
    n *= r7;
    n *= 0.19590956f;
    n += -0.00000006f;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= 0.15250120f;
    r2 = n *= -1.35454011f;
    r3 = n *= 0.89066249f;
    n *= 2.22825146f;
    n *= r3;
    r3 = n += -0.56116468f;
    n += -1.12012899f;
    r4 = n += -1.60633337f;
    r5 = n += 1.34598672f;
    r6 = n *= 0.10013743f;
    n = r5 *= n;
    n += r5;
    r5 = n *= -1.87312603f;
    r7 = n *= 0.99737352f;
    n += 7.61809587f;
    n += r3;
    n += -12.76346302f;
    n *= r1;
    n *= -0.02239574f;
    n *= r6;
    n = r0 += n;
    n *= 0.22328411f;
    n *= -0.00023178f;
    n *= r0;
    n += r5;
    n *= r2;
    n = r4 *= n;
    n *= r7;
    n *= -0.10299990f;
    n += -0.11813193f;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= -0.05037569f;
    r2 = n *= 2.35195947f;
    r3 = n *= 1.16921949f;
    n *= 0.92941767f;
    n *= r3;
    r3 = n += -0.24416123f;
    n += -0.46351731f;
    r4 = n += 0.01886602f;
    r5 = n += -0.10175823f;
    r6 = n *= -1.75923777f;
    n = r5 *= n;
    n += r5;
    r5 = n *= 1.02192676f;
    r7 = n *= -0.76399642f;
    n += 6.38142538f;
    n += r3;
    n += 3.66338825f;
    n *= r1;
    n *= -1.11183655f;
    n *= r6;
    n = r0 += n;
    n *= -0.12184898f;
    n *= -0.92303103f;
    n *= r0;
    n += r5;
    n *= r2;
    n = r4 *= n;
    n *= r7;
    n *= 2.59330249f;
    n += 0.52359873f;
    n += r4;
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
