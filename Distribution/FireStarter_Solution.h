// Run date: 08/23/22 10:44:01 Pacific Daylight Time
// Run duration = 1.986089 seconds
// Run count = 32
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
// Solution Generation = 3200

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

// Precision = 0.00049829

// Solution0 precision = 0.00049829
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.36114770f;
    r0 = n += -0.10525198f;
    r1 = n += -1.07008827f;
    n *= 0.84103215f;
    r2 = n *= 0.64329016f;
    n = r1 *= n;
    r3 = n *= -0.89647198f;
    r4 = n += 0.14678571f;
    r5 = n *= 0.93710637f;
    n *= r5;
    r5 = n *= 0.79620916f;
    n *= 0.48294356f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= 0.53415918f;
    n *= -0.00352719f;
    n *= 19.85148048f;
    n = r3 *= n;
    n *= -0.24808741f;
    n *= -0.00096624f;
    n = r5 += n;
    n *= r3;
    r3 = n += -0.47152996f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += -0.05489811f;
    n += 0.55986542f;
    return n;
} // Solution0

// Solution1 precision = 0.00018632
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.32865551f;
    r0 = n += 0.50336695f;
    r1 = n += 0.44752645f;
    n *= -0.93489122f;
    r2 = n *= -0.34438440f;
    n = r1 *= n;
    r3 = n *= 0.63259894f;
    r4 = n += -0.33729836f;
    r5 = n *= -0.94123805f;
    n *= r5;
    r5 = n *= -2.77855015f;
    n *= 1.08257949f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= -0.40325767f;
    n *= -0.37684318f;
    n *= 0.54446065f;
    n = r3 *= n;
    n *= 0.00104284f;
    n *= -34.29524231f;
    n = r5 += n;
    n *= r3;
    r3 = n += -0.55505079f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += 1.67309940f;
    n += -0.66085154f;
    return n;
} // Solution1

// Solution2 precision = 0.00024459
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.26350570f;
    r0 = n += -0.19687192f;
    r1 = n += -1.47250748f;
    n *= -0.70611125f;
    r2 = n *= 0.82505685f;
    n = r1 *= n;
    r3 = n *= 0.62354249f;
    r4 = n += 1.41566551f;
    r5 = n *= -0.20021592f;
    n *= r5;
    r5 = n *= -2.38785672f;
    n *= -3.27570248f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= 2.60207248f;
    n *= 0.51348203f;
    n *= -0.37130171f;
    n = r3 *= n;
    n *= 2.66333675f;
    n *= 0.20456286f;
    n = r5 += n;
    n *= r3;
    r3 = n += 0.17331842f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += -2.09718919f;
    n += 0.94313002f;
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
