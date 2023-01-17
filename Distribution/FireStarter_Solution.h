// Run date: 01/17/23 10:07:56 Pacific Standard Time
// Run duration = 4.834911 seconds
// Run count = 11
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 11

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000477

// Solution0 precision = 0.00000023
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.82907641f;
    n += -4.03112268f;
    r0 = n += -0.93954623f;
    r1 = n *= 0.35485655f;
    n *= -1.64785528f;
    n = r1 *= n;
    r2 = n += 0.08632158f;
    r3 = n += 0.43344072f;
    n *= 0.00765830f;
    r4 = n += 0.05583464f;
    n += 0.24685310f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.02177295f;
    r5 = n += -0.04624878f;
    n += 3.46321893f;
    n += -2.46756721f;
    n += r2;
    n *= -0.28430516f;
    n *= 0.05375916f;
    n += -1.39108801f;
    n *= r1;
    n *= -2.85595965f;
    n += 13.31564522f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.92298347f;
    n *= r5;
    n += 0.00000002f;
    n *= 1.77764940f;
    return n;
} // Solution0

// Solution1 precision = 0.00000477
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.93526006f;
    n += -0.10416642f;
    r0 = n += -0.05123295f;
    r1 = n *= 0.09508270f;
    n *= 0.05159798f;
    n = r1 *= n;
    r2 = n += 1.29732454f;
    r3 = n += -1.36034119f;
    n *= -1667.42224121f;
    r4 = n += -1.43938279f;
    n += -1.70969129f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.21399343f;
    r5 = n += -1.90280938f;
    n += -6.16553736f;
    n += 3.47831035f;
    n += r2;
    n *= 0.00251795f;
    n *= 0.00609578f;
    n += 1.62749517f;
    n *= r1;
    n *= -0.34626615f;
    n += 0.35210937f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.05787326f;
    n *= r5;
    n += -0.14153676f;
    n *= 0.83464152f;
    return n;
} // Solution1

// Solution2 precision = 0.00000301
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.69852805f;
    n += -0.35469928f;
    r0 = n += -1.56476748f;
    r1 = n *= 0.30058703f;
    n *= -0.14968292f;
    n = r1 *= n;
    r2 = n += 0.54083967f;
    r3 = n += -0.40457711f;
    n *= 0.76312071f;
    r4 = n += 0.40049288f;
    n += 0.12912214f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.80460024f;
    r5 = n += -0.02384278f;
    n += -1.75510538f;
    n += 1.04753494f;
    n += r2;
    n *= 2.15549016f;
    n *= -2.78911376f;
    n += -2.57492018f;
    n *= r1;
    n *= -0.02640313f;
    n += 0.49521598f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -171.37628174f;
    n *= r5;
    n += 1.42085767f;
    n *= 0.36851025f;
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
