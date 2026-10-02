// Run date: 01/13/24 00:44:25 Pacific Standard Time
// Run duration = 33035.914198 seconds
// Run generation = 96
// Run evolution = 7
// Run max result = 0.00000054
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
// Run states = 64
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

// Solution0 result = 0.00000054
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.33622345f;
    r0 = n += -1.05627716f;
    r1 = n *= 0.44553354f;
    r2 = n *= 0.81820726f;
    n += 0.00000004f;
    n *= 0.43542904f;
    n = r1 *= n;
    r3 = n *= -1.05669904f;
    r4 = n *= -6.32614565f;
    n *= 2559.37182617f;
    n += -18.67945290f;
    n *= -0.00054191f;
    n += r4;
    n = r3 *= n;
    n *= 2.42690873f;
    n *= r3;
    r3 = n += -0.92075461f;
    r4 = n += -0.47570053f;
    n += r1;
    n = r0 *= n;
    n = r2 += n;
    n *= r0;
    n += r3;
    r3 = n += -1.69265425f;
    n *= r3;
    n *= -1.39019024f;
    n *= r4;
    n += -2.85717010f;
    n *= 0.27708289f;
    n *= r2;
    n += 0.17362833f;
    n += -0.17362839f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.55540323f;
    r0 = n += 1.71656168f;
    r1 = n *= 0.10852308f;
    r2 = n *= 1.43611491f;
    n += -0.00000057f;
    n *= 0.94553769f;
    n = r1 *= n;
    r3 = n *= -0.00026868f;
    r4 = n *= 6.67115879f;
    n *= -8.68709755f;
    n += -1.35122919f;
    n *= 3.56487584f;
    n += r4;
    n = r3 *= n;
    n *= -177656.82812500f;
    n *= r3;
    r3 = n += -2.93206477f;
    r4 = n += 1.90999818f;
    n += r1;
    n = r0 *= n;
    n = r2 += n;
    n *= r0;
    n += r3;
    r3 = n += -2.25742388f;
    n *= r3;
    n *= 1.81691122f;
    n *= r4;
    n += -0.23454477f;
    n *= 0.04550558f;
    n *= r2;
    n += -0.57412106f;
    n += 0.45598936f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.56486005f;
    r0 = n += -1.47880006f;
    r1 = n *= -0.08381566f;
    r2 = n *= -1.61838710f;
    n += -0.00000012f;
    n *= 1.68221366f;
    n = r1 *= n;
    r3 = n *= 0.37719157f;
    r4 = n *= 0.00127159f;
    n *= -6.45315933f;
    n += -1.24437177f;
    n *= -1.40360379f;
    n += r4;
    n = r3 *= n;
    n *= 0.89988708f;
    n *= r3;
    r3 = n += -0.58783567f;
    r4 = n += 1.14974248f;
    n += r1;
    n = r0 *= n;
    n = r2 += n;
    n *= r0;
    n += r3;
    r3 = n += -0.77742141f;
    n *= r3;
    n *= -1.69058967f;
    n *= r4;
    n += 0.60900152f;
    n *= 2.18478870f;
    n *= r2;
    n += 0.42604205f;
    n += 0.09755668f;
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
