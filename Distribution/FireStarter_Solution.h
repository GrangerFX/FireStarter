// Run date: 01/16/23 10:45:08 Pacific Standard Time
// Run duration = 37.944918 seconds
// Run count = 33
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEST
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 33

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00011110

// Solution0 precision = 0.00005048
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 1.86488223f;
    n += -3.00850916f;
    r0 = n += -1.99773383f;
    n += -0.59869593f;
    r1 = n += 0.59822851f;
    n *= r1;
    r1 = n += -9.86943531f;
    n += 7.14406681f;
    r2 = n *= 0.00995895f;
    r3 = n *= 0.46853432f;
    r4 = n += -1.32905841f;
    n *= r4;
    r4 = n += -0.23337217f;
    r5 = n *= 0.96471316f;
    r6 = n += -1.01409423f;
    n += -1.17997456f;
    n += 0.80124074f;
    n *= r2;
    n += 2.40722108f;
    n += -3.61507916f;
    n *= 1.10715282f;
    n *= r3;
    n = r4 *= n;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= 1.19078636f;
    n *= r6;
    n += 0.00371682f;
    n *= 0.06981103f;
    return n;
} // Solution0

// Solution1 precision = 0.00003707
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.04314183f;
    n += 1.54271424f;
    r0 = n += -4.59044313f;
    n += 1.56134462f;
    r1 = n += -1.56099236f;
    n *= r1;
    r1 = n += -62.45009232f;
    n += 56.81018448f;
    r2 = n *= 0.03685799f;
    r3 = n *= -0.14179173f;
    r4 = n += -0.47998664f;
    n *= r4;
    r4 = n += -0.34219185f;
    r5 = n *= 2.57443023f;
    r6 = n += -3.36383080f;
    n += 6.53665495f;
    n += -3.49253035f;
    n *= r2;
    n += 0.57109839f;
    n += 2.44307733f;
    n *= 0.93777806f;
    n *= r3;
    n = r4 *= n;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= 0.57056487f;
    n *= r6;
    n += 2.09041524f;
    n *= -0.05662470f;
    return n;
} // Solution1

// Solution2 precision = 0.00011110
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.34250715f;
    n += -1.26772726f;
    r0 = n += -1.00787306f;
    n += -0.87058419f;
    r1 = n += 0.87081909f;
    n *= r1;
    r1 = n += -4.98355961f;
    n += 1.85649073f;
    r2 = n *= 0.16405298f;
    r3 = n *= -0.30364183f;
    r4 = n += 2.25162387f;
    n *= r4;
    r4 = n += 1.80921030f;
    r5 = n *= 0.12884948f;
    r6 = n += 0.13477179f;
    n += -0.78237039f;
    n += -0.62614232f;
    n *= r2;
    n += 0.55319631f;
    n += 0.04506535f;
    n *= -0.00251755f;
    n *= r3;
    n = r4 *= n;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= 0.29890597f;
    n *= r6;
    n += 0.82696998f;
    n *= 0.63297141f;
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
