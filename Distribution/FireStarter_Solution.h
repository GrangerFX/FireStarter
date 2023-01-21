// Run date: 01/21/23 11:33:05 Pacific Standard Time
// Run duration = 48.935074 seconds
// Run count = 92
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEST
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 92

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00001192

// Solution0 precision = 0.00000962
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 1.37924504f;
    n += -2.53037143f;
    r0 = n += -1.99046838f;
    r1 = n *= -0.37962568f;
    n *= -0.13506290f;
    n = r1 *= n;
    r2 = n += 1.32535887f;
    n += -0.84103537f;
    n *= -1.13813865f;
    r3 = n += 0.33257970f;
    r4 = n += -1.55600858f;
    n *= r4;
    r4 = n += 0.59701270f;
    r5 = n *= -0.47333145f;
    r6 = n += -1.74777949f;
    n += 0.36250806f;
    n += -0.41097531f;
    n += r2;
    n *= 0.68208683f;
    n *= -0.27499324f;
    n += 0.48802495f;
    n *= r1;
    n *= 0.71233648f;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r3;
    n *= 0.22693014f;
    n *= r6;
    n += -0.00000144f;
    n *= -1.47018743f;
    return n;
} // Solution0

// Solution1 precision = 0.00001192
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.50295377f;
    n += -0.23152173f;
    r0 = n += -1.35618734f;
    r1 = n *= 1.24470699f;
    n *= -0.10958895f;
    n = r1 *= n;
    r2 = n += 2.86461496f;
    n += -1.57003653f;
    n *= 0.08066794f;
    r3 = n += 1.17166197f;
    r4 = n += 0.28693914f;
    n *= r4;
    r4 = n += -1.55234945f;
    r5 = n *= 0.37580422f;
    r6 = n += 1.15308559f;
    n += 1.80632806f;
    n += -0.59247905f;
    n += r2;
    n *= 0.07590892f;
    n *= -0.24462242f;
    n += -1.75918782f;
    n *= r1;
    n *= 0.01406999f;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r3;
    n *= -0.25022817f;
    n *= r6;
    n += -0.07662220f;
    n *= 1.54176080f;
    return n;
} // Solution1

// Solution2 precision = 0.00001138
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.05406427f;
    n += -1.49069452f;
    r0 = n += -0.07323388f;
    r1 = n *= 0.72783750f;
    n *= -0.14243035f;
    n = r1 *= n;
    r2 = n += -0.51321930f;
    n += -0.66940612f;
    n *= -0.29590908f;
    r3 = n += -0.46120960f;
    r4 = n += -1.24372149f;
    n *= r4;
    r4 = n += 0.65157938f;
    r5 = n *= 0.82894218f;
    r6 = n += -0.77622908f;
    n += 2.10603356f;
    n += -0.65335190f;
    n += r2;
    n *= -2.44408584f;
    n *= 0.12785429f;
    n += 4.18989754f;
    n *= r1;
    n *= -0.00328773f;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r3;
    n *= 0.27893338f;
    n *= r6;
    n += 0.43249017f;
    n *= 1.21066141f;
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
