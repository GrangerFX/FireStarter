// Run date: 05/12/24 09:52:18 Pacific Daylight Time
// Run duration = 393.308107 seconds
// Run generation = 245
// Run evolution = 6
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.41079542f;
    r0 = n += -1.29055190f;
    n *= -2.69241500f;
    r1 = n *= -0.71930784f;
    n *= r0;
    r0 = n += -0.62004113f;
    n += -1.33121419f;
    n += -0.78967476f;
    r2 = n *= 0.00176628f;
    r3 = n += -0.04859822f;
    n = r0 *= n;
    r4 = n *= 1.32071078f;
    n *= -0.23923376f;
    r5 = n *= -1.56146109f;
    r6 = n += 0.10590310f;
    n += -1.10203934f;
    n += r2;
    n = r3 *= n;
    n *= 2.54283023f;
    n *= r4;
    n += r5;
    n += r3;
    r3 = n += 3.24651313f;
    n *= -1.52548850f;
    n *= -0.90082783f;
    n = r6 *= n;
    n *= r6;
    n *= r3;
    n += r0;
    n *= r1;
    n *= -1.17782402f;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.44814026f;
    r0 = n += 1.38504875f;
    n *= 0.05481515f;
    r1 = n *= -2.23028231f;
    n *= r0;
    r0 = n += -0.88207281f;
    n += 4.23392725f;
    n += 1.98587406f;
    r2 = n *= 1.53416538f;
    r3 = n += -7.12365007f;
    n = r0 *= n;
    r4 = n *= 0.00212661f;
    n *= -0.47215274f;
    r5 = n *= 2.14470339f;
    r6 = n += -1.12607801f;
    n += -1.71445310f;
    n += r2;
    n = r3 *= n;
    n *= 5.25037098f;
    n *= r4;
    n += r5;
    n += r3;
    r3 = n += 1.59568727f;
    n *= -1.91851163f;
    n *= -0.06894814f;
    n = r6 *= n;
    n *= r6;
    n *= r3;
    n += r0;
    n *= r1;
    n *= -2.69767499f;
    n += -0.11813199f;
    return n;
} // Solution1

// Solution2 result = 0.00000026
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.67756629f;
    r0 = n += -1.77386427f;
    n *= -1.02439559f;
    r1 = n *= -0.59595865f;
    n *= r0;
    r0 = n += -0.89091945f;
    n += 2.29560900f;
    n += -0.03288325f;
    r2 = n *= 0.00092988f;
    r3 = n += -0.53263366f;
    n = r0 *= n;
    r4 = n *= -0.34615651f;
    n *= -1.74145925f;
    r5 = n *= 0.95819306f;
    r6 = n += 0.45105618f;
    n += 0.12050480f;
    n += r2;
    n = r3 *= n;
    n *= 0.14072664f;
    n *= r4;
    n += r5;
    n += r3;
    r3 = n += 3.22684002f;
    n *= -0.10767768f;
    n *= -3.37969351f;
    n = r6 *= n;
    n *= r6;
    n *= r3;
    n += r0;
    n *= r1;
    n *= -0.97989321f;
    n += 0.52359861f;
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
