// Run date: 04/02/23 10:35:45 Pacific Daylight Time
// Run duration = 2288.347537 seconds
// Run generation = 73
// Run result = 0.00041109
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 16
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

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

// Solution0 result = 0.00009209
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.17190202f;
    r1 = n += 1.08007610f;
    n = r0 += n;
    n = r1 *= n;
    r2 = n *= 0.47331089f;
    r3 = n *= -0.00032788f;
    n = r0 *= n;
    n *= -0.06465201f;
    n = r0 += n;
    n = r2 += n;
    r4 = n += -1.62254083f;
    r5 = n *= -1.16993749f;
    n = r4 *= n;
    r6 = n *= -0.12994699f;
    n *= r3;
    n = r2 += n;
    n += -0.52463216f;
    n = r0 += n;
    n += r2;
    n *= r4;
    n = r0 *= n;
    r4 = n += -0.83412033f;
    n *= 0.13535981f;
    n = r1 *= n;
    n *= -0.25248730f;
    n *= r1;
    n += r5;
    n = r0 += n;
    n = r0 += n;
    n += r0;
    n *= r6;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00031829
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.15179943f;
    r1 = n += 1.62796283f;
    n = r0 += n;
    n = r1 *= n;
    r2 = n *= 0.62981218f;
    r3 = n *= 0.01928605f;
    n = r0 *= n;
    n *= -3.84629154f;
    n = r0 += n;
    n = r2 += n;
    r4 = n += -3.26173854f;
    r5 = n *= -0.17828703f;
    n = r4 *= n;
    r6 = n *= 0.56424904f;
    n *= r3;
    n = r2 += n;
    n += -0.18293221f;
    n = r0 += n;
    n += r2;
    n *= r4;
    n = r0 *= n;
    r4 = n += 0.81869292f;
    n *= -0.04565566f;
    n = r1 *= n;
    n *= -2.39869833f;
    n *= r1;
    n += r5;
    n = r0 += n;
    n = r0 += n;
    n += r0;
    n *= r6;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00041109
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.20559984f;
    r1 = n += -1.76615942f;
    n = r0 += n;
    n = r1 *= n;
    r2 = n *= 0.52677071f;
    r3 = n *= 0.02817151f;
    n = r0 *= n;
    n *= 5.02715826f;
    n = r0 += n;
    n = r2 += n;
    r4 = n += -1.62591696f;
    r5 = n *= 1.48494720f;
    n = r4 *= n;
    r6 = n *= -0.10517338f;
    n *= r3;
    n = r2 += n;
    n += 1.00565743f;
    n = r0 += n;
    n += r2;
    n *= r4;
    n = r0 *= n;
    r4 = n += -1.44579542f;
    n *= -0.06587653f;
    n = r1 *= n;
    n *= 0.86300695f;
    n *= r1;
    n += r5;
    n = r0 += n;
    n = r0 += n;
    n += r0;
    n *= r6;
    n += r4;
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
