// Run date: 03/26/23 12:26:24 Pacific Daylight Time
// Run duration = 42.129854 seconds
// Run generation = 0
// Run result = 0.00031662
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run tests = 100
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 73
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

// Solution0 result = 0.00018418
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159226f;
    n *= 0.16179916f;
    r0 = n *= 1.53999984f;
    n *= 0.53897405f;
    n *= -1.50696397f;
    r1 = n *= -0.80863255f;
    n *= -1.40670943f;
    n *= -1.82863021f;
    n *= 0.59178495f;
    n += -0.00000034f;
    r2 = n *= -1.33988476f;
    n = r1 *= n;
    n *= -1.87876832f;
    n *= -1.14804494f;
    r3 = n += -1.01025939f;
    r4 = n += 2.17304516f;
    r5 = n *= -0.64831907f;
    n = r1 += n;
    n *= r3;
    r3 = n *= 0.00116119f;
    n *= -2.09507322f;
    n += r3;
    n *= -0.00671150f;
    n *= r2;
    n += 10.79554844f;
    n *= r5;
    n *= r0;
    r0 = n *= 0.24841742f;
    n *= r1;
    n *= -1.12254703f;
    n *= r4;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00031662
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.98313689f;
    n *= 0.08647048f;
    r0 = n *= 1.08439434f;
    n *= -0.09754674f;
    n *= 2.30978107f;
    r1 = n *= 3.21705532f;
    n *= 1.27970290f;
    n *= 2.69634223f;
    n *= 1.17587698f;
    n += -0.85800171f;
    r2 = n *= 0.65591341f;
    n = r1 *= n;
    n *= 1.66092527f;
    n *= 0.58593357f;
    r3 = n += -0.73895347f;
    r4 = n += 0.07574249f;
    r5 = n *= 1.44624591f;
    n = r1 += n;
    n *= r3;
    r3 = n *= 1.77098870f;
    n *= 0.47965628f;
    n += r3;
    n *= -2.06690574f;
    n *= r2;
    n += 0.62666965f;
    n *= r5;
    n *= r0;
    r0 = n *= 3.12067866f;
    n *= r1;
    n *= 0.63118154f;
    n *= r4;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00025046
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.00017557f;
    n *= 0.47140503f;
    r0 = n *= -0.66432339f;
    n *= -0.77283669f;
    n *= 0.89268595f;
    r1 = n *= -1.79725528f;
    n *= 0.60823572f;
    n *= 0.71361405f;
    n *= 2.67341518f;
    n += 1.14552772f;
    r2 = n *= -0.88318759f;
    n = r1 *= n;
    n *= 0.89015371f;
    n *= -0.26181710f;
    r3 = n += -1.70887816f;
    r4 = n += -0.52657783f;
    r5 = n *= -1.02680898f;
    n = r1 += n;
    n *= r3;
    r3 = n *= 1.11480439f;
    n *= 0.94942451f;
    n += r3;
    n *= -0.79623395f;
    n *= r2;
    n += -1.39365983f;
    n *= r5;
    n *= r0;
    r0 = n *= 0.16620146f;
    n *= r1;
    n *= -0.08089340f;
    n *= r4;
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
