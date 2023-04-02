// Run date: 04/02/23 14:47:12 Pacific Daylight Time
// Run duration = 2820.943498 seconds
// Run generation = 304
// Run result = 0.00000262
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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
    float r0, r1, r2, r3;

    r0 = n += -3.14159274f;
    r1 = n += 0.00000025f;
    r2 = n *= -0.71588361f;
    n *= r1;
    n *= -0.17026092f;
    n += -1.20297647f;
    r1 = n *= 0.09484328f;
    n = r0 *= n;
    n *= 0.00311058f;
    n *= r2;
    n += r1;
    r1 = n += -0.42641047f;
    r2 = n += -2.46293736f;
    n *= r2;
    n = r1 *= n;
    r2 = n *= 1.51042736f;
    n += -0.07355790f;
    r3 = n *= 0.99703956f;
    n *= r1;
    n *= -0.07343059f;
    n *= -2.56488371f;
    n += -5.60134983f;
    n *= -0.00047512f;
    n *= 9.63464260f;
    n *= -3.56494308f;
    n *= -7.82030106f;
    n += r3;
    n *= 3.92604041f;
    n *= r2;
    n *= 0.04004394f;
    n *= r0;
    n += -0.00000011f;
    return n;
} // Solution0

// Solution1 result = 0.00000191
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.09066081f;
    r1 = n += 0.00000580f;
    r2 = n *= -0.44903624f;
    n *= r1;
    n *= 0.00056022f;
    n += 0.05797294f;
    r1 = n *= -0.99465287f;
    n = r0 *= n;
    n *= 0.82582468f;
    n *= r2;
    n += r1;
    r1 = n += -1.15190530f;
    r2 = n += 0.71764678f;
    n *= r2;
    n = r1 *= n;
    r2 = n *= -1.39792454f;
    n += -0.41338596f;
    r3 = n *= -0.10102165f;
    n *= r1;
    n *= -0.02825945f;
    n *= 9.61948872f;
    n += -2.78280473f;
    n *= -2.86571693f;
    n *= 3.22343516f;
    n *= 0.54914308f;
    n *= -2.05037045f;
    n += r3;
    n *= -1.34296739f;
    n *= r2;
    n *= 1.19944942f;
    n *= r0;
    n += -0.11813426f;
    return n;
} // Solution1

// Solution2 result = 0.00000262
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -2.61799288f;
    r1 = n += -0.00000121f;
    r2 = n *= -0.40554225f;
    n *= r1;
    n *= 0.46780327f;
    n += 0.94539028f;
    r1 = n *= -0.18919602f;
    n = r0 *= n;
    n *= 0.00353632f;
    n *= r2;
    n += r1;
    r1 = n += -1.46373594f;
    r2 = n += -1.88072765f;
    n *= r2;
    n = r1 *= n;
    r2 = n *= -0.80987662f;
    n += -0.55549669f;
    r3 = n *= -1.88515913f;
    n *= r1;
    n *= -4.44169188f;
    n *= 2.38535810f;
    n += -2.03295326f;
    n *= -0.40808472f;
    n *= 1.96418476f;
    n *= 0.00034768f;
    n *= -0.30949023f;
    n += r3;
    n *= -3.01911688f;
    n *= r2;
    n *= 0.00365907f;
    n *= r0;
    n += 0.52359957f;
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
