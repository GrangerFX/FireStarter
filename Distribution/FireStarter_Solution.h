// Run date: 12/18/22 11:33:59 Pacific Standard Time
// Run duration = 208.123730 seconds
// Run count = 47
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
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
// Solution Generation = 47

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

// Precision = 0.00008103

// Solution0 precision = 0.00007778
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 0.22447000f;
    r1 = n *= 0.08660072f;
    n *= -2.39251089f;
    r2 = n *= 0.39787957f;
    n += 0.42001733f;
    r3 = n *= -0.60320020f;
    r4 = n *= -1.08793652f;
    n *= r2;
    n += -2.07994223f;
    n += -4.67394829f;
    n += -3.47103906f;
    n *= r1;
    r1 = n *= 0.04462877f;
    n += -0.64065129f;
    n += -1.23043239f;
    r2 = n *= 0.49809894f;
    n *= 0.42451629f;
    n += 1.10092437f;
    n *= r3;
    r3 = n *= 2.45520902f;
    n += 0.06674192f;
    n *= r3;
    r3 = n += -0.67972714f;
    n *= r3;
    n = r0 *= n;
    n += -2.26616764f;
    n = r2 *= n;
    n *= r0;
    n += r4;
    n *= r2;
    n += r1;
    n += -0.80555296f;
    return n;
} // Solution0

// Solution1 precision = 0.00003123
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.96905160f;
    r1 = n *= -0.73781955f;
    n *= 0.02352186f;
    r2 = n *= 0.16790539f;
    n += -2.25021219f;
    r3 = n *= 1.72190464f;
    r4 = n *= 0.71909326f;
    n *= r2;
    n += 0.82638025f;
    n += 2.87769485f;
    n += -3.70613003f;
    n *= r1;
    r1 = n *= -0.85577101f;
    n += -0.97326303f;
    n += 0.62170911f;
    r2 = n *= -1.77525854f;
    n *= -1.65674901f;
    n += 0.90746361f;
    n *= r3;
    r3 = n *= 0.00723940f;
    n += -6.16314268f;
    n *= r3;
    r3 = n += -0.77287167f;
    n *= r3;
    n = r0 *= n;
    n += -0.12519425f;
    n = r2 *= n;
    n *= r0;
    n += r4;
    n *= r2;
    n += r1;
    n += -0.20225030f;
    return n;
} // Solution1

// Solution2 precision = 0.00008103
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.54236674f;
    r1 = n *= 0.78617698f;
    n *= -0.49802366f;
    r2 = n *= -0.69744986f;
    n += -0.80805564f;
    r3 = n *= -1.20644903f;
    r4 = n *= 1.25708401f;
    n *= r2;
    n += -3.82482910f;
    n += -2.99393249f;
    n += 3.24221182f;
    n *= r1;
    r1 = n *= -0.00467112f;
    n += 0.94946468f;
    n += 0.84089392f;
    r2 = n *= -0.90737176f;
    n *= 0.75472540f;
    n += -0.20931667f;
    n *= r3;
    r3 = n *= -0.20039640f;
    n += -0.59727651f;
    n *= r3;
    r3 = n += -0.59265518f;
    n *= r3;
    n = r0 *= n;
    n += -0.33133847f;
    n = r2 *= n;
    n *= r0;
    n += r4;
    n *= r2;
    n += r1;
    n += -0.06063481f;
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
