// Run date: 05/14/23 15:57:18 Pacific Daylight Time
// Run duration = 862.638695 seconds
// Run generation = 191
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 4
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

// Solution0 result = 0.00000011
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159250f;
    r1 = n *= 0.35220176f;
    n *= -3.33598018f;
    r2 = n *= -0.14606856f;
    r3 = n *= -0.78070152f;
    n *= r2;
    r2 = n += 1.80689335f;
    r4 = n *= 0.90892088f;
    n += -1.41705525f;
    n *= r3;
    n *= 4.47116566f;
    n *= r0;
    n += 0.21513124f;
    n *= -0.00031665f;
    r0 = n *= 6.67624664f;
    r3 = n += 1.27302146f;
    n = r2 *= n;
    n *= -2.54503131f;
    n += 1.90645814f;
    n *= r0;
    n += -2.19351077f;
    n += 0.93367743f;
    n += -0.75182456f;
    n = r2 += n;
    n += r3;
    n *= r4;
    r4 = n *= 0.94134939f;
    n *= r1;
    n *= -1.68144488f;
    n *= r2;
    n *= r4;
    n += 0.00000011f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065866f;
    r1 = n *= 0.17947611f;
    n *= -1.78888655f;
    r2 = n *= 0.45026994f;
    r3 = n *= -3.34168053f;
    n *= r2;
    r2 = n += 1.79837012f;
    r4 = n *= 0.98526263f;
    n += -0.63545626f;
    n *= r3;
    n *= 11.68161297f;
    n *= r0;
    n += -11.08503628f;
    n *= 0.00003535f;
    r0 = n *= -8.86241627f;
    r3 = n += -0.78019601f;
    n = r2 *= n;
    n *= 2.03828502f;
    n += 0.09341852f;
    n *= r0;
    n += -1.29076135f;
    n += -1.82745433f;
    n += -0.04124252f;
    n = r2 += n;
    n += r3;
    n *= r4;
    r4 = n *= -0.08874851f;
    n *= r1;
    n *= 1.90185428f;
    n *= r2;
    n *= r4;
    n += -0.11813185f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799335f;
    r1 = n *= -1.20280993f;
    n *= -0.48517007f;
    r2 = n *= -0.15433027f;
    r3 = n *= -2.73846674f;
    n *= r2;
    r2 = n += 1.30754495f;
    r4 = n *= -1.55690467f;
    n += -3.65146279f;
    n *= r3;
    n *= -48.10714340f;
    n *= r0;
    n += -89.75919342f;
    n *= -0.01472371f;
    r0 = n *= -0.00500316f;
    r3 = n += -1.97283423f;
    n = r2 *= n;
    n *= -0.43297198f;
    n += -1.53366864f;
    n *= r0;
    n += 1.17986619f;
    n += 0.21938857f;
    n += 0.95016736f;
    n = r2 += n;
    n += r3;
    n *= r4;
    r4 = n *= 0.24893662f;
    n *= r1;
    n *= -2.79393220f;
    n *= r2;
    n *= r4;
    n += 0.52359897f;
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
