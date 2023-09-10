// Run date: 09/10/23 11:46:36 Pacific Daylight Time
// Run duration = 1677.930251 seconds
// Run generation = 47
// Run evolution = 11
// Run result = 0.00000417
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159250f;
    r0 = n *= 0.63294983f;
    r1 = n *= 0.09637403f;
    n = r0 *= n;
    r2 = n *= 7.14202118f;
    n += -1.51735437f;
    n *= 0.44266146f;
    r3 = n += -4.08756590f;
    r4 = n *= 0.32663569f;
    n += 1.16102850f;
    n = r1 *= n;
    n *= r0;
    n *= -0.00424802f;
    n += r3;
    n *= 0.05399169f;
    r3 = n += -4.34177923f;
    r0 = n *= -0.01987757f;
    n *= -2.06976700f;
    n *= r3;
    n *= r2;
    n += -2.04557586f;
    n *= r0;
    r0 = n += -1.49074543f;
    n *= 0.45050657f;
    r2 = n *= -2.60931349f;
    n *= r2;
    n *= r4;
    n *= r0;
    n *= 4.10666752f;
    n *= r1;
    n += -0.05105443f;
    n += 0.05105451f;
    return n;
} // Solution0

// Solution1 result = 0.00000268
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065914f;
    r0 = n *= -0.16514663f;
    r1 = n *= 0.94062310f;
    n = r0 *= n;
    r2 = n *= -1.93766975f;
    n += 1.05226517f;
    n *= -1.84815919f;
    r3 = n += -0.88337541f;
    r4 = n *= -0.11247341f;
    n += -0.07837754f;
    n = r1 *= n;
    n *= r0;
    n *= 0.00030742f;
    n += r3;
    n *= 0.17543730f;
    r3 = n += 0.33148497f;
    r0 = n *= -0.62228394f;
    n *= -0.90236032f;
    n *= r3;
    n *= r2;
    n += 1.84671736f;
    n *= r0;
    r0 = n += 1.41039538f;
    n *= -1.20678115f;
    r2 = n *= 3.32652283f;
    n *= r2;
    n *= r4;
    n *= r0;
    n *= 1.40789485f;
    n *= r1;
    n += 0.70648295f;
    n += -0.82461458f;
    return n;
} // Solution1

// Solution2 result = 0.00000417
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799359f;
    r0 = n *= -0.14389817f;
    r1 = n *= -1.69185436f;
    n = r0 *= n;
    r2 = n *= 2.55330205f;
    n += 3.00827694f;
    n *= -1.58982527f;
    r3 = n += -0.99024963f;
    r4 = n *= -0.24979380f;
    n += -1.26501250f;
    n = r1 *= n;
    n *= r0;
    n *= -0.03121117f;
    n += r3;
    n *= -0.03316667f;
    r3 = n += 2.27294040f;
    r0 = n *= 0.18860267f;
    n *= 0.91002691f;
    n *= r3;
    n *= r2;
    n += 1.39851677f;
    n *= r0;
    r0 = n += 1.48408985f;
    n *= -1.25880516f;
    r2 = n *= -0.64535749f;
    n *= r2;
    n *= r4;
    n *= r0;
    n *= -2.50849605f;
    n *= r1;
    n += -0.39558539f;
    n += 0.91918409f;
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
