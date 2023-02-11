// Run date: 02/11/23 10:50:43 Pacific Standard Time
// Run duration = 31.352848 seconds
// Run count = 104
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
// Run attempts = 128
// Run seed = 4
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 104

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

// Precision = 0.00029063

// Solution0 precision = 0.00011206
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.88566530f;
    n *= -1.22653556f;
    r0 = n *= 0.17115201f;
    n += -0.68258041f;
    r1 = n *= -1.38132632f;
    r2 = n += 1.27810323f;
    r3 = n *= 0.99614692f;
    n = r3 += n;
    r4 = n *= -0.43988198f;
    n *= 1.49743509f;
    n *= 0.85283327f;
    n = r1 *= n;
    n = r3 += n;
    r5 = n *= 0.46845028f;
    r6 = n += -0.54779339f;
    n *= -1.00191128f;
    n *= r0;
    r0 = n *= 0.48202038f;
    n *= r3;
    n += -2.06877208f;
    n *= 0.15136528f;
    n *= -1.76747334f;
    n += 3.79050279f;
    n *= r6;
    n += r2;
    n += 4.13374662f;
    n = r0 *= n;
    n *= r1;
    n += 1.99637926f;
    n *= r5;
    n += r0;
    n += r4;
    return n;
} // Solution0

// Solution1 precision = 0.00021958
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.32440400f;
    n *= -0.66165519f;
    r0 = n *= -0.71728212f;
    n += 0.99407613f;
    r1 = n *= -1.00200474f;
    r2 = n += 1.94416952f;
    r3 = n *= 1.31142080f;
    n = r3 += n;
    r4 = n *= 1.08428550f;
    n *= -0.29826376f;
    n *= 2.16130519f;
    n = r1 *= n;
    n = r3 += n;
    r5 = n *= -0.26264057f;
    r6 = n += -1.14425600f;
    n *= -0.57603228f;
    n *= r0;
    r0 = n *= -0.93081206f;
    n *= r3;
    n += -1.30064225f;
    n *= 1.01429808f;
    n *= 0.50558150f;
    n += -1.48683381f;
    n *= r6;
    n += r2;
    n += -0.54999053f;
    n = r0 *= n;
    n *= r1;
    n += 1.66446817f;
    n *= r5;
    n += r0;
    n += r4;
    return n;
} // Solution1

// Solution2 precision = 0.00029063
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.43891713f;
    n *= 1.35002673f;
    r0 = n *= -0.55526441f;
    n += 0.93935245f;
    r1 = n *= 0.89332426f;
    r2 = n += 1.52723849f;
    r3 = n *= -0.91404921f;
    n = r3 += n;
    r4 = n *= 0.63032794f;
    n *= 1.58398318f;
    n *= -0.47010478f;
    n = r1 *= n;
    n = r3 += n;
    r5 = n *= 1.10804641f;
    r6 = n += 2.19492745f;
    n *= -2.05859733f;
    n *= r0;
    r0 = n *= -0.05028978f;
    n *= r3;
    n += -0.02180609f;
    n *= -0.85600781f;
    n *= 1.08088923f;
    n += 3.15524912f;
    n *= r6;
    n += r2;
    n += -8.22570992f;
    n = r0 *= n;
    n *= r1;
    n += -0.93841362f;
    n *= r5;
    n += r0;
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
