// Run date: 07/16/23 09:41:54 Pacific Daylight Time
// Run duration = 450.822801 seconds
// Run generation = 57
// Run evolution = 0
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

// Solution0 result = 0.00000048
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.41673774f;
    n += 1.30922019f;
    r0 = n *= 0.15979356f;
    r1 = n *= -1.43538570f;
    n *= r0;
    r0 = n *= 1.69737458f;
    n *= 1.49209869f;
    r2 = n += 0.37181368f;
    r3 = n += -0.47952017f;
    r4 = n *= -1.29340196f;
    r5 = n += -1.36702120f;
    r6 = n += -0.75868332f;
    n = r0 += n;
    r7 = n += 1.92770815f;
    n = r3 *= n;
    n = r3 *= n;
    n *= 5.82908249f;
    n *= 0.01477197f;
    n += r2;
    n = r3 += n;
    n *= r4;
    n = r5 += n;
    n += r6;
    n += r0;
    n = r7 += n;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r7;
    n *= 0.78058952f;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.83110434f;
    n += 2.56865978f;
    r0 = n *= -0.05569478f;
    r1 = n *= 0.73128307f;
    n *= r0;
    r0 = n *= 0.36999336f;
    n *= -13.93140125f;
    r2 = n += 1.88918650f;
    r3 = n += -1.77561796f;
    r4 = n *= 1.05242980f;
    r5 = n += -0.07895069f;
    r6 = n += 0.62656999f;
    n = r0 += n;
    r7 = n += -0.79229718f;
    n = r3 *= n;
    n = r3 *= n;
    n *= -3.63017702f;
    n *= 7.90342236f;
    n += r2;
    n = r3 += n;
    n *= r4;
    n = r5 += n;
    n += r6;
    n += r0;
    n = r7 += n;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r7;
    n *= -2.76014519f;
    n += -0.11813209f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.53719771f;
    n += -1.40638030f;
    r0 = n *= -0.27239054f;
    r1 = n *= -1.02181590f;
    n *= r0;
    r0 = n *= -0.81841075f;
    n *= 3.59541774f;
    r2 = n += -0.97669542f;
    r3 = n += 0.76878715f;
    r4 = n *= -0.04056576f;
    r5 = n += -0.82222331f;
    r6 = n += 0.51600409f;
    n = r0 += n;
    r7 = n += 0.19389328f;
    n = r3 *= n;
    n = r3 *= n;
    n *= -7.04681635f;
    n *= 0.14798342f;
    n += r2;
    n = r3 += n;
    n *= r4;
    n = r5 += n;
    n += r6;
    n += r0;
    n = r7 += n;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r7;
    n *= 3.17072487f;
    n += 0.52359885f;
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
