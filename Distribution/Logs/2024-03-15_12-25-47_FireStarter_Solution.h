// Run date: 03/15/24 12:25:47 Pacific Daylight Time
// Run duration = 9270.125676 seconds
// Run generation = 260
// Run evolution = 8
// Run max result = 0.00000852
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000656
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.24624896f;
    r1 = n *= -0.61817569f;
    n *= 0.84961259f;
    n += 1.80572224f;
    r2 = n += -0.35531610f;
    r3 = n *= -0.42303079f;
    r4 = n *= 0.00577407f;
    n = r2 *= n;
    r5 = n *= -19.58984947f;
    r6 = n += -2.04237223f;
    n += 0.15388721f;
    n += r5;
    n = r2 += n;
    n += 1.48882341f;
    n = r6 *= n;
    n = r3 *= n;
    n += r0;
    n = r4 += n;
    n *= 1.47862339f;
    n += r2;
    n += r3;
    n = r1 += n;
    n *= -2.36487675f;
    n += r6;
    n *= 0.05136351f;
    n += 0.51207781f;
    n *= r1;
    n *= r4;
    n *= -1.32177389f;
    n += 1.59013891f;
    n *= 0.40242341f;
    n += -0.15209380f;
    return n;
} // Solution0

// Solution1 result = 0.00000852
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.08770847f;
    r1 = n *= 1.07306516f;
    n *= -1.41730058f;
    n += 1.79987419f;
    r2 = n += -1.78862131f;
    r3 = n *= -0.05894307f;
    r4 = n *= 0.83841556f;
    n = r2 *= n;
    r5 = n *= 0.24483314f;
    r6 = n += 2.14808488f;
    n += 2.09738708f;
    n += r5;
    n = r2 += n;
    n += 0.87583661f;
    n = r6 *= n;
    n = r3 *= n;
    n += r0;
    n = r4 += n;
    n *= -1.00092483f;
    n += r2;
    n += r3;
    n = r1 += n;
    n *= 0.71093339f;
    n += r6;
    n *= 1.70447266f;
    n += -1.60219002f;
    n *= r1;
    n *= r4;
    n *= 0.02846606f;
    n += -0.12580262f;
    n *= -0.19803414f;
    n += -0.14399186f;
    return n;
} // Solution1

// Solution2 result = 0.00000751
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.27232799f;
    r1 = n *= 0.18039282f;
    n *= 1.47475314f;
    n += -2.33104849f;
    r2 = n += 1.61388505f;
    r3 = n *= 0.27862114f;
    r4 = n *= 0.56653363f;
    n = r2 *= n;
    r5 = n *= 3.40046763f;
    r6 = n += -0.54541010f;
    n += -5.60254383f;
    n += r5;
    n = r2 += n;
    n += -2.78901982f;
    n = r6 *= n;
    n = r3 *= n;
    n += r0;
    n = r4 += n;
    n *= 0.77678353f;
    n += r2;
    n += r3;
    n = r1 += n;
    n *= 1.17981279f;
    n += r6;
    n *= 4.96403837f;
    n += 6.31767178f;
    n *= r1;
    n *= r4;
    n *= 0.75180870f;
    n += 97.49204254f;
    n *= 0.01218657f;
    n += -0.15469833f;
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
