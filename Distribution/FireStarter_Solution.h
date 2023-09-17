// Run date: 09/16/23 19:51:48 Pacific Daylight Time
// Run duration = 10005.055561 seconds
// Run generation = 68
// Run evolution = 24
// Run result = 0.00001001
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00001001
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.27883017f;
    n += -2.40621376f;
    r1 = n *= 0.46469697f;
    n *= -2.77096105f;
    n += 0.93858451f;
    r2 = n *= 0.10412742f;
    r3 = n *= -1.39608657f;
    n += -0.98926437f;
    n = r3 *= n;
    n *= -0.42678869f;
    r4 = n += 1.44873130f;
    r5 = n *= -0.66752976f;
    r6 = n += -1.32820487f;
    n *= r1;
    n *= 1.20279384f;
    n = r3 += n;
    n *= 0.44286516f;
    r1 = n += 0.89996529f;
    n *= r4;
    n += r2;
    r2 = n *= 0.29124695f;
    n *= 0.19363385f;
    r4 = n += 0.23308964f;
    n += r5;
    n = r2 += n;
    n += r1;
    n *= r2;
    n *= r6;
    n += r0;
    n += 0.13746107f;
    n += r3;
    n *= r4;
    return n;
} // Solution0

// Solution1 result = 0.00000620
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.01197457f;
    n += -1.56283212f;
    r1 = n *= 1.41971850f;
    n *= -0.38780007f;
    n += 1.15758967f;
    r2 = n *= 0.35417292f;
    r3 = n *= -1.28474116f;
    n += -0.42063221f;
    n = r3 *= n;
    n *= 0.07800377f;
    r4 = n += -0.77648401f;
    r5 = n *= -2.21166992f;
    r6 = n += -0.63099599f;
    n *= r1;
    n *= -1.23036849f;
    n = r3 += n;
    n *= -1.18058634f;
    r1 = n += 0.27083731f;
    n *= r4;
    n += r2;
    r2 = n *= 0.13204609f;
    n *= 0.36930305f;
    r4 = n += 0.12033847f;
    n += r5;
    n = r2 += n;
    n += r1;
    n *= r2;
    n *= r6;
    n += r0;
    n += 2.78450942f;
    n += r3;
    n *= r4;
    return n;
} // Solution1

// Solution2 result = 0.00000572
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.61070728f;
    n += 1.15556288f;
    r1 = n *= -0.57630163f;
    n *= 1.55712426f;
    n += -1.29345953f;
    r2 = n *= 0.41862103f;
    r3 = n *= 1.19360840f;
    n += 1.57654119f;
    n = r3 *= n;
    n *= 0.40301007f;
    r4 = n += -1.40888453f;
    r5 = n *= -0.43194959f;
    r6 = n += 0.33130023f;
    n *= r1;
    n *= 2.55988860f;
    n = r3 += n;
    n *= -0.75697744f;
    r1 = n += 0.18888991f;
    n *= r4;
    n += r2;
    r2 = n *= -0.59841162f;
    n *= -0.19269079f;
    r4 = n += 0.45850235f;
    n += r5;
    n = r2 += n;
    n += r1;
    n *= r2;
    n *= r6;
    n += r0;
    n += 0.66871488f;
    n += r3;
    n *= r4;
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
