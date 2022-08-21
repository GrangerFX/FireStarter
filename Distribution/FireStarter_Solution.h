// Run date: 08/21/22 12:04:06 Pacific Daylight Time
// Run duration = 3.042775 seconds
// Run count = 12
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 139264;
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
// Solution Generation = 1200

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

// Precision = 0.00017023

// Solution0 precision = 0.00014937
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.55840892f;
    r0 = n += -0.68670851f;
    r1 = n *= -0.53303373f;
    r2 = n += 0.64128822f;
    r3 = n += -0.30017501f;
    r4 = n *= -0.51726061f;
    r5 = n *= -2.08957291f;
    r6 = n += 0.17561825f;
    n = r0 += n;
    n *= 0.81876200f;
    r7 = n += 0.71531695f;
    n += r0;
    n *= 0.46524286f;
    n *= r3;
    n = r6 += n;
    n += -0.75068808f;
    n = r4 += n;
    r3 = n += 0.70528597f;
    n = r1 += n;
    n += -0.09515380f;
    n += r3;
    n *= -0.12618537f;
    n *= r5;
    n = r6 += n;
    n *= 1.33760929f;
    n *= r1;
    n += r6;
    n *= r7;
    n *= r2;
    n += 0.89148033f;
    n *= r4;
    n += -0.78386617f;
    return n;
} // Solution0

// Solution1 precision = 0.00008035
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.77683192f;
    r0 = n += -1.25860441f;
    r1 = n *= 0.23114127f;
    r2 = n += 0.63920420f;
    r3 = n += 0.83962810f;
    r4 = n *= 0.56260562f;
    r5 = n *= 1.50205410f;
    r6 = n += 0.92755431f;
    n = r0 += n;
    n *= -0.74060559f;
    r7 = n += 1.50524926f;
    n += r0;
    n *= -0.90884978f;
    n *= r3;
    n = r6 += n;
    n += -0.12755534f;
    n = r4 += n;
    r3 = n += -0.86320335f;
    n = r1 += n;
    n += 3.44816399f;
    n += r3;
    n *= 0.65957379f;
    n *= r5;
    n = r6 += n;
    n *= 0.37651321f;
    n *= r1;
    n += r6;
    n *= r7;
    n *= r2;
    n += 1.21684504f;
    n *= r4;
    n += -0.31331530f;
    return n;
} // Solution1

// Solution2 precision = 0.00017023
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.30721509f;
    r0 = n += 0.81021518f;
    r1 = n *= -1.82613933f;
    r2 = n += -1.46195793f;
    r3 = n += -0.27405536f;
    r4 = n *= 0.37728909f;
    r5 = n *= -0.80436784f;
    r6 = n += -0.95055217f;
    n = r0 += n;
    n *= -1.97701311f;
    r7 = n += 0.21936865f;
    n += r0;
    n *= 0.23981708f;
    n *= r3;
    n = r6 += n;
    n += -0.22264561f;
    n = r4 += n;
    r3 = n += -1.30669343f;
    n = r1 += n;
    n += 1.25424051f;
    n += r3;
    n *= 0.62677449f;
    n *= r5;
    n = r6 += n;
    n *= 0.27421543f;
    n *= r1;
    n += r6;
    n *= r7;
    n *= r2;
    n += -2.24794745f;
    n *= r4;
    n += -1.89851606f;
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
