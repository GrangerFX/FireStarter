// Run date: 12/25/22 11:54:40 Pacific Standard Time
// Run duration = 75.460231 seconds
// Run count = 12
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
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
// Solution Generation = 12

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

// Precision = 0.00000012

// Solution0 precision = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.47192636f;
    n = r1 *= n;
    n *= -0.01383710f;
    n += 1.68309283f;
    r2 = n *= -3.57684278f;
    r3 = n *= -0.60213220f;
    n *= -0.21974786f;
    n *= 0.22165918f;
    r4 = n *= 1.93555093f;
    n = r3 *= n;
    r5 = n *= -1.24952734f;
    r6 = n *= -0.29243752f;
    n = r1 *= n;
    r7 = n *= 0.05574737f;
    n *= r2;
    n *= -0.83757502f;
    n += 0.60374403f;
    n += -0.49945137f;
    n *= 4.23144770f;
    n = r6 *= n;
    n += 0.69387764f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.44196060f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 precision = 0.00000009
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= 0.13018098f;
    n = r1 *= n;
    n *= 1.05412304f;
    n += -4.78504229f;
    r2 = n *= -0.40300980f;
    r3 = n *= -1.15100002f;
    n *= -0.82718575f;
    n *= 1.04199076f;
    r4 = n *= -0.25150767f;
    n = r3 *= n;
    r5 = n *= -1.58526218f;
    r6 = n *= 2.15947533f;
    n = r1 *= n;
    r7 = n *= 0.35785472f;
    n *= r2;
    n *= -3.48326445f;
    n += 0.61770266f;
    n += 2.52510190f;
    n *= -0.00699600f;
    n = r6 *= n;
    n += 0.34880948f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.30773747f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813167f;
    return n;
} // Solution1

// Solution2 precision = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= -0.28040534f;
    n = r1 *= n;
    n *= -0.13487138f;
    n += 1.65785646f;
    r2 = n *= -2.05842710f;
    r3 = n *= 0.97451794f;
    n *= 0.62050694f;
    n *= 0.10122105f;
    r4 = n *= -2.15139937f;
    n = r3 *= n;
    r5 = n *= -1.49743354f;
    r6 = n *= -0.42648342f;
    n = r1 *= n;
    r7 = n *= 0.55190974f;
    n *= r2;
    n *= 1.45802689f;
    n += -2.69965053f;
    n += 1.24952245f;
    n *= 0.02659204f;
    n = r6 *= n;
    n += 0.05103369f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.43014628f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359861f;
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
