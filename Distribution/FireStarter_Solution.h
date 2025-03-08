// Run date: 03/08/25 11:23:25 Pacific Standard Time
// Run duration = 158.218160 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00157505
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#if 0
namespace Constants {
    constexpr long double PIld = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L; // 80 digits of precision but long double is only 80 bits.
    constexpr double PId = 3.1415926535897932;
    constexpr float PIf = 3.14159265f;
} // Constants
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.07099289f;
    r1 = n *= 0.49855208f;
    r2 = n *= -1.55649722f;
    n *= -4.42684889f;
    r3 = n *= -0.39269403f;
    n *= 2.98923850f;
    n = r1 *= n;
    r4 = n += 1.17262268f;
    n = r1 += n;
    r5 = n *= 0.22930963f;
    n = r0 += n;
    n += 0.36063179f;
    n *= 5.00178862f;
    r6 = n *= -0.25682697f;
    n += r1;
    r1 = n *= -5.98434973f;
    n *= r5;
    n *= 2.26494503f;
    n *= -2.31043625f;
    n += 4.38178635f;
    n *= r1;
    n *= 0.53924584f;
    n *= r0;
    n *= r6;
    n *= 4.67037392f;
    n = r3 *= n;
    n *= -0.07155391f;
    n *= -7.69657660f;
    n *= r2;
    n += r3;
    n *= r4;
    n += 0.00011944f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.01671066f;
    r1 = n *= -1.56906557f;
    r2 = n *= 1.57687354f;
    n *= -1.43689406f;
    r3 = n *= -3.20727992f;
    n *= -2.19992924f;
    n = r1 *= n;
    r4 = n += 2.37406659f;
    n = r1 += n;
    r5 = n *= 1.02646935f;
    n = r0 += n;
    n += -0.69532216f;
    n *= 1.96332526f;
    r6 = n *= -0.72192675f;
    n += r1;
    r1 = n *= -1.09919250f;
    n *= r5;
    n *= -0.40499282f;
    n *= -1.31607664f;
    n += 0.68538803f;
    n *= r1;
    n *= 3.53457046f;
    n *= r0;
    n *= r6;
    n *= -0.79851693f;
    n = r3 *= n;
    n *= 12.71297264f;
    n *= 0.11001217f;
    n *= r2;
    n += r3;
    n *= r4;
    n += 0.85130471f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.38923779f;
    r1 = n *= -0.24317116f;
    r2 = n *= 0.41078946f;
    n *= 0.89646029f;
    r3 = n *= -1.09659719f;
    n *= -7.47192049f;
    n = r1 *= n;
    r4 = n += -2.04287839f;
    n = r1 += n;
    r5 = n *= -0.83406061f;
    n = r0 += n;
    n += 0.84672761f;
    n *= 0.65878356f;
    r6 = n *= 0.84110349f;
    n += r1;
    r1 = n *= 0.71582311f;
    n *= r5;
    n *= 0.16455509f;
    n *= -12.14405060f;
    n += 2.79565787f;
    n *= r1;
    n *= -2.65737510f;
    n *= r0;
    n *= r6;
    n *= 1.42127955f;
    n = r3 *= n;
    n *= -5.45950937f;
    n *= 0.25705725f;
    n *= r2;
    n += r3;
    n *= r4;
    n += 0.00078055f;
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
