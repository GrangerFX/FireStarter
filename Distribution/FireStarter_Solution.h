// Run date: 10/31/23 12:08:48 Pacific Daylight Time
// Run duration = 24881.203026 seconds
// Run generation = 150
// Run evolution = 25
// Run result = 0.00001526
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

// Solution0 result = 0.00000013
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.16958353f;
    r1 = n *= -0.46349376f;
    r2 = n += 0.13437802f;
    n += 0.24968502f;
    n *= 2.41938710f;
    n *= -2.49264288f;
    n += -0.42992669f;
    r3 = n += -0.23224705f;
    n += 0.81039023f;
    n *= -13.33819199f;
    n *= -0.00460130f;
    n = r2 *= n;
    r4 = n += 1.97628677f;
    r5 = n += -1.48404479f;
    n *= -2.43839908f;
    n += -0.02251595f;
    n *= -1.96963191f;
    n = r5 *= n;
    n *= r4;
    n *= r5;
    r5 = n *= -0.76907265f;
    n *= r1;
    n = r3 *= n;
    n += r2;
    n += r5;
    n = r3 *= n;
    n += 0.00000008f;
    r5 = n *= 1.26560533f;
    n += r3;
    n *= -1.04852915f;
    n *= r0;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00000066
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -1.18650496f;
    r1 = n *= -0.54888701f;
    r2 = n += -0.92408240f;
    n += -1.93261981f;
    n *= -0.01352336f;
    n *= 0.14235598f;
    n += -1.61653578f;
    r3 = n += 1.16431618f;
    n += 0.45251647f;
    n *= -0.17720969f;
    n *= -22.30091095f;
    n = r2 *= n;
    r4 = n += 1.65169883f;
    r5 = n += -1.30527556f;
    n *= 0.22672357f;
    n += 0.27780229f;
    n *= -2.07587886f;
    n = r5 *= n;
    n *= r4;
    n *= r5;
    r5 = n *= 16.17121124f;
    n *= r1;
    n = r3 *= n;
    n += r2;
    n += r5;
    n = r3 *= n;
    n += -0.52343982f;
    r5 = n *= -1.62821937f;
    n += r3;
    n *= 0.38386565f;
    n *= r0;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00001526
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.13660002f;
    r1 = n *= -0.38997507f;
    r2 = n += 1.69998097f;
    n += 6.15556097f;
    n *= 0.12899689f;
    n *= -0.35475647f;
    n += 1.69011641f;
    r3 = n += -0.93951237f;
    n += 2.05603981f;
    n *= 0.21013208f;
    n *= 0.62231511f;
    n = r2 *= n;
    r4 = n += 1.33663440f;
    r5 = n += -0.47742599f;
    n *= 1.35252953f;
    n += -2.57388759f;
    n *= 2.44256735f;
    n = r5 *= n;
    n *= r4;
    n *= r5;
    r5 = n *= 0.09691218f;
    n *= r1;
    n = r3 *= n;
    n += r2;
    n += r5;
    n = r3 *= n;
    n += -0.00000274f;
    r5 = n *= -5.42309380f;
    n += r3;
    n *= -0.33753955f;
    n *= r0;
    n += r5;
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
