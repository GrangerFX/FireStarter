// Run date: 04/02/23 00:30:59 Pacific Daylight Time
// Run duration = 3027.709814 seconds
// Run generation = 365
// Run result = 0.00000267
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 31
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00000238
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 1.47157013f;
    n *= 0.19093852f;
    r0 = n += -0.88272291f;
    r1 = n *= -0.13563451f;
    n = r1 *= n;
    r2 = n += 0.03355378f;
    n *= -6.76726675f;
    r3 = n += 1.64467740f;
    r4 = n *= -1.64210439f;
    n *= r3;
    n *= -0.12462990f;
    r3 = n += 0.54285306f;
    n *= 1.23664725f;
    r5 = n *= -1.72331727f;
    r6 = n *= 1.09078526f;
    r7 = n += 2.09299040f;
    n *= -14.40648842f;
    n *= 14.56853676f;
    n += r7;
    n *= 0.02956040f;
    n += 3.27814484f;
    n += r3;
    r3 = n *= -0.80124456f;
    n *= r1;
    n += r2;
    n *= r6;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= r5;
    n *= -2.51973796f;
    n += -0.00000011f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.25368717f;
    n *= 0.81311291f;
    r0 = n += -0.63752961f;
    r1 = n *= 3.64642739f;
    n = r1 *= n;
    r2 = n += 3.61542106f;
    n *= -0.00641162f;
    r3 = n += 0.73725677f;
    r4 = n *= 1.68420804f;
    n *= r3;
    n *= 3.13169575f;
    r3 = n += 0.99959356f;
    n *= 0.26902810f;
    r5 = n *= 1.59519958f;
    r6 = n *= -1.38789248f;
    r7 = n += 7.19113350f;
    n *= 1.07364130f;
    n *= -0.92470157f;
    n += r7;
    n *= -0.02624824f;
    n += -0.14471410f;
    n += r3;
    r3 = n *= -0.43163085f;
    n *= r1;
    n += r2;
    n *= r6;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= r5;
    n *= -0.23051709f;
    n += -0.11813157f;
    return n;
} // Solution1

// Solution2 result = 0.00000267
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -3.73306155f;
    n *= 0.15642332f;
    r0 = n += 1.52874565f;
    r1 = n *= -0.62903208f;
    n = r1 *= n;
    r2 = n += -1.25132453f;
    n *= 0.18401173f;
    r3 = n += -1.63195193f;
    r4 = n *= 0.97757137f;
    n *= r3;
    n *= -1.66261685f;
    r3 = n += 0.81539029f;
    n *= -0.03800898f;
    r5 = n *= -1.72980738f;
    r6 = n *= -3.96068072f;
    r7 = n += -0.92825204f;
    n *= 0.01539692f;
    n *= 0.99761266f;
    n += r7;
    n *= 3.44556022f;
    n += 1.99257970f;
    n += r3;
    r3 = n *= -0.53176934f;
    n *= r1;
    n += r2;
    n *= r6;
    n *= r4;
    n *= r3;
    n *= r0;
    n *= r5;
    n *= -2.10989952f;
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
