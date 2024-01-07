// Run date: 01/06/24 13:35:02 Pacific Standard Time
// Run duration = 9593.152439 seconds
// Run generation = 45
// Run evolution = 11
// Run max result = 0.00000009
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
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.40184617f;
    n *= 0.05179604f;
    r1 = n *= 0.14029290f;
    n += -16.81313133f;
    r2 = n *= 0.00000000f;
    n *= 5.53632069f;
    n = r2 += n;
    n *= 15.64449883f;
    n += r1;
    n += -0.74512190f;
    n = r0 += n;
    r1 = n *= 1.24923623f;
    n *= -0.41442278f;
    n = r1 *= n;
    r3 = n += 1.75601065f;
    n *= -0.01204434f;
    r4 = n += -1.20329225f;
    r5 = n += 0.80293417f;
    n = r4 *= n;
    n *= r3;
    r3 = n += 1.85886240f;
    n += r1;
    n *= 0.01542674f;
    n += 1.78217542f;
    n *= -1.20504797f;
    n *= r5;
    n *= r3;
    n *= r0;
    r0 = n *= -0.25548816f;
    n *= r4;
    n += r2;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 8.98718357f;
    n *= 0.39035955f;
    r1 = n *= 0.07950218f;
    n += 34.85546494f;
    r2 = n *= 0.04945859f;
    n *= -1.06779671f;
    n = r2 += n;
    n *= -0.00174257f;
    n += r1;
    n += -12.45287704f;
    n = r0 += n;
    r1 = n *= -0.40097573f;
    n *= 4.18001080f;
    n = r1 *= n;
    r3 = n += -2.75523400f;
    n *= -0.01500881f;
    r4 = n += 0.52368683f;
    r5 = n += 0.62833118f;
    n = r4 *= n;
    n *= r3;
    r3 = n += -4.19169760f;
    n += r1;
    n *= -0.00130473f;
    n += 0.80704254f;
    n *= -0.02807652f;
    n *= r5;
    n *= r3;
    n *= r0;
    r0 = n *= -3.85725927f;
    n *= r4;
    n += r2;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.57163012f;
    n *= -0.00086126f;
    r1 = n *= 1.40564728f;
    n += -30.75508690f;
    r2 = n *= 0.08830681f;
    n *= -1.19278336f;
    n = r2 += n;
    n *= -0.00008950f;
    n += r1;
    n += -1.04505002f;
    n = r0 += n;
    r1 = n *= -0.74167973f;
    n *= -0.32175851f;
    n = r1 *= n;
    r3 = n += 1.43455970f;
    n *= -0.16244136f;
    r4 = n += -1.87765896f;
    r5 = n += 0.86654109f;
    n = r4 *= n;
    n *= r3;
    r3 = n += -1.20188951f;
    n += r1;
    n *= 0.00458768f;
    n += 0.91627389f;
    n *= 0.37668705f;
    n *= r5;
    n *= r3;
    n *= r0;
    r0 = n *= 0.24748473f;
    n *= r4;
    n += r2;
    n += r0;
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
