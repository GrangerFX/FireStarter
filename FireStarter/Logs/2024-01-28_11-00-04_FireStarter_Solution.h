// Run date: 01/28/24 11:00:04 Pacific Standard Time
// Run duration = 7283.004263 seconds
// Run generation = 143
// Run evolution = 11
// Run max result = 0.00000024
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
// Run streams = 4
// Run units = 4
// Run states = 64
// Run generations = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= -0.64451265f;
    r0 = n += 2.02479625f;
    r1 = n *= 0.00903032f;
    n *= r1;
    n *= 12693.41992188f;
    n += -1.32643628f;
    r1 = n *= 0.20189328f;
    r2 = n *= -1.36183751f;
    n += 0.21526831f;
    n *= 0.58541775f;
    n += -0.37207898f;
    n += 0.15931673f;
    r3 = n *= 1.24713361f;
    n = r1 += n;
    n *= r3;
    r3 = n += -0.34447140f;
    n = r3 *= n;
    n *= -0.89986581f;
    n += -3.43365145f;
    n *= r1;
    r1 = n *= 4.31645679f;
    n *= r3;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= 1.24673355f;
    n += -0.18371527f;
    n += r0;
    n += 0.18371527f;
    n *= 1.40073538f;
    n *= 1.00571382f;
    n *= 2.04468393f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= 0.55801076f;
    r0 = n += -1.72462082f;
    r1 = n *= -2.09321141f;
    n *= r1;
    n *= 0.49920666f;
    n += -2.65328813f;
    r1 = n *= 0.17397249f;
    r2 = n *= 0.88429272f;
    n += -1.13209641f;
    n *= -1.59093463f;
    n += -1.97044003f;
    n += -0.54725987f;
    r3 = n *= 0.68264842f;
    n = r1 += n;
    n *= r3;
    r3 = n += -1.14922869f;
    n = r3 *= n;
    n *= -0.05704906f;
    n += -1.36831272f;
    n *= r1;
    r1 = n *= -0.80125535f;
    n *= r3;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= 0.18116853f;
    n += 1.31221163f;
    n += r0;
    n += -1.28806973f;
    n *= 13.40655422f;
    n *= 2.26329064f;
    n *= -0.16126433f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 0.47404107f;
    r0 = n += -1.24103665f;
    r1 = n *= 0.21606235f;
    n *= r1;
    n *= 1.13497019f;
    n += -0.75181913f;
    r1 = n *= 2.23250961f;
    r2 = n *= 1.04816008f;
    n += -2.84469748f;
    n *= -1.22468293f;
    n += 1.91417336f;
    n += -0.66262060f;
    r3 = n *= 0.06790531f;
    n = r1 += n;
    n *= r3;
    r3 = n += -0.11236926f;
    n = r3 *= n;
    n *= 0.67159438f;
    n += 4.35645390f;
    n *= r1;
    r1 = n *= 0.34001577f;
    n *= r3;
    n *= r1;
    n = r0 *= n;
    n *= r2;
    n *= 0.61711657f;
    n += 0.24491683f;
    n += r0;
    n += -0.20877872f;
    n *= 0.01393788f;
    n *= 0.16865247f;
    n *= 6163.73046875f;
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
