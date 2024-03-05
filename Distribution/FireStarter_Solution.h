// Run date: 03/05/24 08:39:08 Pacific Standard Time
// Run duration = 1972.651865 seconds
// Run generation = 167
// Run evolution = 15
// Run max result = 0.00000024
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
// Run tests = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.27253863f;
    r2 = n *= 1.05308819f;
    n *= r1;
    r1 = n *= -2.41776228f;
    n *= -2.16347647f;
    n += -1.51893938f;
    n *= 1299.47509766f;
    n *= 0.00050892f;
    r3 = n *= -0.00131450f;
    n += r1;
    r1 = n += 1.32871997f;
    r4 = n *= 0.35641986f;
    r5 = n += 2.86891079f;
    n *= r5;
    n += 1.00519860f;
    n *= -2.55753851f;
    r5 = n *= 0.07391301f;
    r6 = n += -2.40256023f;
    n += r4;
    n *= r3;
    n += -0.28963438f;
    n *= 0.39213532f;
    n *= r0;
    n *= r6;
    n *= r1;
    n *= 0.79268694f;
    n *= r5;
    n += r2;
    n += 0.17541042f;
    n *= 0.62138206f;
    n += -0.10899691f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    r1 = n *= -0.79936969f;
    r2 = n *= 0.43757468f;
    n *= r1;
    r1 = n *= -1.04702687f;
    n *= 1.85261559f;
    n += 1.08135116f;
    n *= 0.00548163f;
    n *= -507.02252197f;
    r3 = n *= -0.00047108f;
    n += r1;
    r1 = n += 2.15318847f;
    r4 = n *= 0.04943188f;
    r5 = n += 0.77051580f;
    n *= r5;
    n += 0.13229366f;
    n *= 0.78662294f;
    r5 = n *= 0.77919924f;
    r6 = n += 3.72278476f;
    n += r4;
    n *= r3;
    n += 0.19573712f;
    n *= 6.77003527f;
    n *= r0;
    n *= r6;
    n *= r1;
    n *= -0.07580603f;
    n *= r5;
    n += r2;
    n += -0.27303886f;
    n *= 1.25387859f;
    n += 0.22422583f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= 0.79158241f;
    r2 = n *= 0.98252445f;
    n *= r1;
    r1 = n *= -1.08666551f;
    n *= 55619.21875000f;
    n += -3.61089087f;
    n *= 0.00019660f;
    n *= 0.00000572f;
    r3 = n *= 1.59855795f;
    n += r1;
    r1 = n += 3.81084466f;
    r4 = n *= 0.63817555f;
    r5 = n += 13.77993393f;
    n *= r5;
    n += -4.01107025f;
    n *= -0.02563478f;
    r5 = n *= -0.38183928f;
    r6 = n += 1.40373874f;
    n += r4;
    n *= r3;
    n += 0.22109169f;
    n *= 0.35339677f;
    n *= r0;
    n *= r6;
    n *= r1;
    n *= -3.33834982f;
    n *= r5;
    n += r2;
    n += -11.65778923f;
    n *= 0.10944937f;
    n += 1.79953635f;
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
