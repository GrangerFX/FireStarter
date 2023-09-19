// Run date: 09/19/23 09:52:55 Pacific Daylight Time
// Run duration = 771.521067 seconds
// Run generation = 35
// Run evolution = 10
// Run result = 0.00000012
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

    n *= 0.13361779f;
    n *= 3.48260069f;
    r0 = n += -0.66434532f;
    r1 = n += -0.79755527f;
    r2 = n *= -0.15366070f;
    n *= -1.15985060f;
    n *= 0.61663032f;
    n *= -1.29785311f;
    n *= r1;
    r1 = n *= -2.89459419f;
    n *= 20.63859749f;
    n += -13.77612114f;
    r3 = n *= -0.00225543f;
    n += r1;
    r1 = n += -0.12214276f;
    n *= 0.07015944f;
    r4 = n += -1.18033528f;
    n *= r1;
    r1 = n += 1.35521436f;
    n *= r3;
    n = r1 += n;
    n *= -1.38014317f;
    n = r4 += n;
    n += -5.25615215f;
    n *= r4;
    n *= r1;
    n *= r2;
    n += r0;
    n *= -1.47221267f;
    n *= 0.63866293f;
    n *= -0.41851631f;
    n += -0.31384519f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.11571402f;
    n *= -2.69840384f;
    r0 = n += 0.33568263f;
    r1 = n += -1.30071962f;
    r2 = n *= -0.64389551f;
    n *= 10.19665241f;
    n *= -0.11890692f;
    n *= -5.40304279f;
    n *= r1;
    r1 = n *= -0.45421472f;
    n *= -1.34017110f;
    n += 0.91309953f;
    r3 = n *= 0.75482678f;
    n += r1;
    r1 = n += -0.06877337f;
    n *= -5.51499128f;
    r4 = n += 2.20080018f;
    n *= r1;
    r1 = n += -0.22005430f;
    n *= r3;
    n = r1 += n;
    n *= 0.07873698f;
    n = r4 += n;
    n += -0.16780911f;
    n *= r4;
    n *= r1;
    n *= r2;
    n += r0;
    n *= 0.49737787f;
    n *= 1.09126532f;
    n *= -2.03969646f;
    n += 1.32187998f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.47427243f;
    n *= -1.19142413f;
    r0 = n += -1.40789950f;
    r1 = n += -0.07142300f;
    r2 = n *= 0.66797119f;
    n *= 1.44956219f;
    n *= -0.58757746f;
    n *= 0.56764507f;
    n *= r1;
    r1 = n *= 2.42958832f;
    n *= -21.45497322f;
    n += -7.41346979f;
    r3 = n *= -0.00082414f;
    n += r1;
    r1 = n += 0.65959370f;
    n *= -0.17602438f;
    r4 = n += -1.62894654f;
    n *= r1;
    r1 = n += -1.17306006f;
    n *= r3;
    n = r1 += n;
    n *= 0.06269965f;
    n = r4 += n;
    n += -2.38353300f;
    n *= r4;
    n *= r1;
    n *= r2;
    n += r0;
    n *= 0.24805829f;
    n *= -1.06061172f;
    n *= -0.57439876f;
    n += 0.51280528f;
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
