// Run date: 02/18/23 10:00:56 Pacific Standard Time
// Run duration = 3.774899 seconds
// Run count = 2
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 16
// Run seed = 15
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 2

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

// Precision = 0.00083852

// Solution0 precision = 0.00073540
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.85516179f;
    r1 = n += -2.23953843f;
    r2 = n += 12.63604259f;
    n *= r1;
    n *= r0;
    r0 = n *= 1.82168341f;
    n += r0;
    n += 1.13710201f;
    n += -1.15364480f;
    r0 = n *= 0.03390869f;
    n *= -0.12804003f;
    r1 = n += -1.95511830f;
    r3 = n += 3.23998022f;
    r4 = n *= 1.86115432f;
    n += -1.60276878f;
    n += r2;
    r2 = n *= -0.00300886f;
    n *= 1.58111632f;
    n *= -1.33153284f;
    n *= r1;
    n *= -0.19765311f;
    n += r2;
    n *= r4;
    n += r3;
    n += 1.92131889f;
    n += -1.98733032f;
    r3 = n += 2.02809429f;
    n += -0.45888543f;
    n += -1.16924882f;
    n *= r0;
    n *= r3;
    n *= 0.07784165f;
    return n;
} // Solution0

// Solution1 precision = 0.00023317
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.04830915f;
    r1 = n += 2.03850055f;
    r2 = n += -2.48965430f;
    n *= r1;
    n *= r0;
    r0 = n *= -1.43530035f;
    n += r0;
    n += -1.13026083f;
    n += 1.59675431f;
    r0 = n *= -0.15527950f;
    n *= 3.30777955f;
    r1 = n += -0.76838964f;
    r3 = n += -0.06904472f;
    r4 = n *= -1.55569851f;
    n += -1.34639060f;
    n += r2;
    r2 = n *= -1.47371638f;
    n *= -1.28658652f;
    n *= 1.82768369f;
    n *= r1;
    n *= -2.03127646f;
    n += r2;
    n *= r4;
    n += r3;
    n += -1.12620175f;
    n += 0.88738561f;
    r3 = n += -0.10561880f;
    n += 1.56913364f;
    n += -1.10087430f;
    n *= r0;
    n *= r3;
    n *= -2.17665935f;
    return n;
} // Solution1

// Solution2 precision = 0.00083852
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.14921719f;
    r1 = n += -1.44574928f;
    r2 = n += 1.84368241f;
    n *= r1;
    n *= r0;
    r0 = n *= -2.19599056f;
    n += r0;
    n += 1.87659550f;
    n += -1.87660146f;
    r0 = n *= 0.18540186f;
    n *= -2.32716680f;
    r1 = n += 0.99034405f;
    r3 = n += -0.62497526f;
    r4 = n *= -1.72585821f;
    n += -2.40626407f;
    n += r2;
    r2 = n *= 0.78294677f;
    n *= -0.02448852f;
    n *= 0.81298584f;
    n *= r1;
    n *= -0.07244732f;
    n += r2;
    n *= r4;
    n += r3;
    n += 0.86011755f;
    n += 1.14717972f;
    r3 = n += -1.15204132f;
    n += -3.05591536f;
    n += -10.02428246f;
    n *= r0;
    n *= r3;
    n *= -0.75646633f;
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
