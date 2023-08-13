// Run date: 08/13/23 14:37:58 Pacific Daylight Time
// Run duration = 864.251969 seconds
// Run generation = 47
// Run evolution = 6
// Run result = 0.00000024
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
// Run tests = 0
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    n *= -2.48835254f;
    r1 = n *= 0.24677917f;
    n *= -0.32571545f;
    n = r0 *= n;
    r2 = n += -1.97405171f;
    n += -1.87033391f;
    n *= -0.03441776f;
    r3 = n += 1.42565143f;
    r4 = n *= 0.00921881f;
    n += 2.32349133f;
    n *= r0;
    n += -0.86845535f;
    n += -1.11782408f;
    n = r4 *= n;
    n *= -2.24448872f;
    r0 = n += 0.43407038f;
    n += r4;
    n *= r3;
    r3 = n *= -0.51032859f;
    n *= 0.52072668f;
    n *= r2;
    n = r0 *= n;
    n = r0 += n;
    r2 = n *= -1.51296329f;
    n += r2;
    n *= r3;
    n += r0;
    n *= r1;
    n += -0.06679630f;
    r1 = n += 0.06679630f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065890f;
    n *= 1.08130920f;
    r1 = n *= -0.02926270f;
    n *= -1.74614143f;
    n = r0 *= n;
    r2 = n += -1.41674626f;
    n += -0.67333049f;
    n *= -0.10866725f;
    r3 = n += 0.04548301f;
    r4 = n *= 0.48129323f;
    n += 1.85777199f;
    n *= r0;
    n += 0.68202674f;
    n += -2.09830976f;
    n = r4 *= n;
    n *= -0.26075244f;
    r0 = n += -2.23962235f;
    n += r4;
    n *= r3;
    r3 = n *= -2.91758919f;
    n *= -0.96459609f;
    n *= r2;
    n = r0 *= n;
    n = r0 += n;
    r2 = n *= -0.67049778f;
    n += r2;
    n *= r3;
    n += r0;
    n *= r1;
    n += -1.65028656f;
    r1 = n += 1.59122050f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    n *= 2.19241261f;
    r1 = n *= 1.23700535f;
    n *= -0.21944663f;
    n = r0 *= n;
    r2 = n += 2.96575570f;
    n += -1.16796350f;
    n *= 0.00342034f;
    r3 = n += 0.13935404f;
    r4 = n *= -0.23740119f;
    n += -1.00109529f;
    n *= r0;
    n += -2.57891035f;
    n += 1.00517797f;
    n = r4 *= n;
    n *= 0.52805811f;
    r0 = n += 0.56561339f;
    n += r4;
    n *= r3;
    r3 = n *= 0.35208353f;
    n *= -1.53083730f;
    n *= r2;
    n = r0 *= n;
    n = r0 += n;
    r2 = n *= 0.42201161f;
    n += r2;
    n *= r3;
    n += r0;
    n *= r1;
    n += 0.01948289f;
    r1 = n += 0.24231648f;
    n += r1;
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
