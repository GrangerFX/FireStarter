// Run date: 11/20/22 13:23:48 Pacific Standard Time
// Run duration = 8.056238 seconds
// Run count = 41
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
// Solution Generation = 41

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

// Precision = 0.00026572

// Solution0 precision = 0.00014600
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -1.06404555f;
    r1 = n *= 0.31580654f;
    n *= 0.17083886f;
    r2 = n += 0.49460667f;
    r3 = n += 0.03965358f;
    n *= -0.99683195f;
    n *= r1;
    r1 = n += -0.37293953f;
    n += 0.65352815f;
    n = r2 += n;
    r4 = n += 2.18274093f;
    n *= r4;
    n += 0.48731443f;
    n *= r2;
    r2 = n *= -0.03640832f;
    n *= r2;
    n = r0 *= n;
    n = r1 *= n;
    r2 = n *= 5.01903057f;
    n += 5.01923084f;
    r4 = n += -6.00116730f;
    n += r0;
    n *= -2.19657063f;
    n = r3 *= n;
    n += 32.43407822f;
    n += r2;
    n = r1 += n;
    n += 1.79121852f;
    n *= r4;
    n += r1;
    n += r3;
    n *= 0.21798083f;
    return n;
} // Solution0

// Solution1 precision = 0.00026572
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.77089715f;
    r1 = n *= 0.72826934f;
    n *= 0.08194081f;
    r2 = n += 0.27365300f;
    r3 = n += 0.92023885f;
    n *= -0.16569982f;
    n *= r1;
    r1 = n += -0.70073420f;
    n += 0.92817044f;
    n = r2 += n;
    r4 = n += 1.14166653f;
    n *= r4;
    n += 3.26489496f;
    n *= r2;
    r2 = n *= -0.88987911f;
    n *= r2;
    n = r0 *= n;
    n = r1 *= n;
    r2 = n *= -0.50048769f;
    n += 1.75562572f;
    r4 = n += 4.48073149f;
    n += r0;
    n *= 0.04003927f;
    n = r3 *= n;
    n += -0.32262698f;
    n += r2;
    n = r1 += n;
    n += 1.62125242f;
    n *= r4;
    n += r1;
    n += r3;
    n *= 0.08327358f;
    return n;
} // Solution1

// Solution2 precision = 0.00020541
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.54000074f;
    r1 = n *= 1.00846064f;
    n *= 0.27182719f;
    r2 = n += 0.42160749f;
    r3 = n += -0.24601386f;
    n *= -0.04773027f;
    n *= r1;
    r1 = n += 0.85976434f;
    n += 0.77207357f;
    n = r2 += n;
    r4 = n += -0.83984816f;
    n *= r4;
    n += -2.96999002f;
    n *= r2;
    r2 = n *= 0.24619080f;
    n *= r2;
    n = r0 *= n;
    n = r1 *= n;
    r2 = n *= 2.36374569f;
    n += -0.10834862f;
    r4 = n += -0.39849082f;
    n += r0;
    n *= 0.96809697f;
    n = r3 *= n;
    n += 1.59805930f;
    n += r2;
    n = r1 += n;
    n += 1.30178189f;
    n *= r4;
    n += r1;
    n += r3;
    n *= -0.59882873f;
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
