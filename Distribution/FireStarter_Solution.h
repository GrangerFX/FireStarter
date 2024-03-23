// Run date: 03/22/24 20:20:55 Pacific Daylight Time
// Run duration = 1035.253055 seconds
// Run generation = 137
// Run evolution = 8
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.24791434f;
    n *= 1.15554488f;
    n += 1.67345941f;
    r0 = n += -2.57345080f;
    r1 = n *= -0.44163147f;
    r2 = n *= -1.81581688f;
    n *= -1.01536334f;
    n = r1 += n;
    r3 = n *= 0.96863008f;
    r4 = n *= 0.03192332f;
    n *= -731.60498047f;
    n = r4 *= n;
    n *= -0.92720598f;
    n += -0.34827581f;
    r5 = n += 0.12262043f;
    n += 0.82961404f;
    n = r4 += n;
    n *= r4;
    n += 3.34980226f;
    n = r5 *= n;
    n *= -0.04857904f;
    n += -0.17834695f;
    r4 = n += 1.21240664f;
    n = r4 *= n;
    n *= r5;
    n *= r2;
    n += r3;
    n *= r4;
    n += -0.00000005f;
    n += r0;
    n += r1;
    n *= 1.36460471f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.22647697f;
    n *= -0.98562652f;
    n += 0.29765791f;
    r0 = n += -0.98755997f;
    r1 = n *= -0.67867768f;
    r2 = n *= -0.09399059f;
    n *= 1.72176886f;
    n = r1 += n;
    r3 = n *= -0.76088130f;
    r4 = n *= -2.14649200f;
    n *= 0.25354758f;
    n = r4 *= n;
    n *= -2.76993871f;
    n += 0.35900065f;
    r5 = n += -0.21032631f;
    n += 2.48369908f;
    n = r4 += n;
    n *= r4;
    n += 50.58470154f;
    n = r5 *= n;
    n *= -0.00683611f;
    n += -1.63217258f;
    r4 = n += 0.65567470f;
    n = r4 *= n;
    n *= r5;
    n *= r2;
    n += r3;
    n *= r4;
    n += 0.03645164f;
    n += r0;
    n += r1;
    n *= -3.24078345f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.34714282f;
    n *= -0.53522009f;
    n += -0.23803549f;
    r0 = n += -1.64958489f;
    r1 = n *= -0.91081083f;
    r2 = n *= 1.68368685f;
    n *= 0.05868496f;
    n = r1 += n;
    r3 = n *= -0.05216004f;
    r4 = n *= 0.00594775f;
    n *= 0.39129248f;
    n = r4 *= n;
    n *= -330727.90625000f;
    n += -0.59193349f;
    r5 = n += 0.63050145f;
    n += 0.48340788f;
    n = r4 += n;
    n *= r4;
    n += 1.91108501f;
    n = r5 *= n;
    n *= 2.62178445f;
    n += 0.26223704f;
    r4 = n += 1.28907275f;
    n = r4 *= n;
    n *= r5;
    n *= r2;
    n += r3;
    n *= r4;
    n += 0.41922951f;
    n += r0;
    n += r1;
    n *= 1.24895418f;
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
