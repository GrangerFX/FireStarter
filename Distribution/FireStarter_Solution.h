// Run date: 11/16/23 14:32:46 Pacific Standard Time
// Run duration = 56661.445959 seconds
// Run generation = 64
// Run evolution = 8
// Run result = 0.00000024
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
// Run tests = 16
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
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

// Solution0 result = 0.00000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.46549529f;
    r0 = n += -1.46239662f;
    n *= 2.46479321f;
    r1 = n *= 0.35348979f;
    n *= -1.00463188f;
    n += -0.00000005f;
    r2 = n *= 1.87510133f;
    n *= r1;
    n += 2.08433771f;
    n += 0.62355065f;
    r1 = n += -2.12320566f;
    r3 = n *= 0.02090015f;
    n += -7.65015602f;
    n *= -0.00000221f;
    r4 = n += -0.74333924f;
    n *= r1;
    n *= 0.03811950f;
    n = r4 += n;
    n = r2 *= n;
    n *= 0.25404963f;
    n *= r0;
    n += -0.60034817f;
    r0 = n *= 1.10180020f;
    n += -9.33477020f;
    n = r3 *= n;
    n += -4.25386667f;
    n += r3;
    n *= r0;
    n *= r4;
    n *= r2;
    n += 0.00000005f;
    n *= 0.76182073f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.44339672f;
    r0 = n += -1.37038076f;
    n *= 0.71672690f;
    r1 = n *= -2.99722672f;
    n *= 5.39696503f;
    n += 0.00011728f;
    r2 = n *= -0.01415951f;
    n *= r1;
    n += -0.28188589f;
    n += 4.13498211f;
    r1 = n += 0.35793364f;
    r3 = n *= -1.95026731f;
    n += 0.36196089f;
    n *= 0.01464961f;
    r4 = n += -0.17938361f;
    n *= r1;
    n *= -0.41118971f;
    n = r4 += n;
    n = r2 *= n;
    n *= 0.13822401f;
    n *= r0;
    n += -0.50778282f;
    r0 = n *= 0.70709467f;
    n += -28.86388016f;
    n = r3 *= n;
    n += -18.98270416f;
    n += r3;
    n *= r0;
    n *= r4;
    n *= r2;
    n += -0.06001422f;
    n *= 1.96852231f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.25241503f;
    r0 = n += 0.66082090f;
    n *= 1.12268937f;
    r1 = n *= -0.33863676f;
    n *= -0.19691510f;
    n += 0.00000001f;
    r2 = n *= -5.18157864f;
    n *= r1;
    n += 1.44336855f;
    n += -1.08200979f;
    r1 = n += -1.69296300f;
    r3 = n *= -4.04085684f;
    n += -0.32321739f;
    n *= -0.47813404f;
    r4 = n += -0.19759694f;
    n *= r1;
    n *= 1.21684754f;
    n = r4 += n;
    n = r2 *= n;
    n *= -2.40076232f;
    n *= r0;
    n += -0.42067781f;
    r0 = n *= 0.11122562f;
    n += -3.99868369f;
    n = r3 *= n;
    n += -6.90885687f;
    n += r3;
    n *= r0;
    n *= r4;
    n *= r2;
    n += -0.31865323f;
    n *= -1.64316130f;
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
