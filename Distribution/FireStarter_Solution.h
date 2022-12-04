// Run date: 12/03/22 17:26:20 Pacific Standard Time
// Run duration = 4.467306 seconds
// Run count = 2
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 2

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

// Precision = 0.00040400

// Solution0 precision = 0.00021702
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 0.74732506f;
    r1 = n *= 0.56964082f;
    r2 = n += 0.94600517f;
    r3 = n += 0.47751087f;
    r4 = n += -0.93650061f;
    n *= r4;
    n += -3.59914231f;
    n += -29.80304909f;
    n *= 0.40100133f;
    n *= -0.20301977f;
    r4 = n += -0.67224199f;
    n *= r4;
    n += -0.44058859f;
    r4 = n *= 0.31575072f;
    r5 = n += 0.97200811f;
    n += -0.79875708f;
    r6 = n += -0.06370280f;
    n *= 0.08230722f;
    r7 = n += -0.45947760f;
    n += r0;
    n *= r1;
    n += r2;
    n += r3;
    n *= -0.10215450f;
    n = r4 += n;
    n *= r4;
    n *= r6;
    n += -0.85277373f;
    n *= -0.85055035f;
    n *= r5;
    n += 0.06070154f;
    n += r7;
    return n;
} // Solution0

// Solution1 precision = 0.00030982
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 0.49114981f;
    r1 = n *= -0.24267089f;
    r2 = n += -0.36549577f;
    r3 = n += 0.04263495f;
    r4 = n += 0.03446947f;
    n *= r4;
    n += -1.32654846f;
    n += -0.87181878f;
    n *= 0.79016542f;
    n *= -0.33656183f;
    r4 = n += 0.98708951f;
    n *= r4;
    n += 0.86573148f;
    r4 = n *= 0.76988703f;
    r5 = n += -0.68091905f;
    n += -0.03941069f;
    r6 = n += 0.47893813f;
    n *= 0.85612720f;
    r7 = n += -0.69176120f;
    n += r0;
    n *= r1;
    n += r2;
    n += r3;
    n *= 0.80777067f;
    n = r4 += n;
    n *= r4;
    n *= r6;
    n += 1.05940902f;
    n *= -0.05867229f;
    n *= r5;
    n += 0.31109342f;
    n += r7;
    return n;
} // Solution1

// Solution2 precision = 0.00040400
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.16300166f;
    r1 = n *= -0.79233426f;
    r2 = n += 0.61243409f;
    r3 = n += 0.41247818f;
    r4 = n += 2.01631284f;
    n *= r4;
    n += -58.63665009f;
    n += -15.51767159f;
    n *= -0.19287191f;
    n *= 0.24853557f;
    r4 = n += -0.74434942f;
    n *= r4;
    n += -1.85754061f;
    r4 = n *= -0.68413252f;
    r5 = n += 1.47130907f;
    n += 1.31357074f;
    r6 = n += 0.02082809f;
    n *= -0.69843239f;
    r7 = n += 2.81043530f;
    n += r0;
    n *= r1;
    n += r2;
    n += r3;
    n *= -0.06886264f;
    n = r4 += n;
    n *= r4;
    n *= r6;
    n += 3.82392454f;
    n *= -0.11696418f;
    n *= r5;
    n += -2.13360572f;
    n += r7;
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
