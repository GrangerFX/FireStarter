// Run date: 12/05/23 10:33:41 Pacific Standard Time
// Run duration = 1545.987421 seconds
// Run generation = 4
// Run evolution = 5
// Run max result = 0.00001648
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

// Solution0 result = 0.00001648
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.34281012f;
    r0 = n += 1.07697105f;
    n *= 0.19911532f;
    n *= 0.36199665f;
    r1 = n *= -2.73832846f;
    n += 0.00000087f;
    n *= r0;
    n += -1.17994392f;
    r0 = n *= -1.45067823f;
    n += -2.04382300f;
    r2 = n *= -2.09701371f;
    n += r0;
    r0 = n *= 1.94544864f;
    n *= 0.11965758f;
    n *= r0;
    r0 = n *= 2.46124768f;
    r3 = n *= -1.04947591f;
    n *= -0.01515731f;
    r4 = n += 1.48934436f;
    n *= -4.00287914f;
    r5 = n *= 5.00308323f;
    n += r4;
    n *= r1;
    n *= r5;
    n *= r2;
    n *= r0;
    n *= r3;
    n += -0.00751704f;
    n *= -0.21375611f;
    n *= 0.26336458f;
    n *= 0.01882684f;
    n *= -0.47268727f;
    return n;
} // Solution0

// Solution1 result = 0.00000691
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.64015871f;
    r0 = n += 1.97856355f;
    n *= 3.68875527f;
    n *= -0.05949991f;
    r1 = n *= 2.37975359f;
    n += 0.00009386f;
    n *= r0;
    n += 0.16372673f;
    r0 = n *= 0.05462408f;
    n += 1.28171682f;
    r2 = n *= -1.98263490f;
    n += r0;
    r0 = n *= -1.69175255f;
    n *= -2.20112848f;
    n *= r0;
    r0 = n *= 0.53167152f;
    r3 = n *= -1.86123681f;
    n *= -0.07372937f;
    r4 = n += 2.34254861f;
    n *= 0.01861763f;
    r5 = n *= -0.22433797f;
    n += r4;
    n *= r1;
    n *= r5;
    n *= r2;
    n *= r0;
    n *= r3;
    n += -0.14094266f;
    n *= 1.75646579f;
    n *= 2.15774727f;
    n *= 0.49026796f;
    n *= 0.45143557f;
    return n;
} // Solution1

// Solution2 result = 0.00000904
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.48639017f;
    r0 = n += -1.27335417f;
    n *= -3.36860323f;
    n *= 1.74543393f;
    r1 = n *= -1.83637834f;
    n += -0.00051792f;
    n *= r0;
    n += 0.80039042f;
    r0 = n *= 0.21988326f;
    n += -2.97489405f;
    r2 = n *= -1.10792065f;
    n += r0;
    r0 = n *= 0.55624747f;
    n *= 0.53618944f;
    n *= r0;
    r0 = n *= -0.08293044f;
    r3 = n *= -1.11406243f;
    n *= -1.28947091f;
    r4 = n += -0.96718550f;
    n *= -1.91123557f;
    r5 = n *= 0.21403995f;
    n += r4;
    n *= r1;
    n *= r5;
    n *= r2;
    n *= r0;
    n *= r3;
    n += -0.06973237f;
    n *= -2.01471162f;
    n *= 0.99344033f;
    n *= -2.46865106f;
    n *= -1.51975381f;
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
