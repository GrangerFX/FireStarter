// Run date: 12/01/23 09:54:44 Pacific Standard Time
// Run duration = 9367.276855 seconds
// Run generation = 35
// Run evolution = 11
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run seeds = 64
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
    float r0, r1, r2, r3;

    n *= 0.76968884f;
    n *= 0.75251174f;
    n += -0.28026071f;
    r0 = n += -1.53934944f;
    r1 = n *= -0.99789971f;
    n = r0 *= n;
    n += -0.69682980f;
    r2 = n += -1.02285719f;
    n = r2 += n;
    n += 1.73290372f;
    n += 1.14232838f;
    n *= -0.02191067f;
    n += -1.11576986f;
    n *= 0.72218823f;
    r3 = n *= -1.77699316f;
    n = r3 *= n;
    n = r3 *= n;
    n += r0;
    r0 = n *= 0.67411906f;
    n = r3 *= n;
    n *= 1.91726792f;
    n += r2;
    n *= r0;
    n += -8.54011154f;
    n *= -0.00018233f;
    n *= -4.63354874f;
    n += r3;
    n += 1.56462038f;
    n *= r1;
    n *= 4.77356148f;
    n += -0.00000096f;
    n *= 0.02900799f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -0.80875427f;
    n *= 1.40660679f;
    n += 2.84896302f;
    r0 = n += 0.66696781f;
    r1 = n *= -0.08270618f;
    n = r0 *= n;
    n += -2.30099821f;
    r2 = n += 1.29953194f;
    n = r2 += n;
    n += 2.09426761f;
    n += -0.90951890f;
    n *= 0.07627267f;
    n += 1.57420826f;
    n *= 1.73575544f;
    r3 = n *= -0.43113920f;
    n = r3 *= n;
    n = r3 *= n;
    n += r0;
    r0 = n *= -1.66557860f;
    n = r3 *= n;
    n *= -0.90837121f;
    n += r2;
    n *= r0;
    n += -0.61074555f;
    n *= 0.00005796f;
    n *= 21.90318108f;
    n += r3;
    n += -1.69573426f;
    n *= r1;
    n *= 1.98630536f;
    n += -0.12391897f;
    n *= 0.95329887f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 1.60663402f;
    n *= -0.24979110f;
    n += 0.44987085f;
    r0 = n += 0.60078990f;
    r1 = n *= -1.06995738f;
    n = r0 *= n;
    n += 0.79005915f;
    r2 = n += 2.52754283f;
    n = r2 += n;
    n += -2.66699553f;
    n += -2.71023130f;
    n *= -0.04016374f;
    n += -0.67059219f;
    n *= -0.94099617f;
    r3 = n *= -1.60432315f;
    n = r3 *= n;
    n = r3 *= n;
    n += r0;
    r0 = n *= 1.55505502f;
    n = r3 *= n;
    n *= 1.28820992f;
    n += r2;
    n *= r0;
    n += -3.69087744f;
    n *= 14.38040638f;
    n *= 0.00011319f;
    n += r3;
    n += -0.11291424f;
    n *= r1;
    n *= -0.54194278f;
    n += 0.36389887f;
    n *= 1.43885767f;
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
