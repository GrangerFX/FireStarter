// Run date: 11/09/23 08:55:09 Pacific Standard Time
// Run duration = 1299.241194 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000072
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159179f;
    r0 = n *= -0.24700256f;
    r1 = n *= 2.12195849f;
    n *= r1;
    n += -2.41721773f;
    r1 = n *= 1.54927838f;
    n += 2.19130087f;
    n *= -0.00487307f;
    n *= 3.55488110f;
    n += 1.24537730f;
    r2 = n *= 0.22362752f;
    n *= -1.61826921f;
    r3 = n += -1.12195015f;
    n *= r3;
    n *= -3.78186393f;
    n *= r2;
    r2 = n *= -0.49851421f;
    n *= 0.86649543f;
    r3 = n += -0.65001982f;
    r4 = n *= 1.90061605f;
    n *= r0;
    r0 = n += 0.00000038f;
    n *= 0.91059625f;
    n = r3 *= n;
    n *= r0;
    n += r1;
    n *= -2.06449032f;
    n += r2;
    n *= r3;
    n *= r4;
    n += -0.08262963f;
    n += 0.08262881f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09066105f;
    r0 = n *= 4.49175167f;
    r1 = n *= -0.21576461f;
    n *= r1;
    n += -2.29051208f;
    r1 = n *= 1.77877319f;
    n += 0.68122792f;
    n *= 0.91567373f;
    n *= -0.01047093f;
    n += 2.56779933f;
    r2 = n *= 0.98932213f;
    n *= -0.06619880f;
    r3 = n += -1.13954341f;
    n *= r3;
    n *= -0.14118704f;
    n *= r2;
    r2 = n *= -1.65052223f;
    n *= -0.80597103f;
    r3 = n += -0.11254571f;
    r4 = n *= -0.61041117f;
    n *= r0;
    r0 = n += 0.00000510f;
    n *= 0.83664912f;
    n = r3 *= n;
    n *= r0;
    n += r1;
    n *= 0.02142796f;
    n += r2;
    n *= r3;
    n *= r4;
    n += 1.60603011f;
    n += -1.72416234f;
    return n;
} // Solution1

// Solution2 result = 0.00000072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799240f;
    r0 = n *= 0.68646866f;
    r1 = n *= -1.76014841f;
    n *= r1;
    n += 2.24110460f;
    r1 = n *= -2.54983902f;
    n += 1.32778633f;
    n *= -1.59820247f;
    n *= -0.02066213f;
    n += 0.97443438f;
    r2 = n *= 0.44114029f;
    n *= 0.16713852f;
    r3 = n += 2.92071462f;
    n *= r3;
    n *= 1.73468781f;
    n *= r2;
    r2 = n *= 0.46139985f;
    n *= 0.05518332f;
    r3 = n += 0.67213744f;
    r4 = n *= -1.49099922f;
    n *= r0;
    r0 = n += 0.00000243f;
    n *= -0.49161297f;
    n = r3 *= n;
    n *= r0;
    n += r1;
    n *= 0.02624186f;
    n += r2;
    n *= r3;
    n *= r4;
    n += -1.67973447f;
    n += 2.20333147f;
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
