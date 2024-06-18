// Run date: 06/17/24 15:15:27 Pacific Daylight Time
// Run duration = 415.898115 seconds
// Run generation = 352
// Run evolution = 11
// Run max result = 0.00000072
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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= 0.10929314f;
    r1 = n *= -1.51631320f;
    n = r1 *= n;
    n += -1.06176615f;
    r2 = n += -0.00746043f;
    r3 = n += -2.61247754f;
    r4 = n += 1.03043973f;
    n += 0.95930344f;
    r5 = n *= 0.19076519f;
    n += r1;
    n = r0 *= n;
    r1 = n *= 0.73104036f;
    n *= -0.00394816f;
    n *= -1.06588602f;
    r6 = n *= 13.32147694f;
    n *= r6;
    n *= 8.47422791f;
    n = r4 += n;
    n = r4 *= n;
    n += -2.33420467f;
    n *= r5;
    n = r3 += n;
    n *= r0;
    n *= -0.01454755f;
    n *= -0.02497698f;
    n *= 2.80677557f;
    n += r1;
    n *= r2;
    n *= r3;
    n *= r4;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065843f;
    r0 = n *= 0.53309101f;
    r1 = n *= 0.31854135f;
    n = r1 *= n;
    n += -0.94483209f;
    r2 = n += 0.23196231f;
    r3 = n += 1.81045282f;
    r4 = n += -1.97029209f;
    n += -3.18233585f;
    r5 = n *= -0.28799453f;
    n += r1;
    n = r0 *= n;
    r1 = n *= -0.00613080f;
    n *= 1.05008495f;
    n *= -6.50473690f;
    r6 = n *= -0.25312838f;
    n *= r6;
    n *= -7.05545378f;
    n = r4 += n;
    n = r4 *= n;
    n += 2.98364186f;
    n *= r5;
    n = r3 += n;
    n *= r0;
    n *= -0.15089954f;
    n *= -0.46232167f;
    n *= 1.57428408f;
    n += r1;
    n *= r2;
    n *= r3;
    n *= r4;
    n += -0.11813172f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= 0.13066374f;
    r1 = n *= -1.40244067f;
    n = r1 *= n;
    n += 2.06346035f;
    r2 = n += -3.65910029f;
    r3 = n += 1.58646870f;
    r4 = n += -3.36562610f;
    n += 3.22462487f;
    r5 = n *= -1.08072460f;
    n += r1;
    n = r0 *= n;
    r1 = n *= 1.64568877f;
    n *= 1.55690920f;
    n *= -0.01377668f;
    r6 = n *= -0.40743119f;
    n *= r6;
    n *= 6.13577700f;
    n = r4 += n;
    n = r4 *= n;
    n += -1.76134121f;
    n *= r5;
    n = r3 += n;
    n *= r0;
    n *= -0.00481054f;
    n *= 1.41046107f;
    n *= -2.34744620f;
    n += r1;
    n *= r2;
    n *= r3;
    n *= r4;
    n += 0.52359849f;
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
