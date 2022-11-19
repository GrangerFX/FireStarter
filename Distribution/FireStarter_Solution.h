// Run date: 11/19/22 10:35:10 Pacific Standard Time
// Run duration = 23.368167 seconds
// Run count = 24
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
// Solution Generation = 24

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

// Precision = 0.00184247

// Solution0 precision = 0.00029317
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.38422036f;
    n += 0.78280717f;
    r1 = n += -2.46690369f;
    r2 = n *= -0.40718672f;
    r3 = n *= -1.22658503f;
    r4 = n += 0.65250093f;
    n = r4 *= n;
    r5 = n += -1.55343270f;
    n *= r0;
    n += 2.09137392f;
    n += 3.95297170f;
    n += -4.89084816f;
    n *= r2;
    n += -0.91384619f;
    n += 0.53464359f;
    n *= 0.13642003f;
    n += 0.77460831f;
    r2 = n += 0.57214916f;
    r0 = n += -1.28954911f;
    n = r0 *= n;
    r6 = n += -2.65453219f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.00020552
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.33157089f;
    n += 0.59478462f;
    r1 = n += -3.16765618f;
    r2 = n *= -0.22265518f;
    r3 = n *= 1.42747509f;
    r4 = n += -0.94732207f;
    n = r4 *= n;
    r5 = n += -1.94801557f;
    n *= r0;
    n += 23.37656403f;
    n += -16.07196808f;
    n += 3.60342431f;
    n *= r2;
    n += 5.36165524f;
    n += -8.12461472f;
    n *= -0.11460061f;
    n += -3.45284390f;
    r2 = n += 4.92905998f;
    r0 = n += -1.43114889f;
    n = r0 *= n;
    r6 = n += -0.63815022f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.00184247
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.78080755f;
    n += 0.66811889f;
    r1 = n += -0.51072639f;
    r2 = n *= -0.39859027f;
    r3 = n *= -0.18289796f;
    r4 = n += 0.78558159f;
    n = r4 *= n;
    r5 = n += -1.26046097f;
    n *= r0;
    n += 3.96818161f;
    n += -15.39598846f;
    n += 7.79097319f;
    n *= r2;
    n += -2.07044959f;
    n += -2.49776578f;
    n *= 0.09726883f;
    n += 0.14377812f;
    r2 = n += 0.05505411f;
    r0 = n += -0.37322149f;
    n = r0 *= n;
    r6 = n += -6.22827101f;
    n = r1 += n;
    n = r2 += n;
    n = r0 += n;
    n *= r0;
    n += r6;
    n += r1;
    n += r2;
    n *= r3;
    n = r4 += n;
    n *= r4;
    n += r5;
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
