// Run date: 11/04/23 12:43:52 Pacific Daylight Time
// Run duration = 20985.291876 seconds
// Run generation = 245
// Run evolution = 16
// Run result = 0.00000048
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
// Run tests = 16
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

// Solution0 result = 0.00000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.84678912f;
    r1 = n += -0.58960724f;
    n = r0 += n;
    r2 = n *= -0.04107314f;
    r3 = n *= -1.31962228f;
    r4 = n += -0.00000004f;
    n *= -2.35697842f;
    n *= r4;
    n += 1.65952969f;
    r4 = n *= -0.30055028f;
    r5 = n *= -0.89568549f;
    n = r5 *= n;
    n *= r0;
    n = r3 += n;
    n *= r2;
    n = r5 += n;
    n *= -0.23574729f;
    n += r4;
    n += -3.67148805f;
    n *= r5;
    n *= 1.61576545f;
    n *= -2.26612258f;
    n *= r3;
    n = r1 += n;
    n += r1;
    n *= 2.78663921f;
    n *= 0.52362913f;
    n += -0.67265236f;
    r1 = n *= -0.06681572f;
    n += -0.07924628f;
    n += -0.12560906f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.08962703f;
    r1 = n += -2.00206304f;
    n = r0 += n;
    r2 = n *= -0.03361305f;
    r3 = n *= -1.10868502f;
    r4 = n += -0.00000011f;
    n *= 0.62601537f;
    n *= r4;
    n += -0.55423349f;
    r4 = n *= 2.46686411f;
    r5 = n *= 0.41155848f;
    n = r5 *= n;
    n *= r0;
    n = r3 += n;
    n *= r2;
    n = r5 += n;
    n *= -0.70812398f;
    n += r4;
    n += -0.26153216f;
    n *= r5;
    n *= 6.56478882f;
    n *= -0.46080410f;
    n *= r3;
    n = r1 += n;
    n += r1;
    n *= -0.73676223f;
    n *= 0.09358507f;
    n += -0.08768269f;
    r1 = n *= 1.76780272f;
    n += -0.09892408f;
    n += -0.19725877f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.35833573f;
    r1 = n += -0.51931584f;
    n = r0 += n;
    r2 = n *= -0.05012607f;
    r3 = n *= -0.86907148f;
    r4 = n += -0.00000010f;
    n *= 2.62569714f;
    n *= r4;
    n += -1.06483340f;
    r4 = n *= -0.91345859f;
    r5 = n *= -1.14549923f;
    n = r5 *= n;
    n *= r0;
    n = r3 += n;
    n *= r2;
    n = r5 += n;
    n *= 0.03006758f;
    n += r4;
    n += 0.87756687f;
    n *= r5;
    n *= -1.56066918f;
    n *= -4.01247358f;
    n *= r3;
    n = r1 += n;
    n += r1;
    n *= 0.06484278f;
    n *= 1.04152322f;
    n += 0.41356283f;
    r1 = n *= -0.09561937f;
    n += 0.17958045f;
    n += 0.41640043f;
    n += r1;
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
