// Run date: 01/27/24 15:33:00 Pacific Standard Time
// Run duration = 17494.830403 seconds
// Run generation = 13
// Run evolution = 11
// Run max result = 0.00000060
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
// Run streams = 4
// Run units = 4
// Run states = 64
// Run generations = 0
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= 0.43958774f;
    r2 = n *= 0.41171834f;
    r3 = n *= -0.10562010f;
    n *= -0.00015614f;
    n += -5.81968403f;
    r4 = n *= 0.00299527f;
    n *= r1;
    n *= -1.33253181f;
    n *= r0;
    r0 = n += -2.28982830f;
    n = r3 *= n;
    n *= 0.50043148f;
    r1 = n *= -3.62661505f;
    r5 = n *= -3.40079927f;
    n = r5 *= n;
    n += 0.00601498f;
    r6 = n += -1.21402228f;
    n += r5;
    n *= 0.72188222f;
    n *= 0.04383184f;
    n += r4;
    n += r0;
    n = r6 *= n;
    n *= r3;
    n *= -1.71186614f;
    n *= r6;
    n += r2;
    n += r1;
    n += 0.05827654f;
    r1 = n += -0.05827656f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    r1 = n *= -1.71890676f;
    r2 = n *= -0.05165518f;
    r3 = n *= -0.27501124f;
    n *= -0.00288880f;
    n += 16.66352272f;
    r4 = n *= 0.00061883f;
    n *= r1;
    n *= 0.22643360f;
    n *= r0;
    r0 = n += 2.03118825f;
    n = r3 *= n;
    n *= 1.13983238f;
    r1 = n *= 1.69390225f;
    r5 = n *= 2.47053671f;
    n = r5 *= n;
    n += -0.28166935f;
    r6 = n += -0.96835756f;
    n += r5;
    n *= -0.21238898f;
    n *= 0.77622068f;
    n += r4;
    n += r0;
    n = r6 *= n;
    n *= r3;
    n *= 1.38703001f;
    n *= r6;
    n += r2;
    n += r1;
    n += -0.71255821f;
    r1 = n += 0.65349233f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -0.35384804f;
    r2 = n *= -1.00113320f;
    r3 = n *= -0.09702969f;
    n *= -0.00026002f;
    n += 3.87308431f;
    r4 = n *= -0.00511134f;
    n *= r1;
    n *= 1.58146119f;
    n *= r0;
    r0 = n += -3.18427253f;
    n = r3 *= n;
    n *= 1.41509342f;
    r1 = n *= -0.84083045f;
    r5 = n *= 2.46804547f;
    n = r5 *= n;
    n += 0.52725083f;
    r6 = n += -1.82664359f;
    n += r5;
    n *= -0.22668637f;
    n *= -1.11205065f;
    n += r4;
    n += r0;
    n = r6 *= n;
    n *= r3;
    n *= -0.31411859f;
    n *= r6;
    n += r2;
    n += r1;
    n += -0.54479080f;
    r1 = n += 0.80659020f;
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
