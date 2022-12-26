// Run date: 12/26/22 00:11:58 Pacific Standard Time
// Run duration = 3344.602974 seconds
// Run count = 101
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 10;
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
// Solution Generation = 101

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

// Precision = 0.00001395

// Solution0 precision = 0.00000525
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14160895f;
    r1 = n += 0.00003019f;
    n *= r1;
    n *= -1.35509300f;
    r1 = n += 3.51198125f;
    n *= -0.10155227f;
    n *= -0.42722097f;
    r2 = n += 2.10523796f;
    r3 = n *= -0.18406008f;
    n *= r1;
    r1 = n += -0.58112097f;
    r4 = n *= 0.01625858f;
    n += 0.85643077f;
    r5 = n += -1.58027196f;
    r6 = n *= 0.69672054f;
    r7 = n += 1.76108384f;
    n = r7 *= n;
    n *= 0.37415221f;
    n += -0.04404471f;
    n += r2;
    n *= r6;
    n += -1.85634983f;
    n += r7;
    n *= r1;
    n += r4;
    n *= -0.12141415f;
    n += r3;
    n += r5;
    n += -1.18090701f;
    n += 1.79592705f;
    n *= r0;
    n += -0.00001775f;
    return n;
} // Solution0

// Solution1 precision = 0.00001395
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09077716f;
    r1 = n += 0.00020787f;
    n *= r1;
    n *= -1.35119510f;
    r1 = n += 2.23702478f;
    n *= 2.09215879f;
    n *= -0.00418525f;
    r2 = n += -0.43109852f;
    r3 = n *= 0.02525185f;
    n *= r1;
    r1 = n += -0.30357271f;
    r4 = n *= -0.38445354f;
    n += -0.18941033f;
    r5 = n += -3.69199324f;
    r6 = n *= -0.39405692f;
    r7 = n += 0.84717643f;
    n = r7 *= n;
    n *= 1.78697431f;
    n += -12.80928516f;
    n += r2;
    n *= r6;
    n += -1.38733268f;
    n += r7;
    n *= r1;
    n += r4;
    n *= -2.95165467f;
    n += r3;
    n += r5;
    n += 0.21038984f;
    n += 4.07040930f;
    n *= r0;
    n += -0.11826499f;
    return n;
} // Solution1

// Solution2 precision = 0.00000738
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n += -0.00000009f;
    n *= r1;
    n *= 0.93199247f;
    r1 = n += -2.12882113f;
    n *= -0.02382703f;
    n *= 0.67630213f;
    r2 = n += 2.01602960f;
    r3 = n *= -0.08615179f;
    n *= r1;
    r1 = n += 1.24426877f;
    r4 = n *= 0.19207637f;
    n += 0.78337806f;
    r5 = n += 0.20467374f;
    r6 = n *= -3.17797089f;
    r7 = n += -1.03621054f;
    n = r7 *= n;
    n *= 0.39031231f;
    n += -1.77383316f;
    n += r2;
    n *= r6;
    n += -4.27666569f;
    n += r7;
    n *= r1;
    n += r4;
    n *= 0.04888056f;
    n += r3;
    n += r5;
    n += -1.01676679f;
    n += 0.60049462f;
    n *= r0;
    n += 0.52359879f;
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
