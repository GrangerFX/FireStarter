// Run date: 07/03/24 18:35:27 Pacific Daylight Time
// Run duration = 43.718834 seconds
// Run generation = 8
// Run evolution = 1
// Run max result = 0.00101393
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
// Run evolveSeed = 1
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

// Solution0 result = 0.00101393
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.90215558f;
    r1 = n += 0.48889276f;
    r2 = n *= 0.37176409f;
    r3 = n *= -1.15261614f;
    r4 = n *= 0.39185798f;
    n += 0.28836283f;
    n += -1.67587543f;
    r5 = n *= -0.79728520f;
    n = r0 *= n;
    n *= r1;
    r1 = n *= 0.07194172f;
    n *= r2;
    r2 = n += 1.67946291f;
    r6 = n *= -2.71159649f;
    n = r4 *= n;
    n = r0 *= n;
    n += -1.86965132f;
    n *= r2;
    n *= -2.64454293f;
    r2 = n *= 0.06218292f;
    n *= -0.04165817f;
    r7 = n *= -3.77319121f;
    n *= r7;
    n += r5;
    n = r1 *= n;
    n *= r4;
    n *= r1;
    n += r0;
    n += r6;
    n *= r3;
    n *= -0.54230177f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00030690
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.17007855f;
    r1 = n += 1.62373483f;
    r2 = n *= 1.99015129f;
    r3 = n *= -0.67723811f;
    r4 = n *= 1.72006357f;
    n += 0.73466444f;
    n += 3.99690175f;
    r5 = n *= -0.30131701f;
    n = r0 *= n;
    n *= r1;
    r1 = n *= 0.82641947f;
    n *= r2;
    r2 = n += 0.20766832f;
    r6 = n *= -3.12027550f;
    n = r4 *= n;
    n = r0 *= n;
    n += -0.48603460f;
    n *= r2;
    n *= 0.38707307f;
    r2 = n *= -0.21425879f;
    n *= 0.09576263f;
    r7 = n *= 5.44303370f;
    n *= r7;
    n += r5;
    n = r1 *= n;
    n *= r4;
    n *= r1;
    n += r0;
    n += r6;
    n *= r3;
    n *= 0.59531224f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00023089
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.15412398f;
    r1 = n += -1.48869300f;
    r2 = n *= -1.28005779f;
    r3 = n *= -0.63495648f;
    r4 = n *= -1.15337729f;
    n += -1.72687638f;
    n += -1.07473838f;
    r5 = n *= -1.21570349f;
    n = r0 *= n;
    n *= r1;
    r1 = n *= 1.15979636f;
    n *= r2;
    r2 = n += 1.64766943f;
    r6 = n *= -0.98900580f;
    n = r4 *= n;
    n = r0 *= n;
    n += 0.94255549f;
    n *= r2;
    n *= 0.77291346f;
    r2 = n *= -1.29565990f;
    n *= -1.10734355f;
    r7 = n *= 0.00189450f;
    n *= r7;
    n += r5;
    n = r1 *= n;
    n *= r4;
    n *= r1;
    n += r0;
    n += r6;
    n *= r3;
    n *= 0.78886670f;
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
