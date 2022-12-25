// Run date: 12/24/22 18:18:28 Pacific Standard Time
// Run duration = 77.074931 seconds
// Run count = 8
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 8

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000656

// Solution0 precision = 0.00000173
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.28021064f;
    n = r1 *= n;
    n *= -0.77739024f;
    n += 6.59596586f;
    r2 = n *= 0.74017739f;
    r3 = n *= -0.85949498f;
    n *= 0.22376521f;
    n *= -0.46513107f;
    r4 = n *= -0.91965663f;
    n = r3 *= n;
    r5 = n *= 0.80705321f;
    r6 = n *= 0.57502341f;
    n = r1 *= n;
    r7 = n *= -0.02377703f;
    n *= r2;
    n *= 13.94541073f;
    n += -13.53796864f;
    n += 15.36565113f;
    n *= 0.00001359f;
    n = r6 *= n;
    n += -0.00611133f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -0.26099342f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.00000002f;
    return n;
} // Solution0

// Solution1 precision = 0.00000077
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= -0.44485629f;
    n = r1 *= n;
    n *= -0.11484092f;
    n += 2.72829270f;
    r2 = n *= -0.19604251f;
    r3 = n *= 0.83931744f;
    n *= -0.94199181f;
    n *= 0.72069353f;
    r4 = n *= -0.80655581f;
    n = r3 *= n;
    r5 = n *= 1.49616098f;
    r6 = n *= 0.61135870f;
    n = r1 *= n;
    r7 = n *= -5.90760517f;
    n *= r2;
    n *= -4.34891415f;
    n += -5.14424944f;
    n += -14.42872524f;
    n *= -3.07924962f;
    n = r6 *= n;
    n += -12.99440193f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -4.84354496f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813173f;
    return n;
} // Solution1

// Solution2 precision = 0.00000656
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= -0.39368886f;
    n = r1 *= n;
    n *= 0.86365414f;
    n += -20.18843460f;
    r2 = n *= -0.24354304f;
    r3 = n *= -0.70611411f;
    n *= -0.34829891f;
    n *= 0.80731249f;
    r4 = n *= 0.14608102f;
    n = r3 *= n;
    r5 = n *= -4.28077364f;
    r6 = n *= -0.60362053f;
    n = r1 *= n;
    r7 = n *= 0.23222747f;
    n *= r2;
    n *= 0.01368205f;
    n += 3.77062798f;
    n += -0.95954120f;
    n *= -0.10267926f;
    n = r6 *= n;
    n += 1.70236290f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.32389998f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359855f;
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
