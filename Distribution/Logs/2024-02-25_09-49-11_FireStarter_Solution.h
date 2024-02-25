// Run date: 02/25/24 09:49:11 Pacific Standard Time
// Run duration = 1262.576635 seconds
// Run generation = 104
// Run evolution = 13
// Run max result = 0.00003035
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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

// Solution0 result = 0.00000161
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.14842434f;
    r1 = n *= 1.79334331f;
    n *= 0.00000023f;
    r2 = n *= -7.60411692f;
    n *= 0.81308448f;
    n += -0.62424845f;
    n *= r1;
    n *= 0.82248014f;
    n += -0.26682675f;
    r1 = n *= -1.18936348f;
    r3 = n += -0.01593719f;
    n *= r1;
    n = r0 += n;
    r1 = n += 0.38829204f;
    r4 = n *= -1.33747971f;
    r5 = n += 2.02058744f;
    n = r1 += n;
    r6 = n += -1.31801915f;
    n *= r6;
    n *= r4;
    r4 = n *= 0.31644726f;
    n += r5;
    r5 = n += 3.14419436f;
    n *= r2;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n *= r0;
    n *= r4;
    n *= r1;
    n += 0.39056334f;
    return n;
} // Solution0

// Solution1 result = 0.00000453
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.06764070f;
    r1 = n *= 0.80234456f;
    n *= 9.08748627f;
    r2 = n *= -0.14008795f;
    n *= 14.92648506f;
    n += 4.18099833f;
    n *= r1;
    n *= -0.01056526f;
    n += -0.74890995f;
    r1 = n *= -0.18463613f;
    r3 = n += 0.74281883f;
    n *= r1;
    n = r0 += n;
    r1 = n += -0.33141837f;
    r4 = n *= 0.69357818f;
    r5 = n += -1.10956943f;
    n = r1 += n;
    r6 = n += -2.74262071f;
    n *= r6;
    n *= r4;
    r4 = n *= -0.56923860f;
    n += r5;
    r5 = n += -1.80466890f;
    n *= r2;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n *= r0;
    n *= r4;
    n *= r1;
    n += -0.12136572f;
    return n;
} // Solution1

// Solution2 result = 0.00003035
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.09661256f;
    r1 = n *= -1.57178330f;
    n *= -12.47978973f;
    r2 = n *= 0.01341042f;
    n *= -0.04401282f;
    n += -2.68043232f;
    n *= r1;
    n *= 0.15189974f;
    n += -0.00368214f;
    r1 = n *= 1.59192884f;
    r3 = n += -0.69852293f;
    n *= r1;
    n = r0 += n;
    r1 = n += -1.60161185f;
    r4 = n *= 0.72742993f;
    r5 = n += -1.42009580f;
    n = r1 += n;
    r6 = n += 1.75827539f;
    n *= r6;
    n *= r4;
    r4 = n *= -0.42863223f;
    n += r5;
    r5 = n += 0.70348644f;
    n *= r2;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n *= r0;
    n *= r4;
    n *= r1;
    n += -0.22855344f;
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
