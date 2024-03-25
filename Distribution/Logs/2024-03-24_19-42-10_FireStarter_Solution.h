// Run date: 03/24/24 19:42:10 Pacific Daylight Time
// Run duration = 5328.684694 seconds
// Run generation = 708
// Run evolution = 11
// Run max result = 0.00000015
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -8.56592560f;
    n *= -0.21468258f;
    r0 = n += -1.16450977f;
    n *= -0.97202957f;
    r1 = n *= 1.19843733f;
    n = r0 *= n;
    r2 = n += 0.52989298f;
    r3 = n *= -0.01797358f;
    n += -5.88360786f;
    n += 54.95164108f;
    r4 = n *= -0.00520169f;
    n = r0 *= n;
    n += -2.31413937f;
    n = r4 += n;
    r5 = n += -1.81417060f;
    n += 1.99709642f;
    n *= r3;
    n *= r5;
    n += r0;
    n += -0.70282090f;
    n *= -1.88344276f;
    n = r4 *= n;
    n = r2 *= n;
    n *= 2.39418960f;
    n += -56.40269470f;
    n *= 0.06918594f;
    n += r4;
    n += 1.73669231f;
    n *= r1;
    n *= -0.30412695f;
    n *= r2;
    n += 0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.13273105f;
    n *= -0.28097951f;
    r0 = n += 0.83111715f;
    n *= 2.09295297f;
    r1 = n *= -0.07597765f;
    n = r0 *= n;
    r2 = n += 0.62221611f;
    r3 = n *= 2.07771063f;
    n += -0.20348515f;
    n += -0.59084839f;
    r4 = n *= 0.09556383f;
    n = r0 *= n;
    n += 1.71653378f;
    n = r4 += n;
    r5 = n += -0.55799764f;
    n += 1.79567051f;
    n *= r3;
    n *= r5;
    n += r0;
    n += -2.03779316f;
    n *= 2.81798077f;
    n = r4 *= n;
    n = r2 *= n;
    n *= 2.35047579f;
    n += 154.30691528f;
    n *= -0.00000252f;
    n += r4;
    n += -0.60629565f;
    n *= r1;
    n *= -0.24027175f;
    n *= r2;
    n += -0.11813201f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.54323173f;
    n *= -0.32497099f;
    r0 = n += -0.30067548f;
    n *= 0.29126734f;
    r1 = n *= -3.24907613f;
    n = r0 *= n;
    r2 = n += 0.49802765f;
    r3 = n *= 1.05133259f;
    n += 1.01905251f;
    n += 12.96385002f;
    r4 = n *= 0.00039007f;
    n = r0 *= n;
    n += -0.58105189f;
    n = r4 += n;
    r5 = n += 0.62806743f;
    n += 10.56391716f;
    n *= r3;
    n *= r5;
    n += r0;
    n += 2.00116849f;
    n *= -2.19631076f;
    n = r4 *= n;
    n = r2 *= n;
    n *= 0.50247598f;
    n += 0.65568936f;
    n *= 2.05404425f;
    n += r4;
    n += 1.05258632f;
    n *= r1;
    n *= -0.33176300f;
    n *= r2;
    n += 0.52359873f;
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
