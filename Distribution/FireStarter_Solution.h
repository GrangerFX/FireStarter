// Run date: 12/28/22 10:39:43 Pacific Standard Time
// Run duration = 32.836654 seconds
// Run count = 55
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
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 55

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

// Precision = 0.00015339

// Solution0 precision = 0.00015339
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.30400646f;
    n += 1.22859716f;
    n *= -14.69769478f;
    r1 = n += 14.91058159f;
    n *= -61.30066681f;
    r2 = n *= 0.00000192f;
    r3 = n += -0.17457245f;
    r4 = n += -17.73406410f;
    n = r1 += n;
    n *= r3;
    n = r1 *= n;
    n += 41.74271393f;
    n *= 100.36399078f;
    n *= -0.01754232f;
    n += r4;
    n += -88.21551514f;
    r4 = n *= -0.03829991f;
    r3 = n += 8.37286377f;
    r5 = n += 1.33204532f;
    n *= r3;
    n += r0;
    n *= 0.26410881f;
    r0 = n *= 0.03299046f;
    n *= r1;
    n *= 0.05714774f;
    n = r4 *= n;
    n *= r0;
    n += r4;
    n += r5;
    n += r2;
    n *= -0.05034838f;
    n += -0.16517903f;
    return n;
} // Solution0

// Solution1 precision = 0.00010741
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 7.91077089f;
    n += -48.75775528f;
    n *= -0.26656869f;
    r1 = n += -33.50843048f;
    n *= -66.31869507f;
    r2 = n *= 0.00000002f;
    r3 = n += -0.13311644f;
    r4 = n += 22.95582771f;
    n = r1 += n;
    n *= r3;
    n = r1 *= n;
    n += 11.12170792f;
    n *= -0.07936864f;
    n *= -43.08031082f;
    n += r4;
    n += 79.13941956f;
    r4 = n *= -0.09552379f;
    r3 = n += -5.85761309f;
    r5 = n += 5.66120481f;
    n *= r3;
    n += r0;
    n *= 0.01998390f;
    r0 = n *= -0.58460379f;
    n *= r1;
    n *= 0.06067439f;
    n = r4 *= n;
    n *= r0;
    n += r4;
    n += r5;
    n += r2;
    n *= -0.11456880f;
    n += -0.29887420f;
    return n;
} // Solution1

// Solution2 precision = 0.00015235
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -6.20815611f;
    n += 38.63738251f;
    n *= -0.53126258f;
    r1 = n += 3.98852563f;
    n *= -0.00000410f;
    r2 = n *= 103.64498138f;
    r3 = n += 0.20235263f;
    r4 = n += 11.55397511f;
    n = r1 += n;
    n *= r3;
    n = r1 *= n;
    n += -14.24599457f;
    n *= -0.15595207f;
    n *= 2.28243041f;
    n += r4;
    n += 41.03910828f;
    r4 = n *= -0.52662081f;
    r3 = n += 25.10131264f;
    r5 = n += -15.63136196f;
    n *= r3;
    n += r0;
    n *= -0.00288198f;
    r0 = n *= -1.16667891f;
    n *= r1;
    n *= -0.05677078f;
    n = r4 *= n;
    n *= r0;
    n += r4;
    n += r5;
    n += r2;
    n *= -0.31411132f;
    n += -5.32088232f;
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
