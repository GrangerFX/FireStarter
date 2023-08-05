// Run date: 07/31/23 22:49:57 Pacific Daylight Time
// Run duration = 158.598970 seconds
// Run generation = 7
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 8
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

// Solution0 result = 10.00000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.00000000f;
    r0 = n *= 0.00000000f;
    r1 = n *= 0.00000000f;
    n *= r1;
    r1 = n *= 0.00000000f;
    r2 = n *= 0.00000000f;
    n += 0.00000000f;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n = r1 += n;
    r3 = n *= 0.00000000f;
    n *= 0.00000000f;
    n = r3 *= n;
    n += 0.00000000f;
    r4 = n *= 0.00000000f;
    n *= 0.00000000f;
    n *= 0.00000000f;
    n = r1 *= n;
    r5 = n += 0.00000000f;
    n *= 0.00000000f;
    n *= r0;
    r0 = n *= 0.00000000f;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += 0.00000000f;
    n += r1;
    n *= r5;
    n *= r4;
    n += 0.00000000f;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065866f;
    r0 = n *= 1.08358574f;
    r1 = n *= -0.34305388f;
    n *= r1;
    r1 = n *= 1.44127023f;
    r2 = n *= -0.40521261f;
    n += 0.19689859f;
    n *= -1.24620295f;
    n *= -2.01483917f;
    n = r1 += n;
    r3 = n *= 2.28429317f;
    n *= -1.65506768f;
    n = r3 *= n;
    n += -1.23023796f;
    r4 = n *= 0.17636020f;
    n *= -0.20540045f;
    n *= -1.78255033f;
    n = r1 *= n;
    r5 = n += -2.41429853f;
    n *= 0.02170394f;
    n *= r0;
    r0 = n *= 3.47415733f;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += -1.59649634f;
    n += r1;
    n *= r5;
    n *= r4;
    n += 0.47495613f;
    n += -0.59308785f;
    return n;
} // Solution1

// Solution2 result = 0.00000029
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= 0.31410709f;
    r1 = n *= 0.54962403f;
    n *= r1;
    r1 = n *= 1.69261014f;
    r2 = n *= -1.25973308f;
    n += 0.67932510f;
    n *= -1.44008911f;
    n *= -0.68127501f;
    n = r1 += n;
    r3 = n *= 0.62144542f;
    n *= -1.02428079f;
    n = r3 *= n;
    n += -0.46739995f;
    r4 = n *= -0.75547397f;
    n *= -3.27220035f;
    n *= -0.05677556f;
    n = r1 *= n;
    r5 = n += 1.95847094f;
    n *= 1.98295045f;
    n *= r0;
    r0 = n *= 1.22540581f;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += 3.70606732f;
    n += r1;
    n *= r5;
    n *= r4;
    n += -0.49473673f;
    n += 1.01833558f;
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
