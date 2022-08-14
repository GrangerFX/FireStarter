// Run date: 08/14/22 13:08:02 Pacific Daylight Time
// Run duration = 2.858187 seconds
// Run count = 9
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
// Solution Generation = 900

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

// Precision = 0.00000119

// Solution0 precision = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.92790502f;
    r1 = n *= -0.27102908f;
    r2 = n *= 0.46717712f;
    n = r0 *= n;
    r3 = n += 0.78724104f;
    n *= 0.07066311f;
    r4 = n += 0.90268284f;
    r5 = n *= 0.44622791f;
    n += 0.37111390f;
    n *= 0.27157038f;
    n *= -0.54367578f;
    n *= r0;
    n += -1.78314126f;
    r0 = n *= -0.37700173f;
    n = r4 += n;
    n += 0.57450861f;
    n *= r3;
    n += 0.60150981f;
    n = r4 *= n;
    n *= r2;
    n = r0 *= n;
    n += r1;
    n *= 0.43866217f;
    n = r4 *= n;
    n *= 0.65342361f;
    n *= r5;
    n += 4.95376062f;
    n *= -0.00000000f;
    n += r4;
    n += r0;
    n *= -0.81648141f;
    return n;
} // Solution0

// Solution1 precision = 0.00000119
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= 0.48909184f;
    r1 = n *= 0.83641541f;
    r2 = n *= 0.18428648f;
    n = r0 *= n;
    r3 = n += -0.56357414f;
    n *= -1.16993034f;
    r4 = n += 0.57947463f;
    r5 = n *= -1.86045897f;
    n += -2.47683358f;
    n *= -0.00231457f;
    n *= 0.24986434f;
    n *= r0;
    n += -0.16331331f;
    r0 = n *= 0.45932803f;
    n = r4 += n;
    n += 1.95843828f;
    n *= r3;
    n += -0.71394664f;
    n = r4 *= n;
    n *= r2;
    n = r0 *= n;
    n += r1;
    n *= -0.53499091f;
    n = r4 *= n;
    n *= -0.53993791f;
    n *= r5;
    n += 0.22546376f;
    n *= 0.52279621f;
    n += r4;
    n += r0;
    n *= -1.00220680f;
    return n;
} // Solution1

// Solution2 precision = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= -0.61499530f;
    r1 = n *= -0.87981945f;
    r2 = n *= 0.92239332f;
    n = r0 *= n;
    r3 = n += 1.09354317f;
    n *= 0.02152908f;
    r4 = n += 1.28683341f;
    r5 = n *= 0.63214087f;
    n += 0.02002165f;
    n *= -0.11367782f;
    n *= -0.30169982f;
    n *= r0;
    n += 0.63506371f;
    r0 = n *= 0.72555172f;
    n = r4 += n;
    n += 0.56098092f;
    n *= r3;
    n += 0.98875070f;
    n = r4 *= n;
    n *= r2;
    n = r0 *= n;
    n += r1;
    n *= -0.05348355f;
    n = r4 *= n;
    n *= -2.10931993f;
    n *= r5;
    n += -0.91654623f;
    n *= 1.31847918f;
    n += r4;
    n += r0;
    n *= -0.43328238f;
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
