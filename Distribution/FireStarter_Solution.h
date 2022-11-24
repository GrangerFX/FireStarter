// Run date: 11/24/22 11:46:09 Pacific Standard Time
// Run duration = 2.052722 seconds
// Run count = 5
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 12;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 5

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

// Precision = 0.00039327

// Solution0 precision = 0.00031114
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.68232930f;
    r0 = n += 0.09800901f;
    r1 = n += -1.97283792f;
    n = r0 *= n;
    n += -1.59433401f;
    n += -1.25065041f;
    r2 = n += 2.87514234f;
    n += -0.13585857f;
    r3 = n += -1.37557650f;
    n *= -0.02776236f;
    r4 = n += 0.54880691f;
    n *= 0.00032977f;
    r5 = n += 0.00014421f;
    n = r3 += n;
    n *= r4;
    r4 = n += -0.00692651f;
    r6 = n *= 0.97121561f;
    n += r3;
    n *= -0.02304155f;
    r3 = n += 0.68876648f;
    n *= r5;
    n *= r4;
    n *= r2;
    n = r1 *= n;
    n = r3 += n;
    n += r0;
    n *= r1;
    n *= 0.44939154f;
    n += 33.20740128f;
    n *= -0.02616516f;
    n *= r6;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00014979
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.58536339f;
    r0 = n += -0.27571881f;
    r1 = n += -0.38110593f;
    n = r0 *= n;
    n += 0.80985421f;
    n += -21.35552406f;
    r2 = n += -1.73112130f;
    n += 16.89515495f;
    r3 = n += 2.04838443f;
    n *= 0.00016031f;
    r4 = n += -0.01928602f;
    n *= 1.19867468f;
    r5 = n += -0.26621845f;
    n = r3 += n;
    n *= r4;
    r4 = n += 0.52420360f;
    r6 = n *= 1.02683103f;
    n += r3;
    n *= -0.00206152f;
    r3 = n += -0.60985261f;
    n *= r5;
    n *= r4;
    n *= r2;
    n = r1 *= n;
    n = r3 += n;
    n += r0;
    n *= r1;
    n *= -0.00006077f;
    n += -0.79361606f;
    n *= -0.96979254f;
    n *= r6;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00039327
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -5.19326973f;
    r0 = n += 2.14534688f;
    r1 = n += 0.71916038f;
    n = r0 *= n;
    n += 0.73798794f;
    n += -4.93748379f;
    r2 = n += -0.64803761f;
    n += -0.84209716f;
    r3 = n += -2.48536777f;
    n *= 0.00038493f;
    r4 = n += -0.02839006f;
    n *= 4.33889294f;
    r5 = n += 0.41301396f;
    n = r3 += n;
    n *= r4;
    r4 = n += 0.63931942f;
    r6 = n *= 0.85143942f;
    n += r3;
    n *= -0.00657789f;
    r3 = n += 0.37438658f;
    n *= r5;
    n *= r4;
    n *= r2;
    n = r1 *= n;
    n = r3 += n;
    n += r0;
    n *= r1;
    n *= 0.00294423f;
    n += 2.09012461f;
    n *= 1.20947957f;
    n *= r6;
    n *= r3;
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
