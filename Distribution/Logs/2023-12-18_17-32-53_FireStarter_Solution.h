// Run date: 12/18/23 17:32:53 Pacific Standard Time
// Run duration = 5500.962425 seconds
// Run generation = 30
// Run evolution = 9
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.59045833f;
    r0 = n += 1.85497952f;
    n *= 0.12983134f;
    r1 = n *= 1.65667725f;
    n = r1 *= n;
    r2 = n += -0.07866757f;
    n *= -0.05885288f;
    r3 = n *= -1.01837444f;
    n *= -3.39679718f;
    n += 0.52451116f;
    r4 = n += 0.41998559f;
    r5 = n += -0.92810380f;
    n += -0.02520428f;
    n *= r3;
    n = r2 *= n;
    n *= -14.43661404f;
    n += -1.24901867f;
    n = r1 += n;
    n *= r4;
    n += r2;
    n += 0.20536211f;
    n = r1 *= n;
    n *= r1;
    n *= r0;
    n *= 2.79741359f;
    n *= r5;
    n += -0.03460168f;
    n += 0.03460510f;
    r5 = n *= 2.78744650f;
    n *= 3.34439278f;
    n += -0.00004128f;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.35735416f;
    r0 = n += -1.10445976f;
    n *= -1.39438760f;
    r1 = n *= -0.47370774f;
    n = r1 *= n;
    r2 = n += -0.17264231f;
    n *= 0.17287955f;
    r3 = n *= -1.78122234f;
    n *= -0.47348326f;
    n += -0.84049565f;
    r4 = n += 0.18953943f;
    r5 = n += 1.77318490f;
    n += -1.05844986f;
    n *= r3;
    n = r2 *= n;
    n *= 0.31542984f;
    n += -1.39797425f;
    n = r1 += n;
    n *= r4;
    n += r2;
    n += 1.62333918f;
    n = r1 *= n;
    n *= r1;
    n *= r0;
    n *= 0.12397480f;
    n *= r5;
    n += -0.19835839f;
    n += 0.34887767f;
    r5 = n *= 2.61608195f;
    n *= -1.67101300f;
    n += 0.14609340f;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00000011
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.59426707f;
    r0 = n += -1.55578744f;
    n *= -0.56847793f;
    r1 = n *= 0.70478463f;
    n = r1 *= n;
    r2 = n += -0.42629397f;
    n *= 1.37385619f;
    r3 = n *= -0.06289008f;
    n *= -2.86741042f;
    n += -0.66328853f;
    r4 = n += -0.22771718f;
    r5 = n += 0.92663103f;
    n += 2.55651498f;
    n *= r3;
    n = r2 *= n;
    n *= 0.32937819f;
    n += -2.50293589f;
    n = r1 += n;
    n *= r4;
    n += r2;
    n += 1.82484329f;
    n = r1 *= n;
    n *= r1;
    n *= r0;
    n *= -0.12344328f;
    n *= r5;
    n += -0.22567298f;
    n += 0.01031008f;
    r5 = n *= -1.41996539f;
    n *= 0.17585306f;
    n += 0.16401370f;
    n += r5;
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
