// Run date: 09/05/23 17:11:19 Pacific Daylight Time
// Run duration = 38751.436426 seconds
// Run generation = 49
// Run evolution = 5
// Run result = 0.00000043
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 500
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= -0.79480422f;
    r0 = n *= -0.18289335f;
    n *= 2.08423042f;
    r1 = n += -0.95181751f;
    n *= 3.10990739f;
    n += -2.96006680f;
    n *= -0.88540822f;
    n *= r0;
    r0 = n *= 0.01862240f;
    n += 0.04563792f;
    r2 = n += 0.68888879f;
    r3 = n *= 0.00000008f;
    n *= 7.45062494f;
    n += 1.45155203f;
    n = r3 += n;
    n = r0 += n;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    n *= -0.76178575f;
    r3 = n *= -0.43302879f;
    n *= r2;
    n *= r1;
    r1 = n += -1.99448252f;
    n *= r1;
    n += 0.51102656f;
    n += -0.85772574f;
    n += -0.43943912f;
    n *= r3;
    n *= r0;
    n += 0.00000003f;
    n *= -1.31366289f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= 0.37269908f;
    r0 = n *= 0.55464715f;
    n *= 1.49567938f;
    r1 = n += -0.95557463f;
    n *= -0.88743562f;
    n += 0.84800816f;
    n *= 0.00129935f;
    n *= r0;
    r0 = n *= -7.21703243f;
    n += 1.47393799f;
    r2 = n += -1.67231953f;
    r3 = n *= 0.78344738f;
    n *= -4.55309105f;
    n += 1.61443758f;
    n = r3 += n;
    n = r0 += n;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    n *= 0.57251847f;
    r3 = n *= 1.21722186f;
    n *= r2;
    n *= r1;
    r1 = n += 1.12304723f;
    n *= r1;
    n += 0.89220917f;
    n += -1.37393486f;
    n += 0.48710260f;
    n *= r3;
    n *= r0;
    n += -0.06156017f;
    n *= 1.91896284f;
    return n;
} // Solution1

// Solution2 result = 0.00000043
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 0.84706926f;
    r0 = n *= 0.26188782f;
    n *= 1.90229928f;
    r1 = n += -1.10479486f;
    n *= -1.57817101f;
    n += 1.74355245f;
    n *= -2.90984130f;
    n *= r0;
    r0 = n *= 0.00516729f;
    n += -0.54799581f;
    r2 = n += 0.10103977f;
    r3 = n *= 0.00000014f;
    n *= 38.93736267f;
    n += -1.23451555f;
    n = r3 += n;
    n = r0 += n;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    n *= -1.66929746f;
    r3 = n *= 1.13921189f;
    n *= r2;
    n *= r1;
    r1 = n += -1.33571863f;
    n *= r1;
    n += 0.60052258f;
    n += -0.87331861f;
    n += -0.33832428f;
    n *= r3;
    n *= r0;
    n += 0.43924659f;
    n *= 1.19203818f;
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
