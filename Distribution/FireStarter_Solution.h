// Run date: 03/03/24 19:48:05 Pacific Standard Time
// Run duration = 3060.396284 seconds
// Run generation = 277
// Run evolution = 17
// Run max result = 0.00000018
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
// Run evolveSeed = 2
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.01185594f;
    n = r0 *= n;
    n *= -1.27195537f;
    r2 = n *= 0.88553315f;
    r3 = n += 1.67502642f;
    r4 = n += 0.83133119f;
    n *= r2;
    r2 = n += 0.31296462f;
    n = r3 += n;
    r5 = n += 1.92128408f;
    r6 = n *= 0.94413489f;
    r7 = n += -1.51018703f;
    n *= r0;
    r0 = n *= -74.03435516f;
    n += r0;
    n *= -1.09337914f;
    n *= r3;
    n *= -0.00002917f;
    n += -0.72031337f;
    n += r7;
    n *= r1;
    n *= r4;
    n *= -1.01905537f;
    n *= -1.57891345f;
    n *= 0.87204868f;
    n *= -0.97784823f;
    n *= r6;
    n *= 3.71932673f;
    n *= r2;
    n *= r5;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= -0.06954205f;
    n = r0 *= n;
    n *= -1.14177573f;
    r2 = n *= 0.11164331f;
    r3 = n += -1.95175529f;
    r4 = n += -3.62097383f;
    n *= r2;
    r2 = n += 1.16045046f;
    n = r3 += n;
    r5 = n += 1.99668694f;
    r6 = n *= 0.37580782f;
    r7 = n += -1.09697700f;
    n *= r0;
    r0 = n *= 1.37951469f;
    n += r0;
    n *= 73.10411835f;
    n *= r3;
    n *= -0.00325524f;
    n += 8.96912575f;
    n += r7;
    n *= r1;
    n *= r4;
    n *= -0.44456801f;
    n *= -0.47899941f;
    n *= -2.48604083f;
    n *= 1.71981442f;
    n *= r6;
    n *= 0.59099060f;
    n *= r2;
    n *= r5;
    n += -0.11813165f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 0.77037609f;
    n = r0 *= n;
    n *= 1.04952812f;
    r2 = n *= -0.01409169f;
    r3 = n += -0.27800721f;
    r4 = n += 1.62334776f;
    n *= r2;
    r2 = n += 0.07316078f;
    n = r3 += n;
    r5 = n += 1.17616391f;
    r6 = n *= 1.40502834f;
    r7 = n += -0.97348231f;
    n *= r0;
    r0 = n *= -0.34424725f;
    n += r0;
    n *= 0.00007946f;
    n *= r3;
    n *= 69.17976379f;
    n += 2.09675264f;
    n += r7;
    n *= r1;
    n *= r4;
    n *= 1.70415306f;
    n *= -2.30805373f;
    n *= -0.58049899f;
    n *= 1.31327629f;
    n *= r6;
    n *= -1.33357394f;
    n *= r2;
    n *= r5;
    n += 0.52359879f;
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
