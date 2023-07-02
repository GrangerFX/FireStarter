// Run date: 07/02/23 13:18:27 Pacific Daylight Time
// Run duration = 1175.150461 seconds
// Run generation = 65
// Run evolution = 0
// Run result = 0.00000012
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
// Run tests = 0
// Run units = 1
// Run processes = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.35625100f;
    r2 = n *= 1.12604916f;
    n *= r2;
    r2 = n *= 1.22038782f;
    n *= -7.78472614f;
    n += 4.81026840f;
    r3 = n *= -0.01205495f;
    n *= -0.66765499f;
    n += 1.60511827f;
    r4 = n *= 0.29107839f;
    n *= -2.16417432f;
    n = r4 *= n;
    n *= -1.31656551f;
    r5 = n *= 1.60864198f;
    n = r4 += n;
    n *= 3.49151158f;
    r6 = n *= 2.13484764f;
    n += r3;
    n *= -0.14797795f;
    n *= r1;
    n = r0 += n;
    n *= r4;
    r4 = n *= -0.57279450f;
    n *= r0;
    n += r2;
    n += -1.65565956f;
    n += r6;
    n *= r4;
    n *= r5;
    n += 0.22153901f;
    n += -0.22153901f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    r1 = n *= 2.06059408f;
    r2 = n *= -0.25608489f;
    n *= r2;
    r2 = n *= -0.55368060f;
    n *= -2.87023711f;
    n += -1.54940379f;
    r3 = n *= -0.02504609f;
    n *= -0.07581348f;
    n += -0.13422412f;
    r4 = n *= 0.10075904f;
    n *= -0.48884144f;
    n = r4 *= n;
    n *= 0.16529597f;
    r5 = n *= -157539.78125000f;
    n = r4 += n;
    n *= 0.64864272f;
    r6 = n *= -0.67104316f;
    n += r3;
    n *= -0.19778445f;
    n *= r1;
    n = r0 += n;
    n *= r4;
    r4 = n *= 0.06463549f;
    n *= r0;
    n += r2;
    n += -0.97524112f;
    n += r6;
    n *= r4;
    n *= r5;
    n += -0.33594945f;
    n += 0.21781780f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    r1 = n *= -0.08808492f;
    r2 = n *= 4.82312584f;
    n *= r2;
    r2 = n *= 1.23483205f;
    n *= 0.10403787f;
    n += -0.20932168f;
    r3 = n *= -0.44045076f;
    n *= -0.25560552f;
    n += -0.11768820f;
    r4 = n *= -0.30159950f;
    n *= -0.31643322f;
    n = r4 *= n;
    n *= -95739.69531250f;
    r5 = n *= 0.11281911f;
    n = r4 += n;
    n *= -0.12317940f;
    r6 = n *= 1.78602433f;
    n += r3;
    n *= 0.47165000f;
    n *= r1;
    n = r0 += n;
    n *= r4;
    r4 = n *= 0.01415246f;
    n *= r0;
    n += r2;
    n += -0.37961015f;
    n += r6;
    n *= r4;
    n *= r5;
    n += 0.35638893f;
    n += 0.16720983f;
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
