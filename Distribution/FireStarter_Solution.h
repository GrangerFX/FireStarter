// Run date: 09/18/22 15:29:11 Pacific Daylight Time
// Run duration = 2.053243 seconds
// Run count = 17
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
// Solution Generation = 1700

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

// Precision = 0.00000127

// Solution0 precision = 0.00000025
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= 0.44613552f;
    r1 = n *= -0.36700872f;
    r2 = n *= 0.95862544f;
    n = r0 *= n;
    r3 = n += 0.29167083f;
    n *= 0.23015596f;
    r4 = n += 1.42388701f;
    r5 = n *= 0.05086861f;
    n *= r0;
    n *= -0.86569387f;
    r0 = n += -0.48374021f;
    n += 1.01895344f;
    n += -1.33920562f;
    n *= 0.38124201f;
    n += 0.43501106f;
    n += -2.51339006f;
    n *= r3;
    n += -0.50694430f;
    n = r4 *= n;
    n = r2 *= n;
    r3 = n *= -2.05573559f;
    n += r2;
    n *= r0;
    n = r4 *= n;
    n *= 24.77062416f;
    n *= r5;
    n += 1.44521046f;
    n *= 0.00000000f;
    n += r4;
    n += r3;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00000027
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= -0.48187184f;
    r1 = n *= 0.89218462f;
    r2 = n *= -0.71134871f;
    n = r0 *= n;
    r3 = n += 0.64281482f;
    n *= 0.03548267f;
    r4 = n += 0.64708954f;
    r5 = n *= -0.01672280f;
    n *= r0;
    n *= 2.07123709f;
    r0 = n += -0.39217913f;
    n += -0.49364650f;
    n += -2.28879619f;
    n *= -0.55592233f;
    n += 0.28417706f;
    n += 1.02131987f;
    n *= r3;
    n += 1.40484166f;
    n = r4 *= n;
    n = r2 *= n;
    r3 = n *= -0.71629709f;
    n += r2;
    n *= r0;
    n = r4 *= n;
    n *= 0.00637767f;
    n *= r5;
    n += -4.70420265f;
    n *= 0.02511194f;
    n += r4;
    n += r3;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00000127
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= 0.76300842f;
    r1 = n *= -0.11008663f;
    r2 = n *= -1.50553775f;
    n = r0 *= n;
    r3 = n += -0.40084293f;
    n *= 0.13286173f;
    r4 = n += -0.79253203f;
    r5 = n *= -0.21565130f;
    n *= r0;
    n *= -0.30923674f;
    r0 = n += 0.39029005f;
    n += 0.42686692f;
    n += 0.54404312f;
    n *= 2.06040478f;
    n += 2.16379547f;
    n += 6.57721376f;
    n *= r3;
    n += -0.23172779f;
    n = r4 *= n;
    n = r2 *= n;
    r3 = n *= -1.29270935f;
    n += r2;
    n *= r0;
    n = r4 *= n;
    n *= -0.00016477f;
    n *= r5;
    n += 0.30499485f;
    n *= 1.71674550f;
    n += r4;
    n += r3;
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
