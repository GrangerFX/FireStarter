// Run date: 04/23/23 17:13:52 Pacific Daylight Time
// Run duration = 839.410025 seconds
// Run generation = 192
// Run result = 0.00000703
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
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

// Solution0 result = 0.00000703
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.42101735f;
    n += 1.66339612f;
    r1 = n *= -0.90821397f;
    r2 = n *= 0.45755014f;
    r3 = n += 0.14205959f;
    n *= r3;
    r3 = n *= 1.02851808f;
    r4 = n += -1.72682083f;
    r5 = n *= 0.30384365f;
    n = r5 *= n;
    r6 = n += 0.94072115f;
    n += 2.26527119f;
    r7 = n += 0.37110803f;
    r8 = n *= 9.29258060f;
    n *= r3;
    n += r8;
    n *= 0.00043588f;
    n += r7;
    n = r1 *= n;
    n = r2 *= n;
    n *= 1.50994503f;
    n *= r0;
    n += 1.37088490f;
    n += r2;
    n *= r6;
    n += r1;
    n += 1.02764058f;
    n *= 1.13348055f;
    n += -1.44730139f;
    n *= r5;
    n *= r4;
    n += 0.00824831f;
    return n;
} // Solution0

// Solution1 result = 0.00000596
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 1.08091950f;
    n += -3.32911849f;
    r1 = n *= 0.09027261f;
    r2 = n *= 0.96439523f;
    r3 = n += -0.00146524f;
    n *= r3;
    r3 = n *= -4.31940842f;
    r4 = n += 1.59672952f;
    r5 = n *= -0.22805637f;
    n = r5 *= n;
    r6 = n += -0.26256683f;
    n += -5.08573198f;
    r7 = n += -5.90246391f;
    r8 = n *= -3.71863770f;
    n *= r3;
    n += r8;
    n *= 2.39286637f;
    n += r7;
    n = r1 *= n;
    n = r2 *= n;
    n *= -0.29520991f;
    n *= r0;
    n += 0.81404251f;
    n += r2;
    n *= r6;
    n += r1;
    n += 0.69601291f;
    n *= -0.60633087f;
    n += 0.41718692f;
    n *= r5;
    n *= r4;
    n += -0.11885147f;
    return n;
} // Solution1

// Solution2 result = 0.00000334
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.50073892f;
    n += -1.56542182f;
    r1 = n *= -0.80636501f;
    r2 = n *= -1.12780690f;
    r3 = n += 0.22767729f;
    n *= r3;
    r3 = n *= -0.23030122f;
    r4 = n += 2.38892031f;
    r5 = n *= -0.21396908f;
    n = r5 *= n;
    r6 = n += 0.60303807f;
    n += -0.52420825f;
    r7 = n += 3.77673984f;
    r8 = n *= 0.19705330f;
    n *= r3;
    n += r8;
    n *= 1.82682371f;
    n += r7;
    n = r1 *= n;
    n = r2 *= n;
    n *= -1.29838181f;
    n *= r0;
    n += 0.95876604f;
    n += r2;
    n *= r6;
    n += r1;
    n += -1.19296706f;
    n *= 0.58349538f;
    n += -0.53890932f;
    n *= r5;
    n *= r4;
    n += 0.51542842f;
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
