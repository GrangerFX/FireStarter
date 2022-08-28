// Run date: 08/28/22 15:30:04 Pacific Daylight Time
// Run duration = 3.979915 seconds
// Run count = 0
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

// Precision = 0.04958737

// Solution0 precision = 0.00702295
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.54285854f;
    r0 = n += 0.75616413f;
    r1 = n += -4.12088728f;
    n = r0 += n;
    r2 = n *= 0.27318093f;
    n += -0.28679880f;
    r3 = n *= -2.72131968f;
    n = r0 += n;
    n += r2;
    r2 = n += 0.25678867f;
    r4 = n *= 0.03461649f;
    n *= -0.52991170f;
    n *= -3.18409181f;
    n += 0.65224791f;
    n += -0.62086827f;
    r5 = n += -0.10768630f;
    n += 0.67465693f;
    n += -0.17016241f;
    n = r2 += n;
    n += -2.11721992f;
    n *= r5;
    n *= r3;
    n += -1.06243563f;
    n += r4;
    n += r0;
    n *= r2;
    n *= r1;
    n += 2.91353703f;
    n += 5.15597630f;
    n += -6.17655659f;
    n += -1.16480124f;
    n += -0.81246066f;
    return n;
} // Solution0

// Solution1 precision = 0.00391471
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.30912367f;
    r0 = n += 0.40455657f;
    r1 = n += 0.84259564f;
    n = r0 += n;
    r2 = n *= 0.55103827f;
    n += -0.37887517f;
    r3 = n *= -0.68237931f;
    n = r0 += n;
    n += r2;
    r2 = n += -1.19844818f;
    r4 = n *= -0.41643730f;
    n *= 1.40900075f;
    n *= 0.32862559f;
    n += 0.02210910f;
    n += -0.07629883f;
    r5 = n += 0.75066209f;
    n += 3.17633605f;
    n += -1.02425027f;
    n = r2 += n;
    n += 0.57679766f;
    n *= r5;
    n *= r3;
    n += 0.31834966f;
    n += r4;
    n += r0;
    n *= r2;
    n *= r1;
    n += -1.05105889f;
    n += 3.26228833f;
    n += -5.13411617f;
    n += 1.63231337f;
    n += 0.23605679f;
    return n;
} // Solution1

// Solution2 precision = 0.04958737
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.57578200f;
    r0 = n += -0.65105295f;
    r1 = n += 0.18282725f;
    n = r0 += n;
    r2 = n *= 0.11727913f;
    n += -0.22123094f;
    r3 = n *= 0.72331375f;
    n = r0 += n;
    n += r2;
    r2 = n += 0.53991240f;
    r4 = n *= -0.61529487f;
    n *= -0.46821281f;
    n *= -2.50567317f;
    n += -0.33812022f;
    n += -0.83516490f;
    r5 = n += -0.66626304f;
    n += 2.60384297f;
    n += -2.51506734f;
    n = r2 += n;
    n += -0.00565910f;
    n *= r5;
    n *= r3;
    n += 0.22709882f;
    n += r4;
    n += r0;
    n *= r2;
    n *= r1;
    n += 3.40055704f;
    n += -1.92128503f;
    n += 1.61410022f;
    n += -0.90931231f;
    n += -1.15158784f;
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
