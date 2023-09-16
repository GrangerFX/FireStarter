// Run date: 09/16/23 09:37:28 Pacific Daylight Time
// Run duration = 12116.976844 seconds
// Run generation = 63
// Run evolution = 22
// Run result = 0.00001717
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

// Solution0 result = 0.00001088
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.84514689f;
    r1 = n *= -0.25585014f;
    n *= -0.78831023f;
    n += 1.04795802f;
    r2 = n *= 1.59809422f;
    r3 = n += -1.98870993f;
    r4 = n += -0.10343219f;
    r5 = n *= 1.16341150f;
    r6 = n *= -1.15227473f;
    r7 = n *= 0.94753236f;
    n = r5 += n;
    n += -2.01250172f;
    n = r3 += n;
    n *= r3;
    n += -1.00700569f;
    n = r2 *= n;
    n *= -1.02302349f;
    r3 = n += -1.12816191f;
    n += r4;
    n *= r5;
    n *= r7;
    n += r6;
    n *= 5.12765503f;
    n *= -1.80667436f;
    n = r2 *= n;
    n += r1;
    n *= r3;
    n *= r0;
    n += 0.67256987f;
    n *= -0.00952552f;
    n += r2;
    n *= -0.04184711f;
    return n;
} // Solution0

// Solution1 result = 0.00001717
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.00801563f;
    r1 = n *= 0.44775727f;
    n *= 0.38836509f;
    n += -1.96989226f;
    r2 = n *= 1.89030790f;
    r3 = n += 1.28768146f;
    r4 = n += 2.11789918f;
    r5 = n *= 0.55015481f;
    r6 = n *= -1.95868468f;
    r7 = n *= -0.14827375f;
    n = r5 += n;
    n += 2.75925517f;
    n = r3 += n;
    n *= r3;
    n += -11.52215767f;
    n = r2 *= n;
    n *= -0.18701446f;
    r3 = n += 2.11873794f;
    n += r4;
    n *= r5;
    n *= r7;
    n += r6;
    n *= 0.05682931f;
    n *= 2.71339178f;
    n = r2 *= n;
    n += r1;
    n *= r3;
    n *= r0;
    n += 0.29054323f;
    n *= -0.00870792f;
    n += r2;
    n *= 0.51664543f;
    return n;
} // Solution1

// Solution2 result = 0.00000906
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -1.26590037f;
    r1 = n *= -1.53662360f;
    n *= 1.04166412f;
    n += 2.99278879f;
    r2 = n *= 0.46515167f;
    r3 = n += 0.61784631f;
    r4 = n += 0.32543170f;
    r5 = n *= -1.50800371f;
    r6 = n *= -1.86778998f;
    r7 = n *= 0.03736741f;
    n = r5 += n;
    n += 0.21365964f;
    n = r3 += n;
    n *= r3;
    n += -4.30174160f;
    n = r2 *= n;
    n *= -0.25510430f;
    r3 = n += 1.26407933f;
    n += r4;
    n *= r5;
    n *= r7;
    n += r6;
    n *= 0.40348166f;
    n *= 5.65382910f;
    n = r2 *= n;
    n += r1;
    n *= r3;
    n *= r0;
    n += -17.27859497f;
    n *= 0.04314556f;
    n += r2;
    n *= -0.04345929f;
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
