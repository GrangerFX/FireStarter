// Run date: 11/30/23 19:51:53 Pacific Standard Time
// Run duration = 2603.809888 seconds
// Run generation = 51
// Run evolution = 13
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n += 1.32586026f;
    n += -2.65172029f;
    n = r1 *= n;
    n *= 0.00920760f;
    n += -0.78417212f;
    r2 = n *= -0.37081701f;
    n += -0.13908909f;
    r3 = n *= -1.20853138f;
    n *= r2;
    r2 = n *= -0.87237501f;
    n *= r3;
    r3 = n *= 6.35199070f;
    r4 = n *= -0.09737869f;
    r5 = n += -0.10791919f;
    n = r3 *= n;
    n *= -5.53984785f;
    n += 2.79447746f;
    n = r2 += n;
    n *= -7.69146824f;
    n = r3 *= n;
    n += r5;
    r5 = n += -0.35053703f;
    n += r1;
    n *= r5;
    n *= -5.79088163f;
    n *= r4;
    n += r3;
    n *= r2;
    n *= r0;
    r0 = n += -0.00000002f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09066057f;
    r1 = n += -1.38161898f;
    n += 2.76324534f;
    n = r1 *= n;
    n *= -0.00822606f;
    n += 0.67681020f;
    r2 = n *= -0.15079559f;
    n += -0.29733038f;
    r3 = n *= -0.25233451f;
    n *= r2;
    r2 = n *= -0.98468876f;
    n *= r3;
    r3 = n *= 7.25770664f;
    r4 = n *= 15.36238098f;
    r5 = n += 1.38368857f;
    n = r3 *= n;
    n *= 13.81973553f;
    n += 1.63347769f;
    n = r2 += n;
    n *= -12.23929977f;
    n = r3 *= n;
    n += r5;
    r5 = n += -1.35689425f;
    n += r1;
    n *= r5;
    n *= -1.95339262f;
    n *= r4;
    n += r3;
    n *= r2;
    n *= r0;
    r0 = n += -0.05906706f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n += -0.48527917f;
    n += 0.97055894f;
    n = r1 *= n;
    n *= 0.32347918f;
    n += -1.53579891f;
    r2 = n *= -0.02814289f;
    n += 1.61453557f;
    r3 = n *= 0.51841938f;
    n *= r2;
    r2 = n *= -0.49066097f;
    n *= r3;
    r3 = n *= -1.71790385f;
    r4 = n *= 0.00309495f;
    r5 = n += -8.37213039f;
    n = r3 *= n;
    n *= -0.76532936f;
    n += 0.76708621f;
    n = r2 += n;
    n *= 2.39907837f;
    n = r3 *= n;
    n += r5;
    r5 = n += 1.41223288f;
    n += r1;
    n *= r5;
    n *= -1.86236858f;
    n *= r4;
    n += r3;
    n *= r2;
    n *= r0;
    r0 = n += 0.26179928f;
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
