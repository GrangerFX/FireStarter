// Run date: 12/29/23 19:34:21 Pacific Standard Time
// Run duration = 2842.804493 seconds
// Run generation = 17
// Run evolution = 10
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
// Run tests = 4
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -1.49428844f;
    r1 = n += -1.64730382f;
    n += 0.00000179f;
    n *= -0.11002700f;
    r2 = n *= -1.87780786f;
    n += -0.34034944f;
    n = r0 *= n;
    r3 = n *= 0.00613758f;
    r4 = n *= -4.80857372f;
    r5 = n += 4.34990454f;
    n += 0.01102067f;
    r6 = n *= -1.56543434f;
    n += -6.02271605f;
    n *= 0.00130607f;
    n = r3 *= n;
    n = r6 *= n;
    n *= 6.76324415f;
    n += -0.06786790f;
    n = r5 *= n;
    r7 = n += -0.51643896f;
    r8 = n += 0.22175877f;
    n += r6;
    n *= r8;
    n *= r0;
    n += r4;
    n += r3;
    n = r7 += n;
    n += r5;
    n *= r7;
    n *= r1;
    n *= -0.90369695f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -1.30150294f;
    r1 = n += -1.78915703f;
    n += 1.00664377f;
    n *= -1.33311880f;
    r2 = n *= 0.08802934f;
    n += 0.32809666f;
    n = r0 *= n;
    r3 = n *= -0.00176240f;
    r4 = n *= -4.82003689f;
    r5 = n += 0.57371312f;
    n += -0.11898523f;
    r6 = n *= 1.23497128f;
    n += 2.35980964f;
    n *= -2.83045888f;
    n = r3 *= n;
    n = r6 *= n;
    n *= 6.69122314f;
    n += 3.55830836f;
    n = r5 *= n;
    r7 = n += -0.58997148f;
    r8 = n += -0.37370497f;
    n += r6;
    n *= r8;
    n *= r0;
    n += r4;
    n += r3;
    n = r7 += n;
    n += r5;
    n *= r7;
    n *= r1;
    n *= -0.12645909f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -0.90268528f;
    r1 = n += -1.71530867f;
    n += 1.14301181f;
    n *= -4.16467428f;
    r2 = n *= -0.10999341f;
    n += -1.30935824f;
    n = r0 *= n;
    r3 = n *= 0.00386939f;
    r4 = n *= 1.85343146f;
    r5 = n += 0.04146080f;
    n += -3.93933964f;
    r6 = n *= -12.31918335f;
    n += -2.77398229f;
    n *= 0.00014453f;
    n = r3 *= n;
    n = r6 *= n;
    n *= -17.37605286f;
    n += 2.37895274f;
    n = r5 *= n;
    r7 = n += -1.67605555f;
    r8 = n += 0.97511357f;
    n += r6;
    n *= r8;
    n *= r0;
    n += r4;
    n += r3;
    n = r7 += n;
    n += r5;
    n *= r7;
    n *= r1;
    n *= -0.33143851f;
    n += r2;
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
