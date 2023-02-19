// Run date: 02/19/23 10:49:17 Pacific Standard Time
// Run duration = 7.466343 seconds
// Run count = 138
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
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
// Solution Generation = 138

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

// Precision = 0.00000072

// Solution0 precision = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    n *= 4.81209230f;
    r1 = n *= -0.02288492f;
    r2 = n *= -1.84833300f;
    n *= r1;
    n += 2.31326652f;
    r1 = n += -0.04025579f;
    n = r1 *= n;
    r3 = n += 0.86063880f;
    r4 = n *= -0.01493823f;
    r5 = n += -0.64773470f;
    r6 = n *= 0.52727526f;
    r7 = n += 1.14832771f;
    n += -0.04582296f;
    n *= r0;
    n = r5 *= n;
    r0 = n *= -1.09465802f;
    n *= r7;
    n *= r5;
    n += -0.17721564f;
    n += 2.01724291f;
    n = r0 *= n;
    n = r2 += n;
    n *= r6;
    n *= r1;
    n *= r3;
    n += r0;
    n += r2;
    n *= r4;
    n += 0.09220522f;
    n += -0.09220522f;
    n *= -0.85531622f;
    return n;
} // Solution0

// Solution1 precision = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065914f;
    n *= 0.08200876f;
    r1 = n *= -0.70782721f;
    r2 = n *= 3.91864228f;
    n *= r1;
    n += -1.99858034f;
    r1 = n += -0.21092892f;
    n = r1 *= n;
    r3 = n += -1.92562938f;
    r4 = n *= 0.66200370f;
    r5 = n += -1.67619884f;
    r6 = n *= 0.30635554f;
    r7 = n += -4.13804674f;
    n += 1.51955211f;
    n *= r0;
    n = r5 *= n;
    r0 = n *= -0.00250373f;
    n *= r7;
    n *= r5;
    n += 1.88366210f;
    n += 0.64764136f;
    n = r0 *= n;
    n = r2 += n;
    n *= r6;
    n *= r1;
    n *= r3;
    n += r0;
    n += r2;
    n *= r4;
    n += -0.03796481f;
    n += -0.06614649f;
    n *= 1.13467312f;
    return n;
} // Solution1

// Solution2 precision = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    n *= 0.55863619f;
    r1 = n *= -0.28286320f;
    r2 = n *= -0.81762552f;
    n *= r1;
    n += 1.52787590f;
    r1 = n += 0.24570458f;
    n = r1 *= n;
    r3 = n += -0.90338552f;
    r4 = n *= 0.86963433f;
    r5 = n += -1.46292734f;
    r6 = n *= -1.03395891f;
    r7 = n += 1.53262663f;
    n += 0.15331168f;
    n *= r0;
    n = r5 *= n;
    r0 = n *= 0.00052617f;
    n *= r7;
    n *= r5;
    n += -2.45072865f;
    n += -1.37267864f;
    n = r0 *= n;
    n = r2 += n;
    n *= r6;
    n *= r1;
    n *= r3;
    n += r0;
    n += r2;
    n *= r4;
    n += -0.23241754f;
    n += 0.56711173f;
    n *= 1.56440914f;
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
