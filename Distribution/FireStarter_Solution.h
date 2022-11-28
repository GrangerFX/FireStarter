// Run date: 11/27/22 17:54:04 Pacific Standard Time
// Run duration = 320.857697 seconds
// Run count = 80
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 80

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

// Precision = 0.00000423

// Solution0 precision = 0.00000173
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.34111834f;
    n *= 0.73861772f;
    n += 0.12811325f;
    r0 = n += 0.01926836f;
    r1 = n += -0.00001661f;
    n *= r1;
    n += -0.27220693f;
    n += -0.48185784f;
    r1 = n *= 0.30933166f;
    n *= -0.96846789f;
    n += -0.69274354f;
    n *= 0.63503128f;
    r2 = n += 0.32079896f;
    n *= -0.18412465f;
    r3 = n += -0.89185363f;
    n += -2.38541889f;
    n += -0.22402142f;
    n *= r1;
    r1 = n *= -0.00289698f;
    n += r1;
    n *= -1.81621122f;
    n += 1.04528368f;
    n = r3 *= n;
    r1 = n *= 0.78820419f;
    n += -1.13461053f;
    n *= r0;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n *= r3;
    n += -0.88405514f;
    n += 0.88406825f;
    return n;
} // Solution0

// Solution1 precision = 0.00000423
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -1.09862995f;
    n *= -0.57830048f;
    n += 1.05320656f;
    r0 = n += 0.09878979f;
    r1 = n += -0.00000840f;
    n *= r1;
    n += -0.60277641f;
    n += -0.93170989f;
    r1 = n *= 0.24410173f;
    n *= 4.15650845f;
    n += 0.67917281f;
    n *= -0.00304921f;
    r2 = n += 0.14802308f;
    n *= -2.64100790f;
    r3 = n += -0.85643733f;
    n += 0.35392931f;
    n += 0.60008097f;
    n *= r1;
    r1 = n *= -0.80338782f;
    n += r1;
    n *= 1.51810586f;
    n += -0.96139419f;
    n = r3 *= n;
    r1 = n *= 0.19114085f;
    n += 3.30170465f;
    n *= r0;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n *= r3;
    n += 0.35509977f;
    n += -0.47324151f;
    return n;
} // Solution1

// Solution2 precision = 0.00000366
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -1.90781951f;
    n *= -0.49638864f;
    n += 0.17775513f;
    r0 = n += 0.17476498f;
    r1 = n += 0.00000580f;
    n *= r1;
    n += 0.92424208f;
    n += -3.46651721f;
    r1 = n *= 0.28606555f;
    n *= -5.83817673f;
    n += -3.47074270f;
    n *= -0.50134206f;
    r2 = n += -1.63949847f;
    n *= -0.07088826f;
    r3 = n += 0.55645162f;
    n += -5.28340435f;
    n += 9.06975746f;
    n *= r1;
    r1 = n *= -0.02385005f;
    n += r1;
    n *= -1.43660688f;
    n += -0.98410052f;
    n = r3 *= n;
    r1 = n *= 0.83334237f;
    n += -2.58331490f;
    n *= r0;
    n = r1 *= n;
    n *= r2;
    n += r1;
    n *= r3;
    n += 0.79362535f;
    n += -0.27001876f;
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
