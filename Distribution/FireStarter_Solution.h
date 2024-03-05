// Run date: 03/05/24 11:22:05 Pacific Standard Time
// Run duration = 3355.252986 seconds
// Run generation = 304
// Run evolution = 10
// Run max result = 0.00001426
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00001425
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.34920776f;
    r0 = n *= 0.79023987f;
    r1 = n *= 0.07718312f;
    n *= -0.33683893f;
    r2 = n += -0.00967540f;
    r3 = n += -0.00453965f;
    r4 = n *= -0.53151387f;
    n *= -6.58289576f;
    n += 6.30424166f;
    n *= -1.32019341f;
    n *= r4;
    n *= r3;
    r3 = n += -0.40714800f;
    n = r0 += n;
    n = r3 *= n;
    n = r2 *= n;
    n *= 1.19972491f;
    r4 = n += -0.57185382f;
    n += 0.14833251f;
    n *= r3;
    n *= r0;
    n = r1 += n;
    n += r1;
    n += r4;
    r4 = n *= 1.94952893f;
    n *= -0.28922158f;
    n *= 0.49260318f;
    n += 0.82616514f;
    n *= -0.76161093f;
    n *= 1.30915177f;
    n += r2;
    n *= r4;
    return n;
} // Solution0

// Solution1 result = 0.00001061
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.48320201f;
    r0 = n *= 0.34672222f;
    r1 = n *= 0.23706527f;
    n *= 0.75175369f;
    r2 = n += 1.26578939f;
    r3 = n += -1.33063638f;
    r4 = n *= -1.94613361f;
    n *= -1.21750879f;
    n += -2.47845340f;
    n *= 0.91806996f;
    n *= r4;
    n *= r3;
    r3 = n += -0.74517584f;
    n = r0 += n;
    n = r3 *= n;
    n = r2 *= n;
    n *= 0.00635700f;
    r4 = n += 1.96083438f;
    n += -0.99725658f;
    n *= r3;
    n *= r0;
    n = r1 += n;
    n += r1;
    n += r4;
    r4 = n *= 1.19648778f;
    n *= -1.53740132f;
    n *= 1.75998938f;
    n += -1.69310582f;
    n *= -0.07629792f;
    n *= 0.22072746f;
    n += r2;
    n *= r4;
    return n;
} // Solution1

// Solution2 result = 0.00001426
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.68760598f;
    r0 = n *= 0.35758790f;
    r1 = n *= -0.23055089f;
    n *= 1.95381761f;
    r2 = n += -1.38700747f;
    r3 = n += 1.43072140f;
    r4 = n *= 1.17078924f;
    n *= -0.30974734f;
    n += -1.10544813f;
    n *= -0.28610250f;
    n *= r4;
    n *= r3;
    r3 = n += -0.53373796f;
    n = r0 += n;
    n = r3 *= n;
    n = r2 *= n;
    n *= -1.07602036f;
    r4 = n += 0.99701846f;
    n += -0.02299987f;
    n *= r3;
    n *= r0;
    n = r1 += n;
    n += r1;
    n += r4;
    r4 = n *= -2.98364615f;
    n *= 2.62951279f;
    n *= -2.21679235f;
    n += 3.03176546f;
    n *= -0.01430727f;
    n *= 0.07276076f;
    n += r2;
    n *= r4;
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
