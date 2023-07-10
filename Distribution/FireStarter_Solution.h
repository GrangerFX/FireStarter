// Run date: 07/10/23 10:47:04 Pacific Daylight Time
// Run duration = 561.866801 seconds
// Run generation = 49
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159274f;
    r0 = n *= -1.25138152f;
    r1 = n *= 1.02671301f;
    n *= r1;
    n += -2.84924245f;
    r1 = n *= 0.00337990f;
    r2 = n += -1.63043189f;
    r3 = n += 2.43587947f;
    n *= -0.62219316f;
    r4 = n += 0.98308307f;
    r5 = n *= -1.30682421f;
    n *= 0.97835708f;
    n *= r5;
    r5 = n += -0.20593098f;
    r6 = n *= 0.27746302f;
    n *= r3;
    n += r2;
    n = r4 *= n;
    n = r6 += n;
    n *= -0.28371263f;
    n *= r0;
    r0 = n *= 1.33718371f;
    n *= -2.38611603f;
    r2 = n *= -1.89722717f;
    n *= r0;
    n += r1;
    n += -3.80792093f;
    n += r4;
    n *= r2;
    n *= r6;
    n *= r5;
    n += -0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065914f;
    r0 = n *= -0.10375520f;
    r1 = n *= 4.04827595f;
    n *= r1;
    n += -1.12608075f;
    r1 = n *= 0.20943107f;
    r2 = n += -0.57737130f;
    r3 = n += -1.15246761f;
    n *= -0.25122938f;
    r4 = n += 1.09028757f;
    r5 = n *= 0.00048532f;
    n *= 4.22468853f;
    n *= r5;
    r5 = n += 0.53448719f;
    r6 = n *= 0.91449142f;
    n *= r3;
    n += r2;
    n = r4 *= n;
    n = r6 += n;
    n *= 0.86103958f;
    n *= r0;
    r0 = n *= -0.22679147f;
    n *= 1.47948515f;
    r2 = n *= 1.84210837f;
    n *= r0;
    n += r1;
    n += -3.86982894f;
    n += r4;
    n *= r2;
    n *= r6;
    n *= r5;
    n += -0.11813220f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= 1.38857639f;
    r1 = n *= -0.91503477f;
    n *= r1;
    n += -0.17138757f;
    r1 = n *= 0.53364450f;
    r2 = n += -0.01503380f;
    r3 = n += -1.78874433f;
    n *= 0.00632373f;
    r4 = n += -0.57297021f;
    r5 = n *= -0.61500823f;
    n *= -0.68247378f;
    n *= r5;
    r5 = n += -1.65758741f;
    r6 = n *= 0.67305511f;
    n *= r3;
    n += r2;
    n = r4 *= n;
    n = r6 += n;
    n *= -0.03417965f;
    n *= r0;
    r0 = n *= 0.97374976f;
    n *= 0.94630593f;
    r2 = n *= 0.46950570f;
    n *= r0;
    n += r1;
    n += -3.44875240f;
    n += r4;
    n *= r2;
    n *= r6;
    n *= r5;
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
