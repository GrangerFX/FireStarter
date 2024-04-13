// Run date: 04/13/24 11:10:24 Pacific Daylight Time
// Run duration = 300.802531 seconds
// Run generation = 214
// Run evolution = 6
// Run max result = 0.00000191
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
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

// Solution0 result = 0.00000119
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.49755913f;
    n *= 0.57702750f;
    n += 1.72532344f;
    n += -1.17942107f;
    r0 = n += 1.84070361f;
    r1 = n += -2.06730509f;
    r2 = n *= -0.50000674f;
    n *= -0.96390402f;
    n = r0 *= n;
    r3 = n *= -1.51333928f;
    n *= 0.02559124f;
    n += 0.02450882f;
    r4 = n *= -1.30235505f;
    n += -0.74589485f;
    n *= r4;
    n *= 2.50741792f;
    r4 = n += 0.82382798f;
    n *= 0.70730340f;
    n = r4 *= n;
    n *= -1.30800927f;
    n *= 0.78618819f;
    n *= r3;
    n += -1.28133154f;
    n *= r0;
    r0 = n *= -1.71628654f;
    n += r4;
    n *= -0.63366455f;
    n *= r0;
    n = r2 += n;
    n += r1;
    n += r2;
    n += 0.89664900f;
    return n;
} // Solution0

// Solution1 result = 0.00000191
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 2.20598269f;
    n *= -0.37446117f;
    n += -1.21716356f;
    n += -0.41418380f;
    r0 = n += 1.65933502f;
    r1 = n += 2.16667104f;
    r2 = n *= -0.37893993f;
    n *= -0.61124766f;
    n = r0 *= n;
    r3 = n *= 0.02150699f;
    n *= 0.36404312f;
    n += -0.02332636f;
    r4 = n *= -1.11197889f;
    n += 0.61508423f;
    n *= r4;
    n *= 7.07961035f;
    r4 = n += 1.79504037f;
    n *= -0.30939740f;
    n = r4 *= n;
    n *= 2.11883473f;
    n *= 1.23568618f;
    n *= r3;
    n += 0.54565501f;
    n *= r0;
    r0 = n *= 0.64943320f;
    n += r4;
    n *= 2.50235009f;
    n *= r0;
    n = r2 += n;
    n += r1;
    n += r2;
    n += 0.34927174f;
    return n;
} // Solution1

// Solution2 result = 0.00000095
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.64162052f;
    n *= 0.33205587f;
    n += 1.91600955f;
    n += -1.12730527f;
    r0 = n += 0.65938759f;
    r1 = n += -1.22286296f;
    r2 = n *= -0.96936429f;
    n *= 1.66938865f;
    n = r0 *= n;
    r3 = n *= -0.90253735f;
    n *= 5.03247023f;
    n += 1.00166762f;
    r4 = n *= -0.37147480f;
    n += 36.11399841f;
    n *= r4;
    n *= 0.00615025f;
    r4 = n += 4.18694878f;
    n *= 0.02496037f;
    n = r4 *= n;
    n *= 1.17354822f;
    n *= 1.14011788f;
    n *= r3;
    n += -0.98794371f;
    n *= r0;
    r0 = n *= 2.06257772f;
    n += r4;
    n *= -0.49417204f;
    n *= r0;
    n = r2 += n;
    n += r1;
    n += r2;
    n += 1.16610610f;
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
