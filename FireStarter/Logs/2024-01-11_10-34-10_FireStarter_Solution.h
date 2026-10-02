// Run date: 01/11/24 10:34:10 Pacific Standard Time
// Run duration = 1065.240200 seconds
// Run generation = 18
// Run evolution = 8
// Run max result = 0.00000033
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
// Run tests = 1
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.46977466f;
    n *= -1.06049597f;
    r1 = n += -1.56512308f;
    r2 = n *= -0.16506319f;
    n = r1 *= n;
    n *= 0.97369558f;
    n += 1.81694853f;
    r3 = n += 1.98207593f;
    n *= 0.52788305f;
    n *= r3;
    r3 = n *= 0.24713117f;
    n = r3 *= n;
    r4 = n += -2.74211287f;
    n *= r3;
    n += 1.03798461f;
    n *= r2;
    r2 = n *= 1.56533420f;
    n += -2.30386782f;
    r3 = n += 2.53420067f;
    n *= -59.08474731f;
    n *= 18.49159813f;
    n = r1 *= n;
    n += r4;
    r4 = n *= 0.00000012f;
    n = r0 *= n;
    n *= r1;
    n += r4;
    n = r0 *= n;
    n += r0;
    n += -0.23033288f;
    n += r3;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.63713402f;
    n *= -0.63572133f;
    r1 = n += 1.25183916f;
    r2 = n *= -0.29210895f;
    n = r1 *= n;
    n *= -0.62557638f;
    n += -1.75032210f;
    r3 = n += -1.77408206f;
    n *= -0.73395759f;
    n *= r3;
    r3 = n *= -0.17558894f;
    n = r3 *= n;
    r4 = n += -1.98177588f;
    n *= r3;
    n += 0.99298000f;
    n *= r2;
    r2 = n *= -1.87339485f;
    n += 0.41923767f;
    r3 = n += 0.25144380f;
    n *= -0.16984975f;
    n *= -27.51274300f;
    n = r1 *= n;
    n += r4;
    r4 = n *= 0.00028836f;
    n = r0 *= n;
    n *= r1;
    n += r4;
    n = r0 *= n;
    n += r0;
    n += -0.78881305f;
    n += r3;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000033
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.53875703f;
    n *= 0.32703105f;
    r1 = n += -0.46126497f;
    r2 = n *= 1.13902700f;
    n = r1 *= n;
    n *= 0.68134135f;
    n += -1.53113520f;
    r3 = n += -0.06199139f;
    n *= -1.18856025f;
    n *= r3;
    r3 = n *= -0.49698615f;
    n = r3 *= n;
    r4 = n += -1.73821974f;
    n *= r3;
    n += 0.15650131f;
    n *= r2;
    r2 = n *= -1.91419315f;
    n += 1.49937379f;
    r3 = n += -1.71057177f;
    n *= -24.05913544f;
    n *= -1.55501580f;
    n = r1 *= n;
    n += r4;
    r4 = n *= -0.00024023f;
    n = r0 *= n;
    n *= r1;
    n += r4;
    n = r0 *= n;
    n += r0;
    n += 0.73479724f;
    n += r3;
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
