// Run date: 11/23/23 12:44:32 Pacific Standard Time
// Run duration = 15867.955866 seconds
// Run generation = 79
// Run evolution = 9
// Run result = 0.00001752
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00001746
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.65108281f;
    r0 = n *= -0.23939516f;
    r1 = n *= 0.25272775f;
    r2 = n *= -2.61077762f;
    r3 = n += -0.17217062f;
    n *= 0.52766573f;
    n *= -1.59855914f;
    r4 = n *= 0.20756963f;
    n = r4 += n;
    n += -0.08272062f;
    n += r2;
    n *= r3;
    r3 = n += -1.69595695f;
    n += -0.11967129f;
    n = r4 += n;
    n = r4 *= n;
    r2 = n *= -0.16651663f;
    n = r4 += n;
    n += -0.47669163f;
    n *= r0;
    n *= 0.86562705f;
    n += r4;
    r4 = n += -0.17618026f;
    n += r3;
    n *= r1;
    n += -0.03291462f;
    n *= 11701.90234375f;
    n *= -0.00103999f;
    n *= r2;
    n *= r4;
    n *= -1.28993893f;
    n += -0.02233726f;
    return n;
} // Solution0

// Solution1 result = 0.00000560
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.03000689f;
    r0 = n *= -0.09852944f;
    r1 = n *= -5.80058432f;
    r2 = n *= -0.12354887f;
    r3 = n += 0.03532084f;
    n *= -0.60254252f;
    n *= 4.72897482f;
    r4 = n *= -0.00093958f;
    n = r4 += n;
    n += -0.03086102f;
    n += r2;
    n *= r3;
    r3 = n += -0.29200602f;
    n += 0.16393915f;
    n = r4 += n;
    n = r4 *= n;
    r2 = n *= 0.02747837f;
    n = r4 += n;
    n += 4.72728682f;
    n *= r0;
    n *= -0.00027926f;
    n += r4;
    r4 = n += 0.07586301f;
    n += r3;
    n *= r1;
    n += 0.00668081f;
    n *= -3.42210436f;
    n *= 277704.37500000f;
    n *= r2;
    n *= r4;
    n *= -0.23813385f;
    n += -0.11566576f;
    return n;
} // Solution1

// Solution2 result = 0.00001752
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.34834212f;
    r0 = n *= -0.59614259f;
    r1 = n *= -2.00194812f;
    r2 = n *= -0.10963493f;
    r3 = n += 0.11354697f;
    n *= -0.08892944f;
    n *= 491080.71875000f;
    r4 = n *= 0.00000000f;
    n = r4 += n;
    n += 0.35322863f;
    n += r2;
    n *= r3;
    r3 = n += -0.84594673f;
    n += -0.25130698f;
    n = r4 += n;
    n = r4 *= n;
    r2 = n *= 1.20758212f;
    n = r4 += n;
    n += 0.16323312f;
    n *= r0;
    n *= 0.29460299f;
    n += r4;
    r4 = n += -0.55377084f;
    n += r3;
    n *= r1;
    n += 0.45553350f;
    n *= -1.48207545f;
    n *= -0.37027207f;
    n *= r2;
    n *= r4;
    n *= 0.68678087f;
    n += 0.03233847f;
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
