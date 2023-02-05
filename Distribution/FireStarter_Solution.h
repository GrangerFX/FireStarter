// Run date: 02/04/23 19:08:03 Pacific Standard Time
// Run duration = 16.635512 seconds
// Run count = 120
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 100
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 120

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

// Precision = 0.00008434

// Solution0 precision = 0.00000155
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.21048254f;
    r1 = n += 0.87450475f;
    r2 = n += 0.10924704f;
    n = r0 *= n;
    n = r1 += n;
    r3 = n *= 0.22229815f;
    n = r3 += n;
    r4 = n *= -4.18535423f;
    n += 1.62727118f;
    r5 = n *= -0.16820462f;
    r6 = n += -0.79277641f;
    r7 = n += -0.64018041f;
    n = r5 *= n;
    n = r3 *= n;
    n += -2.37267423f;
    n += r7;
    n += r1;
    n *= 1.78150487f;
    n = r5 *= n;
    n += 1.54437470f;
    n *= -3.35130072f;
    n += 0.32810411f;
    n *= r3;
    n += 0.37427643f;
    n *= -0.12295460f;
    n *= r0;
    n *= 0.00655748f;
    n *= r2;
    n = r6 += n;
    n *= r5;
    n *= r6;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00002539
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.07658207f;
    r1 = n += 0.23697269f;
    r2 = n += 0.02877331f;
    n = r0 *= n;
    n = r1 += n;
    r3 = n *= 2.08913302f;
    n = r3 += n;
    r4 = n *= 0.38874468f;
    n += -0.61868614f;
    r5 = n *= 1.14577127f;
    r6 = n += -1.58251703f;
    r7 = n += 1.38506734f;
    n = r5 *= n;
    n = r3 *= n;
    n += 2.22643495f;
    n += r7;
    n += r1;
    n *= 2.44573617f;
    n = r5 *= n;
    n += -0.53120035f;
    n *= -0.40227005f;
    n += 11.00178051f;
    n *= r3;
    n += -1.14107800f;
    n *= 0.55503118f;
    n *= r0;
    n *= 0.22938755f;
    n *= r2;
    n = r6 += n;
    n *= r5;
    n *= r6;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00008434
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.27827787f;
    r1 = n += 0.00001287f;
    r2 = n += -0.23224336f;
    n = r0 *= n;
    n = r1 += n;
    r3 = n *= 0.19716918f;
    n = r3 += n;
    r4 = n *= 0.46796271f;
    n += -0.44273388f;
    r5 = n *= 1.54578793f;
    r6 = n += -1.50494528f;
    r7 = n += -0.20953505f;
    n = r5 *= n;
    n = r3 *= n;
    n += 0.20112683f;
    n += r7;
    n += r1;
    n *= -2.05038238f;
    n = r5 *= n;
    n += -2.42694235f;
    n *= -38.73532486f;
    n += -1.80106521f;
    n *= r3;
    n += -27.66995430f;
    n *= 0.05041438f;
    n *= r0;
    n *= -0.00068080f;
    n *= r2;
    n = r6 += n;
    n *= r5;
    n *= r6;
    n *= r4;
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
