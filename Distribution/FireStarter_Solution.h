// Run date: 11/06/22 11:18:49 Pacific Standard Time
// Run duration = 1.872144 seconds
// Run count = 0
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 1;
// Run processes = 1;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 0

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

// Precision = 2.20769382

// Solution0 precision = 0.97492790
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -12.81325245f;
    r0 = n *= 0.00000000f;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n += 0.00000000f;
    n *= r1;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n *= 0.00000000f;
    n *= 0.00000000f;
    r2 = n += 0.00000000f;
    n *= r2;
    n += 0.00000000f;
    r2 = n *= 0.00000000f;
    r3 = n += 0.00000000f;
    n += 0.00000000f;
    r4 = n += 0.00000000f;
    n *= r1;
    r1 = n *= 0.00000000f;
    n += r1;
    n *= 0.00000000f;
    n += r0;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n = r2 += n;
    n *= r2;
    n *= r4;
    n = r3 *= n;
    n *= 0.00000000f;
    n *= r3;
    n += 0.00000000f;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 precision = 1.48324537
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.51214242f;
    r0 = n *= 0.00000000f;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n += 0.00000000f;
    n *= r1;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n *= 0.00000000f;
    n *= 0.00000000f;
    r2 = n += 0.00000000f;
    n *= r2;
    n += 0.00000000f;
    r2 = n *= 0.00000000f;
    r3 = n += 0.00000000f;
    n += 0.00000000f;
    r4 = n += 0.00000000f;
    n *= r1;
    r1 = n *= 0.00000000f;
    n += r1;
    n *= 0.00000000f;
    n += r0;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n = r2 += n;
    n *= r2;
    n *= r4;
    n = r3 *= n;
    n *= 0.00000000f;
    n *= r3;
    n += 0.00000000f;
    n += 0.00000000f;
    return n;
} // Solution1

// Solution2 precision = 2.20769382
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -10.31754875f;
    r0 = n *= 0.00000000f;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n += 0.00000000f;
    n *= r1;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n *= 0.00000000f;
    n *= 0.00000000f;
    r2 = n += 0.00000000f;
    n *= r2;
    n += 0.00000000f;
    r2 = n *= 0.00000000f;
    r3 = n += 0.00000000f;
    n += 0.00000000f;
    r4 = n += 0.00000000f;
    n *= r1;
    r1 = n *= 0.00000000f;
    n += r1;
    n *= 0.00000000f;
    n += r0;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n = r2 += n;
    n *= r2;
    n *= r4;
    n = r3 *= n;
    n *= 0.00000000f;
    n *= r3;
    n += 0.00000000f;
    n += 0.00000000f;
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
