// Run date: 01/05/24 17:28:21 Pacific Standard Time
// Run duration = 5611.464533 seconds
// Run generation = 92
// Run evolution = 11
// Run max result = 0.00000215
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
// Run tests = 1
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n += -1.56173921f;
    r0 = n += -1.57985377f;
    r1 = n *= 0.63905972f;
    n *= 0.07073360f;
    n = r1 *= n;
    r2 = n *= 0.31201315f;
    r3 = n *= 0.00003036f;
    n *= -0.03620351f;
    n *= -1.25975716f;
    n += -0.24567555f;
    r4 = n += 0.53078204f;
    n *= 1.71604562f;
    r5 = n *= -0.58273667f;
    n = r1 += n;
    r6 = n *= 1.51050377f;
    r7 = n *= -1.29492044f;
    r8 = n += 1.34629703f;
    n += -5132.00439453f;
    n *= r3;
    n *= r6;
    n += r2;
    n *= 2.08080292f;
    n *= r1;
    n = r8 += n;
    n *= -2.06659913f;
    n *= 0.23936161f;
    n *= r0;
    n += r4;
    n += r5;
    n *= r7;
    n *= r8;
    n += 0.00000050f;
    return n;
} // Solution0

// Solution1 result = 0.00000215
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n += 0.60577893f;
    r0 = n += -3.69637632f;
    r1 = n *= -0.28219670f;
    n *= -0.24969082f;
    n = r1 *= n;
    r2 = n *= -0.38192582f;
    r3 = n *= -1.78743923f;
    n *= -1.93101096f;
    n *= -1.01193464f;
    n += 0.60078913f;
    r4 = n += -0.44702613f;
    n *= 1.16750336f;
    r5 = n *= -0.85511076f;
    n = r1 += n;
    r6 = n *= 0.62614119f;
    r7 = n *= -5.03347301f;
    r8 = n += 0.21891470f;
    n += 0.32912001f;
    n *= r3;
    n *= r6;
    n += r2;
    n *= 2.12605596f;
    n *= r1;
    n = r8 += n;
    n *= 0.03182206f;
    n *= -144.68479919f;
    n *= r0;
    n += r4;
    n += r5;
    n *= r7;
    n *= r8;
    n += -0.11815109f;
    return n;
} // Solution1

// Solution2 result = 0.00000010
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n += -1.25491548f;
    r0 = n += -1.36307812f;
    r1 = n *= -0.23957296f;
    n *= -1.59585690f;
    n = r1 *= n;
    r2 = n *= -0.03580014f;
    r3 = n *= -0.00770628f;
    n *= 0.06854806f;
    n *= -14.99294472f;
    n += -0.60134852f;
    r4 = n += 0.14478114f;
    n *= 0.40826103f;
    r5 = n *= -2.44941521f;
    n = r1 += n;
    r6 = n *= 0.69211841f;
    r7 = n *= -1.31494272f;
    r8 = n += -1.64200401f;
    n += -13.06872845f;
    n *= r3;
    n *= r6;
    n += r2;
    n *= 4.15903282f;
    n *= r1;
    n = r8 += n;
    n *= 0.15500955f;
    n *= 3.66740632f;
    n *= r0;
    n += r4;
    n += r5;
    n *= r7;
    n *= r8;
    n += 0.52359849f;
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
