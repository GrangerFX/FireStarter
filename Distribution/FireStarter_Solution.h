// Run date: 08/21/22 13:37:51 Pacific Daylight Time
// Run duration = 2.986348 seconds
// Run count = 2
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 10;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 20

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

// Precision = 0.02020013

// Solution0 precision = 0.01994693
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.66138816f;
    r0 = n *= -0.49003932f;
    n *= 0.40324229f;
    r1 = n *= -0.73034197f;
    r2 = n += 0.55057609f;
    n = r2 *= n;
    r3 = n += -0.26153037f;
    n += r0;
    r0 = n += -0.80481505f;
    n = r0 += n;
    n += r3;
    r3 = n += 0.62422746f;
    n += 0.81631988f;
    n = r2 += n;
    r4 = n *= 0.04779100f;
    n *= 0.64477170f;
    n += r0;
    n *= -0.13273722f;
    n += r1;
    n += 0.55703372f;
    n += -0.31580284f;
    n += -0.50524330f;
    n += -0.51558149f;
    n += r3;
    r3 = n *= -0.74639523f;
    n *= r2;
    n = r3 *= n;
    n = r4 += n;
    n += r3;
    n += r4;
    n += 0.48942965f;
    n += -0.96742314f;
    return n;
} // Solution0

// Solution1 precision = 0.01851559
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.10691966f;
    r0 = n *= -0.54605359f;
    n *= -0.63013935f;
    r1 = n *= -0.59761375f;
    r2 = n += 0.42960206f;
    n = r2 *= n;
    r3 = n += 0.15093373f;
    n += r0;
    r0 = n += 0.59808952f;
    n = r0 += n;
    n += r3;
    r3 = n += -0.29845583f;
    n += 0.44052228f;
    n = r2 += n;
    r4 = n *= -0.09945098f;
    n *= -0.86431491f;
    n += r0;
    n *= -0.89779520f;
    n += r1;
    n += 0.96081394f;
    n += -0.62062293f;
    n += -0.33655596f;
    n += -0.22570080f;
    n += r3;
    r3 = n *= 0.56723630f;
    n *= r2;
    n = r3 *= n;
    n = r4 += n;
    n += r3;
    n += r4;
    n += 0.34712824f;
    n += 0.83414662f;
    return n;
} // Solution1

// Solution2 precision = 0.02020013
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.77879912f;
    r0 = n *= -0.87075484f;
    n *= 0.28375357f;
    r1 = n *= -1.03978634f;
    r2 = n += 0.07484075f;
    n = r2 *= n;
    r3 = n += 0.28829211f;
    n += r0;
    r0 = n += 0.36188155f;
    n = r0 += n;
    n += r3;
    r3 = n += 0.43056735f;
    n += 0.36421651f;
    n = r2 += n;
    r4 = n *= 0.00644562f;
    n *= 0.60312158f;
    n += r0;
    n *= -0.06069987f;
    n += r1;
    n += -0.25282058f;
    n += -2.53434396f;
    n += 0.60122275f;
    n += -1.45112538f;
    n += r3;
    r3 = n *= -0.24145883f;
    n *= r2;
    n = r3 *= n;
    n = r4 += n;
    n += r3;
    n += r4;
    n += 2.01123333f;
    n += -2.26535749f;
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
