// Run date: 09/16/23 16:22:09 Pacific Daylight Time
// Run duration = 9980.706460 seconds
// Run generation = 195
// Run evolution = 51
// Run result = 0.00001800
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

// Solution0 result = 0.00001284
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.21265113f;
    r1 = n *= 0.90251005f;
    r2 = n += -0.59872693f;
    n += 0.59451663f;
    n = r2 *= n;
    r3 = n *= 0.90769720f;
    n += r1;
    n += -0.75048143f;
    n *= -0.00120081f;
    n *= r0;
    r0 = n += -1.32262802f;
    r1 = n += 1.08318686f;
    r4 = n += -1.32198715f;
    n += -1.33871877f;
    n += 2.67746520f;
    n *= r3;
    n += -0.67354131f;
    r3 = n += 2.38897943f;
    n = r3 *= n;
    n *= r0;
    n *= 0.47398981f;
    r0 = n *= -0.15276365f;
    n *= r1;
    n = r3 += n;
    n *= r2;
    n += 0.48034593f;
    n *= r3;
    r3 = n += -3.28490472f;
    n *= r3;
    n *= r0;
    n += r4;
    n += 0.56190640f;
    return n;
} // Solution0

// Solution1 result = 0.00001645
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.06623415f;
    r1 = n *= 1.80757046f;
    r2 = n += 0.23800944f;
    n += 0.39870447f;
    n = r2 *= n;
    r3 = n *= -0.04110286f;
    n += r1;
    n += 1.61782515f;
    n *= -0.16832477f;
    n *= r0;
    r0 = n += -0.04273382f;
    r1 = n += -1.43090630f;
    r4 = n += 0.99117392f;
    n += 2.12649179f;
    n += -3.72885013f;
    n *= r3;
    n += -1.77136910f;
    r3 = n += -0.15054847f;
    n = r3 *= n;
    n *= r0;
    n *= 2.16956425f;
    r0 = n *= -0.77453142f;
    n *= r1;
    n = r3 += n;
    n *= r2;
    n += -0.49693811f;
    n *= r3;
    r3 = n += -1.92336023f;
    n *= r3;
    n *= r0;
    n += r4;
    n += 0.35635263f;
    return n;
} // Solution1

// Solution2 result = 0.00001800
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.15744102f;
    r1 = n *= 0.08261017f;
    r2 = n += -0.08698672f;
    n += 0.24846885f;
    n = r2 *= n;
    r3 = n *= 0.41543457f;
    n += r1;
    n += -5.90662098f;
    n *= 0.48720399f;
    n *= r0;
    r0 = n += -1.19635165f;
    r1 = n += -0.00868190f;
    r4 = n += -0.25692555f;
    n += 1.04732835f;
    n += 1.58716977f;
    n *= r3;
    n += 0.23693044f;
    r3 = n += 1.17541087f;
    n = r3 *= n;
    n *= r0;
    n *= -0.96167153f;
    r0 = n *= 1.04009414f;
    n *= r1;
    n = r3 += n;
    n *= r2;
    n += -0.24519932f;
    n *= r3;
    r3 = n += -0.73865789f;
    n *= r3;
    n *= r0;
    n += r4;
    n += 0.78466254f;
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
