// Run date: 01/28/23 12:18:41 Pacific Standard Time
// Run duration = 14.282425 seconds
// Run count = 106
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
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
// Solution Generation = 106

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

// Precision = 0.00002635

// Solution0 precision = 0.00000724
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.74284613f;
    r1 = n += -0.90059561f;
    r2 = n += -0.53287011f;
    r3 = n *= 0.38532776f;
    n *= 1.31648386f;
    n *= -0.92849100f;
    r4 = n += -0.00865669f;
    r5 = n += -1.02507758f;
    n *= -0.02969002f;
    n += -0.73469597f;
    n = r4 += n;
    n = r0 += n;
    n += -1.40514565f;
    n *= -1.34505951f;
    n += -0.93592256f;
    r6 = n *= 1.01425004f;
    n = r3 += n;
    n *= r3;
    r3 = n += -4.90633106f;
    n *= r6;
    n += 0.06659995f;
    n *= -0.04666501f;
    n *= r3;
    r3 = n *= -0.23061116f;
    n += r0;
    n = r4 += n;
    n += r5;
    n *= r2;
    n += r1;
    n += 4.12576294f;
    n *= r3;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00000286
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.24195933f;
    r1 = n += -0.33063021f;
    r2 = n += -1.52350247f;
    r3 = n *= 0.17303269f;
    n *= 1.22393918f;
    n *= -1.22794712f;
    r4 = n += 1.17338967f;
    r5 = n += -2.05901408f;
    n *= 1.10483241f;
    n += -1.18101728f;
    n = r4 += n;
    n = r0 += n;
    n += -0.77776587f;
    n *= 0.08508478f;
    n += -0.00752311f;
    r6 = n *= -11.61640358f;
    n = r3 += n;
    n *= r3;
    r3 = n += -3.41002893f;
    n *= r6;
    n += 0.00293818f;
    n *= 0.04590252f;
    n *= r3;
    r3 = n *= 0.63705730f;
    n += r0;
    n = r4 += n;
    n += r5;
    n *= r2;
    n += r1;
    n += 4.08459187f;
    n *= r3;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00002635
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.01843319f;
    r1 = n += 0.43205887f;
    r2 = n += -2.87765384f;
    r3 = n *= -0.52243215f;
    n *= -13.32093906f;
    n *= -0.13992701f;
    r4 = n += -1.21978223f;
    r5 = n += -0.36120388f;
    n *= -0.69611037f;
    n += -0.84128773f;
    n = r4 += n;
    n = r0 += n;
    n += 0.98146510f;
    n *= 0.59560317f;
    n += 0.59083664f;
    r6 = n *= 0.26495764f;
    n = r3 += n;
    n *= r3;
    r3 = n += -3.15843844f;
    n *= r6;
    n += 1.62188888f;
    n *= 0.12543888f;
    n *= r3;
    r3 = n *= -0.91442037f;
    n += r0;
    n = r4 += n;
    n += r5;
    n *= r2;
    n += r1;
    n += 3.76166320f;
    n *= r3;
    n += r4;
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
