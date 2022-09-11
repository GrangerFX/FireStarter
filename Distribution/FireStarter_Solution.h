// Run date: 09/10/22 17:59:51 Pacific Daylight Time
// Run duration = 13.860841 seconds
// Run count = 94
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 8;
// Run process = 1;
// Run population = 17408;
// Run iterations = 128;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 152;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 78

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

// Precision = 0.00016552

// Solution0 precision = 0.00010222
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -6.01901007f;
    r0 = n += 2.87899303f;
    r1 = n += -0.00217011f;
    n = r0 *= n;
    n += -5.33627987f;
    r2 = n *= -0.45270336f;
    n += 3.06239104f;
    n *= 2.84694529f;
    n = r0 += n;
    r3 = n += -14.81091404f;
    n *= -0.00188532f;
    n = r0 *= n;
    r4 = n += -0.15204653f;
    n = r4 += n;
    n = r3 += n;
    r5 = n += 2.22069144f;
    n += r0;
    n *= 0.26905525f;
    n *= -0.06629588f;
    n *= r1;
    n *= -0.48231453f;
    n = r4 *= n;
    n = r4 += n;
    n *= -0.35410032f;
    n += 0.59923792f;
    r1 = n += -0.59983176f;
    n += r5;
    n += r3;
    n += 57.86318970f;
    n += r2;
    n *= r4;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00016552
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.15532012f;
    r0 = n += -2.97506738f;
    r1 = n += 0.05090576f;
    n = r0 *= n;
    n += -3.94507480f;
    r2 = n *= -0.30710796f;
    n += 0.44029707f;
    n *= 3.46417761f;
    n = r0 += n;
    r3 = n += -2.18382406f;
    n *= 0.14081430f;
    n = r0 *= n;
    r4 = n += 0.83759296f;
    n = r4 += n;
    n = r3 += n;
    r5 = n += -6.85847330f;
    n += r0;
    n *= -0.12349987f;
    n *= -0.00473734f;
    n *= r1;
    n *= -1.01677406f;
    n = r4 *= n;
    n = r4 += n;
    n *= 0.66179526f;
    n += 0.84350961f;
    r1 = n += -0.94951379f;
    n += r5;
    n += r3;
    n += 1.39400232f;
    n += r2;
    n *= r4;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00009936
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.42359877f;
    r0 = n += -1.19467568f;
    r1 = n += 0.00037866f;
    n = r0 *= n;
    n += 0.96540290f;
    r2 = n *= -0.45037574f;
    n += -0.91104531f;
    n *= 1.56619227f;
    n = r0 += n;
    r3 = n += -10.44661331f;
    n *= -0.02381614f;
    n = r0 *= n;
    r4 = n += 0.16889116f;
    n = r4 += n;
    n = r3 += n;
    r5 = n += -0.25563121f;
    n += r0;
    n *= -0.36729223f;
    n *= -0.46930423f;
    n *= r1;
    n *= 0.00912936f;
    n = r4 *= n;
    n = r4 += n;
    n *= -0.12224408f;
    n += 0.31129566f;
    r1 = n += 0.21250650f;
    n += r5;
    n += r3;
    n += 3.26683545f;
    n += r2;
    n *= r4;
    n += r1;
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
