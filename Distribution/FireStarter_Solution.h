// Run date: 03/04/23 14:48:30 Pacific Standard Time
// Run duration = 351.021482 seconds
// Run count = 0
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 999
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 0

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

// Precision = 1.48054516

// Solution0 precision = 0.97492790
inline float Solution0(float n)
{
    float r0, r1;

    r0 = n *= 1.57781160f;
    r1 = n += 10.07487774f;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n += r0;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 1.48054516
inline float Solution1(float n)
{
    float r0, r1;

    r0 = n *= -1.67552829f;
    r1 = n += 15.99910736f;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n += r0;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.92349333
inline float Solution2(float n)
{
    float r0, r1;

    r0 = n *= 0.00008038f;
    r1 = n += 0.54204196f;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n = r0 += n;
    n = r1 *= n;
    n = r0 *= n;
    n = r1 += n;
    n += r0;
    n *= r1;
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
