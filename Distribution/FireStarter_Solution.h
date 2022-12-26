// Run date: 12/25/22 17:16:02 Pacific Standard Time
// Run duration = 7178.652155 seconds
// Run count = 3533
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 8;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 1000;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 11000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 3533

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

// Precision = 0.00000364

// Solution0 precision = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.06597972f;
    r0 = n += -0.07561290f;
    n += -0.00000014f;
    r1 = n *= 0.18968028f;
    n = r1 *= n;
    n *= 0.74597347f;
    n *= 0.37941638f;
    r2 = n += 2.01870275f;
    r3 = n *= 4.54060936f;
    n += 1.21209478f;
    n += r3;
    r3 = n *= 0.00078759f;
    r4 = n += -1.45301676f;
    n = r1 += n;
    r5 = n += -1.55172181f;
    r6 = n *= 1.10879874f;
    n *= r1;
    r1 = n *= -0.67085844f;
    n += r2;
    n *= r5;
    r5 = n *= -1.59022117f;
    n += r6;
    n *= r4;
    n += 0.28405133f;
    n *= r3;
    n += 1.66137004f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -0.01499210f;
    n *= r0;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 precision = 0.00000250
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.03094101f;
    r0 = n += -1.05973208f;
    n += 0.00002424f;
    r1 = n *= -0.13160120f;
    n = r1 *= n;
    n *= -0.15134674f;
    n *= 1.83665645f;
    r2 = n += 0.23416857f;
    r3 = n *= -11.32193851f;
    n += 1.32251298f;
    n += r3;
    r3 = n *= -0.00017602f;
    r4 = n += -0.42536384f;
    n = r1 += n;
    r5 = n += -1.22414863f;
    r6 = n *= 2.53867483f;
    n *= r1;
    r1 = n *= 0.86214304f;
    n += r2;
    n *= r5;
    r5 = n *= -2.16139364f;
    n += r6;
    n *= r4;
    n += -0.52490908f;
    n *= r3;
    n += -0.07731550f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 0.72790241f;
    n *= r0;
    n += -0.11814803f;
    return n;
} // Solution1

// Solution2 precision = 0.00000364
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.77859157f;
    r0 = n += -1.83940125f;
    n += -0.00000057f;
    r1 = n *= -0.08940399f;
    n = r1 *= n;
    n *= 1.60743093f;
    n *= 14.74991035f;
    r2 = n += -1.46197438f;
    r3 = n *= -0.07490830f;
    n += 1.67198503f;
    n += r3;
    r3 = n *= 0.80229205f;
    r4 = n += -0.04742414f;
    n = r1 += n;
    r5 = n += -0.68784869f;
    r6 = n *= -2.41000366f;
    n *= r1;
    r1 = n *= -0.21723153f;
    n += r2;
    n *= r5;
    r5 = n *= 0.11910491f;
    n += r6;
    n *= r4;
    n += -4.31899643f;
    n *= r3;
    n += 2.18764281f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -1.18614113f;
    n *= r0;
    n += 0.52359879f;
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
