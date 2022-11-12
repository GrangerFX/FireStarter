// Run date: 11/12/22 14:59:30 Pacific Standard Time
// Run duration = 54.023634 seconds
// Run count = 0
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
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

// Precision = 0.00011647

// Solution0 precision = 0.00011647
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.35955811f;
    r0 = n *= 0.13470691f;
    n += -0.71130776f;
    n += 0.50678611f;
    r1 = n += 0.02243321f;
    n *= r1;
    n += -0.36200109f;
    n += -0.80903822f;
    r1 = n *= -1.01376235f;
    n *= 0.55477929f;
    r2 = n += 0.82699358f;
    n *= r2;
    n += 0.30203670f;
    r2 = n *= -0.61626619f;
    r3 = n += 6.05753183f;
    n += -4.14787531f;
    r4 = n += -0.54143029f;
    n *= r1;
    r1 = n *= 0.48211715f;
    n += r1;
    n *= 1.57781208f;
    n += r0;
    n *= 2.79011035f;
    n *= -0.00062208f;
    n = r2 += n;
    n *= r2;
    n *= r4;
    n = r3 *= n;
    n *= -0.54280454f;
    n *= r3;
    n += 0.49208406f;
    n += 0.50792634f;
    return n;
} // Solution0

// Solution1 precision = 10.00000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.00000000f;
    r0 = n *= 0.00000000f;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n += 0.00000000f;
    n *= r1;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n *= 0.00000000f;
    n *= 0.00000000f;
    r2 = n += 0.00000000f;
    n *= r2;
    n += 0.00000000f;
    r2 = n *= 0.00000000f;
    r3 = n += 0.00000000f;
    n += 0.00000000f;
    r4 = n += 0.00000000f;
    n *= r1;
    r1 = n *= 0.00000000f;
    n += r1;
    n *= 0.00000000f;
    n += r0;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n = r2 += n;
    n *= r2;
    n *= r4;
    n = r3 *= n;
    n *= 0.00000000f;
    n *= r3;
    n += 0.00000000f;
    n += 0.00000000f;
    return n;
} // Solution1

// Solution2 precision = 10.00000000
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.00000000f;
    r0 = n *= 0.00000000f;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n += 0.00000000f;
    n *= r1;
    n += 0.00000000f;
    n += 0.00000000f;
    r1 = n *= 0.00000000f;
    n *= 0.00000000f;
    r2 = n += 0.00000000f;
    n *= r2;
    n += 0.00000000f;
    r2 = n *= 0.00000000f;
    r3 = n += 0.00000000f;
    n += 0.00000000f;
    r4 = n += 0.00000000f;
    n *= r1;
    r1 = n *= 0.00000000f;
    n += r1;
    n *= 0.00000000f;
    n += r0;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n = r2 += n;
    n *= r2;
    n *= r4;
    n = r3 *= n;
    n *= 0.00000000f;
    n *= r3;
    n += 0.00000000f;
    n += 0.00000000f;
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
