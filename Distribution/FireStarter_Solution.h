// Run date: 04/23/23 10:49:30 Pacific Daylight Time
// Run duration = 949.191484 seconds
// Run generation = 371
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 123
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00000011
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.11977795f;
    r0 = n += -0.37629357f;
    n *= 1.48688698f;
    n *= -1.20481133f;
    r1 = n += -0.00000012f;
    n = r0 *= n;
    r2 = n *= 4.98818541f;
    n += 0.37349141f;
    n *= 0.00011705f;
    r3 = n *= -6.67741299f;
    n = r3 += n;
    r4 = n += 0.90078890f;
    r5 = n += 1.68917990f;
    r6 = n += 0.33382988f;
    n += -1.86878288f;
    n *= r0;
    n *= 0.67125183f;
    r0 = n += 0.17987402f;
    n = r4 += n;
    n = r4 *= n;
    r7 = n *= 1.13858962f;
    n *= r7;
    n += 4.38322973f;
    n += r3;
    n += -1.13849866f;
    n += r2;
    n += r5;
    n *= r1;
    n *= r6;
    n *= r0;
    n *= r4;
    n += 0.00000017f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.18292122f;
    r0 = n += -0.56534672f;
    n *= -0.03864196f;
    n *= -5.48733759f;
    r1 = n += -0.00000010f;
    n = r0 *= n;
    r2 = n *= -9.51072693f;
    n += 0.24865618f;
    n *= -5.47749901f;
    r3 = n *= -0.01380813f;
    n = r3 += n;
    r4 = n += 2.49227142f;
    r5 = n += -1.84077823f;
    r6 = n += -0.12199683f;
    n += -0.05338036f;
    n *= r0;
    n *= -2.71903276f;
    r0 = n += 0.12545010f;
    n = r4 += n;
    n = r4 *= n;
    r7 = n *= 0.07296477f;
    n *= r7;
    n += 13.55309582f;
    n += r3;
    n += -71.08119965f;
    n += r2;
    n += r5;
    n *= r1;
    n *= r6;
    n *= r0;
    n *= r4;
    n += -0.11813259f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.77282560f;
    r0 = n += 2.02325034f;
    n *= -1.43866491f;
    n *= -0.39337724f;
    r1 = n += 0.00000170f;
    n = r0 *= n;
    r2 = n *= -5.41366577f;
    n += 5.47804594f;
    n *= -0.02575908f;
    r3 = n *= -0.33523536f;
    n = r3 += n;
    r4 = n += 1.52672350f;
    r5 = n += 2.08339930f;
    r6 = n += -2.07783890f;
    n += 4.36325026f;
    n *= r0;
    n *= -0.00042874f;
    r0 = n += 0.04098677f;
    n = r4 += n;
    n = r4 *= n;
    r7 = n *= -1.07691169f;
    n *= r7;
    n += 1.92169797f;
    n += r3;
    n += -2.16819954f;
    n += r2;
    n += r5;
    n *= r1;
    n *= r6;
    n *= r0;
    n *= r4;
    n += 0.52359754f;
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
