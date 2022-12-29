// Run date: 12/29/22 12:12:25 Pacific Standard Time
// Run duration = 8.179598 seconds
// Run count = 5
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run processes = 0;
// Run population = 34816;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 1;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 5

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

// Precision = 0.03871179

// Solution0 precision = 0.02861475
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.12150946f;
    r1 = n += -0.38183805f;
    r2 = n *= -8.58415222f;
    r3 = n *= -0.01950322f;
    n *= r2;
    r2 = n += 0.65826762f;
    n += 0.91559654f;
    n *= -0.80310708f;
    n += -0.75148714f;
    n += -0.08303516f;
    r4 = n += -2.59548712f;
    r5 = n += 0.77898133f;
    r6 = n += 3.54698396f;
    n = r4 += n;
    n *= 0.21292016f;
    r7 = n *= 0.47696057f;
    n += r5;
    n += r4;
    n *= r7;
    n += -0.55044615f;
    n = r6 *= n;
    n *= r2;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= 2.29597473f;
    n *= -0.63750339f;
    r3 = n += 0.33277997f;
    n += r0;
    n += r3;
    n += 0.35579962f;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.03871179
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.26890573f;
    r1 = n += -0.25122723f;
    r2 = n *= 0.52835494f;
    r3 = n *= -0.74149203f;
    n *= r2;
    r2 = n += 0.29478186f;
    n += 0.52674210f;
    n *= 0.59260803f;
    n += 0.94373488f;
    n += -0.56271154f;
    r4 = n += 0.21438918f;
    r5 = n += -0.47741660f;
    r6 = n += 0.81676042f;
    n = r4 += n;
    n *= 0.53317487f;
    r7 = n *= 0.95626134f;
    n += r5;
    n += r4;
    n *= r7;
    n += 1.17244029f;
    n = r6 *= n;
    n *= r2;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= -0.42314023f;
    n *= 0.11040158f;
    r3 = n += 1.09351969f;
    n += r0;
    n += r3;
    n += -0.70775414f;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.03660320
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.29383004f;
    r1 = n += -0.00782425f;
    r2 = n *= 0.73181790f;
    r3 = n *= 0.53388250f;
    n *= r2;
    r2 = n += -0.17174929f;
    n += -1.34809971f;
    n *= -0.93183541f;
    n += 0.48583218f;
    n += -0.40259641f;
    r4 = n += 0.37178418f;
    r5 = n += 0.20600863f;
    r6 = n += -0.32976356f;
    n = r4 += n;
    n *= -0.51386189f;
    r7 = n *= 0.36852133f;
    n += r5;
    n += r4;
    n *= r7;
    n += 0.83513421f;
    n = r6 *= n;
    n *= r2;
    n *= r6;
    n = r3 += n;
    n += r3;
    n *= -0.72160470f;
    n *= 0.43211851f;
    r3 = n += 0.56638569f;
    n += r0;
    n += r3;
    n += -0.87544769f;
    n *= r1;
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
