// Run date: 03/24/24 17:13:47 Pacific Daylight Time
// Run duration = 811.205186 seconds
// Run generation = 371
// Run evolution = 13
// Run max result = 0.00000012
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.14159250f;
    n *= -1.12887990f;
    r1 = n *= -0.17563543f;
    n = r1 *= n;
    n *= 0.58793700f;
    n *= -0.79264343f;
    r2 = n += 1.55534196f;
    r3 = n += 0.68073320f;
    n = r3 *= n;
    r4 = n += -2.90548491f;
    r5 = n += -0.66548240f;
    r6 = n *= -0.92729336f;
    r7 = n *= 0.00465953f;
    n = r4 *= n;
    r8 = n *= -3.91792941f;
    n += r2;
    n *= 0.06704453f;
    n = r0 *= n;
    n = r1 *= n;
    n *= 0.99452078f;
    n *= r8;
    n *= 0.09351125f;
    n = r4 *= n;
    n += 4.43677902f;
    n *= r7;
    n += r5;
    n *= r0;
    n += r4;
    n *= r6;
    n += r1;
    n *= r3;
    n += 0.00000009f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -3.09065890f;
    n *= -1.34349132f;
    r1 = n *= -0.05322275f;
    n = r1 *= n;
    n *= -3.93541098f;
    n *= -0.99908960f;
    r2 = n += -0.80970579f;
    r3 = n += 0.28923494f;
    n = r3 *= n;
    r4 = n += -0.09087687f;
    r5 = n += 2.74766684f;
    r6 = n *= 3.97407246f;
    r7 = n *= -0.00438428f;
    n = r4 *= n;
    r8 = n *= -4.90312910f;
    n += r2;
    n *= 0.15470165f;
    n = r0 *= n;
    n = r1 *= n;
    n *= -7.44899035f;
    n *= r8;
    n *= -6.72692680f;
    n = r4 *= n;
    n += -0.44319269f;
    n *= r7;
    n += r5;
    n *= r0;
    n += r4;
    n *= r6;
    n += r1;
    n *= r3;
    n += -0.11813218f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -2.61799383f;
    n *= 0.18837029f;
    r1 = n *= 0.78810912f;
    n = r1 *= n;
    n *= -1.61970210f;
    n *= -0.68037707f;
    r2 = n += -2.27718472f;
    r3 = n += 0.63869345f;
    n = r3 *= n;
    r4 = n += -1.03139472f;
    r5 = n += -0.77397555f;
    r6 = n *= -0.44762975f;
    r7 = n *= -0.01328687f;
    n = r4 *= n;
    r8 = n *= -5.16429615f;
    n += r2;
    n *= -0.46728200f;
    n = r0 *= n;
    n = r1 *= n;
    n *= 2.10947132f;
    n *= r8;
    n *= 0.04050713f;
    n = r4 *= n;
    n += -1.34000421f;
    n *= r7;
    n += r5;
    n *= r0;
    n += r4;
    n *= r6;
    n += r1;
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
