// Run date: 07/29/23 16:55:53 Pacific Daylight Time
// Run duration = 188.474996 seconds
// Run generation = 8
// Run evolution = 0
// Run result = 0.00000148
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
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

// Solution0 result = 0.00000107
inline float Solution0(float n)
{
    float r0, r1, r2;

    n += -3.14159274f;
    r0 = n *= 0.09473658f;
    r1 = n *= -0.20928682f;
    r2 = n *= 12.35827541f;
    n *= r1;
    r1 = n *= 7.30002642f;
    n += 0.23303153f;
    n = r2 *= n;
    n *= 0.00058901f;
    n *= 4.33974791f;
    n *= 2.29852128f;
    n *= 2.65202498f;
    n *= r2;
    r2 = n += -1.71992302f;
    n += r2;
    n += r1;
    r1 = n *= -1.40873373f;
    r2 = n *= -1.62698984f;
    n = r2 += n;
    n *= r0;
    n *= r1;
    r1 = n += -0.00000153f;
    n *= -0.04118550f;
    r0 = n *= -0.50232673f;
    n *= r1;
    n += 7.83087873f;
    n += -0.60487437f;
    n += r2;
    n *= r0;
    n *= -0.78168499f;
    n += -0.29586759f;
    n += 0.29586762f;
    return n;
} // Solution0

// Solution1 result = 0.00000143
inline float Solution1(float n)
{
    float r0, r1, r2;

    n += -3.09063292f;
    r0 = n *= 0.12924398f;
    r1 = n *= -0.26877618f;
    r2 = n *= -1.87809312f;
    n *= r1;
    r1 = n *= -16.62585449f;
    n += -4.63257694f;
    n = r2 *= n;
    n *= 0.50472593f;
    n *= -0.63708657f;
    n *= 1.90794873f;
    n *= -1.15766299f;
    n *= r2;
    r2 = n += -1.51984382f;
    n += r2;
    n += r1;
    r1 = n *= 0.88026530f;
    r2 = n *= -0.07631693f;
    n = r2 += n;
    n *= r0;
    n *= r1;
    r1 = n += 0.00322684f;
    n *= -1.89681077f;
    r0 = n *= 0.26243678f;
    n *= r1;
    n += 10.78494453f;
    n += 98.49804688f;
    n += r2;
    n *= r0;
    n *= -0.14263479f;
    n += -1.44617617f;
    n += 1.30294228f;
    return n;
} // Solution1

// Solution2 result = 0.00000148
inline float Solution2(float n)
{
    float r0, r1, r2;

    n += -2.61799765f;
    r0 = n *= 0.11435636f;
    r1 = n *= 2.66165257f;
    r2 = n *= -0.29980201f;
    n *= r1;
    r1 = n *= 1.76648700f;
    n += 1.05785882f;
    n = r2 *= n;
    n *= -3.90637565f;
    n *= 0.03397886f;
    n *= -2.16644955f;
    n *= -0.09332638f;
    n *= r2;
    r2 = n += 1.80469072f;
    n += r2;
    n += r1;
    r1 = n *= 1.33484745f;
    r2 = n *= 0.62767297f;
    n = r2 += n;
    n *= r0;
    n *= r1;
    r1 = n += 0.00000873f;
    n *= 0.29039082f;
    r0 = n *= -0.35895804f;
    n *= r1;
    n += 1.24657655f;
    n += -2.53320527f;
    n += r2;
    n *= r0;
    n *= 0.60460085f;
    n += -0.82763451f;
    n += 1.35123348f;
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
