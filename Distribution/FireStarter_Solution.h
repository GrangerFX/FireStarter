// Run date: 03/26/23 11:59:12 Pacific Daylight Time
// Run duration = 14.603778 seconds
// Run generation = 0
// Run result = 0.00013089
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 12
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

// Solution0 result = 0.00009606
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.19931832f;
    r1 = n += -1.48201299f;
    n += -0.23537163f;
    r2 = n *= -0.10860530f;
    r3 = n += 1.95280445f;
    r4 = n += 0.11978371f;
    n += -1.24331689f;
    n += r2;
    n += 0.06557353f;
    r2 = n *= 1.03692031f;
    n += -1.21172106f;
    r5 = n += 0.92527795f;
    n *= r0;
    r0 = n *= 0.08732595f;
    n *= -2.16595316f;
    n += r5;
    r5 = n += -2.22909474f;
    r6 = n += -2.90120316f;
    n *= -0.21584673f;
    n *= r6;
    r6 = n *= -0.11022668f;
    n += r0;
    n += r4;
    n = r6 *= n;
    n += 0.04433588f;
    n = r1 *= n;
    n *= -0.11566888f;
    n *= r1;
    n *= r2;
    n += r6;
    n *= r3;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00007987
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.44496381f;
    r1 = n += -0.03294520f;
    n += -1.21436083f;
    r2 = n *= -0.19678113f;
    r3 = n += 0.78622150f;
    r4 = n += -0.48506060f;
    n += -20.68025208f;
    n += r2;
    n += -4.44805145f;
    r2 = n *= 0.00841418f;
    n += -1.50782418f;
    r5 = n += 1.27434325f;
    n *= r0;
    r0 = n *= 0.42228225f;
    n *= 1.39813781f;
    n += r5;
    r5 = n += 1.12656581f;
    r6 = n += 1.72967482f;
    n *= -0.96862930f;
    n *= r6;
    r6 = n *= 0.18248834f;
    n += r0;
    n += r4;
    n = r6 *= n;
    n += 0.23155250f;
    n = r1 *= n;
    n *= 3.25876236f;
    n *= r1;
    n *= r2;
    n += r6;
    n *= r3;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00013089
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.56027639f;
    r1 = n += -0.89581615f;
    n += -2.08538651f;
    r2 = n *= -0.11433784f;
    r3 = n += 1.47172117f;
    r4 = n += -0.06348968f;
    n += 1.47472644f;
    n += r2;
    n += -2.58483410f;
    r2 = n *= 0.26662010f;
    n += -0.85468948f;
    r5 = n += 0.90135413f;
    n *= r0;
    r0 = n *= 0.28053439f;
    n *= -2.25116563f;
    n += r5;
    r5 = n += -1.22235012f;
    r6 = n += -1.72455513f;
    n *= -0.23436165f;
    n *= r6;
    r6 = n *= -0.31997332f;
    n += r0;
    n += r4;
    n = r6 *= n;
    n += 0.02322676f;
    n = r1 *= n;
    n *= -0.90073246f;
    n *= r1;
    n *= r2;
    n += r6;
    n *= r3;
    n += r5;
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
