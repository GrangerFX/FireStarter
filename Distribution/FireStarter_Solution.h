// Run date: 08/26/23 10:57:44 Pacific Daylight Time
// Run duration = 169.199563 seconds
// Run generation = 206
// Run evolution = 33
// Run result = 0.00001937
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 100
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00000334
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.42226523f;
    r1 = n *= 0.61030591f;
    n *= 1.03528214f;
    r2 = n *= -0.28445941f;
    n *= 0.91160494f;
    n *= 2.95677996f;
    r3 = n += -1.07197475f;
    n = r2 *= n;
    r4 = n *= -0.99985152f;
    n = r2 += n;
    n += -0.11585601f;
    r5 = n *= -63.43667984f;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    r1 = n += 1.59142172f;
    n += r0;
    n = r5 *= n;
    n += r1;
    n = r4 += n;
    n *= r3;
    n += 0.72748929f;
    n = r4 *= n;
    r3 = n *= 0.56594574f;
    r1 = n *= -9.38813686f;
    n *= r3;
    n += r5;
    n *= r4;
    n *= -0.72869998f;
    n += r1;
    n *= 0.31401879f;
    n += -0.00004322f;
    return n;
} // Solution0

// Solution1 result = 0.00000286
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.38697237f;
    r1 = n *= 0.36925009f;
    n *= 0.23088583f;
    r2 = n *= 2.50800204f;
    n *= -1.40487719f;
    n *= -1.18662131f;
    r3 = n += 0.71136940f;
    n = r2 *= n;
    r4 = n *= -1.06212711f;
    n = r2 += n;
    n += -0.02202398f;
    r5 = n *= 12.29989243f;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    r1 = n += 1.48055899f;
    n += r0;
    n = r5 *= n;
    n += r1;
    n = r4 += n;
    n *= r3;
    n += -0.44408259f;
    n = r4 *= n;
    r3 = n *= 1.36366868f;
    r1 = n *= -3.14705944f;
    n *= r3;
    n += r5;
    n *= r4;
    n *= -0.60149157f;
    n += r1;
    n *= -0.75327027f;
    n += -0.11812847f;
    return n;
} // Solution1

// Solution2 result = 0.00001937
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.46883413f;
    r1 = n *= -0.59176588f;
    n *= 0.46987158f;
    r2 = n *= 0.50485259f;
    n *= 2.51254392f;
    n *= -1.69458377f;
    r3 = n += 1.22623646f;
    n = r2 *= n;
    r4 = n *= 0.90590370f;
    n = r2 += n;
    n += -4.20153093f;
    r5 = n *= -0.02341858f;
    n *= r2;
    n *= r1;
    n = r5 *= n;
    r1 = n += 1.23638034f;
    n += r0;
    n = r5 *= n;
    n += r1;
    n = r4 += n;
    n *= r3;
    n += -0.64717650f;
    n = r4 *= n;
    r3 = n *= -0.98680341f;
    r1 = n *= -0.53425711f;
    n *= r3;
    n += r5;
    n *= r4;
    n *= 1.08891320f;
    n += r1;
    n *= 3.84285331f;
    n += 0.52276206f;
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
