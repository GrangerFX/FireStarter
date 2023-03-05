// Run date: 03/04/23 18:26:33 Pacific Standard Time
// Run duration = 2727.302949 seconds
// Run count = 14
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 14

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

// Precision = 0.00047618

// Solution0 precision = 0.00035321
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.26635647f;
    r1 = n += 0.83686614f;
    r2 = n *= 0.74148858f;
    n = r2 *= n;
    r3 = n += -0.38498852f;
    r4 = n += -0.91713232f;
    n *= -1.00600290f;
    n = r1 *= n;
    n = r4 *= n;
    r5 = n += 0.00008026f;
    n = r3 *= n;
    r6 = n += 0.44984606f;
    n += -1.24614131f;
    n = r5 += n;
    n *= r6;
    n += r4;
    n *= r1;
    n *= -0.18629892f;
    n += -1.15317786f;
    n *= r2;
    n += -0.91817111f;
    n = r0 *= n;
    n += -1.86381769f;
    n *= r0;
    r0 = n += 0.44157076f;
    n *= r0;
    n *= r5;
    n *= -0.59644461f;
    n += 3.27914262f;
    n += 0.72340584f;
    n += 1.63683939f;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00028419
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.19022684f;
    r1 = n += 0.59230453f;
    r2 = n *= 0.94930488f;
    n = r2 *= n;
    r3 = n += -1.22119856f;
    r4 = n += 0.39859444f;
    n *= -1.85331559f;
    n = r1 *= n;
    n = r4 *= n;
    r5 = n += 0.03111416f;
    n = r3 *= n;
    r6 = n += -0.62958223f;
    n += 0.95331538f;
    n = r5 += n;
    n *= r6;
    n += r4;
    n *= r1;
    n *= -3.72642398f;
    n += 3.32156920f;
    n *= r2;
    n += -0.07926905f;
    n = r0 *= n;
    n += 1.29313755f;
    n *= r0;
    r0 = n += 1.06218851f;
    n *= r0;
    n *= r5;
    n *= 0.28895539f;
    n += 0.12271490f;
    n += 1.04507554f;
    n += 2.49483514f;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00047618
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.10164916f;
    r1 = n += -0.53973377f;
    r2 = n *= 1.80407882f;
    n = r2 *= n;
    r3 = n += -0.94823664f;
    r4 = n += 0.56932509f;
    n *= 0.20201731f;
    n = r1 *= n;
    n = r4 *= n;
    r5 = n += 0.65155566f;
    n = r3 *= n;
    r6 = n += -1.40453303f;
    n += -1.45878315f;
    n = r5 += n;
    n *= r6;
    n += r4;
    n *= r1;
    n *= -0.63086689f;
    n += 2.42516541f;
    n *= r2;
    n += -1.77979469f;
    n = r0 *= n;
    n += 1.14186966f;
    n *= r0;
    r0 = n += -1.26607609f;
    n *= r0;
    n *= r5;
    n *= -1.95629132f;
    n += 5.75919771f;
    n += -6.16819715f;
    n += -12.93438530f;
    n *= r3;
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
