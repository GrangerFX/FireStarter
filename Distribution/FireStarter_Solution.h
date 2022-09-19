// Run date: 09/18/22 16:54:03 Pacific Daylight Time
// Run duration = 1.772067 seconds
// Run count = 18
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_UNIT;
// Run units = 4;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 128;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 3494;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 18

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

// Precision = 0.00034389

// Solution0 precision = 0.00034389
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -0.19236761f;
    r1 = n *= 0.43543592f;
    r2 = n *= -0.00217716f;
    r3 = n += -0.27578917f;
    n = r3 += n;
    r4 = n += 0.29181471f;
    r5 = n += -2.24636531f;
    n = r4 *= n;
    n *= -0.53670341f;
    r6 = n *= -0.52678490f;
    n *= r4;
    n += r1;
    r1 = n += -0.30566195f;
    r4 = n += -1.10400426f;
    n *= 1.03816998f;
    r7 = n *= -0.96058327f;
    r8 = n += 1.10144436f;
    n = r3 += n;
    n *= -9.21525860f;
    n += -6.10028791f;
    n *= r2;
    n += r6;
    n = r8 *= n;
    n += 0.46455878f;
    n *= r0;
    n += r3;
    n *= r5;
    n *= r1;
    n *= r8;
    n += 0.47324899f;
    n *= r4;
    n += r7;
    return n;
} // Solution0

// Solution1 precision = 0.00018263
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -0.65768474f;
    r1 = n *= -0.89230388f;
    r2 = n *= -0.00106532f;
    r3 = n += 0.02891741f;
    n = r3 += n;
    r4 = n += 0.92415482f;
    r5 = n += -2.16205120f;
    n = r4 *= n;
    n *= 1.28566647f;
    r6 = n *= -0.09464765f;
    n *= r4;
    n += r1;
    r1 = n += 0.54126650f;
    r4 = n += 1.69741881f;
    n *= -0.30725530f;
    r7 = n *= -1.28728175f;
    r8 = n += 0.79331607f;
    n = r3 += n;
    n *= 6.71098280f;
    n += 0.82975358f;
    n *= r2;
    n += r6;
    n = r8 *= n;
    n += 0.36065286f;
    n *= r0;
    n += r3;
    n *= r5;
    n *= r1;
    n *= r8;
    n += 0.34412366f;
    n *= r4;
    n += r7;
    return n;
} // Solution1

// Solution2 precision = 0.00034314
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -0.26437533f;
    r1 = n *= -0.35007724f;
    r2 = n *= -0.46901792f;
    r3 = n += -1.12222254f;
    n = r3 += n;
    r4 = n += 1.18396306f;
    r5 = n += -1.61994803f;
    n = r4 *= n;
    n *= 0.00435867f;
    r6 = n *= -2.16021132f;
    n *= r4;
    n += r1;
    r1 = n += -0.77026969f;
    r4 = n += -0.63498318f;
    n *= -0.31801683f;
    r7 = n *= -0.60119748f;
    r8 = n += 0.59397912f;
    n = r3 += n;
    n *= -1.13744831f;
    n += 1.51361835f;
    n *= r2;
    n += r6;
    n = r8 *= n;
    n += 0.39642766f;
    n *= r0;
    n += r3;
    n *= r5;
    n *= r1;
    n *= r8;
    n += -0.47413841f;
    n *= r4;
    n += r7;
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
