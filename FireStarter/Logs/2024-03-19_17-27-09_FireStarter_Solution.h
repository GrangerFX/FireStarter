// Run date: 03/19/24 17:27:09 Pacific Daylight Time
// Run duration = 22613.645221 seconds
// Run generation = 562
// Run evolution = 9
// Run max result = 0.00001192
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
// Run evolveSeed = 2
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

// Solution0 result = 0.00000519
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.41558206f;
    r1 = n *= -0.53706443f;
    r2 = n += 2.78261089f;
    r3 = n *= 0.04521488f;
    n += 0.14959005f;
    n = r2 += n;
    n += -2.10351253f;
    r4 = n *= 0.00026725f;
    n += 3.81962585f;
    n = r4 *= n;
    n *= r3;
    n *= -175.74653625f;
    r3 = n += 0.59500253f;
    n = r1 *= n;
    n += -0.67675728f;
    r5 = n *= -0.87820351f;
    n += -2.29913521f;
    n *= r5;
    n *= r2;
    n = r0 += n;
    r2 = n *= 0.15419476f;
    n += -1.11933994f;
    n *= r0;
    n += r2;
    r2 = n *= -0.73313391f;
    n = r4 *= n;
    n *= r4;
    n += 1.58034265f;
    n *= r1;
    n *= r2;
    n *= r3;
    n += 0.40372911f;
    return n;
} // Solution0

// Solution1 result = 0.00000304
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.30499113f;
    r1 = n *= 0.27962390f;
    r2 = n += -0.71169299f;
    r3 = n *= -3.59133744f;
    n += 2.73273373f;
    n = r2 += n;
    n += -1.46890986f;
    r4 = n *= 0.00123330f;
    n += 0.63209319f;
    n = r4 *= n;
    n *= r3;
    n *= -5.44985437f;
    r3 = n += 0.94575125f;
    n = r1 *= n;
    n += -1.32072353f;
    r5 = n *= -0.75452983f;
    n += -1.33481395f;
    n *= r5;
    n *= r2;
    n = r0 += n;
    r2 = n *= -0.11885935f;
    n += 1.01057673f;
    n *= r0;
    n += r2;
    r2 = n *= 1.29519689f;
    n = r4 *= n;
    n *= r4;
    n += -1.05075252f;
    n *= r1;
    n *= r2;
    n *= r3;
    n += 1.03177583f;
    return n;
} // Solution1

// Solution2 result = 0.00001192
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.85347325f;
    r1 = n *= 0.51985294f;
    r2 = n += -0.63256764f;
    r3 = n *= -1.77344143f;
    n += 1.43257344f;
    n = r2 += n;
    n += -0.78884655f;
    r4 = n *= -0.00250819f;
    n += 0.87629443f;
    n = r4 *= n;
    n *= r3;
    n *= -3.78500891f;
    r3 = n += -0.49242565f;
    n = r1 *= n;
    n += 0.85695130f;
    r5 = n *= 1.38567281f;
    n += -1.87961555f;
    n *= r5;
    n *= r2;
    n = r0 += n;
    r2 = n *= -0.36279419f;
    n += 1.98850739f;
    n *= r0;
    n += r2;
    r2 = n *= -0.99468148f;
    n = r4 *= n;
    n *= r4;
    n += 1.97527146f;
    n *= r1;
    n *= r2;
    n *= r3;
    n += 1.02498806f;
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
