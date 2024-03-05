// Run date: 03/04/24 18:47:38 Pacific Standard Time
// Run duration = 3892.118623 seconds
// Run generation = 386
// Run evolution = 25
// Run max result = 0.00000019
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    n *= 0.56068277f;
    r1 = n *= 3.05552673f;
    r2 = n *= -0.01671295f;
    n *= r0;
    n += 0.13414377f;
    r0 = n *= -4.57618570f;
    r3 = n *= -0.51799142f;
    r4 = n += 0.77390194f;
    r5 = n += -1.07896006f;
    n = r0 += n;
    n = r4 += n;
    r6 = n += 0.68482649f;
    n *= -0.52839720f;
    n *= r5;
    n += r6;
    n += r3;
    n = r0 *= n;
    r3 = n *= -0.01992240f;
    n += r3;
    n += 2.89113259f;
    r3 = n *= -0.00284508f;
    n *= -0.03368913f;
    n += r4;
    n = r3 *= n;
    n *= r3;
    r3 = n *= 47774.79687500f;
    n *= r1;
    n *= r0;
    n += r2;
    n *= r3;
    n += -0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    n *= -1.32561421f;
    r1 = n *= -5.05427122f;
    r2 = n *= -0.24849020f;
    n *= r0;
    n += 2.90027094f;
    r0 = n *= -0.06300537f;
    r3 = n *= -0.51872724f;
    r4 = n += 0.68667078f;
    r5 = n += -0.81259423f;
    n = r0 += n;
    n = r4 += n;
    r6 = n += 0.74205589f;
    n *= -0.54036963f;
    n *= r5;
    n += r6;
    n += r3;
    n = r0 *= n;
    r3 = n *= -0.02999364f;
    n += r3;
    n += 2.97864318f;
    r3 = n *= -0.00355091f;
    n *= 3.71025944f;
    n += r4;
    n = r3 *= n;
    n *= r3;
    r3 = n *= 13670.98242188f;
    n *= r1;
    n *= r0;
    n += r2;
    n *= r3;
    n += -0.11813167f;
    return n;
} // Solution1

// Solution2 result = 0.00000019
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    n *= 0.41064402f;
    r1 = n *= -0.07574196f;
    r2 = n *= 1.68807399f;
    n *= r0;
    n += 0.10841787f;
    r0 = n *= -0.99069315f;
    r3 = n *= -0.84567571f;
    r4 = n += -0.09265152f;
    r5 = n += 0.07426159f;
    n = r0 += n;
    n = r4 += n;
    r6 = n += -213.71179199f;
    n *= 0.03326323f;
    n *= r5;
    n += r6;
    n += r3;
    n = r0 *= n;
    r3 = n *= 0.00972373f;
    n += r3;
    n += 1.60452580f;
    r3 = n *= -0.65353167f;
    n *= 1.85242558f;
    n += r4;
    n = r3 *= n;
    n *= r3;
    r3 = n *= 0.32282895f;
    n *= r1;
    n *= r0;
    n += r2;
    n *= r3;
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
