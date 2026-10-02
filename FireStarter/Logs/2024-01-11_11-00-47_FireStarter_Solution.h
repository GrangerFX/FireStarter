// Run date: 01/11/24 11:00:47 Pacific Standard Time
// Run duration = 59692.218469 seconds
// Run generation = 167
// Run evolution = 10
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
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
    float r0, r1, r2, r3, r4, r5;

    n *= 0.40288284f;
    n += 0.63438511f;
    n += -1.90007973f;
    r0 = n *= 1.06866670f;
    r1 = n *= -0.40911120f;
    r2 = n += -0.00000051f;
    n = r1 *= n;
    r3 = n += -1.44087636f;
    n = r2 *= n;
    n *= 0.72000760f;
    n *= r0;
    n += 1.72527301f;
    n *= -0.00015409f;
    r0 = n *= 0.07579895f;
    n = r3 += n;
    n *= r1;
    n += 0.34745759f;
    r1 = n *= 2.01097703f;
    r4 = n *= -2.16938734f;
    r5 = n += -2.72890782f;
    n *= r1;
    n += 2.09973431f;
    n *= r0;
    n *= 24.54976845f;
    n *= r3;
    n += 0.07641746f;
    n *= r5;
    r5 = n += -1.29050016f;
    n *= r2;
    n *= r4;
    n *= r5;
    n += 0.00000083f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.18293819f;
    n += -1.42189538f;
    n += 0.85649347f;
    r0 = n *= 1.43362796f;
    r1 = n *= 0.63001990f;
    r2 = n += 0.00000316f;
    n = r1 *= n;
    r3 = n += -1.35326409f;
    n = r2 *= n;
    n *= -12.14690495f;
    n *= r0;
    n += -4.98566151f;
    n *= 0.16220301f;
    r0 = n *= -0.00002791f;
    n = r3 += n;
    n *= r1;
    n += 0.46314439f;
    r1 = n *= 0.34738192f;
    r4 = n *= 1.25397885f;
    r5 = n += -0.15384653f;
    n *= r1;
    n += 614.09088135f;
    n *= r0;
    n *= 1.81493628f;
    n *= r3;
    n += 1.66189063f;
    n *= r5;
    r5 = n += 4.86000967f;
    n *= r2;
    n *= r4;
    n *= r5;
    n += -0.11812530f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.04888654f;
    n += -1.61339068f;
    n += -1.13258874f;
    r0 = n *= 0.48495454f;
    r1 = n *= -0.25804964f;
    r2 = n += -0.00000018f;
    n = r1 *= n;
    r3 = n += -1.94455981f;
    n = r2 *= n;
    n *= 1.13946474f;
    n *= r0;
    n += 4.10063744f;
    n *= -0.00001637f;
    r0 = n *= -0.20557940f;
    n = r3 += n;
    n *= r1;
    n += 0.15958218f;
    r1 = n *= -2.58561087f;
    r4 = n *= 1.91057956f;
    r5 = n += -0.56392705f;
    n *= r1;
    n += -0.27458060f;
    n *= r0;
    n *= 60.91853333f;
    n *= r3;
    n += -0.46316257f;
    n *= r5;
    r5 = n += 1.60234320f;
    n *= r2;
    n *= r4;
    n *= r5;
    n += 0.52359921f;
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
