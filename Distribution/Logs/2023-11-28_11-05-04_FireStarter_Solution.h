// Run date: 11/28/23 11:05:04 Pacific Standard Time
// Run duration = 1378.628193 seconds
// Run generation = 25
// Run evolution = 9
// Run max result = 0.00000021
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.11603704f;
    r1 = n += 0.36454111f;
    n *= 2.65240097f;
    n *= 0.82879698f;
    r2 = n *= -1.40651846f;
    n *= r2;
    r2 = n += -0.45865858f;
    r3 = n *= -0.94300210f;
    n = r3 += n;
    r4 = n *= 0.00046221f;
    n += r4;
    r4 = n += 0.08570343f;
    n = r3 *= n;
    n += -2.25388908f;
    n *= r2;
    n *= 0.11722427f;
    r2 = n += -0.05540887f;
    n = r2 *= n;
    n += 0.00434432f;
    n += r3;
    n += r4;
    n *= 1.49161816f;
    n *= -0.67041272f;
    n = r2 += n;
    n += -3.90508771f;
    n = r2 *= n;
    r4 = n += 2.68644643f;
    n *= r1;
    n *= r2;
    n *= r4;
    n += r0;
    n += 0.36454111f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.31936771f;
    r1 = n += 0.98705649f;
    n *= -1.61597335f;
    n *= -0.71140707f;
    r2 = n *= -1.90155494f;
    n *= r2;
    r2 = n += -1.51346540f;
    r3 = n *= -0.16757137f;
    n = r3 += n;
    r4 = n *= 0.01017897f;
    n += r4;
    r4 = n += 1.69974864f;
    n = r3 *= n;
    n += -5.70038366f;
    n *= r2;
    n *= 0.00000001f;
    r2 = n += 0.07299290f;
    n = r2 *= n;
    n += 0.15746586f;
    n += r3;
    n += r4;
    n *= -1.10356641f;
    n *= 0.04693042f;
    n = r2 += n;
    n += -3.15733123f;
    n = r2 *= n;
    r4 = n += 1.88088691f;
    n *= r1;
    n *= r2;
    n *= r4;
    n += r0;
    n += 0.86892474f;
    return n;
} // Solution1

// Solution2 result = 0.00000021
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.32715049f;
    r1 = n += 0.85647792f;
    n *= -4.04495668f;
    n *= -0.90902984f;
    r2 = n *= -0.37892896f;
    n *= r2;
    r2 = n += -0.67721188f;
    r3 = n *= -0.04939203f;
    n = r3 += n;
    r4 = n *= 0.04364154f;
    n += r4;
    r4 = n += 1.47780645f;
    n = r3 *= n;
    n += 0.09719237f;
    n *= r2;
    n *= 9.48864269f;
    r2 = n += 0.13146485f;
    n = r2 *= n;
    n += -1.49010837f;
    n += r3;
    n += r4;
    n *= 3.06833291f;
    n *= -0.32591194f;
    n = r2 += n;
    n += -2.74181724f;
    n = r2 *= n;
    r4 = n += 2.53315616f;
    n *= r1;
    n *= r2;
    n *= r4;
    n += r0;
    n += 1.38007665f;
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
