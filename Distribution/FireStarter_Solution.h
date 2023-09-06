// Run date: 09/06/23 12:25:14 Pacific Daylight Time
// Run duration = 1282.389981 seconds
// Run generation = 41
// Run evolution = 13
// Run result = 0.00002170
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

// Solution0 result = 0.00000823
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.47825530f;
    r0 = n += 1.66622114f;
    r1 = n *= 0.67465436f;
    r2 = n *= 1.69551826f;
    r3 = n *= -0.29410341f;
    r4 = n += 1.14519668f;
    n *= -0.74939305f;
    n = r2 += n;
    r5 = n *= -0.29285455f;
    n += -1.62645221f;
    n *= 0.92610097f;
    r6 = n *= 0.32839623f;
    n *= r2;
    n += r1;
    r1 = n += 6.48520470f;
    n *= r4;
    r4 = n *= 0.05126942f;
    n *= r1;
    r1 = n += -1.18540716f;
    n *= r5;
    r5 = n += -1.54993081f;
    n *= -0.08530404f;
    n *= -13.56397915f;
    n += -35.26981735f;
    n *= r5;
    n *= r1;
    n *= r3;
    n += r0;
    n += 3.60912299f;
    n *= r4;
    n *= 0.55348587f;
    n *= r6;
    return n;
} // Solution0

// Solution1 result = 0.00002170
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.52749145f;
    r0 = n += 1.59691966f;
    r1 = n *= 0.25984764f;
    r2 = n *= -1.75930190f;
    r3 = n *= 0.51488048f;
    r4 = n += -0.74725521f;
    n *= -3.28532410f;
    n = r2 += n;
    r5 = n *= 1.29040110f;
    n += -1.22187889f;
    n *= 0.16357116f;
    r6 = n *= 0.07110335f;
    n *= r2;
    n += r1;
    r1 = n += -1.18016851f;
    n *= r4;
    r4 = n *= 1.57402313f;
    n *= r1;
    r1 = n += 0.29189155f;
    n *= r5;
    r5 = n += -0.42580786f;
    n *= -3.21073031f;
    n *= -0.04685222f;
    n += 31.04109192f;
    n *= r5;
    n *= r1;
    n *= r3;
    n += r0;
    n += 0.81241661f;
    n *= r4;
    n *= -1.99683905f;
    n *= r6;
    return n;
} // Solution1

// Solution2 result = 0.00000972
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.71964216f;
    r0 = n += -2.24421525f;
    r1 = n *= 1.13561761f;
    r2 = n *= 0.38703197f;
    r3 = n *= -0.33419052f;
    r4 = n += 1.31297112f;
    n *= -0.45581922f;
    n = r2 += n;
    r5 = n *= -0.26336595f;
    n += -0.68488479f;
    n *= 0.23815550f;
    r6 = n *= -0.64579630f;
    n *= r2;
    n += r1;
    r1 = n += 2.60939264f;
    n *= r4;
    r4 = n *= -0.67107981f;
    n *= r1;
    r1 = n += 27.50551605f;
    n *= r5;
    r5 = n += -0.34987900f;
    n *= -0.26266322f;
    n *= 0.44946536f;
    n += 3.23335600f;
    n *= r5;
    n *= r1;
    n *= r3;
    n += r0;
    n += 1.40417063f;
    n *= r4;
    n *= -0.22785270f;
    n *= r6;
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
