// Run date: 12/26/22 11:26:03 Pacific Standard Time
// Run duration = 361.230212 seconds
// Run count = 1
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
// Solution Generation = 1

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

// Precision = 0.00031415

// Solution0 precision = 0.00030524
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= -0.40354744f;
    r0 = n += 1.24423146f;
    n *= -0.71556878f;
    n += 0.21097933f;
    r1 = n += 0.97963470f;
    r2 = n += -0.73086983f;
    n += 0.83993638f;
    r3 = n += -1.01445866f;
    r4 = n *= -0.50526750f;
    n += -0.14033905f;
    r5 = n *= -1.28508532f;
    n += r5;
    r5 = n *= -0.14240408f;
    r6 = n *= -4.74378633f;
    n = r5 *= n;
    r7 = n += 1.16133463f;
    r8 = n += -0.04376882f;
    n += r6;
    n *= r4;
    r4 = n += 0.43763176f;
    n = r1 += n;
    n += r5;
    n += r2;
    n = r4 *= n;
    n *= r7;
    n = r8 *= n;
    n *= r4;
    n += r1;
    n += r0;
    n += r3;
    n += -2.26279259f;
    n += r8;
    return n;
} // Solution0

// Solution1 precision = 0.00015461
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.40045786f;
    r0 = n += -1.69771063f;
    n *= -0.68567652f;
    n += 0.75520742f;
    r1 = n += -0.70422381f;
    r2 = n += 3.04448414f;
    n += -2.75648260f;
    r3 = n += -1.17897058f;
    r4 = n *= -1.25317860f;
    n += -1.62809730f;
    r5 = n *= -0.57338309f;
    n += r5;
    r5 = n *= -0.20296761f;
    r6 = n *= 1.04889548f;
    n = r5 *= n;
    r7 = n += -0.49300411f;
    r8 = n += 0.18604992f;
    n += r6;
    n *= r4;
    r4 = n += -2.14550066f;
    n = r1 += n;
    n += r5;
    n += r2;
    n = r4 *= n;
    n *= r7;
    n = r8 *= n;
    n *= r4;
    n += r1;
    n += r0;
    n += r3;
    n += 2.08246136f;
    n += r8;
    return n;
} // Solution1

// Solution2 precision = 0.00031415
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= 0.71977192f;
    r0 = n += -1.43094230f;
    n *= -0.35024792f;
    n += -1.88354933f;
    r1 = n += -0.04987861f;
    r2 = n += -0.16375268f;
    n += -0.69964319f;
    r3 = n += 2.21695900f;
    r4 = n *= 0.51335287f;
    n += 0.46672252f;
    r5 = n *= -0.38042793f;
    n += r5;
    r5 = n *= -2.36279440f;
    r6 = n *= 0.55451334f;
    n = r5 *= n;
    r7 = n += -1.06301010f;
    r8 = n += 0.17984675f;
    n += r6;
    n *= r4;
    r4 = n += -0.44718003f;
    n = r1 += n;
    n += r5;
    n += r2;
    n = r4 *= n;
    n *= r7;
    n = r8 *= n;
    n *= r4;
    n += r1;
    n += r0;
    n += r3;
    n += 2.01928520f;
    n += r8;
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
