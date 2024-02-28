// Run date: 02/27/24 16:36:41 Pacific Standard Time
// Run duration = 28033.903593 seconds
// Run generation = 61
// Run evolution = 11
// Run max result = 0.00002438
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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

// Solution0 result = 0.00001204
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.23129699f;
    r0 = n += -2.92168164f;
    r1 = n *= -0.09465130f;
    n += 0.96067095f;
    r2 = n += 0.84278536f;
    r3 = n += -1.81069267f;
    n *= -1.73766875f;
    n *= 0.67804480f;
    n += 2.11891699f;
    n *= 0.07160432f;
    r4 = n *= 0.03086454f;
    n += r3;
    n = r0 *= n;
    r3 = n += 2.13628745f;
    n = r4 *= n;
    n *= -63.31215668f;
    n = r2 *= n;
    r5 = n *= -0.19988945f;
    n *= -4.19771957f;
    r6 = n *= 1.57145822f;
    n *= r2;
    n += r0;
    n += r5;
    n *= -0.61247814f;
    n += -3.52982855f;
    n = r1 *= n;
    n += -0.00050105f;
    n *= r3;
    n += r4;
    n *= r6;
    n += r1;
    n += 0.00218527f;
    return n;
} // Solution0

// Solution1 result = 0.00002438
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -5.14126921f;
    r0 = n += 1.05487740f;
    r1 = n *= -0.35428581f;
    n += 1.07894301f;
    r2 = n += -0.33827123f;
    r3 = n += -1.48811412f;
    n *= -0.40419176f;
    n *= 1.83057737f;
    n += 0.62949824f;
    n *= -0.24280463f;
    r4 = n *= 0.24000910f;
    n += r3;
    n = r0 *= n;
    r3 = n += 26.95892906f;
    n = r4 *= n;
    n *= -0.71531636f;
    n = r2 *= n;
    r5 = n *= 0.09120374f;
    n *= 3.59888172f;
    r6 = n *= 0.11978704f;
    n *= r2;
    n += r0;
    n += r5;
    n *= 0.15095371f;
    n += 1.26118803f;
    n = r1 *= n;
    n += -0.47700521f;
    n *= r3;
    n += r4;
    n *= r6;
    n += r1;
    n += -0.52864140f;
    return n;
} // Solution1

// Solution2 result = 0.00002146
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.85317713f;
    r0 = n += -1.39293575f;
    r1 = n *= 0.32304049f;
    n += 2.92006731f;
    r2 = n += -2.44588733f;
    r3 = n += -1.49750996f;
    n *= 1212.66577148f;
    n *= -0.00108021f;
    n += -0.21698678f;
    n *= 0.18161534f;
    r4 = n *= 5.23419523f;
    n += r3;
    n = r0 *= n;
    r3 = n += 2.65379405f;
    n = r4 *= n;
    n *= 0.01949076f;
    n = r2 *= n;
    r5 = n *= 14.12634945f;
    n *= -1.23550475f;
    r6 = n *= -1.10570168f;
    n *= r2;
    n += r0;
    n += r5;
    n *= -0.27497441f;
    n += -0.37918532f;
    n = r1 *= n;
    n += -1.01568675f;
    n *= r3;
    n += r4;
    n *= r6;
    n += r1;
    n += 0.81062597f;
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
