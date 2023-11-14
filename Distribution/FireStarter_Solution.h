// Run date: 11/13/23 15:54:05 Pacific Standard Time
// Run duration = 54332.053309 seconds
// Run generation = 162
// Run evolution = 7
// Run result = 0.00000048
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.35895103f;
    r1 = n += -1.12767792f;
    n = r1 += n;
    r2 = n *= -0.56204164f;
    n += 0.66957992f;
    n += r0;
    n += -1.79725790f;
    n *= r1;
    r1 = n += 2.29801035f;
    n = r2 *= n;
    n *= 0.92940694f;
    n *= -0.12653999f;
    r0 = n *= -2.07002592f;
    n = r0 *= n;
    n += -0.74853253f;
    n += r0;
    r0 = n *= 0.07566971f;
    r3 = n += -2.71359849f;
    n += -7.94295025f;
    n *= 0.00000641f;
    n += r3;
    n *= -1.17412436f;
    n *= 0.85578573f;
    n += r1;
    r1 = n += -0.29721826f;
    n *= r1;
    n *= r0;
    n *= r2;
    r2 = n *= 2.03662252f;
    n += -0.00000043f;
    n += r2;
    n *= -0.20421471f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.19027272f;
    r1 = n += -0.58806801f;
    n = r1 += n;
    r2 = n *= -0.54473662f;
    n += -0.52238852f;
    n += r0;
    n += -0.06567956f;
    n *= r1;
    r1 = n += 0.49162552f;
    n = r2 *= n;
    n *= 2.23567438f;
    n *= 2.16557145f;
    r0 = n *= -0.73329329f;
    n = r0 *= n;
    n += -2.95264125f;
    n += r0;
    r0 = n *= 1.60733151f;
    r3 = n += 3.82021523f;
    n += 11.00474930f;
    n *= -0.00001759f;
    n += r3;
    n *= -8.57646084f;
    n *= 0.00087059f;
    n += r1;
    r1 = n += 1.73745430f;
    n *= r1;
    n *= r0;
    n *= r2;
    r2 = n *= 0.10925487f;
    n += 0.05674523f;
    n += r2;
    n *= -2.08179379f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.27780539f;
    r1 = n += -0.72729272f;
    n = r1 += n;
    r2 = n *= -0.65563005f;
    n += -0.64448351f;
    n += r0;
    n += -0.08280922f;
    n *= r1;
    r1 = n += 3.05984378f;
    n = r2 *= n;
    n *= -1.63930583f;
    n *= 0.78544933f;
    r0 = n *= 0.45545867f;
    n = r0 *= n;
    n += -3.61815000f;
    n += r0;
    r0 = n *= 0.08180044f;
    r3 = n += 0.75791043f;
    n += -6.14243317f;
    n *= -0.00002809f;
    n += r3;
    n *= -0.06416836f;
    n *= 2.12294364f;
    n += r1;
    r1 = n += 0.19152357f;
    n *= r1;
    n *= r0;
    n *= r2;
    r2 = n *= 0.10784724f;
    n += -0.37875593f;
    n += r2;
    n *= -1.38241720f;
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
