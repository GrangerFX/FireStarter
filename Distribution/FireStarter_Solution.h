// Run date: 07/02/23 12:01:19 Pacific Daylight Time
// Run duration = 1288.072338 seconds
// Run generation = 97
// Run evolution = 0
// Run result = 0.00000185
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
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

// Solution0 result = 0.00000185
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159298f;
    r0 = n *= -1.73357821f;
    r1 = n *= -0.18345092f;
    n = r1 *= n;
    n += r1;
    r1 = n *= -2.43457532f;
    n += 1.00135279f;
    n *= -2.50376391f;
    n *= -0.01049403f;
    n += 0.78304714f;
    r2 = n *= -0.76068455f;
    n *= 0.75682521f;
    n = r2 *= n;
    n *= r0;
    r0 = n *= -1.47401023f;
    n *= 0.11286142f;
    r3 = n *= 0.50257725f;
    n = r3 *= n;
    r4 = n += -0.30977884f;
    n *= 3.66812229f;
    n *= -0.53255165f;
    r5 = n += -2.39727449f;
    n *= r2;
    n = r4 *= n;
    n *= -1.49393654f;
    n += r1;
    n += 5.01752090f;
    n += r3;
    n *= r4;
    n *= r0;
    n *= r5;
    n += 0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000161
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065795f;
    r0 = n *= -0.15080313f;
    r1 = n *= -0.20651546f;
    n = r1 *= n;
    n += r1;
    r1 = n *= 0.19746937f;
    n += 0.87408179f;
    n *= -0.04193215f;
    n *= 0.01947399f;
    n += -1.10140646f;
    r2 = n *= 1.59764206f;
    n *= -0.15749435f;
    n = r2 *= n;
    n *= r0;
    r0 = n *= -2.04925156f;
    n *= -2.71049619f;
    r3 = n *= 0.41199502f;
    n = r3 *= n;
    r4 = n += -1.17462659f;
    n *= -0.96024328f;
    n *= 1.95509505f;
    r5 = n += -0.82442009f;
    n *= r2;
    n = r4 *= n;
    n *= 1.79477513f;
    n += r1;
    n += 5.24471521f;
    n += r3;
    n *= r4;
    n *= r0;
    n *= r5;
    n += -0.11813122f;
    return n;
} // Solution1

// Solution2 result = 0.00000153
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= 0.95827484f;
    r1 = n *= 0.63874829f;
    n = r1 *= n;
    n += r1;
    r1 = n *= 0.53563261f;
    n += -0.74999720f;
    n *= 0.90741295f;
    n *= 0.00463814f;
    n += -1.18905485f;
    r2 = n *= 0.80800557f;
    n *= -0.21620883f;
    n = r2 *= n;
    n *= r0;
    r0 = n *= -0.81150532f;
    n *= 2.09613109f;
    r3 = n *= 0.53154451f;
    n = r3 *= n;
    r4 = n += -1.09592986f;
    n *= 1.82138288f;
    n *= 1.69677758f;
    r5 = n += -0.18177950f;
    n *= r2;
    n = r4 *= n;
    n *= 0.71342748f;
    n += r1;
    n += -1.72887111f;
    n += r3;
    n *= r4;
    n *= r0;
    n *= r5;
    n += 0.52359873f;
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
