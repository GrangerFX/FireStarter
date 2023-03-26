// Run date: 03/25/23 18:42:40 Pacific Daylight Time
// Run duration = 783.044179 seconds
// Run count = 0
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run units = 8
// Run processes = 16
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 7986
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 0

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

// Precision = 0.00007869

// Solution0 precision = 0.00003970
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.75132924f;
    n += -0.86731702f;
    n *= 0.38079721f;
    n += 1.22824121f;
    r0 = n *= 0.74230355f;
    r1 = n += 0.00104504f;
    n = r0 *= n;
    r2 = n += -0.97741359f;
    n *= -1.25418890f;
    n += -0.66756356f;
    r3 = n *= 0.01466748f;
    r4 = n += 0.25161958f;
    n = r4 *= n;
    r5 = n += -1.88855338f;
    n *= r2;
    n += 2.36484146f;
    r2 = n *= 1.19629824f;
    n = r0 += n;
    r6 = n *= -0.91697681f;
    n += r5;
    n = r0 *= n;
    n += 4.35326910f;
    n = r0 *= n;
    n += r0;
    n *= r2;
    n += r6;
    n *= r1;
    n += 1.21445274f;
    n *= r3;
    n += -0.49253485f;
    n *= r4;
    n += 0.03067252f;
    return n;
} // Solution0

// Solution1 precision = 0.00005591
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.04020300f;
    n += -0.44215113f;
    n *= -2.46098447f;
    n += -0.78228998f;
    r0 = n *= -0.60466564f;
    r1 = n += 0.00008201f;
    n = r0 *= n;
    r2 = n += -0.29755870f;
    n *= -1.56889772f;
    n += 1.11513019f;
    r3 = n *= 0.57249588f;
    r4 = n += -0.82407880f;
    n = r4 *= n;
    r5 = n += 2.11785507f;
    n *= r2;
    n += -0.90618438f;
    r2 = n *= 1.81833398f;
    n = r0 += n;
    r6 = n *= -2.32362938f;
    n += r5;
    n = r0 *= n;
    n += 1.48003554f;
    n = r0 *= n;
    n += r0;
    n *= r2;
    n += r6;
    n *= r1;
    n += -0.15263824f;
    n *= r3;
    n += 0.34799179f;
    n *= r4;
    n += -0.11863390f;
    return n;
} // Solution1

// Solution2 precision = 0.00007869
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 1.19221616f;
    n += -0.84006977f;
    n *= -0.86564457f;
    n += 1.97091675f;
    r0 = n *= -0.72311419f;
    r1 = n += -0.00450720f;
    n = r0 *= n;
    r2 = n += -2.78342772f;
    n *= -0.14267156f;
    n += 3.03125858f;
    r3 = n *= -0.00830138f;
    r4 = n += -0.07448056f;
    n = r4 *= n;
    r5 = n += 2.94736362f;
    n *= r2;
    n += 0.03853582f;
    r2 = n *= -0.36476362f;
    n = r0 += n;
    r6 = n *= 2.14442182f;
    n += r5;
    n = r0 *= n;
    n += -1.50107181f;
    n = r0 *= n;
    n += r0;
    n *= r2;
    n += r6;
    n *= r1;
    n += -2.14026880f;
    n *= r3;
    n += -2.46545267f;
    n *= r4;
    n += 0.54674041f;
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
