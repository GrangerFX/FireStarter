// Run date: 04/23/23 11:30:07 Pacific Daylight Time
// Run duration = 1410.799043 seconds
// Run generation = 239
// Run result = 0.00000095
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.03330854f;
    r0 = n += -3.17490149f;
    r1 = n *= 0.25287470f;
    n = r0 += n;
    n += 0.00000136f;
    n *= r1;
    r1 = n += -2.30218649f;
    n *= -0.77244431f;
    r2 = n *= -1.42058730f;
    n += 0.84451407f;
    n *= 3.97853398f;
    n *= -0.00818094f;
    r3 = n += 1.20727527f;
    r4 = n *= -0.89261740f;
    r5 = n += 0.21287321f;
    n *= 5.05732441f;
    n *= r4;
    n *= r5;
    r5 = n *= 0.10248163f;
    r4 = n *= -13.79338646f;
    n += r1;
    n += r3;
    n *= r4;
    n += -9.16021633f;
    n *= -0.00305498f;
    n *= 0.31378391f;
    n = r5 += n;
    n *= r2;
    n *= r5;
    n += -0.12770720f;
    n *= r0;
    n += -0.00000033f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.39098275f;
    r0 = n += -1.69967699f;
    r1 = n *= 0.29496118f;
    n = r0 += n;
    n += 0.00000534f;
    n *= r1;
    r1 = n += -2.84545779f;
    n *= 1.34625161f;
    r2 = n *= 0.14032629f;
    n += -1.74668086f;
    n *= 0.35588577f;
    n *= 0.09113964f;
    r3 = n += -0.27489364f;
    r4 = n *= 2.09894919f;
    r5 = n += -0.35884658f;
    n *= 0.30143476f;
    n *= r4;
    n *= r5;
    r5 = n *= 3.60322428f;
    r4 = n *= -0.77797782f;
    n += r1;
    n += r3;
    n *= r4;
    n += 0.65587449f;
    n *= -0.00358278f;
    n *= -7.76357126f;
    n = r5 += n;
    n *= r2;
    n *= r5;
    n += -0.33347806f;
    n *= r0;
    n += -0.11813308f;
    return n;
} // Solution1

// Solution2 result = 0.00000095
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.99237287f;
    r0 = n += -0.62562001f;
    r1 = n *= -0.21655801f;
    n = r0 += n;
    n += -0.00000225f;
    n *= r1;
    r1 = n += 0.80066758f;
    n *= -1.88386357f;
    r2 = n *= 1.46102607f;
    n += -2.50925970f;
    n *= -0.47308984f;
    n *= 0.20285149f;
    r3 = n += 3.34076405f;
    r4 = n *= 0.56132716f;
    r5 = n += -0.52856094f;
    n *= 1.84121954f;
    n *= r4;
    n *= r5;
    r5 = n *= 0.07482015f;
    r4 = n *= -6.07248497f;
    n += r1;
    n += r3;
    n *= r4;
    n += -1.50095367f;
    n *= -0.00033725f;
    n *= -6.59390497f;
    n = r5 += n;
    n *= r2;
    n *= r5;
    n += -0.04414902f;
    n *= r0;
    n += 0.52359957f;
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
