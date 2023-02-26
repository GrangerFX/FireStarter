// Run date: 02/26/23 00:46:42 Pacific Standard Time
// Run duration = 2560.429533 seconds
// Run count = 7
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
// Solution Generation = 7

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

// Precision = 0.00040126

// Solution0 precision = 0.00020576
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.39366320f;
    n *= -0.22727560f;
    n *= -3.25300765f;
    r1 = n += 0.66219777f;
    n = r0 += n;
    r2 = n *= -1.08916295f;
    r3 = n += -0.35781801f;
    n = r0 += n;
    n += r0;
    r0 = n += -0.12289094f;
    r4 = n += -1.51537192f;
    n += r3;
    r3 = n += 0.72200960f;
    n *= r0;
    n += -1.19296753f;
    r0 = n += -1.69847071f;
    n += 0.55525661f;
    n += -0.72267234f;
    n += r4;
    n *= r3;
    n *= 0.19434562f;
    n *= -0.96163046f;
    n *= r0;
    n *= -0.17358293f;
    r0 = n += 0.04803661f;
    n += r1;
    n *= 2.13812733f;
    n *= 0.71833569f;
    n += r2;
    n += -4.57719755f;
    n *= r0;
    n *= 0.76035422f;
    return n;
} // Solution0

// Solution1 precision = 0.00008726
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.18846878f;
    n *= 0.13151905f;
    n *= 1.65407991f;
    r1 = n += 0.57775176f;
    n = r0 += n;
    r2 = n *= -0.07715795f;
    r3 = n += 0.71023899f;
    n = r0 += n;
    n += r0;
    r0 = n += 0.55852449f;
    r4 = n += -1.54822922f;
    n += r3;
    r3 = n += -0.99802339f;
    n *= r0;
    n += -0.47066993f;
    r0 = n += -8.46539593f;
    n += 1.61509109f;
    n += -0.26770529f;
    n += r4;
    n *= r3;
    n *= -0.36280367f;
    n *= -0.24782230f;
    n *= r0;
    n *= -0.91681975f;
    r0 = n += -0.25331888f;
    n += r1;
    n *= -0.66093093f;
    n *= -0.22396353f;
    n += r2;
    n += -1.98011053f;
    n *= r0;
    n *= 0.24999261f;
    return n;
} // Solution1

// Solution2 precision = 0.00040126
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.56531471f;
    n *= 1.77026379f;
    n *= -0.87561774f;
    r1 = n += -0.59170544f;
    n = r0 += n;
    r2 = n *= 0.38320163f;
    r3 = n += -0.81667906f;
    n = r0 += n;
    n += r0;
    r0 = n += -0.60990375f;
    r4 = n += 1.04472315f;
    n += r3;
    r3 = n += 0.08047292f;
    n *= r0;
    n += 0.39906344f;
    r0 = n += -22.16636086f;
    n += 3.72002482f;
    n += -6.33137798f;
    n += r4;
    n *= r3;
    n *= -1.56169200f;
    n *= 0.03162507f;
    n *= r0;
    n *= 0.09104941f;
    r0 = n += -1.49800372f;
    n += r1;
    n *= 1.37422848f;
    n *= -0.03640158f;
    n += r2;
    n += -0.25972447f;
    n *= r0;
    n *= -1.65299869f;
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
