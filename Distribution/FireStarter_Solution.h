// Run date: 09/18/23 19:57:37 Pacific Daylight Time
// Run duration = 6627.413132 seconds
// Run generation = 9
// Run evolution = 4
// Run result = 0.00001729
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
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00000879
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.58490658f;
    r1 = n *= -0.23008400f;
    r2 = n += 0.11636630f;
    n += -1.16760969f;
    r3 = n *= 0.75856638f;
    n = r2 *= n;
    r4 = n += -1.17152929f;
    r5 = n *= 0.55833888f;
    n *= r1;
    n *= 0.82281876f;
    n += 1.47916842f;
    n += r0;
    n *= r4;
    r4 = n *= 0.62102908f;
    n += r3;
    n = r5 *= n;
    r3 = n += 1.28553545f;
    r0 = n += -2.62017083f;
    n *= r3;
    n *= 0.64717269f;
    n = r2 += n;
    n = r5 *= n;
    n += r2;
    n *= 0.30644476f;
    n += r5;
    n += 1.45718920f;
    n += r0;
    n += r4;
    n *= -0.55745298f;
    n *= 0.79076457f;
    n *= 2.15309167f;
    n += 0.30711985f;
    return n;
} // Solution0

// Solution1 result = 0.00000513
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.34939656f;
    r1 = n *= -0.31535390f;
    r2 = n += -0.27238587f;
    n += 1.28177774f;
    r3 = n *= -1.25779164f;
    n = r2 *= n;
    r4 = n += 1.43926835f;
    r5 = n *= 0.27090263f;
    n *= r1;
    n *= -0.47723410f;
    n += -0.85869151f;
    n += r0;
    n *= r4;
    r4 = n *= 1.48533046f;
    n += r3;
    n = r5 *= n;
    r3 = n += -0.20496893f;
    r0 = n += 1.37366962f;
    n *= r3;
    n *= -1.82981813f;
    n = r2 += n;
    n = r5 *= n;
    n += r2;
    n *= -0.50708568f;
    n += r5;
    n += -2.01989055f;
    n += r0;
    n += r4;
    n *= -1.70445418f;
    n *= -1.06694996f;
    n *= -0.22842495f;
    n += -0.27560911f;
    return n;
} // Solution1

// Solution2 result = 0.00001729
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.54471159f;
    r1 = n *= 0.31860131f;
    r2 = n += -0.31355527f;
    n += -0.41277203f;
    r3 = n *= 0.37014353f;
    n = r2 *= n;
    r4 = n += -0.91352338f;
    r5 = n *= -0.77319705f;
    n *= r1;
    n *= 2.16465092f;
    n += -1.65021741f;
    n += r0;
    n *= r4;
    r4 = n *= -0.87699693f;
    n += r3;
    n = r5 *= n;
    r3 = n += -1.42102563f;
    r0 = n += 1.39347744f;
    n *= r3;
    n *= 2.24351335f;
    n = r2 += n;
    n = r5 *= n;
    n += r2;
    n *= 4.30416584f;
    n += r5;
    n += 0.79355824f;
    n += r0;
    n += r4;
    n *= 0.88684648f;
    n *= -2.02915692f;
    n *= -0.08058380f;
    n += 0.72314149f;
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
