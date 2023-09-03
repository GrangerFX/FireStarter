// Run date: 09/03/23 12:59:23 Pacific Daylight Time
// Run duration = 10119.243106 seconds
// Run generation = 39
// Run evolution = 7
// Run result = 0.00000030
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 2
// Run processes = 2
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.24725746f;
    r1 = n *= -1.86418164f;
    r2 = n *= 6.50199318f;
    n *= 0.00006135f;
    n = r1 += n;
    r3 = n *= 0.93437248f;
    n = r0 *= n;
    r4 = n += 1.05142903f;
    n *= -1.28511500f;
    n += r0;
    r0 = n *= -1.60411191f;
    r5 = n *= -0.00013034f;
    n *= r3;
    n *= r2;
    r2 = n += 0.67361283f;
    n *= r5;
    r5 = n *= -12.45308304f;
    r3 = n += 1.86404824f;
    n *= r0;
    n = r2 *= n;
    n *= r3;
    r3 = n *= -0.05490313f;
    n += r2;
    n = r3 *= n;
    n += r5;
    n *= -1.84568012f;
    n += 1.76379335f;
    n *= r3;
    n *= r1;
    n *= r4;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065890f;
    r0 = n *= 1.37697721f;
    r1 = n *= 1.01825202f;
    r2 = n *= 0.23063484f;
    n *= -3.33380079f;
    n = r1 += n;
    r3 = n *= -0.13386141f;
    n = r0 *= n;
    r4 = n += 2.57523489f;
    n *= 1.49237132f;
    n += r0;
    r0 = n *= 0.17444129f;
    r5 = n *= -0.00020293f;
    n *= r3;
    n *= r2;
    r2 = n += -0.14790784f;
    n *= r5;
    r5 = n *= 3.91573501f;
    r3 = n += 1.97939277f;
    n *= r0;
    n = r2 *= n;
    n *= r3;
    r3 = n *= 1.70091593f;
    n += r2;
    n = r3 *= n;
    n += r5;
    n *= -0.51729161f;
    n += -2.03396297f;
    n *= r3;
    n *= r1;
    n *= r4;
    n += -0.11813194f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= 0.70618314f;
    r1 = n *= -0.13580672f;
    r2 = n *= 1.03010440f;
    n *= 1.75394547f;
    n = r1 += n;
    r3 = n *= 0.69170618f;
    n = r0 *= n;
    r4 = n += 0.65522945f;
    n *= -1.13011384f;
    n += r0;
    r0 = n *= 3.06586623f;
    r5 = n *= -0.00544678f;
    n *= r3;
    n *= r2;
    r2 = n += -0.16373087f;
    n *= r5;
    r5 = n *= -6.30971813f;
    r3 = n += 2.14063764f;
    n *= r0;
    n = r2 *= n;
    n *= r3;
    r3 = n *= -0.95512903f;
    n += r2;
    n = r3 *= n;
    n += r5;
    n *= 2.20299053f;
    n += 0.97527027f;
    n *= r3;
    n *= r1;
    n *= r4;
    n += 0.52359861f;
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
