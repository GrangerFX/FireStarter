// Run date: 06/02/24 17:22:22 Pacific Daylight Time
// Run duration = 1859.765823 seconds
// Run generation = 254
// Run evolution = 8
// Run max result = 0.00000036
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
// Run evolveSeed = 2
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 2.15494609f;
    n += r1;
    r1 = n *= -1.34312963f;
    n *= -0.03543282f;
    n *= r1;
    n += 4.12415600f;
    n *= -0.58235425f;
    r1 = n *= -0.80011916f;
    r2 = n *= -2.02635145f;
    r3 = n *= 0.00006601f;
    r4 = n += -0.01870922f;
    n *= 9.41103935f;
    n += r1;
    n = r4 *= n;
    r1 = n += -1.00326860f;
    r5 = n *= 1.24182665f;
    n *= r4;
    r4 = n += 0.26975730f;
    n += r2;
    n *= 0.25455016f;
    n += -1.87391090f;
    n = r0 *= n;
    n += r0;
    n = r4 *= n;
    n *= r3;
    n += r4;
    n *= r5;
    n *= 0.43104514f;
    n *= r1;
    n += 1.17296350f;
    n += -1.17296350f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065890f;
    r1 = n *= 1.37862182f;
    n += r1;
    r1 = n *= -0.28521675f;
    n *= 0.78667891f;
    n *= r1;
    n += -1.87133777f;
    n *= 1.40706742f;
    r1 = n *= 0.55322808f;
    r2 = n *= -0.00275181f;
    r3 = n *= 1.46854925f;
    r4 = n += 0.12914996f;
    n *= -7.70741606f;
    n += r1;
    n = r4 *= n;
    r1 = n += -0.72187883f;
    r5 = n *= 0.24670178f;
    n *= r4;
    r4 = n += 3.43481970f;
    n += r2;
    n *= 0.39906937f;
    n += -3.82023501f;
    n = r0 *= n;
    n += r0;
    n = r4 *= n;
    n *= r3;
    n += r4;
    n *= r5;
    n *= 0.23244813f;
    n *= r1;
    n += 0.15464567f;
    n += -0.27277759f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 2.20905757f;
    n += r1;
    r1 = n *= 0.23201677f;
    n *= 1.37523115f;
    n *= r1;
    n += -1.65156317f;
    n *= 0.28343645f;
    r1 = n *= -1.31683552f;
    r2 = n *= 0.41658911f;
    r3 = n *= -0.00327316f;
    r4 = n += -0.15228488f;
    n *= -8.36519432f;
    n += r1;
    n = r4 *= n;
    r1 = n += -3.03847146f;
    r5 = n *= 0.46640691f;
    n *= r4;
    r4 = n += 0.16688341f;
    n += r2;
    n *= -0.04342107f;
    n += -2.75771070f;
    n = r0 *= n;
    n += r0;
    n = r4 *= n;
    n *= r3;
    n += r4;
    n *= r5;
    n *= 0.05603687f;
    n *= r1;
    n += -2.21420312f;
    n += 2.73780179f;
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
