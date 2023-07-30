// Run date: 07/30/23 11:21:44 Pacific Daylight Time
// Run duration = 240.742689 seconds
// Run generation = 15
// Run evolution = 0
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000014
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.30846968f;
    r0 = n += 0.96908611f;
    n *= -0.41637012f;
    r1 = n *= 2.45566607f;
    n = r0 *= n;
    r2 = n += -0.68495160f;
    n *= 0.51663220f;
    n += 1.97557747f;
    n = r2 += n;
    r3 = n *= -0.26114428f;
    n *= 0.35983562f;
    r4 = n += -1.90574563f;
    n = r1 *= n;
    r5 = n *= -0.97785515f;
    n *= 4.72199917f;
    n *= r5;
    n += -3.37561846f;
    n *= 0.01132360f;
    n += 0.40173465f;
    r5 = n += -1.03403604f;
    n *= 0.78014946f;
    n += r4;
    n *= -0.73808211f;
    n *= -1.39680767f;
    n *= r2;
    n += r0;
    n *= r5;
    n *= -0.49243397f;
    n *= -2.28618073f;
    n += r3;
    n *= r1;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.49721196f;
    r0 = n += 1.53671193f;
    n *= 1.22119415f;
    r1 = n *= 3.13922143f;
    n = r0 *= n;
    r2 = n += -0.86953861f;
    n *= -1.69703007f;
    n += 1.49278247f;
    n = r2 += n;
    r3 = n *= 0.00524180f;
    n *= 0.90525717f;
    r4 = n += 0.63071394f;
    n = r1 *= n;
    r5 = n *= 0.02569439f;
    n *= 4.83263445f;
    n *= r5;
    n += 0.45026004f;
    n *= -0.29561111f;
    n += -0.93663931f;
    r5 = n += 1.13767505f;
    n *= 1.14241910f;
    n += r4;
    n *= -4.18993616f;
    n *= -0.62758398f;
    n *= r2;
    n += r0;
    n *= r5;
    n *= 1.95736945f;
    n *= 1.68791425f;
    n += r3;
    n *= r1;
    n += -0.11813107f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.67087466f;
    r0 = n += -1.75634575f;
    n *= -1.28483009f;
    r1 = n *= -0.34410521f;
    n = r0 *= n;
    r2 = n += -1.72664165f;
    n *= 2.08065629f;
    n += 1.47678280f;
    n = r2 += n;
    r3 = n *= 0.02472777f;
    n *= 0.42470232f;
    r4 = n += -0.67892706f;
    n = r1 *= n;
    r5 = n *= -0.65744597f;
    n *= 2.09716129f;
    n *= r5;
    n += 1.18924403f;
    n *= -0.82462221f;
    n += 2.07109427f;
    r5 = n += -0.48602891f;
    n *= -0.65311265f;
    n += r4;
    n *= 1.06070411f;
    n *= -1.24787140f;
    n *= r2;
    n += r0;
    n *= r5;
    n *= 0.54360592f;
    n *= -2.56909895f;
    n += r3;
    n *= r1;
    n += 0.52359891f;
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
