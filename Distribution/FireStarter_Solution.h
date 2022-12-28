// Run date: 12/27/22 20:22:59 Pacific Standard Time
// Run duration = 9.737231 seconds
// Run count = 66
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 66

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

// Precision = 0.00000024

// Solution0 precision = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.67328787f;
    r0 = n += -0.46830484f;
    r1 = n *= 0.56967813f;
    n = r1 *= n;
    n += -2.79055500f;
    n *= 3.56198764f;
    n *= -2.61548758f;
    r2 = n *= 0.00533377f;
    r3 = n += 1.47445786f;
    n += 0.72592056f;
    r4 = n += -1.49514961f;
    n *= r2;
    n = r3 += n;
    n = r1 *= n;
    r2 = n *= -1.06567562f;
    n += r1;
    r1 = n *= 0.00526138f;
    n = r4 += n;
    n *= r2;
    r2 = n += 1.49933481f;
    n *= r1;
    n += r4;
    n += 1.01312685f;
    n *= 1.09361780f;
    n += r2;
    n *= -1.01097071f;
    n *= r3;
    n *= -0.29269379f;
    n *= r0;
    n *= -0.55330592f;
    n += -0.39456666f;
    n += 0.39456663f;
    return n;
} // Solution0

// Solution1 precision = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.16860604f;
    r0 = n += -0.92205250f;
    r1 = n *= 0.57183951f;
    n = r1 *= n;
    n += -0.68694448f;
    n *= -0.14892195f;
    n *= 0.00872364f;
    r2 = n *= 6.55682135f;
    r3 = n += 1.11496663f;
    n += -1.64745712f;
    r4 = n += 1.90478396f;
    n *= r2;
    n = r3 += n;
    n = r1 *= n;
    r2 = n *= -0.97596782f;
    n += r1;
    r1 = n *= -1.56301093f;
    n = r4 += n;
    n *= r2;
    r2 = n += 0.82912230f;
    n *= r1;
    n += r4;
    n += 1.40050721f;
    n *= 1.56164396f;
    n += r2;
    n *= 1.97843564f;
    n *= r3;
    n *= 0.42021921f;
    n *= r0;
    n *= -0.22677276f;
    n += 0.01017387f;
    n += -0.12830564f;
    return n;
} // Solution1

// Solution2 precision = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.79960626f;
    r0 = n += -1.81838739f;
    r1 = n *= -0.17088278f;
    n = r1 *= n;
    n += -0.28697988f;
    n *= 4.80761099f;
    n *= -0.01466763f;
    r2 = n *= 4.25405550f;
    r3 = n += 1.57063711f;
    n += -0.43844408f;
    r4 = n += 1.04436243f;
    n *= r2;
    n = r3 += n;
    n = r1 *= n;
    r2 = n *= -2.03819108f;
    n += r1;
    r1 = n *= 1.47224844f;
    n = r4 += n;
    n *= r2;
    r2 = n += 0.71307796f;
    n *= r1;
    n += r4;
    n += 1.12494361f;
    n *= 0.07162043f;
    n += r2;
    n *= -0.93120629f;
    n *= r3;
    n *= 0.38392916f;
    n *= r0;
    n *= 1.58072388f;
    n += 0.43381202f;
    n += 0.08978667f;
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
