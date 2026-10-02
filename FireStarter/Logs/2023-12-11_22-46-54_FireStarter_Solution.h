// Run date: 12/11/23 22:46:54 Pacific Standard Time
// Run duration = 12470.290946 seconds
// Run generation = 79
// Run evolution = 9
// Run max result = 0.00000012
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
// Run seeds = 64
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09944057f;
    r1 = n += -0.01861706f;
    n *= -1.79104102f;
    n = r0 += n;
    n += r0;
    r0 = n *= -0.65430999f;
    r2 = n *= 0.38550511f;
    n *= 1.49021113f;
    n *= 0.11963080f;
    r3 = n *= -1.88137746f;
    n = r3 *= n;
    r4 = n += -1.89566255f;
    n *= r4;
    n *= 2.00768590f;
    r4 = n += 0.20988986f;
    n *= -0.04021033f;
    r5 = n *= 0.47264722f;
    n += -1.56785882f;
    n = r4 *= n;
    n += -0.76525414f;
    n *= r3;
    n += 1.26077461f;
    n *= r5;
    n *= r2;
    n *= 0.65552580f;
    n *= r4;
    n += r0;
    n += -0.78845745f;
    n += 0.44138378f;
    n *= -1.23025858f;
    n += -0.45052510f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.03763366f;
    r1 = n += -0.09295022f;
    n *= 1.32809711f;
    n = r0 += n;
    n += r0;
    r0 = n *= -0.19643754f;
    r2 = n *= -0.71696579f;
    n *= 1.79169309f;
    n *= 0.10709467f;
    r3 = n *= -1.07218134f;
    n = r3 *= n;
    r4 = n += -2.06993961f;
    n *= r4;
    n *= 1.27005649f;
    r4 = n += 0.97080678f;
    n *= -0.30924508f;
    r5 = n *= -0.04020156f;
    n += 2.15689588f;
    n = r4 *= n;
    n += 0.39697930f;
    n *= r3;
    n += -1.54022634f;
    n *= r5;
    n *= r2;
    n *= 0.31233615f;
    n *= r4;
    n += r0;
    n += -0.35395017f;
    n += 0.60911441f;
    n *= 1.64658928f;
    n += -0.49835700f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.24710828f;
    r1 = n += -0.97694618f;
    n *= -1.70085275f;
    n = r0 += n;
    n += r0;
    r0 = n *= -0.05601077f;
    r2 = n *= -1.50747323f;
    n *= -0.13524105f;
    n *= 3.39506817f;
    r3 = n *= -1.75748897f;
    n = r3 *= n;
    r4 = n += -0.96587110f;
    n *= r4;
    n *= 1.21149218f;
    r4 = n += 0.15190914f;
    n *= -0.99055827f;
    r5 = n *= 1.36378217f;
    n += -2.04724932f;
    n = r4 *= n;
    n += 2.49024391f;
    n *= r3;
    n += 0.18250671f;
    n *= r5;
    n *= r2;
    n *= -4.26057768f;
    n *= r4;
    n += r0;
    n += 0.08486592f;
    n += 0.09873330f;
    n *= -2.35055852f;
    n += -0.43877959f;
    n += r1;
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
