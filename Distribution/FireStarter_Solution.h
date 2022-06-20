// Run date: 06/19/22 20:41:25 Pacific Daylight Time
// Run duration = 7.438397 seconds
// Run count = 10
// Run units = 4
// Run population = 34816
// Run iterations = 128
// Run generations = 100
// Run samples = 15
// Solution Generation = 9

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000168

// Solution0 precision = 0.000043
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.22787744f;
    n += 0.59054399f;
    n += -0.89506966f;
    r1 = n *= -1.02436769f;
    n *= -0.06899028f;
    n *= 0.36472425f;
    r2 = n *= 0.00402706f;
    n *= -1.13710558f;
    n += -0.29497108f;
    n += -3.68540692f;
    r3 = n *= 0.41639271f;
    n += 0.82026207f;
    r4 = n *= -0.98609221f;
    n += r4;
    n *= -1.11631632f;
    n += r0;
    n = r1 *= n;
    r0 = n += -0.04930698f;
    n *= -0.18783674f;
    n = r3 += n;
    r4 = n += 1.13740659f;
    n *= r3;
    r3 = n += 0.48458344f;
    r5 = n += 1.09629726f;
    n *= r0;
    n *= r1;
    n *= r4;
    n += r2;
    n += 0.31817636f;
    n *= r5;
    n *= 0.95135450f;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.000168
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.47302383f;
    n += -0.88992840f;
    n += -0.74752539f;
    r1 = n *= -0.45589930f;
    n *= 1.79272294f;
    n *= -0.94287550f;
    r2 = n *= 1.16993582f;
    n *= -0.31493488f;
    n += -0.46342245f;
    n += 0.11779308f;
    r3 = n *= 0.90591097f;
    n += 1.50996459f;
    r4 = n *= 0.69575357f;
    n += r4;
    n *= 0.48841244f;
    n += r0;
    n = r1 *= n;
    r0 = n += 1.35478294f;
    n *= -0.02008651f;
    n = r3 += n;
    r4 = n += 0.98215079f;
    n *= r3;
    r3 = n += -0.26537749f;
    r5 = n += -0.71428007f;
    n *= r0;
    n *= r1;
    n *= r4;
    n += r2;
    n += 0.50851566f;
    n *= r5;
    n *= -1.76478958f;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.000165
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.35883033f;
    n += 0.79667234f;
    n += 0.09518513f;
    r1 = n *= 0.25222704f;
    n *= -0.53555655f;
    n *= 1.08624077f;
    r2 = n *= -1.02128184f;
    n *= -0.12108258f;
    n += 0.40896454f;
    n += 1.28124118f;
    r3 = n *= -0.70128876f;
    n += 1.16554773f;
    r4 = n *= 0.19244827f;
    n += r4;
    n *= -0.40206480f;
    n += r0;
    n = r1 *= n;
    r0 = n += -0.42217776f;
    n *= 0.59918559f;
    n = r3 += n;
    r4 = n += -0.77561927f;
    n *= r3;
    r3 = n += 1.12613451f;
    r5 = n += -1.06247401f;
    n *= r0;
    n *= r1;
    n *= r4;
    n += r2;
    n += -0.13450502f;
    n *= r5;
    n *= -0.34813941f;
    n *= r3;
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
