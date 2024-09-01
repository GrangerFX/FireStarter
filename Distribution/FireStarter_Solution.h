// Run date: 09/01/24 10:50:06 Pacific Daylight Time
// Run duration = 1141.765549 seconds
// Run generation = 163
// Run evolution = 9
// Run max result = 0.00000060
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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

// Solution0 result = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.21636862f;
    n = r1 += n;
    n *= -0.16846231f;
    n = r1 *= n;
    n *= 1.65646207f;
    n += 0.63940251f;
    r2 = n *= 0.66562510f;
    n *= 0.70666444f;
    r3 = n *= 0.02219657f;
    n += -3.04763913f;
    n = r3 *= n;
    n *= 1.01423776f;
    r4 = n *= -1.11929131f;
    n += 0.56014597f;
    n *= r2;
    r2 = n += 2.42654443f;
    n *= r2;
    n *= r1;
    n += 1.89970529f;
    n += r4;
    n *= 4.06200027f;
    n *= 0.52136987f;
    r4 = n *= 0.27450430f;
    n += r3;
    n += 1.60686648f;
    n *= 0.48207402f;
    n *= r4;
    n *= r0;
    n += 0.87981486f;
    n *= -0.68622261f;
    n += 0.60374898f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065819f;
    r1 = n *= -0.11323950f;
    n = r1 += n;
    n *= 0.23460039f;
    n = r1 *= n;
    n *= 0.61013383f;
    n += -0.76709664f;
    r2 = n *= 1.36000454f;
    n *= 0.68695629f;
    r3 = n *= 1.15119839f;
    n += -1.59481454f;
    n = r3 *= n;
    n *= -0.89846134f;
    r4 = n *= 2.88513565f;
    n += -1.78311372f;
    n *= r2;
    r2 = n += -0.58222479f;
    n *= r2;
    n *= r1;
    n += -0.53100824f;
    n += r4;
    n *= 0.97829497f;
    n *= -0.18277723f;
    r4 = n *= 0.03182194f;
    n += r3;
    n += 4.02315760f;
    n *= 4.33722401f;
    n *= r4;
    n *= r0;
    n += -0.75806898f;
    n *= -1.29067028f;
    n += -1.09654868f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= 0.34583715f;
    n = r1 += n;
    n *= 0.62564611f;
    n = r1 *= n;
    n *= -2.95199966f;
    n += 5.09883785f;
    r2 = n *= 0.00508367f;
    n *= -0.11530980f;
    r3 = n *= 1.74450564f;
    n += -0.62762469f;
    n = r3 *= n;
    n *= -3.39504266f;
    r4 = n *= 9.60251522f;
    n += -4.15473080f;
    n *= r2;
    r2 = n += -1.58121204f;
    n *= r2;
    n *= r1;
    n += -3.78458595f;
    n += r4;
    n *= 0.14915334f;
    n *= -2.37011743f;
    r4 = n *= 0.79053700f;
    n += r3;
    n += 2.79578590f;
    n *= 1.15790987f;
    n *= r4;
    n *= r0;
    n += -3.29047966f;
    n *= -0.20427594f;
    n += -0.14856705f;
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
