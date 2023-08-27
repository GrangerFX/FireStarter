// Run date: 08/27/23 16:39:42 Pacific Daylight Time
// Run duration = 87.128868 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00018340
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

// Solution0 result = 0.00018340
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14147282f;
    r1 = n *= 0.00002638f;
    n += 4.17364359f;
    r2 = n *= -1.78667915f;
    n += -1.17988670f;
    r3 = n += 1.31848049f;
    n = r1 += n;
    n *= -0.03294566f;
    r4 = n *= -0.10646538f;
    r5 = n += -0.85745335f;
    n *= 0.80768228f;
    n = r0 *= n;
    n += 1.44914246f;
    r6 = n += -1.44902837f;
    n *= r0;
    n *= 0.14033532f;
    r0 = n += -0.70459622f;
    n = r5 += n;
    n *= -1.01018608f;
    n *= r1;
    n *= 1.09051621f;
    n *= r5;
    n *= -1.10162175f;
    n += 2.25135159f;
    n = r3 += n;
    n += r2;
    n += r3;
    n *= r6;
    n *= r0;
    n *= r4;
    n *= -1.24212933f;
    n += -0.00003976f;
    return n;
} // Solution0

// Solution1 result = 0.00008047
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.15633965f;
    r1 = n *= 0.02205040f;
    n += -0.08824842f;
    r2 = n *= -1.74599183f;
    n += 0.92775100f;
    r3 = n += 6.65440178f;
    n = r1 += n;
    n *= -0.02276028f;
    r4 = n *= 0.17293528f;
    r5 = n += 0.42492282f;
    n *= 0.78172320f;
    n = r0 *= n;
    n += 0.82833260f;
    r6 = n += -0.80624163f;
    n *= r0;
    n *= -1.60878885f;
    r0 = n += 3.01499867f;
    n = r5 += n;
    n *= 0.28749409f;
    n *= r1;
    n *= -0.90950239f;
    n *= r5;
    n *= -0.62662983f;
    n += -0.29525965f;
    n = r3 += n;
    n += r2;
    n += r3;
    n *= r6;
    n *= r0;
    n *= r4;
    n *= 0.87246084f;
    n += -0.11158559f;
    return n;
} // Solution1

// Solution2 result = 0.00014284
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.25218987f;
    r1 = n *= 1.13780034f;
    n += -0.77752560f;
    r2 = n *= -0.15276733f;
    n += -1.99039233f;
    r3 = n += -0.05708821f;
    n = r1 += n;
    n *= 0.13327330f;
    r4 = n *= 1.08917654f;
    r5 = n += -0.33460593f;
    n *= 0.07852547f;
    n = r0 *= n;
    n += -0.83630800f;
    r6 = n += -1.41456592f;
    n *= r0;
    n *= -2.27303386f;
    r0 = n += -0.80244911f;
    n = r5 += n;
    n *= -1.17486095f;
    n *= r1;
    n *= 0.39290395f;
    n *= r5;
    n *= 1.12097609f;
    n += 1.12320650f;
    n = r3 += n;
    n += r2;
    n += r3;
    n *= r6;
    n *= r0;
    n *= r4;
    n *= -0.74621886f;
    n += -0.07399224f;
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
