// Run date: 12/31/22 10:43:09 Pacific Standard Time
// Run duration = 15.235370 seconds
// Run count = 101
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
// Solution Generation = 101

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

// Precision = 0.00000143

// Solution0 precision = 0.00000143
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.24916151f;
    n = r1 *= n;
    n *= -0.08130428f;
    n += 0.63841414f;
    n *= 2.73227262f;
    r2 = n *= 0.62483555f;
    n *= -0.66026634f;
    r3 = n *= 1.81258476f;
    r4 = n *= 0.79423404f;
    n = r2 *= n;
    r5 = n *= -2.01125360f;
    r6 = n *= -0.44143873f;
    n = r1 *= n;
    r7 = n *= -5.28338528f;
    n *= r3;
    n *= 0.16257016f;
    n += -0.86944014f;
    n += -2.53330708f;
    n *= 0.00058380f;
    n = r6 *= n;
    n += -7.05194616f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += -0.00000003f;
    return n;
} // Solution0

// Solution1 precision = 0.00000033
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= -0.20086421f;
    n = r1 *= n;
    n *= 4.63734484f;
    n += -24.68923187f;
    n *= -1.20169961f;
    r2 = n *= 0.30430335f;
    n *= -0.05208807f;
    r3 = n *= 0.62191617f;
    r4 = n *= 2.52174640f;
    n = r2 *= n;
    r5 = n *= 0.31165817f;
    r6 = n *= -0.08528175f;
    n = r1 *= n;
    r7 = n *= 3.52463412f;
    n *= r3;
    n *= 0.97647184f;
    n += 5.09771633f;
    n += -1.82466364f;
    n *= -0.05856696f;
    n = r6 *= n;
    n += 0.80709463f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += -0.11813185f;
    return n;
} // Solution1

// Solution2 precision = 0.00000013
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= -0.98330206f;
    n = r1 *= n;
    n *= 0.00825426f;
    n += -1.62145853f;
    n *= -0.55105805f;
    r2 = n *= 1.28382385f;
    n *= 0.43203110f;
    r3 = n *= -0.14041275f;
    r4 = n *= -4.67720890f;
    n = r2 *= n;
    r5 = n *= 3.15448141f;
    r6 = n *= 0.31560123f;
    n = r1 *= n;
    r7 = n *= 0.06403789f;
    n *= r3;
    n *= 21.58384705f;
    n += -0.34681937f;
    n += 24.62517166f;
    n *= -0.05922117f;
    n = r6 *= n;
    n += 6.17474556f;
    n = r6 *= n;
    n = r1 += n;
    n *= r7;
    n *= r6;
    n += r1;
    n *= r5;
    n *= r2;
    n += r4;
    n *= r0;
    n += 0.52359873f;
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
