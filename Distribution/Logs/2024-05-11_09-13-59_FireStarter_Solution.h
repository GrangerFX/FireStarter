// Run date: 05/11/24 09:13:59 Pacific Daylight Time
// Run duration = 56.944093 seconds
// Run generation = 25
// Run evolution = 2
// Run max result = 0.00014323
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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

// Solution0 result = 0.00010499
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.15953887f;
    r1 = n *= -0.80279464f;
    r2 = n += 1.43992114f;
    r3 = n += 0.16631705f;
    n *= -0.62294543f;
    n = r1 += n;
    r4 = n += 1.13488901f;
    n *= -1.53529418f;
    n += r4;
    n += -1.46218443f;
    n *= 1.29285347f;
    r4 = n *= 0.96907067f;
    n = r4 *= n;
    n *= -0.08965606f;
    r5 = n += 1.10102880f;
    n *= r4;
    n *= r1;
    n += -3.64497256f;
    n = r5 += n;
    n += r0;
    n *= 0.59075236f;
    n *= r3;
    r3 = n *= -1.64577866f;
    r0 = n *= 2.55233335f;
    n *= r5;
    n *= r3;
    n *= -0.21546498f;
    n *= 0.23168620f;
    n *= -0.27687290f;
    n += r0;
    n += r2;
    n *= 0.11266445f;
    return n;
} // Solution0

// Solution1 result = 0.00004613
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 1.06268501f;
    r1 = n *= -0.59336501f;
    r2 = n += 5.52437830f;
    r3 = n += 1.50544381f;
    n *= 0.64232367f;
    n = r1 += n;
    r4 = n += -2.35199857f;
    n *= -0.86042327f;
    n += r4;
    n += -1.08240211f;
    n *= 0.60390806f;
    r4 = n *= -1.14040995f;
    n = r4 *= n;
    n *= -0.14173293f;
    r5 = n += 1.19998324f;
    n *= r4;
    n *= r1;
    n += -1.51622629f;
    n = r5 += n;
    n += r0;
    n *= -0.48604232f;
    n *= r3;
    r3 = n *= 0.66809094f;
    r0 = n *= -0.45988029f;
    n *= r5;
    n *= r3;
    n *= 0.77764744f;
    n *= -1.74089646f;
    n *= -2.94004750f;
    n += r0;
    n += r2;
    n *= -0.01900856f;
    return n;
} // Solution1

// Solution2 result = 0.00014323
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.52168375f;
    r1 = n *= -0.43870866f;
    r2 = n += 0.16021793f;
    r3 = n += 2.45119977f;
    n *= -0.49841663f;
    n = r1 += n;
    r4 = n += 2.01856136f;
    n *= -1.71170712f;
    n += r4;
    n += 0.22735082f;
    n *= 0.23269668f;
    r4 = n *= -5.69783545f;
    n = r4 *= n;
    n *= -0.30011174f;
    r5 = n += 1.55900645f;
    n *= r4;
    n *= r1;
    n += 0.78574055f;
    n = r5 += n;
    n += r0;
    n *= -1.26347601f;
    n *= r3;
    r3 = n *= 0.32219243f;
    r0 = n *= -2.14703846f;
    n *= r5;
    n *= r3;
    n *= 1.30542135f;
    n *= 0.46192455f;
    n *= 0.28954992f;
    n += r0;
    n += r2;
    n *= -0.53757012f;
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
