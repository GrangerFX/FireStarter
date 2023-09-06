// Run date: 09/06/23 11:23:30 Pacific Daylight Time
// Run duration = 1402.611961 seconds
// Run generation = 19
// Run evolution = 8
// Run result = 0.00000501
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
// Run generations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000083
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.57942522f;
    r1 = n += -1.82033241f;
    r2 = n *= -0.00000019f;
    n *= -3.34038424f;
    n += 0.59807330f;
    r3 = n += -0.40958127f;
    r4 = n += -2.00888991f;
    n *= 0.45058370f;
    n = r1 *= n;
    n = r2 += n;
    n += -0.00004425f;
    n *= r2;
    r2 = n *= -1.39211237f;
    r5 = n *= 0.01865882f;
    n *= -0.21975382f;
    n *= -1.20388305f;
    n = r3 += n;
    r6 = n *= -2.85316253f;
    n *= r6;
    r6 = n += 1.07154584f;
    n = r6 += n;
    n = r5 += n;
    n *= r3;
    n *= r2;
    n += r5;
    n = r6 *= n;
    n *= r1;
    n *= r6;
    n *= 0.12426399f;
    n += r4;
    n += r0;
    n *= 0.37585527f;
    return n;
} // Solution0

// Solution1 result = 0.00000501
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.01971382f;
    r1 = n += -0.06092779f;
    r2 = n *= -0.00007358f;
    n *= -3.69223928f;
    n += -0.57015538f;
    r3 = n += -3.09179139f;
    r4 = n += -1.65761435f;
    n *= 0.58679682f;
    n = r1 *= n;
    n = r2 += n;
    n += 0.00000899f;
    n *= r2;
    r2 = n *= 3.55598664f;
    r5 = n *= -1.35759676f;
    n *= 0.09742977f;
    n *= -16.60066605f;
    n = r3 += n;
    r6 = n *= 0.16082139f;
    n *= r6;
    r6 = n += 3.11175323f;
    n = r6 += n;
    n = r5 += n;
    n *= r3;
    n *= r2;
    n += r5;
    n = r6 *= n;
    n *= r1;
    n *= r6;
    n *= 0.34785870f;
    n += r4;
    n += r0;
    n *= 0.02245500f;
    return n;
} // Solution1

// Solution2 result = 0.00000298
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.36732763f;
    r1 = n += -0.96165675f;
    r2 = n *= -0.00000009f;
    n *= -11.01033592f;
    n += 1.25021994f;
    r3 = n += -1.86431336f;
    r4 = n += 0.06994008f;
    n *= -1.21743488f;
    n = r1 *= n;
    n = r2 += n;
    n += -0.00001045f;
    n *= r2;
    r2 = n *= 2.34793615f;
    r5 = n *= -0.01333256f;
    n *= 2.98264575f;
    n *= -1.30542839f;
    n = r3 += n;
    r6 = n *= 0.58312905f;
    n *= r6;
    r6 = n += 0.39834148f;
    n = r6 += n;
    n = r5 += n;
    n *= r3;
    n *= r2;
    n += r5;
    n = r6 *= n;
    n *= r1;
    n *= r6;
    n *= -3.89074183f;
    n += r4;
    n += r0;
    n *= 1.25414801f;
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
