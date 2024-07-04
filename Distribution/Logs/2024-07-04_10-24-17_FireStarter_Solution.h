// Run date: 07/04/24 10:24:17 Pacific Daylight Time
// Run duration = 360.301843 seconds
// Run generation = 129
// Run evolution = 10
// Run max result = 0.00000057
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

// Solution0 result = 0.00000022
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    n *= 2.19433069f;
    r0 = n *= -0.09914996f;
    r1 = n += -0.00000001f;
    r2 = n *= 0.71064013f;
    r3 = n *= -1.19580972f;
    n += r2;
    n = r3 *= n;
    n *= -1.24205756f;
    n *= 0.32163045f;
    r2 = n += 0.77674580f;
    r4 = n += -0.55471104f;
    r5 = n *= -2.89246368f;
    n += r3;
    n += 0.56372541f;
    n = r5 *= n;
    n *= 3.29345298f;
    n = r2 += n;
    n += 1.56006312f;
    r3 = n += 5.20525789f;
    n += -0.97056568f;
    n *= r1;
    n *= r3;
    n *= -5.31803846f;
    n *= -2.06994820f;
    n *= r4;
    n *= 0.61316615f;
    n *= 0.96750146f;
    n *= r5;
    n *= r2;
    n += r0;
    n *= 1.00370979f;
    return n;
} // Solution0

// Solution1 result = 0.00000057
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.84339738f;
    n *= 0.33448163f;
    r0 = n *= -0.82336676f;
    r1 = n += 0.06809578f;
    r2 = n *= 0.84349281f;
    r3 = n *= -0.70573461f;
    n += r2;
    n = r3 *= n;
    n *= 1.30826807f;
    n *= -0.10695212f;
    r2 = n += -0.62478596f;
    r4 = n += 0.51746583f;
    r5 = n *= -3.37726331f;
    n += r3;
    n += -0.25124478f;
    n = r5 *= n;
    n *= -1.45237565f;
    n = r2 += n;
    n += -7.32762814f;
    r3 = n += -6.35185909f;
    n += -3.79986906f;
    n *= r1;
    n *= r3;
    n *= 9.18699741f;
    n *= 0.05238040f;
    n *= r4;
    n *= 1.34560704f;
    n *= 2.60853529f;
    n *= r5;
    n *= r2;
    n += r0;
    n *= 1.73477626f;
    return n;
} // Solution1

// Solution2 result = 0.00000032
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 2.32965493f;
    n *= -3.01120281f;
    r0 = n *= -0.07399257f;
    r1 = n += -1.10236883f;
    r2 = n *= 0.14195795f;
    r3 = n *= 2.94275284f;
    n += r2;
    n = r3 *= n;
    n *= -1.84716606f;
    n *= 0.80091625f;
    r2 = n += 0.79731458f;
    r4 = n += 0.27188575f;
    r5 = n *= -1.65308905f;
    n += r3;
    n += 1.53211439f;
    n = r5 *= n;
    n *= 0.26605722f;
    n = r2 += n;
    n += 1.74739265f;
    r3 = n += 1.39414346f;
    n += 0.99379271f;
    n *= r1;
    n *= r3;
    n *= -0.16187486f;
    n *= -3.36012578f;
    n *= r4;
    n *= -1.17586684f;
    n *= 1.98072231f;
    n *= r5;
    n *= r2;
    n += r0;
    n *= 0.47497627f;
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
