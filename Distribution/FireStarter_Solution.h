// Run date: 12/26/22 11:09:59 Pacific Standard Time
// Run duration = 540.527124 seconds
// Run count = 0
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 10;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 0

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

// Precision = 0.00032234

// Solution0 precision = 0.00014895
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.88699108f;
    r1 = n *= -1.23273301f;
    r2 = n *= 0.39174020f;
    r3 = n += 1.73786592f;
    r4 = n *= 0.09725311f;
    n *= -0.49001461f;
    r5 = n += 1.74692738f;
    n += r1;
    r1 = n += -2.13472486f;
    n = r3 *= n;
    n *= 0.02008163f;
    n += -1.69974601f;
    r6 = n += -2.00900984f;
    n *= r4;
    r4 = n += 0.17999718f;
    n *= r6;
    n += -2.61228704f;
    n *= r4;
    n *= 0.58361983f;
    n *= r5;
    n *= -0.56016070f;
    n += r1;
    r1 = n += -1.12361026f;
    n = r0 += n;
    r5 = n *= -0.07088485f;
    n += r1;
    n += r3;
    n = r5 *= n;
    n *= r2;
    n += r5;
    n *= r0;
    n += 0.18292148f;
    return n;
} // Solution0

// Solution1 precision = 0.00009131
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.84799981f;
    r1 = n *= -0.58498412f;
    r2 = n *= 0.18009391f;
    r3 = n += 0.58244210f;
    r4 = n *= 1.18523538f;
    n *= -0.01255208f;
    r5 = n += 0.37158057f;
    n += r1;
    r1 = n += -0.00779020f;
    n = r3 *= n;
    n *= 0.08259452f;
    n += -0.66932696f;
    r6 = n += -2.93403769f;
    n *= r4;
    r4 = n += 1.31606781f;
    n *= r6;
    n += 0.52714515f;
    n *= r4;
    n *= 0.37201408f;
    n *= r5;
    n *= 1.39198864f;
    n += r1;
    r1 = n += 1.68066514f;
    n = r0 += n;
    r5 = n *= 0.19806629f;
    n += r1;
    n += r3;
    n = r5 *= n;
    n *= r2;
    n += r5;
    n *= r0;
    n += -0.00215774f;
    return n;
} // Solution1

// Solution2 precision = 0.00032234
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.00645751f;
    r1 = n *= -1.16968834f;
    r2 = n *= 0.47043058f;
    r3 = n += 1.83206451f;
    r4 = n *= 0.12782349f;
    n *= -2.29466844f;
    r5 = n += -0.01042372f;
    n += r1;
    r1 = n += 1.72260654f;
    n = r3 *= n;
    n *= -0.01352569f;
    n += 0.38993791f;
    r6 = n += 0.10730458f;
    n *= r4;
    r4 = n += -0.05741687f;
    n *= r6;
    n += 0.80339170f;
    n *= r4;
    n *= 6.76366568f;
    n *= r5;
    n *= 2.20801902f;
    n += r1;
    r1 = n += 0.32039979f;
    n = r0 += n;
    r5 = n *= -0.30500805f;
    n += r1;
    n += r3;
    n = r5 *= n;
    n *= r2;
    n += r5;
    n *= r0;
    n += 1.18024254f;
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
