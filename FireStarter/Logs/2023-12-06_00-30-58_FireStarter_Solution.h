// Run date: 12/06/23 00:30:58 Pacific Standard Time
// Run duration = 4423.263440 seconds
// Run generation = 29
// Run evolution = 10
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159274f;
    n *= -0.74006927f;
    r0 = n *= -0.82585150f;
    r1 = n *= -0.04524821f;
    n *= 46.77391052f;
    n = r1 *= n;
    r2 = n += -0.08021016f;
    n *= 0.03913002f;
    n += -0.17493691f;
    r3 = n *= 1.10486698f;
    r4 = n *= 1.18345058f;
    n *= -33.10519791f;
    n += r1;
    r1 = n *= 1.89716208f;
    n = r3 *= n;
    n *= -8.62449551f;
    n *= -0.02095591f;
    n *= r2;
    n += 0.12672248f;
    n = r4 *= n;
    n = r3 += n;
    n *= 0.60967630f;
    n += 1.02967310f;
    n *= r3;
    n *= r0;
    n *= r1;
    n *= 0.63589686f;
    n *= -4.77471113f;
    n *= r4;
    n += 0.10255617f;
    n *= -0.43044883f;
    n += 0.04414518f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065866f;
    n *= -1.53908408f;
    r0 = n *= 0.10158076f;
    r1 = n *= -2.09513068f;
    n *= -1.68560326f;
    n = r1 *= n;
    r2 = n += 1.23216212f;
    n *= 0.01107637f;
    n += 1.98194468f;
    r3 = n *= -1.73635876f;
    r4 = n *= -1.38040483f;
    n *= 1.49972808f;
    n += r1;
    r1 = n *= -0.56346470f;
    n = r3 *= n;
    n *= 5.25240850f;
    n *= -0.00060527f;
    n *= r2;
    n += -0.82341152f;
    n = r4 *= n;
    n = r3 += n;
    n *= -1.36261868f;
    n += 1.65499079f;
    n *= r3;
    n *= r0;
    n *= r1;
    n *= -0.05109508f;
    n *= -0.01375499f;
    n *= r4;
    n += -0.14041285f;
    n *= -5.13701153f;
    n += -0.83943433f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799359f;
    n *= -1.07302880f;
    r0 = n *= -0.43537313f;
    r1 = n *= 0.51249588f;
    n *= -1.98110330f;
    n = r1 *= n;
    r2 = n += 0.07016319f;
    n *= 0.09969635f;
    n += 0.65497106f;
    r3 = n *= -0.83623445f;
    r4 = n *= 1.51895583f;
    n *= -0.73574162f;
    n += r1;
    r1 = n *= 0.53220278f;
    n = r3 *= n;
    n *= -0.00339400f;
    n *= 4.51143122f;
    n *= r2;
    n += 1.56385255f;
    n = r4 *= n;
    n = r3 += n;
    n *= 0.77558547f;
    n += -0.55312538f;
    n *= r3;
    n *= r0;
    n *= r1;
    n *= 0.41584080f;
    n *= 0.98373830f;
    n *= r4;
    n += 0.00768260f;
    n *= 4.70761061f;
    n += 0.48743215f;
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
