// Run date: 06/01/24 13:13:18 Pacific Daylight Time
// Run duration = 6425.606526 seconds
// Run generation = 204
// Run evolution = 9
// Run max result = 0.00000030
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
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

// Run scale = 0.200000f
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.26412958f;
    r1 = n += -0.82978755f;
    n = r0 *= n;
    n *= 0.06348381f;
    r2 = n += -0.63976592f;
    r3 = n += -1.30295479f;
    n *= -2.01561999f;
    r4 = n += -1.23923898f;
    n *= -0.40044245f;
    n *= r4;
    n += -0.08182050f;
    n *= -0.49240440f;
    n += -0.55824029f;
    r4 = n += 1.21755683f;
    n = r0 *= n;
    n *= r4;
    r4 = n *= 0.10546727f;
    n *= r3;
    r3 = n += 1.46486354f;
    n *= -1.12449801f;
    n *= r3;
    n *= r0;
    n += -0.55960256f;
    n += r4;
    n += 0.17863560f;
    n = r2 += n;
    n *= r1;
    n += 2.04792500f;
    n *= 0.00000009f;
    n *= 1.94781399f;
    n += r2;
    n += 1.02073240f;
    return n;
} // Solution0

// Solution1 result = 0.00000030
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.20886427f;
    r1 = n += -1.29105687f;
    n = r0 *= n;
    n *= 0.20304085f;
    r2 = n += -1.65392661f;
    r3 = n += 0.82771647f;
    n *= -5.71759033f;
    r4 = n += -4.24919176f;
    n *= -7.90598488f;
    n *= r4;
    n += -1.24558926f;
    n *= 0.00078742f;
    n += -4.67497635f;
    r4 = n += 2.65112638f;
    n = r0 *= n;
    n *= r4;
    r4 = n *= -0.24656428f;
    n *= r3;
    r3 = n += -1.65106070f;
    n *= -0.78855383f;
    n *= r3;
    n *= r0;
    n += -0.81248665f;
    n += r4;
    n += 1.49600708f;
    n = r2 += n;
    n *= r1;
    n += -0.52777618f;
    n *= -1.21221411f;
    n *= -1.27792346f;
    n += r2;
    n += 0.69945723f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.33088523f;
    r1 = n += 1.73251081f;
    n = r0 *= n;
    n *= -0.11402304f;
    r2 = n += -0.36880475f;
    r3 = n += 0.96277303f;
    n *= -8.75508118f;
    r4 = n += 5.08373022f;
    n *= 10.15815830f;
    n *= r4;
    n += -4.67788363f;
    n *= -0.00023850f;
    n += -1.32366514f;
    r4 = n += 0.13959958f;
    n = r0 *= n;
    n *= r4;
    r4 = n *= -0.44226474f;
    n *= r3;
    r3 = n += 0.99358791f;
    n *= -2.42001271f;
    n *= r3;
    n *= r0;
    n += -0.57478315f;
    n += r4;
    n += 1.46718609f;
    n = r2 += n;
    n *= r1;
    n += -0.74120599f;
    n *= 1.06306934f;
    n *= -1.08590686f;
    n += r2;
    n += -0.33204564f;
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
