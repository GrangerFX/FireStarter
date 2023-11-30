// Run date: 11/29/23 17:35:57 Pacific Standard Time
// Run duration = 4900.446364 seconds
// Run generation = 108
// Run evolution = 10
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.46003130f;
    r0 = n += -1.44523096f;
    r1 = n *= -0.31506258f;
    n = r0 *= n;
    n *= -1.71934700f;
    r2 = n += -0.25523144f;
    r3 = n *= -0.01794077f;
    n += 2.37411523f;
    r4 = n *= -1.61022615f;
    n = r3 *= n;
    r5 = n += -0.25499219f;
    n *= -3.72796130f;
    n = r1 *= n;
    r6 = n *= 2.04535985f;
    n += r1;
    r1 = n *= 1.82473898f;
    r7 = n *= -0.04358004f;
    n = r6 *= n;
    n *= r3;
    n *= r6;
    n = r5 += n;
    n += r5;
    n *= r2;
    n = r0 += n;
    n += 0.29704744f;
    n *= r7;
    n *= r4;
    n = r1 += n;
    n *= r0;
    n += -0.18934888f;
    n += 0.18934888f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.46129233f;
    r0 = n += 1.42569709f;
    r1 = n *= 1.46064830f;
    n = r0 *= n;
    n *= 1.32159781f;
    r2 = n += -1.59033346f;
    r3 = n *= -0.03773259f;
    n += 1.61323154f;
    r4 = n *= -0.39983806f;
    n = r3 *= n;
    r5 = n += -0.67282403f;
    n *= 1.65148270f;
    n = r1 *= n;
    r6 = n *= -0.80467939f;
    n += r1;
    r1 = n *= -2.18028736f;
    r7 = n *= -0.00403209f;
    n = r6 *= n;
    n *= r3;
    n *= r6;
    n = r5 += n;
    n += r5;
    n *= r2;
    n = r0 += n;
    n += -3.61514115f;
    n *= r7;
    n *= r4;
    n = r1 += n;
    n *= r0;
    n += -0.00833463f;
    n += -0.10979713f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.46602917f;
    r0 = n += 1.22006142f;
    r1 = n *= 2.29226160f;
    n = r0 *= n;
    n *= 0.09589168f;
    r2 = n += -1.55511808f;
    r3 = n *= -0.67919022f;
    n += 1.30739093f;
    r4 = n *= 0.34458673f;
    n = r3 *= n;
    r5 = n += 0.64231855f;
    n *= -0.21202314f;
    n = r1 *= n;
    r6 = n *= 0.46078408f;
    n += r1;
    r1 = n *= 0.31539732f;
    r7 = n *= -0.13972366f;
    n = r6 *= n;
    n *= r3;
    n *= r6;
    n = r5 += n;
    n += r5;
    n *= r2;
    n = r0 += n;
    n += -1.79563200f;
    n *= r7;
    n *= r4;
    n = r1 += n;
    n *= r0;
    n += 0.12443604f;
    n += 0.39916274f;
    n += r1;
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
