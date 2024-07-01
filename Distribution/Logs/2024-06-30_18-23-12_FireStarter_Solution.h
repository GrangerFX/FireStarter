// Run date: 06/30/24 18:23:12 Pacific Daylight Time
// Run duration = 8042.207709 seconds
// Run generation = 188
// Run evolution = 6
// Run max result = 0.00000033
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.70798051f;
    r0 = n += -2.22418642f;
    r1 = n *= 1.34851205f;
    n *= r1;
    n += -2.46749568f;
    r1 = n *= -0.00521543f;
    r2 = n *= 0.59576738f;
    r3 = n *= 3.12742352f;
    n *= 1.52381170f;
    n *= -2.40613914f;
    r4 = n += -1.17880535f;
    r5 = n *= -0.54927844f;
    n += -1.90758646f;
    r6 = n *= 0.40828043f;
    n += 2.37536383f;
    n *= r1;
    n *= r2;
    n += r6;
    r6 = n += 1.16691256f;
    n += r3;
    n *= -0.33243215f;
    n += 0.26975948f;
    n += -0.60087818f;
    n = r0 *= n;
    r3 = n *= -1.44868636f;
    n = r6 *= n;
    n *= r0;
    n += r5;
    n *= r3;
    n += r6;
    n *= r4;
    n += 0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.29163048f;
    r0 = n += 0.90133023f;
    r1 = n *= 0.80232686f;
    n *= r1;
    n += -0.16986875f;
    r1 = n *= -0.00986521f;
    r2 = n *= 8.03583050f;
    r3 = n *= -3.75816584f;
    n *= 2.94900036f;
    n *= -0.53017741f;
    r4 = n += 2.71279168f;
    r5 = n *= 0.14991792f;
    n += -0.20340303f;
    r6 = n *= 2.00468636f;
    n += -18.53534889f;
    n *= r1;
    n *= r2;
    n += r6;
    r6 = n += -0.03785539f;
    n += r3;
    n *= 1.06633663f;
    n += 0.27127570f;
    n += -1.79267418f;
    n = r0 *= n;
    r3 = n *= -1.43966436f;
    n = r6 *= n;
    n *= r0;
    n += r5;
    n *= r3;
    n += r6;
    n *= r4;
    n += -0.11813169f;
    return n;
} // Solution1

// Solution2 result = 0.00000033
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.17226034f;
    r0 = n += -0.45097649f;
    r1 = n *= -1.56018353f;
    n *= r1;
    n += -0.82236969f;
    r1 = n *= -0.19145964f;
    r2 = n *= 0.13068667f;
    r3 = n *= -4.83638239f;
    n *= 0.89855552f;
    n *= 4.21279526f;
    r4 = n += -1.89843011f;
    r5 = n *= -1.80735242f;
    n += -2.66888785f;
    r6 = n *= -1.36919773f;
    n += -6.30818272f;
    n *= r1;
    n *= r2;
    n += r6;
    r6 = n += -3.30117607f;
    n += r3;
    n *= -0.15150602f;
    n += -0.40415365f;
    n += 0.41048777f;
    n = r0 *= n;
    r3 = n *= -2.59486270f;
    n = r6 *= n;
    n *= r0;
    n += r5;
    n *= r3;
    n += r6;
    n *= r4;
    n += 0.52359861f;
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
