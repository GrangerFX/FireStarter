// Run date: 01/10/24 09:18:14 Pacific Standard Time
// Run duration = 19243.906612 seconds
// Run generation = 8
// Run evolution = 7
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
// Run tests = 16
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159250f;
    r0 = n *= -0.89908332f;
    r1 = n *= 0.38250130f;
    n *= r1;
    r1 = n *= -2.55975986f;
    n *= 3.24409628f;
    r2 = n += 2.73970938f;
    r3 = n *= -0.31487188f;
    n = r1 += n;
    r4 = n += -1.67300665f;
    n *= r2;
    n *= -2019.34020996f;
    n += -1.40458751f;
    n *= 0.91578895f;
    n += r3;
    n += 2.17603040f;
    n *= -0.03435393f;
    r3 = n *= -0.00051692f;
    n *= r1;
    r1 = n += -1.65915871f;
    n *= -2.21515417f;
    n *= r3;
    n *= -0.03343074f;
    n += r1;
    n *= r4;
    r4 = n *= -0.34938756f;
    n += -2.16302657f;
    n += 2.18001604f;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n += 0.00000010f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065866f;
    r0 = n *= -0.42688376f;
    r1 = n *= -3.21072650f;
    n *= r1;
    r1 = n *= -1.21746814f;
    n *= 0.49599856f;
    r2 = n += 1.40650737f;
    r3 = n *= -2.17410135f;
    n = r1 += n;
    r4 = n += 1.67948997f;
    n *= r2;
    n *= -2.15060830f;
    n += 1498.78405762f;
    n *= 0.00093545f;
    n += r3;
    n += -4.23523140f;
    n *= 0.00193166f;
    r3 = n *= 0.14266689f;
    n *= r1;
    r1 = n += 1.95782685f;
    n *= -2.72399855f;
    n *= r3;
    n *= 6.95867443f;
    n += r1;
    n *= r4;
    r4 = n *= -0.22124153f;
    n += -1.13610113f;
    n += 2.11272216f;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n += -0.11813192f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799383f;
    r0 = n *= -1.64222181f;
    r1 = n *= 0.21349049f;
    n *= r1;
    r1 = n *= 1.60805786f;
    n *= 0.87790310f;
    r2 = n += -1.01169932f;
    r3 = n *= 0.37594017f;
    n = r1 += n;
    r4 = n += -1.14625943f;
    n *= r2;
    n *= 1.21908915f;
    n += -4.56544399f;
    n *= -0.00673894f;
    n += r3;
    n += -6.26854706f;
    n *= -0.54348850f;
    r3 = n *= -0.00250737f;
    n *= r1;
    r1 = n += 0.09495232f;
    n *= -1084.63073730f;
    n *= r3;
    n *= -0.00053329f;
    n += r1;
    n *= r4;
    r4 = n *= -3.16402078f;
    n += 0.28061509f;
    n += -0.33990452f;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n += 0.52359873f;
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
