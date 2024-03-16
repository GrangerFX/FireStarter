// Run date: 03/16/24 00:20:34 Pacific Daylight Time
// Run duration = 21296.313296 seconds
// Run generation = 892
// Run evolution = 18
// Run max result = 0.00000137
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
// Run evolveSeed = 3
// Run optimizeSeed = 3
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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

// Solution0 result = 0.00000137
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.14159322f;
    r0 = n *= -0.37414286f;
    r1 = n *= -0.34815535f;
    r2 = n *= -1.26371872f;
    n = r2 *= n;
    r3 = n += -1.31590867f;
    n *= r1;
    r1 = n += -0.00000014f;
    r4 = n *= -1.71355820f;
    r5 = n *= -0.60172266f;
    n = r3 *= n;
    r6 = n *= -0.39897797f;
    n *= 1.92173088f;
    n *= 0.30244488f;
    n = r1 *= n;
    r7 = n += -0.05456438f;
    n += 4.45064354f;
    n += -6.23105001f;
    n += 2.23068619f;
    n *= r1;
    n *= r4;
    n *= -1.00358462f;
    n *= r7;
    n += r0;
    n += r5;
    n = r6 += n;
    n *= r6;
    n += r2;
    n += -3.51729679f;
    n *= 1.22246397f;
    n *= r3;
    n += 0.00000035f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.09064889f;
    r0 = n *= -0.04585340f;
    r1 = n *= -1.56731367f;
    r2 = n *= -3.48257518f;
    n = r2 *= n;
    r3 = n += -2.15786219f;
    n *= r1;
    r1 = n += 0.00000379f;
    r4 = n *= 0.36025390f;
    r5 = n *= 1.70543075f;
    n = r3 *= n;
    r6 = n *= -0.03307584f;
    n *= 0.40590745f;
    n *= 6.81044674f;
    n = r1 *= n;
    r7 = n += 0.04910272f;
    n += -11.65919209f;
    n += 26.33823776f;
    n += 5.82914162f;
    n *= r1;
    n *= r4;
    n *= -0.34094024f;
    n *= r7;
    n += r0;
    n += r5;
    n = r6 += n;
    n *= r6;
    n += r2;
    n += -1.61309159f;
    n *= 3.31677866f;
    n *= r3;
    n += -0.11814868f;
    return n;
} // Solution1

// Solution2 result = 0.00000092
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.61799383f;
    r0 = n *= 0.44775850f;
    r1 = n *= 0.37365484f;
    r2 = n *= 1.14329255f;
    n = r2 *= n;
    r3 = n += -1.58504200f;
    n *= r1;
    r1 = n += -0.00000006f;
    r4 = n *= -0.58456087f;
    r5 = n *= 1.68494761f;
    n = r3 *= n;
    r6 = n *= -0.68582678f;
    n *= 1.46606159f;
    n *= 2.06535816f;
    n = r1 *= n;
    r7 = n += 3.36620402f;
    n += 116.17483521f;
    n += 5.96385860f;
    n += 1.82181227f;
    n *= r1;
    n *= r4;
    n *= 0.00000836f;
    n *= r7;
    n += r0;
    n += r5;
    n = r6 += n;
    n *= r6;
    n += r2;
    n += -4.22764158f;
    n *= -0.57133615f;
    n *= r3;
    n += 0.52359867f;
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
