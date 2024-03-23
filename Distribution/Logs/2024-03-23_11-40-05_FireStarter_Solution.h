// Run date: 03/23/24 11:40:05 Pacific Daylight Time
// Run duration = 16744.164197 seconds
// Run generation = 530
// Run evolution = 9
// Run max result = 0.00000036
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.86308783f;
    n *= 0.47447258f;
    r0 = n += -1.90011108f;
    r1 = n *= -1.20772874f;
    n = r0 += n;
    r2 = n += 0.00000000f;
    n = r2 *= n;
    n += -0.53190398f;
    r3 = n *= -1.39897752f;
    n = r0 *= n;
    n *= 1.22743762f;
    n *= r1;
    r1 = n *= -0.98419487f;
    r4 = n += 0.46377102f;
    r5 = n *= -0.29401845f;
    r6 = n *= -1.04847836f;
    n += 4.34855556f;
    n += r2;
    n += 0.73203623f;
    n += r5;
    n += r4;
    n *= -0.00308238f;
    n = r6 *= n;
    r4 = n *= -4032.90991211f;
    n += r1;
    n += r6;
    n += r4;
    n *= r3;
    n += -1.04540074f;
    n *= r0;
    n += -0.11280119f;
    n += 0.11280120f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.05739653f;
    n *= 0.22729179f;
    r0 = n += -0.46214628f;
    r1 = n *= -0.04865187f;
    n = r0 += n;
    r2 = n += 0.00000397f;
    n = r2 *= n;
    n += -1.03416908f;
    r3 = n *= -0.49913973f;
    n = r0 *= n;
    n *= -0.76170164f;
    n *= r1;
    r1 = n *= -16.70269775f;
    r4 = n += 1.38146138f;
    r5 = n *= -3.56506968f;
    r6 = n *= -0.96243638f;
    n += -0.95630038f;
    n += r2;
    n += -1.59391463f;
    n += r5;
    n += r4;
    n *= 0.77088583f;
    n = r6 *= n;
    r4 = n *= 1.07252336f;
    n += r1;
    n += r6;
    n += r4;
    n *= r3;
    n += -1.82434785f;
    n *= r0;
    n += 1.26476252f;
    n += -1.38290656f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.22766453f;
    n *= 1.07021236f;
    r0 = n += -3.04545879f;
    r1 = n *= -0.78805447f;
    n = r0 += n;
    r2 = n += 0.00000038f;
    n = r2 *= n;
    n += -1.82128239f;
    r3 = n *= 1.13461447f;
    n = r0 *= n;
    n *= -0.63396955f;
    n *= r1;
    r1 = n *= -0.28128561f;
    r4 = n += -1.96449614f;
    r5 = n *= 0.00135791f;
    r6 = n *= 1610.14453125f;
    n += 0.06698702f;
    n += r2;
    n += -2.62795591f;
    n += r5;
    n += r4;
    n *= -0.39770728f;
    n = r6 *= n;
    r4 = n *= -0.43128949f;
    n += r1;
    n += r6;
    n += r4;
    n *= r3;
    n += -2.14677429f;
    n *= r0;
    n += -0.10129030f;
    n += 0.62488884f;
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
