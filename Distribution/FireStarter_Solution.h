// Run date: 09/17/23 14:06:37 Pacific Daylight Time
// Run duration = 20213.305121 seconds
// Run generation = 69
// Run evolution = 19
// Run result = 0.00000018
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.42040160f;
    r1 = n += -1.06286240f;
    n += -0.99150002f;
    r2 = n += 0.23363189f;
    n *= r2;
    n += r1;
    r1 = n += -1.59681904f;
    r2 = n *= -10.65135670f;
    n *= 0.00003073f;
    n *= -13.31359291f;
    r3 = n += -0.16151369f;
    n = r1 *= n;
    n += r3;
    r3 = n += 1.33888793f;
    n *= -3.60770488f;
    n += -3.89820814f;
    r4 = n *= 0.31004739f;
    r5 = n *= -0.68876177f;
    n += r1;
    n *= r3;
    n = r5 *= n;
    n *= -0.50995296f;
    r3 = n *= 0.36076438f;
    n += r2;
    n += r5;
    n *= r3;
    n += r4;
    r4 = n *= -0.17498039f;
    n += 0.00000010f;
    n *= -0.75715667f;
    n *= r0;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.61173731f;
    r1 = n += 1.58226693f;
    n += 0.20967346f;
    r2 = n += -0.40126947f;
    n *= r2;
    n += r1;
    r1 = n += -2.02436495f;
    r2 = n *= -3.13828087f;
    n *= -2.70964265f;
    n *= 0.00012663f;
    r3 = n += -0.05363068f;
    n = r1 *= n;
    n += r3;
    r3 = n += 0.65162194f;
    n *= 1.51750422f;
    n += 0.88798469f;
    r4 = n *= -0.77485412f;
    r5 = n *= 1.02626801f;
    n += r1;
    n *= r3;
    n = r5 *= n;
    n *= -0.94479418f;
    r3 = n *= 0.13498504f;
    n += r2;
    n += r5;
    n *= r3;
    n += r4;
    r4 = n *= -1.03768384f;
    n += 0.11813213f;
    n *= 0.52891266f;
    n *= r0;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.54570550f;
    r1 = n += -3.50002599f;
    n += 2.00502992f;
    r2 = n += -0.43365723f;
    n *= r2;
    n += r1;
    r1 = n += -0.10803006f;
    r2 = n *= 0.14423677f;
    n *= 0.00153618f;
    n *= 29.04182053f;
    r3 = n += -0.26652998f;
    n = r1 *= n;
    n += r3;
    r3 = n += 1.19618559f;
    n *= 1.94727910f;
    n += 2.81395531f;
    r4 = n *= -0.65035731f;
    r5 = n *= 0.82562661f;
    n += r1;
    n *= r3;
    n = r5 *= n;
    n *= -0.46693775f;
    r3 = n *= 2.34139800f;
    n += r2;
    n += r5;
    n *= r3;
    n += r4;
    r4 = n *= 0.26088113f;
    n += -0.52359766f;
    n *= -0.69995952f;
    n *= r0;
    n += r4;
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
