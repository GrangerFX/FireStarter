// Run date: 03/03/24 14:41:27 Pacific Standard Time
// Run duration = 3767.550344 seconds
// Run generation = 355
// Run evolution = 17
// Run max result = 0.00000018
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
// Run evolveSeed = 1
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n *= -0.61904937f;
    r1 = n *= 0.00174253f;
    n *= r1;
    n *= -9530.06445312f;
    r1 = n += 0.03258236f;
    r2 = n += 1.20975876f;
    n = r2 *= n;
    n += -4.58423662f;
    n *= -0.14916909f;
    n += 0.82195544f;
    r3 = n += -4.15266466f;
    r4 = n += -0.28769884f;
    n *= r1;
    n = r4 *= n;
    n *= -0.01467602f;
    n += -0.29528555f;
    r1 = n += 0.23896138f;
    n += -1.70299816f;
    r5 = n *= 1.97253120f;
    n *= r4;
    r4 = n += -2.59032249f;
    n *= 0.04318605f;
    n *= r3;
    n *= -1.36654103f;
    n += r5;
    n *= r4;
    n *= r0;
    n *= r1;
    n *= r2;
    n += 0.00000000f;
    n *= 0.69191009f;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065890f;
    n *= 0.91085070f;
    r1 = n *= 0.65038341f;
    n *= r1;
    n *= 0.21315509f;
    r1 = n += -0.60831404f;
    r2 = n += -1.32173169f;
    n = r2 *= n;
    n += 1262.62023926f;
    n *= -0.00001815f;
    n += 0.27276388f;
    r3 = n += -0.12146093f;
    r4 = n += -0.25676459f;
    n *= r1;
    n = r4 *= n;
    n *= 4.62117052f;
    n += -1.09067392f;
    r1 = n += -3.34581828f;
    n += 4.23159599f;
    r5 = n *= -2.50331187f;
    n *= r4;
    r4 = n += -0.09643909f;
    n *= -40.98403931f;
    n *= r3;
    n *= -0.00000614f;
    n += r5;
    n *= r4;
    n *= r0;
    n *= r1;
    n *= r2;
    n += 0.11590765f;
    n *= -1.01919043f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    n *= 0.00076824f;
    r1 = n *= -0.43203077f;
    n *= r1;
    n *= 153306.68750000f;
    r1 = n += -0.16263068f;
    r2 = n += -0.74039340f;
    n = r2 *= n;
    n += 1.65127444f;
    n *= -0.09075386f;
    n += -1.77131367f;
    r3 = n += -1.74012482f;
    r4 = n += 0.38603687f;
    n *= r1;
    n = r4 *= n;
    n *= -0.10474886f;
    n += 2.24688792f;
    r1 = n += -1.51712346f;
    n += 1.45228195f;
    r5 = n *= 0.74489903f;
    n *= r4;
    r4 = n += 1.47908533f;
    n *= -1.37310946f;
    n *= r3;
    n *= -0.00985414f;
    n += r5;
    n *= r4;
    n *= r0;
    n *= r1;
    n *= r2;
    n += 1.27402306f;
    n *= 0.41098061f;
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
