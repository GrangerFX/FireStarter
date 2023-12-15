// Run date: 12/14/23 13:15:23 Pacific Standard Time
// Run duration = 47155.187807 seconds
// Run generation = 41
// Run evolution = 27
// Run max result = 0.00000009
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 2.06008816f;
    r0 = n *= -1.39516795f;
    n += r0;
    r0 = n += 18.05894089f;
    r1 = n *= -0.07162353f;
    n += r0;
    r0 = n += -0.00000550f;
    n *= -0.00621499f;
    n *= 18.40387344f;
    n = r1 *= n;
    n *= 0.89942127f;
    n += -0.78616244f;
    r2 = n *= 0.52851605f;
    n *= -2.18555164f;
    n = r1 += n;
    r3 = n += -0.11900010f;
    n += -0.39149806f;
    n = r3 *= n;
    n += 2.03870106f;
    n = r1 *= n;
    r4 = n += 0.24273746f;
    r5 = n *= -2.03976917f;
    n *= r5;
    n += r1;
    n += r4;
    n *= r2;
    n += -16.53677940f;
    n *= r3;
    n *= -0.02118170f;
    n *= r0;
    n += 0.17451987f;
    n += -0.17451960f;
    return n;
} // Solution0

// Solution1 result = 0.00000009
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.95007277f;
    r0 = n *= 0.44933784f;
    n += r0;
    r0 = n += -2.63882399f;
    r1 = n *= -0.13564637f;
    n += r0;
    r0 = n += -0.00000349f;
    n *= 2.21627903f;
    n *= -0.94412881f;
    n = r1 *= n;
    n *= 1.52769983f;
    n += -1.19152153f;
    r2 = n *= -0.49625868f;
    n *= 1.37829471f;
    n = r1 += n;
    r3 = n += 0.14594023f;
    n += 0.98887038f;
    n = r3 *= n;
    n += -0.68349916f;
    n = r1 *= n;
    r4 = n += 0.00258982f;
    r5 = n *= -0.75228775f;
    n *= r5;
    n += r1;
    n += r4;
    n *= r2;
    n += 2.49974728f;
    n *= r3;
    n *= -0.20064768f;
    n *= r0;
    n += -0.20800424f;
    n += 0.08987093f;
    return n;
} // Solution1

// Solution2 result = 0.00000008
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.18108879f;
    r0 = n *= 1.09164512f;
    n += r0;
    r0 = n += 1.03507495f;
    r1 = n *= -1.30770874f;
    n += r0;
    r0 = n += 0.00000016f;
    n *= -0.89878517f;
    n *= 1.76162767f;
    n = r1 *= n;
    n *= 2.05958629f;
    n += 1.06527805f;
    r2 = n *= -0.67652261f;
    n *= 0.86253846f;
    n = r1 += n;
    r3 = n += -0.40264615f;
    n += 0.08983963f;
    n = r3 *= n;
    n += 5.27080345f;
    n = r1 *= n;
    r4 = n += -3.23755312f;
    r5 = n *= -0.98156363f;
    n *= r5;
    n += r1;
    n += r4;
    n *= r2;
    n += 0.86859816f;
    n *= r3;
    n *= 0.32643902f;
    n *= r0;
    n += 0.03415949f;
    n += 0.48943964f;
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
