// Run date: 02/20/23 13:46:35 Pacific Standard Time
// Run duration = 175.140195 seconds
// Run count = 201
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
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 201

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

// Precision = 0.00011688

// Solution0 precision = 0.00011688
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.33285236f;
    n += -1.08474922f;
    r1 = n *= 0.96074569f;
    n += 1.11976564f;
    r2 = n *= -2.04643393f;
    r3 = n *= -0.19877291f;
    n += -1.00944102f;
    n = r3 *= n;
    r4 = n += -1.04346144f;
    n *= 1.30218458f;
    r5 = n *= -2.05411482f;
    n *= r5;
    r5 = n += -6.39137220f;
    r6 = n *= -1.05969489f;
    n += r5;
    n *= 1.80945253f;
    n += r4;
    r4 = n += -1.32396698f;
    n *= r1;
    n = r0 += n;
    n *= r2;
    n *= r4;
    n = r0 *= n;
    n *= 0.09183477f;
    n *= 2.04320478f;
    n *= -2.00575900f;
    n += r6;
    n += 0.11807578f;
    n += r3;
    n = r0 += n;
    n += r0;
    n *= 0.08795372f;
    return n;
} // Solution0

// Solution1 precision = 0.00008905
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.29023051f;
    n += 1.67741406f;
    r1 = n *= 0.64577055f;
    n += -0.48695511f;
    r2 = n *= -1.05991459f;
    r3 = n *= -0.36820090f;
    n += 0.65125960f;
    n = r3 *= n;
    r4 = n += -0.74217719f;
    n *= -1.90342999f;
    r5 = n *= 1.14042962f;
    n *= r5;
    r5 = n += 0.25943673f;
    r6 = n *= 0.38667318f;
    n += r5;
    n *= -1.08846927f;
    n += r4;
    r4 = n += 0.79249585f;
    n *= r1;
    n = r0 += n;
    n *= r2;
    n *= r4;
    n = r0 *= n;
    n *= 0.25154543f;
    n *= 3.47458029f;
    n *= -0.39022064f;
    n += r6;
    n += -2.08288956f;
    n += r3;
    n = r0 += n;
    n += r0;
    n *= 0.11132344f;
    return n;
} // Solution1

// Solution2 precision = 0.00003737
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.49620843f;
    n += 1.39527023f;
    r1 = n *= -0.62204641f;
    n += -0.69742841f;
    r2 = n *= 0.48649669f;
    r3 = n *= -1.62679446f;
    n += -1.35884631f;
    n = r3 *= n;
    r4 = n += 0.13485530f;
    n *= 0.33663332f;
    r5 = n *= -2.21645927f;
    n *= r5;
    r5 = n += 0.82366228f;
    r6 = n *= -1.38468301f;
    n += r5;
    n *= 0.81619495f;
    n += r4;
    r4 = n += -0.91130233f;
    n *= r1;
    n = r0 += n;
    n *= r2;
    n *= r4;
    n = r0 *= n;
    n *= 0.33363548f;
    n *= 1.66454160f;
    n *= 0.00898683f;
    n += r6;
    n += 0.33303419f;
    n += r3;
    n = r0 += n;
    n += r0;
    n *= -0.49789888f;
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
