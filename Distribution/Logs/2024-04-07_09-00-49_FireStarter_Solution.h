// Run date: 04/07/24 09:00:49 Pacific Daylight Time
// Run duration = 227.348174 seconds
// Run generation = 133
// Run evolution = 9
// Run max result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.14759551f;
    n = r1 += n;
    n = r1 *= n;
    n *= 2.33167338f;
    n *= 0.84395897f;
    r2 = n += -0.55027652f;
    n *= -8.16459751f;
    r3 = n *= -0.00586224f;
    n += -0.21701562f;
    r4 = n *= -1.12964594f;
    n += 1.68325675f;
    r5 = n *= 1.11424422f;
    n = r5 *= n;
    r6 = n *= -0.34589583f;
    n += 1.09379399f;
    r7 = n *= 0.29727244f;
    n += r3;
    n += 0.26690936f;
    n += -1.13831961f;
    n = r4 += n;
    n *= r2;
    n += r1;
    n *= r0;
    n *= r6;
    n *= -0.36732396f;
    n *= r4;
    n *= -413.83993530f;
    n *= r5;
    n *= 0.01497419f;
    n *= r7;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= -0.97838414f;
    n = r1 += n;
    n = r1 *= n;
    n *= 0.09522397f;
    n *= -1.43523049f;
    r2 = n += 1.29699528f;
    n *= 0.00581889f;
    r3 = n *= -3.85551834f;
    n += -1.65482473f;
    r4 = n *= -0.59920710f;
    n += 0.72062355f;
    r5 = n *= 0.02260640f;
    n = r5 *= n;
    r6 = n *= -11426.28515625f;
    n += -1.86901617f;
    r7 = n *= -0.31792232f;
    n += r3;
    n += 3.97202563f;
    n += -2.03202963f;
    n = r4 += n;
    n *= r2;
    n += r1;
    n *= r0;
    n *= r6;
    n *= -0.38301536f;
    n *= r4;
    n *= 0.13475262f;
    n *= r5;
    n *= -1.21694958f;
    n *= r7;
    n += -0.11813176f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= 0.23519716f;
    n = r1 += n;
    n = r1 *= n;
    n *= 0.19402112f;
    n *= -7.79808092f;
    r2 = n += 2.53740549f;
    n *= 0.25727102f;
    r3 = n *= 0.19001748f;
    n += -0.48652971f;
    r4 = n *= -1.03807008f;
    n += -1.29455376f;
    r5 = n *= 0.17129548f;
    n = r5 *= n;
    r6 = n *= -3.38421154f;
    n += -0.43122029f;
    r7 = n *= 1.62676013f;
    n += r3;
    n += 0.54099298f;
    n += -1.49939406f;
    n = r4 += n;
    n *= r2;
    n += r1;
    n *= r0;
    n *= r6;
    n *= 0.17917229f;
    n *= r4;
    n *= -1.26498914f;
    n *= r5;
    n *= 596.74011230f;
    n *= r7;
    n += 0.52359879f;
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
