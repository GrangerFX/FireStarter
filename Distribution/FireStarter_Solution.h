// Run date: 08/22/22 10:30:58 Pacific Daylight Time
// Run duration = 2.096667 seconds
// Run count = 42
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 4200

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

// Precision = 0.00005579

// Solution0 precision = 0.00005513
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.11304832f;
    n += 0.65554434f;
    r1 = n *= -1.36860883f;
    r2 = n += -0.29238746f;
    n *= r0;
    r0 = n *= 1.00948393f;
    r3 = n *= 1.11322463f;
    n += r3;
    n += 1.07390785f;
    r3 = n += 0.41191253f;
    r4 = n += -0.71442962f;
    n = r4 *= n;
    n += r0;
    n = r1 += n;
    n += 0.21782622f;
    n += -0.78581774f;
    n += -0.34324476f;
    r0 = n += 0.55116904f;
    n += 0.74248725f;
    n += -0.09288983f;
    n += r1;
    n = r4 *= n;
    n += -0.43971407f;
    n += -0.08652885f;
    n *= 1.12933433f;
    n *= 0.52661246f;
    n *= r2;
    n += r4;
    n *= -0.54152316f;
    n += r0;
    n += 0.83416486f;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00004897
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.44842395f;
    n += -1.47313261f;
    r1 = n *= -0.17396280f;
    r2 = n += 0.28005692f;
    n *= r0;
    r0 = n *= 0.97712135f;
    r3 = n *= 0.38366014f;
    n += r3;
    n += -0.32136351f;
    r3 = n += 0.62306213f;
    r4 = n += 1.01417148f;
    n = r4 *= n;
    n += r0;
    n = r1 += n;
    n += -0.26750100f;
    n += 0.26549697f;
    n += 0.11648124f;
    r0 = n += 1.03022361f;
    n += 0.28256750f;
    n += -0.24771537f;
    n += r1;
    n = r4 *= n;
    n += -2.05958390f;
    n += 1.29745984f;
    n *= 1.39490426f;
    n *= -1.65409124f;
    n *= r2;
    n += r4;
    n *= -0.52278340f;
    n += r0;
    n += -0.92250437f;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00005579
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.21970697f;
    n += -2.92922473f;
    r1 = n *= -0.07664634f;
    r2 = n += -0.30807289f;
    n *= r0;
    r0 = n *= 6.08302450f;
    r3 = n *= -0.89730299f;
    n += r3;
    n += -0.75543845f;
    r3 = n += -0.50173908f;
    r4 = n += 0.52460426f;
    n = r4 *= n;
    n += r0;
    n = r1 += n;
    n += -0.54293275f;
    n += 1.47337008f;
    n += 0.20691670f;
    r0 = n += -0.79828763f;
    n += 0.50108510f;
    n += 0.05922698f;
    n += r1;
    n = r4 *= n;
    n += -0.99385780f;
    n += -0.68376386f;
    n *= -8.38720703f;
    n *= -4.50903988f;
    n *= r2;
    n += r4;
    n *= 0.55775714f;
    n += r0;
    n += -2.49127412f;
    n *= r3;
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
