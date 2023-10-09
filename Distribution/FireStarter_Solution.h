// Run date: 10/09/23 10:36:31 Pacific Daylight Time
// Run duration = 2928.891510 seconds
// Run generation = 35
// Run evolution = 12
// Run result = 0.00001860
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 128

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

// Solution0 result = 0.00001860
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.18895380f;
    r1 = n *= -0.33360302f;
    r2 = n *= 16.15696144f;
    r3 = n *= -0.00000000f;
    r4 = n *= -8.01928329f;
    n = r1 += n;
    r5 = n += -0.81576395f;
    n += 1.12602854f;
    n = r5 += n;
    r6 = n *= -3.27613616f;
    n *= -5.61583328f;
    n *= r4;
    n *= r2;
    n *= r5;
    n += -0.19803207f;
    n = r1 += n;
    n += r6;
    n *= 0.25671610f;
    r6 = n += 0.19022577f;
    n += -0.56452626f;
    n += r0;
    n = r6 *= n;
    r0 = n += -1.76262724f;
    n = r3 += n;
    n = r3 *= n;
    n += -0.42666078f;
    n *= r1;
    n *= r0;
    n *= r3;
    n *= -1.09373510f;
    n = r6 *= n;
    n += r6;
    return n;
} // Solution0

// Solution1 result = 0.00001168
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.18066344f;
    r1 = n *= 0.55067080f;
    r2 = n *= -0.03276956f;
    r3 = n *= -1.93642747f;
    r4 = n *= -0.45921698f;
    n = r1 += n;
    r5 = n += -0.49521261f;
    n += 1.90953040f;
    n = r5 += n;
    r6 = n *= -1.38074625f;
    n *= -19.93261147f;
    n *= r4;
    n *= r2;
    n *= r5;
    n += 1.05869532f;
    n = r1 += n;
    n += r6;
    n *= 1.42471957f;
    r6 = n += -0.42379248f;
    n += 1.15887022f;
    n += r0;
    n = r6 *= n;
    r0 = n += -1.39512277f;
    n = r3 += n;
    n = r3 *= n;
    n += -3.08849335f;
    n *= r1;
    n *= r0;
    n *= r3;
    n *= -1.55800247f;
    n = r6 *= n;
    n += r6;
    return n;
} // Solution1

// Solution2 result = 0.00001454
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.33003259f;
    r1 = n *= 1.24388289f;
    r2 = n *= -0.21803802f;
    r3 = n *= 0.48132077f;
    r4 = n *= 1.44490314f;
    n = r1 += n;
    r5 = n += -0.81337494f;
    n += 1.45865679f;
    n = r5 += n;
    r6 = n *= 0.00146290f;
    n *= -6.30817890f;
    n *= r4;
    n *= r2;
    n *= r5;
    n += -1.11080241f;
    n = r1 += n;
    n += r6;
    n *= 0.20919168f;
    r6 = n += -0.08411580f;
    n += 0.31654194f;
    n += r0;
    n = r6 *= n;
    r0 = n += -1.43125021f;
    n = r3 += n;
    n = r3 *= n;
    n += 0.22085726f;
    n *= r1;
    n *= r0;
    n *= r3;
    n *= -0.74248296f;
    n = r6 *= n;
    n += r6;
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
