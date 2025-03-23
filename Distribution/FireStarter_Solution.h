// Run date: 03/23/25 13:07:44 Pacific Daylight Time
// Run duration = 286.965153 seconds
// Run generation = 42
// Run evolution = 3
// Run max result = 0.00035022
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 278528
// Run generations = 0
// Run passes = 500
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
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

    r0 = n *= -0.19950999f;
    r1 = n += -0.89550579f;
    n = r1 *= n;
    r2 = n *= -0.52259648f;
    n += 1.44966531f;
    r3 = n *= -1.85997188f;
    n += 0.63672608f;
    n *= -0.97461534f;
    r4 = n *= 1.51247954f;
    n += r1;
    n *= 0.16098578f;
    r1 = n *= -0.90788889f;
    n *= -0.26655677f;
    r5 = n += -0.67286867f;
    n += -0.82503659f;
    r6 = n *= 2.97249794f;
    n *= 1.00065219f;
    n *= r1;
    n = r3 *= n;
    n *= r4;
    n *= -0.06824362f;
    n += r2;
    n *= r3;
    n += -0.05352835f;
    n = r0 += n;
    r3 = n *= 0.58169752f;
    n *= r6;
    n *= r5;
    n *= r3;
    n *= 0.31295314f;
    n *= 0.90416205f;
    n += r0;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.19914150f;
    r1 = n += 0.96295130f;
    n = r1 *= n;
    r2 = n *= 1.51778340f;
    n += -1.62619150f;
    r3 = n *= -1.59578824f;
    n += 0.38007757f;
    n *= -0.54736167f;
    r4 = n *= -1.76038086f;
    n += r1;
    n *= 2.20783424f;
    r1 = n *= 0.07346682f;
    n *= 0.86138988f;
    r5 = n += -0.45452532f;
    n += 0.78437513f;
    r6 = n *= -2.06685019f;
    n *= -2.11330199f;
    n *= r1;
    n = r3 *= n;
    n *= r4;
    n *= -0.02451383f;
    n += r2;
    n *= r3;
    n += 0.54321140f;
    n = r0 += n;
    r3 = n *= 0.06202110f;
    n *= r6;
    n *= r5;
    n *= r3;
    n *= -4.43659306f;
    n *= 1.91285372f;
    n += r0;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.19088247f;
    r1 = n += -0.74820614f;
    n = r1 *= n;
    r2 = n *= -2.89929032f;
    n += 1.34865487f;
    r3 = n *= -1.88946450f;
    n += 0.59610569f;
    n *= -0.95782769f;
    r4 = n *= 0.25329012f;
    n += r1;
    n *= 0.29213622f;
    r1 = n *= 1.54776168f;
    n *= -2.53598118f;
    r5 = n += 0.61468154f;
    n += -1.20426834f;
    r6 = n *= -1.76756001f;
    n *= 2.29762936f;
    n *= r1;
    n = r3 *= n;
    n *= r4;
    n *= -0.45853564f;
    n += r2;
    n *= r3;
    n += 0.40375260f;
    n = r0 += n;
    r3 = n *= 0.05055635f;
    n *= r6;
    n *= r5;
    n *= r3;
    n *= 2.71568966f;
    n *= 6.39668703f;
    n += r0;
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
