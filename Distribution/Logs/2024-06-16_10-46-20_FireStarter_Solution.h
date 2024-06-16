// Run date: 06/16/24 10:46:20 Pacific Daylight Time
// Run duration = 943.064123 seconds
// Run generation = 100
// Run evolution = 5
// Run max result = 0.00002624
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

// Solution0 result = 0.00002524
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.73754722f;
    n += 2.31709146f;
    r0 = n *= 0.37603939f;
    r1 = n += 0.93294674f;
    n += -1.51677442f;
    r2 = n += 0.09903073f;
    r3 = n *= -1.74699199f;
    n = r1 += n;
    r4 = n += -1.77428877f;
    n *= -0.17860875f;
    n *= 1.23027587f;
    n *= 2.09949970f;
    r5 = n += -0.10232637f;
    n *= r4;
    r4 = n += 0.93893790f;
    n = r4 *= n;
    r6 = n *= 0.72626948f;
    n = r5 += n;
    n = r3 += n;
    n = r2 *= n;
    n += 8.08948994f;
    n *= 0.03996012f;
    n += -6.57380724f;
    n += 5.88942862f;
    n += r1;
    n *= r5;
    n *= r6;
    n += 3.15812373f;
    n += r2;
    n *= r4;
    n *= r3;
    n *= r0;
    return n;
} // Solution0

// Solution1 result = 0.00002041
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.19363929f;
    n += 0.57764775f;
    r0 = n *= -0.64184761f;
    r1 = n += -0.32965845f;
    n += 1.82506573f;
    r2 = n += -1.85013556f;
    r3 = n *= -0.51060891f;
    n = r1 += n;
    r4 = n += 0.11164997f;
    n *= 0.88450766f;
    n *= -1.49755919f;
    n *= 2.69657731f;
    r5 = n += -1.10637641f;
    n *= r4;
    r4 = n += 0.74234343f;
    n = r4 *= n;
    r6 = n *= -0.73764652f;
    n = r5 += n;
    n = r3 += n;
    n = r2 *= n;
    n += -4.22099876f;
    n *= -2.32089162f;
    n += 1.90167689f;
    n += 5.65955448f;
    n += r1;
    n *= r5;
    n *= r6;
    n += 1.01307142f;
    n += r2;
    n *= r4;
    n *= r3;
    n *= r0;
    return n;
} // Solution1

// Solution2 result = 0.00002624
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.59656227f;
    n += 1.90651226f;
    r0 = n *= -0.40198910f;
    r1 = n += -0.95343614f;
    n += 1.03221762f;
    r2 = n += 0.44410494f;
    r3 = n *= 1.19669878f;
    n = r1 += n;
    r4 = n += -0.38365725f;
    n *= -0.94081092f;
    n *= 0.22955111f;
    n *= 0.78098673f;
    r5 = n += -0.36921054f;
    n *= r4;
    r4 = n += 1.93154275f;
    n = r4 *= n;
    r6 = n *= 0.07512952f;
    n = r5 += n;
    n = r3 += n;
    n = r2 *= n;
    n += -3.10605311f;
    n *= -1.00702703f;
    n += -5.50864649f;
    n += -10.14853859f;
    n += r1;
    n *= r5;
    n *= r6;
    n += -0.95023203f;
    n += r2;
    n *= r4;
    n *= r3;
    n *= r0;
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
