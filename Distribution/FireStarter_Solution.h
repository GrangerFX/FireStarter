// Run date: 02/11/23 12:58:14 Pacific Standard Time
// Run duration = 19.705749 seconds
// Run count = 124
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
// Run attempts = 128
// Run seed = 4
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 124

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

// Precision = 0.00011855

// Solution0 precision = 0.00011855
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.03595278f;
    r1 = n += 0.76357961f;
    n *= -0.01265841f;
    n *= -193.36489868f;
    n += r1;
    r1 = n += -0.62571537f;
    n += -2.24468851f;
    r2 = n += -0.20537871f;
    n *= -1.45542228f;
    r3 = n += -0.36973596f;
    n *= r3;
    r3 = n += -1.79725611f;
    r4 = n *= -2.03794527f;
    n *= r4;
    n += -1.26701641f;
    r4 = n *= -0.35252559f;
    n *= r3;
    n += -0.94671386f;
    r3 = n += -2.12884927f;
    n = r4 += n;
    n += r1;
    n *= -0.16692188f;
    r1 = n += 1.02954245f;
    n += r1;
    n += r2;
    n += r3;
    n *= 0.15047039f;
    n = r4 *= n;
    n += r4;
    n += 0.08731323f;
    n += r0;
    n += 0.28792688f;
    return n;
} // Solution0

// Solution1 precision = 0.00008869
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.07643862f;
    r1 = n += 0.22536716f;
    n *= 0.17841098f;
    n *= -3432.14550781f;
    n += r1;
    r1 = n += 0.69061410f;
    n += -7.48858452f;
    r2 = n += 8.15673637f;
    n *= -0.00945170f;
    r3 = n += 0.07619612f;
    n *= r3;
    r3 = n += -4.54158735f;
    r4 = n *= 0.02851678f;
    n *= r4;
    n += 0.00789304f;
    r4 = n *= -0.78540564f;
    n *= r3;
    n += 0.00577939f;
    r3 = n += -0.00859531f;
    n = r4 += n;
    n += r1;
    n *= 0.25509578f;
    r1 = n += -5.90213013f;
    n += r1;
    n += r2;
    n += r3;
    n *= -0.11019251f;
    n = r4 *= n;
    n += r4;
    n += 0.06783342f;
    n += r0;
    n += 0.05127074f;
    return n;
} // Solution1

// Solution2 precision = 0.00004202
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.20000163f;
    r1 = n += -0.57448435f;
    n *= 6605.51269531f;
    n *= -0.00529139f;
    n += r1;
    r1 = n += -1.84692264f;
    n += -1.50099289f;
    r2 = n += 6.02733946f;
    n *= -0.03582001f;
    r3 = n += -0.16053730f;
    n *= r3;
    r3 = n += -1.28572321f;
    r4 = n *= 1.67674863f;
    n *= r4;
    n += -0.69300067f;
    r4 = n *= -0.85767424f;
    n *= r3;
    n += 0.89027882f;
    r3 = n += -2.10115814f;
    n = r4 += n;
    n += r1;
    n *= -0.49999824f;
    r1 = n += 0.88064075f;
    n += r1;
    n += r2;
    n += r3;
    n *= -0.12546895f;
    n = r4 *= n;
    n += r4;
    n += -1.13409424f;
    n += r0;
    n += -0.45310646f;
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
