// Run date: 12/30/23 18:53:05 Pacific Standard Time
// Run duration = 25649.290104 seconds
// Run generation = 33
// Run evolution = 16
// Run max result = 0.00000009
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

// Solution0 result = 0.00000007
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.09437500f;
    r2 = n += 0.00000001f;
    n = r2 *= n;
    r3 = n *= 0.16028686f;
    r4 = n *= 0.81822270f;
    n = r2 += n;
    n += -2.97983766f;
    n *= -0.72112745f;
    n *= r4;
    r4 = n += -1.23399711f;
    n = r2 *= n;
    r5 = n += 1.87173915f;
    n = r3 += n;
    r6 = n *= 0.82195157f;
    r7 = n += 0.42812842f;
    n += -1.47896981f;
    n *= r5;
    n = r0 *= n;
    n *= r6;
    n = r1 *= n;
    n += r1;
    n += r2;
    n += r7;
    n += -0.62789881f;
    n *= -0.46311268f;
    n += -0.36390862f;
    n += r3;
    n *= r0;
    n *= r4;
    n += 0.06036979f;
    n += -0.06036986f;
    return n;
} // Solution0

// Solution1 result = 0.00000003
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= 0.10325015f;
    r2 = n += 0.00000003f;
    n = r2 *= n;
    r3 = n *= -1.55954206f;
    r4 = n *= 0.00245623f;
    n = r2 += n;
    n += 33.84844208f;
    n *= -1.27068067f;
    n *= r4;
    r4 = n += -0.46513715f;
    n = r2 *= n;
    r5 = n += 1.05166781f;
    n = r3 += n;
    r6 = n *= 0.64103121f;
    r7 = n += 1.79321313f;
    n += -0.77202952f;
    n *= r5;
    n = r0 *= n;
    n *= r6;
    n = r1 *= n;
    n += r1;
    n += r2;
    n += r7;
    n += -0.68287873f;
    n *= -0.44842479f;
    n += 1.07494867f;
    n += r3;
    n *= r0;
    n *= r4;
    n += -0.50928044f;
    n += 0.39114860f;
    return n;
} // Solution1

// Solution2 result = 0.00000009
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= -0.16900717f;
    r2 = n += -0.00000001f;
    n = r2 *= n;
    r3 = n *= -0.07439931f;
    r4 = n *= -0.02766691f;
    n = r2 += n;
    n += -4.80810738f;
    n *= -3.64430547f;
    n *= r4;
    r4 = n += -0.45506999f;
    n = r2 *= n;
    r5 = n += 1.14069223f;
    n = r3 += n;
    r6 = n *= 0.87757963f;
    r7 = n += -0.84872121f;
    n += 0.39335224f;
    n *= r5;
    n = r0 *= n;
    n *= r6;
    n = r1 *= n;
    n += r1;
    n += r2;
    n += r7;
    n += -0.11682412f;
    n *= 3.66029334f;
    n += 2.25969076f;
    n += r3;
    n *= r0;
    n *= r4;
    n += 0.67617875f;
    n += -0.15258002f;
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
