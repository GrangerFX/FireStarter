// Run date: 03/20/24 10:44:15 Pacific Daylight Time
// Run duration = 5874.226273 seconds
// Run generation = 680
// Run evolution = 20
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 8
// Run units = 1
// Run states = 1
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
    float r0, r1, r2, r3, r4, r5;

    n += -1.55811203f;
    n += -1.58348060f;
    n *= 0.00147847f;
    r0 = n *= 2008.55957031f;
    r1 = n *= 1.11658716f;
    r2 = n *= -1.40260279f;
    n *= r0;
    n *= -0.33360556f;
    n += 2.38543463f;
    n *= 1.02229857f;
    n *= 0.11901632f;
    r0 = n += -1.65010560f;
    n *= 0.83449572f;
    r3 = n *= 0.02248463f;
    r4 = n += -1.76112437f;
    n *= r3;
    r3 = n += 0.57979524f;
    n = r4 *= n;
    r5 = n += -0.55158615f;
    n += -0.10999686f;
    n *= r3;
    n += -2.40502262f;
    n = r0 += n;
    n += r0;
    n *= r4;
    n += 0.63508117f;
    n *= r1;
    n *= r5;
    n += r2;
    n += 0.11800520f;
    n *= 0.01460274f;
    n += -0.00172317f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.69060302f;
    n += -1.40005553f;
    n *= -0.45143968f;
    r0 = n *= -1.85446131f;
    r1 = n *= -0.09074863f;
    r2 = n *= -2.12836099f;
    n *= r0;
    n *= -0.69185710f;
    n += 0.50952929f;
    n *= -1.10467386f;
    n *= 12.11077213f;
    r0 = n += 2.02714586f;
    n *= -0.41922092f;
    r3 = n *= 0.01258770f;
    r4 = n += 1.11092699f;
    n *= r3;
    r3 = n += 0.28563991f;
    n = r4 *= n;
    r5 = n += 0.24861582f;
    n += -0.94364065f;
    n *= r3;
    n += -3.88497376f;
    n = r0 += n;
    n += r0;
    n *= r4;
    n += -1.24388909f;
    n *= r1;
    n *= r5;
    n += r2;
    n += 0.07335626f;
    n *= -2.16694546f;
    n += 0.04082729f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.59401584f;
    n += -0.02397784f;
    n *= 1.33802724f;
    r0 = n *= 0.18519555f;
    r1 = n *= -0.10688706f;
    r2 = n *= -1.39076173f;
    n *= r0;
    n *= 57.74915314f;
    n += -1.48795807f;
    n *= -0.87611026f;
    n *= 1.74060929f;
    r0 = n += 0.26145610f;
    n *= 0.10173608f;
    r3 = n *= 0.20493364f;
    r4 = n += 2.11290741f;
    n *= r3;
    r3 = n += 1.00994587f;
    n = r4 *= n;
    r5 = n += -0.10504670f;
    n += 2.20022583f;
    n *= r3;
    n += -1.18823886f;
    n = r0 += n;
    n += r0;
    n *= r4;
    n += -3.90737367f;
    n *= r1;
    n *= r5;
    n += r2;
    n += -2.66168404f;
    n *= 0.60408777f;
    n += 2.13148952f;
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
