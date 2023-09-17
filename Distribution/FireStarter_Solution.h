// Run date: 09/17/23 12:09:26 Pacific Daylight Time
// Run duration = 854.784693 seconds
// Run generation = 73
// Run evolution = 14
// Run result = 0.00000238
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
// Run tests = 1
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

// Solution0 result = 0.00000072
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.05853439f;
    n += 3.66755033f;
    n += 1.09117293f;
    r2 = n += -4.75872326f;
    n = r1 *= n;
    n += r1;
    r1 = n += -1.18876410f;
    n *= -0.83019632f;
    r3 = n += 0.29816628f;
    r4 = n += 0.23471767f;
    n = r0 *= n;
    r5 = n *= -0.19566472f;
    n *= 0.49154097f;
    n *= r0;
    n += 4.36878395f;
    n *= r4;
    r4 = n += -0.74192691f;
    n *= r1;
    n *= r5;
    n = r4 *= n;
    n *= r3;
    n *= 0.02143031f;
    r3 = n *= -3.59625149f;
    n += 24.47756767f;
    n += 1.31674850f;
    n += r4;
    n *= 0.00000000f;
    n *= 0.18301913f;
    n += r2;
    n *= -3.72053075f;
    n += r3;
    return n;
} // Solution0

// Solution1 result = 0.00000143
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065890f;
    r1 = n *= 0.08598541f;
    n += -2.04157805f;
    n += 0.26769629f;
    r2 = n += 1.77388358f;
    n = r1 *= n;
    n += r1;
    r1 = n += -3.92655754f;
    n *= 0.17200458f;
    r3 = n += -0.68823165f;
    r4 = n += 0.58167261f;
    n = r0 *= n;
    r5 = n *= 0.11866686f;
    n *= -1.49886799f;
    n *= r0;
    n += 1.26419306f;
    n *= r4;
    r4 = n += -0.74365431f;
    n *= r1;
    n *= r5;
    n = r4 *= n;
    n *= r3;
    n *= -1.28301013f;
    r3 = n *= -0.57341951f;
    n += 3.61503959f;
    n += 32.50081253f;
    n += r4;
    n *= 10.16192818f;
    n *= 0.00845214f;
    n += r2;
    n *= -0.03808267f;
    n += r3;
    return n;
} // Solution1

// Solution2 result = 0.00000238
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61741948f;
    r1 = n *= -0.26233852f;
    n += 1.23134577f;
    n += 3.91067076f;
    r2 = n += -5.14147949f;
    n = r1 *= n;
    n += r1;
    r1 = n += -0.68281913f;
    n *= -0.05957604f;
    r3 = n += 0.48411745f;
    r4 = n += 1.21510732f;
    n = r0 *= n;
    r5 = n *= -1.22255576f;
    n *= -0.00458996f;
    n *= r0;
    n += -1.66704547f;
    n *= r4;
    r4 = n += 1.60064638f;
    n *= r1;
    n *= r5;
    n = r4 *= n;
    n *= r3;
    n *= -3.48427987f;
    r3 = n *= 0.22545417f;
    n += 45.08683777f;
    n += 6.76689196f;
    n += r4;
    n *= -0.17701645f;
    n *= -5.21284676f;
    n += r2;
    n *= 0.01095472f;
    n += r3;
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
