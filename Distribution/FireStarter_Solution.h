// Run date: 01/02/23 10:49:28 Pacific Standard Time
// Run duration = 39.412275 seconds
// Run count = 119
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
// Solution Generation = 119

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

// Precision = 0.00000656

// Solution0 precision = 0.00000328
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.47666609f;
    n += -1.48961580f;
    r0 = n += -0.17531069f;
    r1 = n *= 0.99720687f;
    n *= 0.90978110f;
    n = r1 *= n;
    r2 = n += -1.16742527f;
    r3 = n += -4.22698879f;
    n *= -0.00000955f;
    r4 = n += -1.48473907f;
    n += 1.48603570f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.08812622f;
    r5 = n += -0.31249294f;
    n += 0.32680124f;
    n += 2.15117311f;
    n += r2;
    n *= -0.43410859f;
    n *= -1.90467310f;
    n += -0.31713793f;
    n *= r1;
    n *= -0.79722232f;
    n += -1.96431661f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -2.35203147f;
    n *= r5;
    n += -0.00000181f;
    n *= 0.06106457f;
    return n;
} // Solution0

// Solution1 precision = 0.00000143
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.29799613f;
    n += -1.84142971f;
    r0 = n += -1.54722583f;
    r1 = n *= -1.83918726f;
    n *= -0.29587144f;
    n = r1 *= n;
    r2 = n += -0.59567231f;
    r3 = n += 2.55698228f;
    n *= 0.00424240f;
    r4 = n += 0.57722211f;
    n += -0.96024096f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.04727942f;
    r5 = n += 0.98314393f;
    n += 3.37725163f;
    n += -2.07575679f;
    n += r2;
    n *= 3.63184881f;
    n *= -0.06430901f;
    n += 3.22495961f;
    n *= r1;
    n *= -0.00186456f;
    n += 0.74084419f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -1.79368687f;
    n *= r5;
    n += -0.08432005f;
    n *= 1.40099835f;
    return n;
} // Solution1

// Solution2 precision = 0.00000656
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.55856001f;
    n += -0.72482169f;
    r0 = n += -0.33461359f;
    r1 = n *= 0.82710719f;
    n *= 0.54587460f;
    n = r1 *= n;
    r2 = n += 0.05387915f;
    r3 = n += -2.65923762f;
    n *= -0.01975927f;
    r4 = n += 0.71561223f;
    n += 0.27726552f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.07682618f;
    r5 = n += 0.08685929f;
    n += 3.51871204f;
    n += -1.60053074f;
    n += r2;
    n *= 3.74560690f;
    n *= 0.11748614f;
    n += -1.58667111f;
    n *= r1;
    n *= 0.00816382f;
    n += 1.43575227f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.89849722f;
    n *= r5;
    n += -0.27720448f;
    n *= -1.88886344f;
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
