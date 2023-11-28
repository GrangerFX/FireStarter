// Run date: 11/27/23 15:35:56 Pacific Standard Time
// Run duration = 3670.423988 seconds
// Run generation = 21
// Run evolution = 11
// Run max result = 0.00000006
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.80962288f;
    n += -2.55469728f;
    n *= -0.82005298f;
    n *= -0.85582650f;
    r0 = n *= -2.18436670f;
    r1 = n += -0.01715768f;
    r2 = n *= 1.25970328f;
    n *= r2;
    r2 = n *= 0.19414224f;
    n += -0.59650701f;
    n *= -1.02869773f;
    r3 = n += 1.72700417f;
    n = r2 += n;
    n *= -0.04901803f;
    n *= r2;
    r2 = n *= -1.12539434f;
    n = r3 *= n;
    n *= 0.33587474f;
    r4 = n += 1.41382778f;
    n *= -0.01176924f;
    r5 = n *= -3.21095514f;
    n += r4;
    n = r1 *= n;
    n *= r5;
    n += r1;
    n *= r2;
    n *= r3;
    n += -0.03710342f;
    r3 = n += 0.03314660f;
    n += r0;
    n *= 0.29974091f;
    n += r3;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.77639997f;
    n += 0.23534411f;
    n *= 0.45673084f;
    n *= -0.53206068f;
    r0 = n *= 0.99491012f;
    r1 = n += 1.38428521f;
    r2 = n *= -0.96094656f;
    n *= r2;
    r2 = n *= 1.32678902f;
    n += -0.66705090f;
    n *= -1.03086841f;
    r3 = n += 0.79986048f;
    n = r2 += n;
    n *= -1.98108459f;
    n *= r2;
    r2 = n *= 0.11462226f;
    n = r3 *= n;
    n *= -0.32446042f;
    r4 = n += 1.29758573f;
    n *= 0.00263335f;
    r5 = n *= 16.12141418f;
    n += r4;
    n = r1 *= n;
    n *= r5;
    n += r1;
    n *= r2;
    n *= r3;
    n += 0.50236344f;
    r3 = n += 0.18906359f;
    n += r0;
    n *= 1.16843367f;
    n += r3;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.86789095f;
    n += -2.54978752f;
    n *= -1.92233443f;
    n *= -1.08599257f;
    r0 = n *= 0.09860318f;
    r1 = n += -0.48175424f;
    r2 = n *= -1.21387160f;
    n *= r2;
    r2 = n *= 1.09604514f;
    n += -0.77933329f;
    n *= -1.04868686f;
    r3 = n += 0.60401660f;
    n = r2 += n;
    n *= -0.76261461f;
    n *= r2;
    r2 = n *= -0.51093799f;
    n = r3 *= n;
    n *= -0.62710500f;
    r4 = n += -1.82475543f;
    n *= 0.01542690f;
    r5 = n *= -1.84458244f;
    n += r4;
    n = r1 *= n;
    n *= r5;
    n += r1;
    n *= r2;
    n *= r3;
    n += -0.21385513f;
    r3 = n += 0.55902934f;
    n += r0;
    n *= 0.21576782f;
    n += r3;
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
