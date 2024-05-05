// Run date: 05/05/24 10:13:28 Pacific Daylight Time
// Run duration = 292.526914 seconds
// Run generation = 110
// Run evolution = 5
// Run max result = 0.00001992
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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

// Solution0 result = 0.00000280
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.10115254f;
    n += -1.98206496f;
    r1 = n += 1.98742163f;
    n += -0.57763267f;
    r2 = n *= 0.66329271f;
    r3 = n += -0.97382236f;
    n *= 0.31432843f;
    n += -0.42635289f;
    r4 = n *= 0.47848308f;
    n *= r1;
    r1 = n *= -0.03123603f;
    r5 = n *= -28.14342690f;
    n *= -0.02440895f;
    r6 = n += 0.09508114f;
    n *= r0;
    n *= r4;
    n += 0.23319261f;
    n += 0.82963926f;
    n += -1.68089902f;
    r4 = n += 0.28599766f;
    n += r5;
    n *= r6;
    n += r1;
    n *= -1.94868279f;
    n *= r4;
    n = r3 *= n;
    n *= 1.46704984f;
    n += -1.16777003f;
    n *= r2;
    n *= 0.00385094f;
    n += 32.11463547f;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00001752
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.35721099f;
    n += -0.79718858f;
    r1 = n += -1.34791791f;
    n += 0.18122098f;
    r2 = n *= 0.54047590f;
    r3 = n += 0.18266585f;
    n *= -0.89853048f;
    n += 0.86566925f;
    r4 = n *= -0.02496784f;
    n *= r1;
    r1 = n *= 0.00521022f;
    r5 = n *= -2.51262236f;
    n *= -2.63999152f;
    r6 = n += -1.63100338f;
    n *= r0;
    n *= r4;
    n += 0.08844243f;
    n += 0.38868514f;
    n += 0.90262491f;
    r4 = n += 0.16378546f;
    n += r5;
    n *= r6;
    n += r1;
    n *= -0.71060473f;
    n *= r4;
    n = r3 *= n;
    n *= -0.18642749f;
    n += 0.00707028f;
    n *= r2;
    n *= -0.36102557f;
    n += -0.68328154f;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00001992
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.58235961f;
    n += -1.47755289f;
    r1 = n += -0.00364135f;
    n += 0.80418634f;
    r2 = n *= 0.18199767f;
    r3 = n += -0.77537066f;
    n *= 2.82094216f;
    n += -0.45551914f;
    r4 = n *= 0.30777413f;
    n *= r1;
    r1 = n *= 0.00192775f;
    r5 = n *= -0.96444863f;
    n *= 3.94402385f;
    r6 = n += 0.38248572f;
    n *= r0;
    n *= r4;
    n += -0.23691714f;
    n += 1.05269301f;
    n += -2.76663470f;
    r4 = n += -0.61279428f;
    n += r5;
    n *= r6;
    n += r1;
    n *= 0.99531484f;
    n *= r4;
    n = r3 *= n;
    n *= 1.60188150f;
    n += 1.27543211f;
    n *= r2;
    n *= 1.48383343f;
    n += -0.05912489f;
    n *= r3;
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
