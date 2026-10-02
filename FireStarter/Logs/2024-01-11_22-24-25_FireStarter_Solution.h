// Run date: 01/11/24 22:24:25 Pacific Standard Time
// Run duration = 43435.714234 seconds
// Run generation = 84
// Run evolution = 17
// Run max result = 0.00000085
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
// Run states = 64
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

// Solution0 result = 0.00000048
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.33541432f;
    r1 = n += 1.58060193f;
    n *= r1;
    r1 = n += -1.02174723f;
    r2 = n *= 0.58303255f;
    r3 = n *= 0.05513113f;
    n = r3 += n;
    r4 = n += -1.59074020f;
    r5 = n *= 1.71179783f;
    r6 = n *= 1.78944290f;
    n = r4 *= n;
    n = r4 += n;
    n = r4 *= n;
    n *= r6;
    n += 309.37332153f;
    n = r5 *= n;
    n = r2 *= n;
    n *= r1;
    r1 = n *= -0.73289913f;
    n += r2;
    n *= 1.14745843f;
    n += r1;
    n += r5;
    n += 17.11491966f;
    n += r3;
    n *= -1.06375515f;
    n *= r4;
    n += -168.04718018f;
    n *= -0.33563265f;
    n += r0;
    n *= -0.00518513f;
    n *= -0.00094300f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.31195456f;
    r1 = n += -1.50860941f;
    n *= r1;
    r1 = n += -0.14054243f;
    r2 = n *= 1.48535311f;
    r3 = n *= 0.01821608f;
    n = r3 += n;
    r4 = n += -1.48273957f;
    r5 = n *= 2.94549131f;
    r6 = n *= -0.19773124f;
    n = r4 *= n;
    n = r4 += n;
    n = r4 *= n;
    n *= r6;
    n += -1.07160223f;
    n = r5 *= n;
    n = r2 *= n;
    n *= r1;
    r1 = n *= -0.77116710f;
    n += r2;
    n *= -2.18247533f;
    n += r1;
    n += r5;
    n += 1.70076561f;
    n += r3;
    n *= 0.01705727f;
    n *= r4;
    n += 2.12538481f;
    n *= -0.64883095f;
    n += r0;
    n *= -0.53829467f;
    n *= 1.19100678f;
    return n;
} // Solution1

// Solution2 result = 0.00000085
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.34856185f;
    r1 = n += -1.36879897f;
    n *= r1;
    r1 = n += -0.68116510f;
    r2 = n *= 1.03958309f;
    r3 = n *= 0.04721792f;
    n = r3 += n;
    r4 = n += -1.83105659f;
    r5 = n *= 0.41154358f;
    r6 = n *= 1.61262929f;
    n = r4 *= n;
    n = r4 += n;
    n = r4 *= n;
    n *= r6;
    n += 6.17366934f;
    n = r5 *= n;
    n = r2 *= n;
    n *= r1;
    r1 = n *= -0.80521697f;
    n += r2;
    n *= 1.28170216f;
    n += r1;
    n += r5;
    n += 1.22307742f;
    n += r3;
    n *= -0.33494321f;
    n *= r4;
    n += 1.75044084f;
    n *= -0.01737746f;
    n += r0;
    n *= -0.34518015f;
    n *= -1.66227853f;
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
