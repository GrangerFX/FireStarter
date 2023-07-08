// Run date: 07/08/23 14:21:08 Pacific Daylight Time
// Run duration = 935.443405 seconds
// Run generation = 92
// Run evolution = 0
// Run result = 0.00000107
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000013
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.55599630f;
    r0 = n += -1.74671388f;
    r1 = n *= 0.02771255f;
    n *= 3.23115110f;
    r2 = n *= -1.15919864f;
    n *= 5.42314529f;
    n *= r2;
    n += -0.37007758f;
    r2 = n += -0.85901195f;
    n *= 0.85830903f;
    n *= 2.91946650f;
    n += 1.10327053f;
    r3 = n *= -2.26963186f;
    n *= r1;
    n += r0;
    r0 = n *= 0.57852542f;
    r1 = n *= 0.47810978f;
    n *= r1;
    r1 = n *= 1.03491247f;
    r4 = n += -1.97079837f;
    n *= 0.94814360f;
    n = r4 *= n;
    n *= -1.66019523f;
    n *= -0.03318340f;
    n += r3;
    n *= r1;
    n += r2;
    n *= r4;
    n *= r0;
    n *= 0.30545193f;
    r0 = n += 0.00000001f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000107
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.67088628f;
    r0 = n += 2.07348108f;
    r1 = n *= -0.05159513f;
    n *= 0.08617076f;
    r2 = n *= -5.07152843f;
    n *= -2.19999099f;
    n *= r2;
    n += -2.59859419f;
    r2 = n += -0.49414408f;
    n *= -1.46475470f;
    n *= -2.25098467f;
    n += -0.24216419f;
    r3 = n *= -0.19817072f;
    n *= r1;
    n += r0;
    r0 = n *= 0.27891278f;
    r1 = n *= 1.69113076f;
    n *= r1;
    r1 = n *= 0.77203655f;
    r4 = n += -2.04253697f;
    n *= 0.16162375f;
    n = r4 *= n;
    n *= -0.47495076f;
    n *= -1.39871049f;
    n += r3;
    n *= r1;
    n += r2;
    n *= r4;
    n *= r0;
    n *= -1.57789612f;
    r0 = n += -0.05906603f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.16943356f;
    r0 = n += 0.44357604f;
    r1 = n *= -0.03738010f;
    n *= -8221.37695312f;
    r2 = n *= 0.07681218f;
    n *= 0.12171326f;
    n *= r2;
    n += -0.29162985f;
    r2 = n += -11.02962875f;
    n *= -0.38269755f;
    n *= 0.09083863f;
    n += 3.07250404f;
    r3 = n *= -2.98722196f;
    n *= r1;
    n += r0;
    r0 = n *= 0.24664268f;
    r1 = n *= -7.15753603f;
    n *= r1;
    r1 = n *= -0.20635532f;
    r4 = n += 0.92729926f;
    n *= 2.36385679f;
    n = r4 *= n;
    n *= -5.43721247f;
    n *= 0.04280950f;
    n += r3;
    n *= r1;
    n += r2;
    n *= r4;
    n *= r0;
    n *= -0.37485251f;
    r0 = n += 0.26179945f;
    n += r0;
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
