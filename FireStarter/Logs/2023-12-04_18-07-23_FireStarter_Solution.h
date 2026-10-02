// Run date: 12/04/23 18:07:23 Pacific Standard Time
// Run duration = 670.509224 seconds
// Run generation = 28
// Run evolution = 8
// Run max result = 0.00000018
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
// Run tests = 1
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.40029570f;
    n *= r1;
    r1 = n += -1.58147240f;
    r2 = n *= 0.35735887f;
    r3 = n += 1.15708554f;
    n += -0.19060360f;
    r4 = n += -2.70960021f;
    n += -6.94936275f;
    r5 = n *= -0.00392494f;
    n *= 0.00004438f;
    n *= 7.09050751f;
    n += 3.18944764f;
    n *= r5;
    n *= r2;
    n += -0.62676114f;
    n *= 0.51413560f;
    r2 = n += 0.05533052f;
    r5 = n += -0.83775294f;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= -0.86121088f;
    n = r4 *= n;
    n *= r2;
    n *= 0.88366222f;
    n *= 0.91433746f;
    n = r3 *= n;
    n += r3;
    n += r4;
    n += 0.00000000f;
    n *= 0.34452811f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.16285695f;
    n *= r1;
    r1 = n += -1.04231524f;
    r2 = n *= 2.20540285f;
    r3 = n += -0.46071538f;
    n += 1.66223669f;
    r4 = n += -0.50231832f;
    n += 1.30351162f;
    r5 = n *= 0.00108900f;
    n *= 24.73287201f;
    n *= 1.07808423f;
    n += 10.84007072f;
    n *= r5;
    n *= r2;
    n += 0.48221314f;
    n *= -1.55460131f;
    r2 = n += 1.76285362f;
    r5 = n += -1.44128883f;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= -2.16385245f;
    n = r4 *= n;
    n *= r2;
    n *= -1.16255784f;
    n *= -0.32062957f;
    n = r3 *= n;
    n += r3;
    n += r4;
    n += 0.07960888f;
    n *= -1.48390269f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.15947676f;
    n *= r1;
    r1 = n += -0.12673815f;
    r2 = n *= -2.26280546f;
    r3 = n += 3.30779457f;
    n += 2.89017034f;
    r4 = n += 2.48397756f;
    n += 0.76851982f;
    r5 = n *= -2.39074659f;
    n *= -0.93985075f;
    n *= 2.39681625f;
    n += 1.52558601f;
    n *= r5;
    n *= r2;
    n += 6.81606960f;
    n *= 0.00082050f;
    r2 = n += -1.74495828f;
    r5 = n += 0.41505638f;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= 0.19073871f;
    n = r4 *= n;
    n *= r2;
    n *= 11.89813328f;
    n *= -0.00045235f;
    n = r3 *= n;
    n += r3;
    n += r4;
    n += 0.32135019f;
    n *= 1.62937117f;
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
