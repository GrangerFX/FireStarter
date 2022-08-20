// Run date: 08/20/22 13:39:39 Pacific Daylight Time
// Run duration = 6.088083 seconds
// Run count = 4
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
// Solution Generation = 400

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

// Precision = 0.00008249

// Solution0 precision = 0.00003481
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.58299863f;
    n *= 0.22915755f;
    n *= -0.89999622f;
    r0 = n += -0.36620101f;
    r1 = n += 1.34156227f;
    r2 = n += -0.65391576f;
    r3 = n += -0.64791971f;
    r4 = n *= 0.08389912f;
    r5 = n += 0.54765701f;
    r6 = n += 0.10789506f;
    n = r5 += n;
    r7 = n += 0.74895507f;
    n += 0.30067608f;
    n = r6 += n;
    n *= r3;
    r3 = n *= -0.09641466f;
    n = r6 += n;
    n *= r1;
    n += r0;
    n *= -2.70457220f;
    n = r4 *= n;
    n = r6 += n;
    n *= r2;
    n *= r3;
    n = r6 *= n;
    n *= 1.52421010f;
    n += 1.60029674f;
    n += -0.92854011f;
    n += r7;
    n += r4;
    n *= r5;
    n *= r6;
    return n;
} // Solution0

// Solution1 precision = 0.00006929
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.78891182f;
    n *= 0.51959586f;
    n *= -0.26573685f;
    r0 = n += -0.71222103f;
    r1 = n += -0.05061996f;
    r2 = n += -0.04814477f;
    r3 = n += 0.24730007f;
    r4 = n *= 0.10665902f;
    r5 = n += 0.30413321f;
    r6 = n += -0.48230207f;
    n = r5 += n;
    r7 = n += 1.80042005f;
    n += 1.97897089f;
    n = r6 += n;
    n *= r3;
    r3 = n *= 0.79625374f;
    n = r6 += n;
    n *= r1;
    n += r0;
    n *= 1.13468504f;
    n = r4 *= n;
    n = r6 += n;
    n *= r2;
    n *= r3;
    n = r6 *= n;
    n *= 0.59922892f;
    n += 0.63475913f;
    n += 0.40928546f;
    n += r7;
    n += r4;
    n *= r5;
    n *= r6;
    return n;
} // Solution1

// Solution2 precision = 0.00008249
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -0.52653873f;
    n *= 0.35963592f;
    n *= -0.32755527f;
    r0 = n += -0.67631203f;
    r1 = n += 0.32221520f;
    r2 = n += 0.29206833f;
    r3 = n += 0.37646717f;
    r4 = n *= 0.30568695f;
    r5 = n += 1.16640055f;
    r6 = n += 0.23477013f;
    n = r5 += n;
    r7 = n += -2.55318260f;
    n += 0.80954915f;
    n = r6 += n;
    n *= r3;
    r3 = n *= -0.72168815f;
    n = r6 += n;
    n *= r1;
    n += r0;
    n *= -2.11409974f;
    n = r4 *= n;
    n = r6 += n;
    n *= r2;
    n *= r3;
    n = r6 *= n;
    n *= 1.01895547f;
    n += 0.66404200f;
    n += 0.12007353f;
    n += r7;
    n += r4;
    n *= r5;
    n *= r6;
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
