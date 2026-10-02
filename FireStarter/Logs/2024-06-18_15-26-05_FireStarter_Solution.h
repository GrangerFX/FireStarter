// Run date: 06/18/24 15:26:05 Pacific Daylight Time
// Run duration = 190.537084 seconds
// Run generation = 81
// Run evolution = 5
// Run max result = 0.00001808
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
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

// Solution0 result = 0.00001808
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159441f;
    r0 = n *= -0.18070407f;
    r1 = n += -0.00000032f;
    n = r1 *= n;
    n += -3.75933266f;
    r2 = n += -0.77569246f;
    n *= 0.37902877f;
    r3 = n += 1.59675241f;
    n += -3.73987484f;
    r4 = n *= 0.82850593f;
    n = r1 += n;
    n = r0 *= n;
    n *= -0.00000043f;
    n *= -0.21273267f;
    r5 = n += -2.14607096f;
    r6 = n += 2.14607024f;
    n *= r2;
    n *= -0.56407893f;
    n += 3.29901242f;
    n = r3 *= n;
    n += r5;
    n *= r4;
    r4 = n *= 1.74349451f;
    n *= r0;
    n *= -0.11320925f;
    n *= r4;
    n *= 2.85106659f;
    n *= r1;
    n *= 0.00741635f;
    n *= 2.77076149f;
    n *= r3;
    n += r6;
    return n;
} // Solution0

// Solution1 result = 0.00000519
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09070802f;
    r0 = n *= 0.11544313f;
    r1 = n += 0.00001081f;
    n = r1 *= n;
    n += 2.98542094f;
    r2 = n += -2.33561873f;
    n *= 1.31827915f;
    r3 = n += -4.03751135f;
    n += -0.49085295f;
    r4 = n *= 0.10525926f;
    n = r1 += n;
    n = r0 *= n;
    n *= 0.00001766f;
    n *= -2.81824231f;
    r5 = n += -0.80135864f;
    r6 = n += 0.68317235f;
    n *= r2;
    n *= -0.58245003f;
    n += -1.22397792f;
    n = r3 *= n;
    n += r5;
    n *= r4;
    r4 = n *= -6.50435972f;
    n *= r0;
    n *= 1.19419444f;
    n *= r4;
    n *= -1.99288809f;
    n *= r1;
    n *= -0.05322206f;
    n *= -2.44186068f;
    n *= r3;
    n += r6;
    return n;
} // Solution1

// Solution2 result = 0.00001663
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61856103f;
    r0 = n *= -0.18269235f;
    r1 = n += -0.00018903f;
    n = r1 *= n;
    n += -0.83855712f;
    r2 = n += 0.58110106f;
    n *= -0.51649106f;
    r3 = n += -0.04707418f;
    n += 2.62796903f;
    r4 = n *= -0.78892738f;
    n = r1 += n;
    n = r0 *= n;
    n *= -0.00001145f;
    n *= 9.07581997f;
    r5 = n += -0.67303628f;
    r6 = n += 1.19605446f;
    n *= r2;
    n *= 0.12174711f;
    n += -0.53415400f;
    n = r3 *= n;
    n += r5;
    n *= r4;
    r4 = n *= -1.77996027f;
    n *= r0;
    n *= -0.10360365f;
    n *= r4;
    n *= -4.73173904f;
    n *= r1;
    n *= -1.25940776f;
    n *= 5.42655468f;
    n *= r3;
    n += r6;
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
