// Run date: 12/25/23 19:10:47 Pacific Standard Time
// Run duration = 17900.428150 seconds
// Run generation = 25
// Run evolution = 12
// Run max result = 0.00000010
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000008
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159250f;
    r0 = n *= 0.99200451f;
    n *= 0.01076466f;
    r1 = n *= 14.22255993f;
    n = r0 += n;
    r2 = n *= 0.77670091f;
    n *= 2.08495688f;
    n *= 0.09420431f;
    n *= r1;
    r1 = n += -1.58831477f;
    r3 = n += -0.63654304f;
    n *= r3;
    n += 2.19892359f;
    r3 = n *= -4.45712805f;
    n += -0.52123153f;
    r4 = n += 2.33139586f;
    r5 = n *= 0.00684064f;
    r6 = n += -0.55092967f;
    n *= r0;
    n = r1 *= n;
    n = r1 *= n;
    n += 1.39806199f;
    n += r4;
    n += r1;
    n *= -0.12267488f;
    r1 = n *= 0.01005038f;
    n *= r6;
    n *= r5;
    n += r3;
    n *= r2;
    n *= r1;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065843f;
    r0 = n *= 0.73149347f;
    n *= 22.87645721f;
    r1 = n *= 0.00700829f;
    n = r0 += n;
    r2 = n *= 1.20838773f;
    n *= -0.08073402f;
    n *= 1.51775575f;
    n *= r1;
    r1 = n += 1.07677054f;
    r3 = n += 0.24780738f;
    n *= r3;
    n += 0.28207400f;
    r3 = n *= 0.86852092f;
    n += -0.58221453f;
    r4 = n += 0.64497763f;
    r5 = n *= 0.06503715f;
    r6 = n += -1.55830622f;
    n *= r0;
    n = r1 *= n;
    n = r1 *= n;
    n += -41.29517365f;
    n += r4;
    n += r1;
    n *= 0.17173918f;
    r1 = n *= 0.08474632f;
    n *= r6;
    n *= r5;
    n += r3;
    n *= r2;
    n *= r1;
    n += -0.11813167f;
    return n;
} // Solution1

// Solution2 result = 0.00000010
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= -0.29624033f;
    n *= 15.40886211f;
    r1 = n *= 0.00437598f;
    n = r0 += n;
    r2 = n *= 1.03270924f;
    n *= -2.54688907f;
    n *= 0.38000140f;
    n *= r1;
    r1 = n += 0.80016243f;
    r3 = n += -0.47700849f;
    n *= r3;
    n += 0.55200601f;
    r3 = n *= 1.20248306f;
    n += -0.47638133f;
    r4 = n += 0.09857074f;
    r5 = n *= 0.16121154f;
    r6 = n += 1.60651660f;
    n *= r0;
    n = r1 *= n;
    n = r1 *= n;
    n += -2.02885652f;
    n += r4;
    n += r1;
    n *= -0.49155167f;
    r1 = n *= 3.50590301f;
    n *= r6;
    n *= r5;
    n += r3;
    n *= r2;
    n *= r1;
    n += 0.52359873f;
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
