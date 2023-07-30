// Run date: 07/29/23 17:04:40 Pacific Daylight Time
// Run duration = 319.617023 seconds
// Run generation = 33
// Run evolution = 0
// Run result = 0.00000167
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
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

// Solution0 result = 10.00000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.00000000f;
    r1 = n *= 0.00000000f;
    n *= r1;
    n += 0.00000000f;
    r1 = n += 0.00000000f;
    r2 = n *= 0.00000000f;
    r3 = n += 0.00000000f;
    n = r3 *= n;
    r4 = n *= 0.00000000f;
    r5 = n += 0.00000000f;
    n *= r3;
    n += 0.00000000f;
    n += 0.00000000f;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n *= 0.00000000f;
    r3 = n += 0.00000000f;
    n += 0.00000000f;
    n *= 0.00000000f;
    n += 0.00000000f;
    n += r1;
    n *= r3;
    n *= 0.00000000f;
    n += r4;
    n = r5 *= n;
    n *= r0;
    n *= r2;
    n *= r5;
    n += 0.00000000f;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n *= 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000167
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065962f;
    r1 = n *= -0.22403938f;
    n *= r1;
    n += -2.30340457f;
    r1 = n += 1.10982656f;
    r2 = n *= -1.39482307f;
    r3 = n += -0.37261513f;
    n = r3 *= n;
    r4 = n *= -0.00144057f;
    r5 = n += 1.67650247f;
    n *= r3;
    n += -2.88058376f;
    n += 1.97824419f;
    n *= -2.80872846f;
    n *= 0.00228935f;
    n *= -0.76694334f;
    r3 = n += 0.48642823f;
    n += -0.36047930f;
    n *= -2.88820291f;
    n += -0.12455688f;
    n += r1;
    n *= r3;
    n *= -0.38739300f;
    n += r4;
    n = r5 *= n;
    n *= r0;
    n *= r2;
    n *= r5;
    n += 0.05318442f;
    n *= 0.74676651f;
    n *= 2.01725125f;
    n *= -1.47447848f;
    return n;
} // Solution1

// Solution2 result = 0.00000101
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= -0.18405876f;
    n *= r1;
    n += 0.08743199f;
    r1 = n += -0.25625256f;
    r2 = n *= 0.43459865f;
    r3 = n += -1.63907599f;
    n = r3 *= n;
    r4 = n *= -1.05696893f;
    r5 = n += 1.11871052f;
    n *= r3;
    n += 5.18101740f;
    n += -3.26619124f;
    n *= 2.24397993f;
    n *= 0.03873152f;
    n *= -3.52711749f;
    r3 = n += -0.60019499f;
    n += -3.64827609f;
    n *= -4.19284248f;
    n += -0.06534967f;
    n += r1;
    n *= r3;
    n *= 0.00211019f;
    n += r4;
    n = r5 *= n;
    n *= r0;
    n *= r2;
    n *= r5;
    n += 1.43340766f;
    n *= -1.89205801f;
    n *= 0.13025486f;
    n *= -1.48217845f;
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
